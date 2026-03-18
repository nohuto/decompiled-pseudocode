/*
 * XREFs of ExTryAcquirePushLockExclusiveEx @ 0x14000CC20
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquirePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1, __int64 a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  bool v6; // zf
  __int64 v8; // rax
  char v9; // cl
  int SessionId; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v12; // [rsp+48h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+18h]

  v3 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    v12 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      goto LABEL_4;
    LOBYTE(v8) = CurrentThread->AbEntrySummary;
    if ( !(_BYTE)v8 )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2, a3);
LABEL_14:
        if ( v3 )
        {
          if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
            && byte_140467140[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
          {
            SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
          }
          else
          {
            SessionId = -1;
          }
          *(_DWORD *)(v3 + 40) = SessionId;
          *(_QWORD *)(v3 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_5:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v12);
          v6 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v6
            && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          goto LABEL_8;
        }
LABEL_4:
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
        goto LABEL_5;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      LOBYTE(v8) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
    }
    v9 = v8;
    _BitScanForward((unsigned int *)&v8, (unsigned __int8)v8);
    v13 = v8;
    CurrentThread->AbEntrySummary = v9 & ~(1 << v8);
    v3 = (__int64)&CurrentThread->LockEntries[v8];
    goto LABEL_14;
  }
LABEL_8:
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    if ( v3 )
      KeAbPostReleaseEx(BugCheckParameter2);
    return 0;
  }
  else
  {
    if ( v3 )
      *(_BYTE *)(v3 + 26) |= 1u;
    return 1;
  }
}
