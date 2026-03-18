/*
 * XREFs of MiCopyOnWriteCheckConditions @ 0x1402E54BC
 * Callers:
 *     MiSplitPrivatePage @ 0x140020550 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140020C50 (MiCopyToUserVa.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiSystemFault @ 0x140075390 (MiSystemFault.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiWalkVaRange @ 0x1400BE0F4 (MiWalkVaRange.c)
 *     MiProbeLeafPteAccess @ 0x1400CCDA0 (MiProbeLeafPteAccess.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiLockPagedAddress @ 0x1401431B8 (MiLockPagedAddress.c)
 *     MiLockDriverPageRange @ 0x1402BD214 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x1402BFA80 (MiSplitReducedCommitClonePage.c)
 *     MmReplaceImportEntry @ 0x1402C3B3C (MmReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CF8F0 (MiPrepareImagePagesForHotPatch.c)
 *     MiMakeProtoPrivate @ 0x1402D1854 (MiMakeProtoPrivate.c)
 *     MiLockAweVadsShared @ 0x1402D6C3C (MiLockAweVadsShared.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140074010 (UNLOCK_ADDRESS_SPACE.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
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
      v4 = *(struct _KTHREAD **)(Process + 904);
      if ( v4 )
      {
        if ( v4 != CurrentThread )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx(Process + 880, 0LL);
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
    MiWaitForFreePage(*(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a1 + 174)));
  }
}
