/*
 * XREFs of MiCopyOnWriteCheckConditions @ 0x1402CB40C
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     MiProbeLeafPteAccess @ 0x1400420D0 (MiProbeLeafPteAccess.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiProtectPrivateMemory @ 0x140070DB0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiSplitPrivatePage @ 0x140083B60 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140084400 (MiCopyToUserVa.c)
 *     MiWalkVaRange @ 0x140093BD0 (MiWalkVaRange.c)
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiLockPagedAddress @ 0x140140A10 (MiLockPagedAddress.c)
 *     MiSplitReducedCommitClonePage @ 0x1402A8680 (MiSplitReducedCommitClonePage.c)
 *     MmReplaceImportEntry @ 0x1402AB3BC (MmReplaceImportEntry.c)
 *     MiLockAweVadsShared @ 0x1402B1504 (MiLockAweVadsShared.c)
 *     MiLockHotPatchPageRange @ 0x1402B98A4 (MiLockHotPatchPageRange.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9B84 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 */

void __fastcall MiCopyOnWriteCheckConditions(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // rdi
  struct _KTHREAD *v4; // rax

  if ( a2 == -1073740748 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      Process = (__int64)CurrentThread->ApcState.Process;
      v4 = *(struct _KTHREAD **)(Process + 896);
      if ( v4 )
      {
        if ( v4 != CurrentThread )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx(Process + 872, 0LL);
          LOBYTE(CurrentThread[1].Queue) |= 1u;
          UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
        }
      }
    }
  }
  else if ( a2 == -1073741801
         && KeGetCurrentIrql() < 2u
         && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0xC) == 0 )
  {
    MiWaitForFreePage(*(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174)));
  }
}
