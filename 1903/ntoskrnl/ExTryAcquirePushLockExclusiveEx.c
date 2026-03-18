/*
 * XREFs of ExTryAcquirePushLockExclusiveEx @ 0x14009A150
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

char __fastcall ExTryAcquirePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // rax
  char v6; // cl
  int SessionId; // eax
  bool v8; // zf
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v11; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+50h] [rbp+18h]

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    v11 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    if ( ++CurrentThread->AbAllocationRegionCount != 1 )
      goto LABEL_11;
    LOBYTE(v5) = CurrentThread->AbEntrySummary;
    if ( !(_BYTE)v5 )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
LABEL_6:
        if ( v2 )
        {
          if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
            && byte_140467440[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
          {
            SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
          }
          else
          {
            SessionId = -1;
          }
          *(_DWORD *)(v2 + 40) = SessionId;
          *(_QWORD *)(v2 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_12:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v11);
          v8 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v8
            && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
          goto LABEL_15;
        }
LABEL_11:
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
        goto LABEL_12;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      LOBYTE(v5) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
    }
    v6 = v5;
    _BitScanForward((unsigned int *)&v5, (unsigned __int8)v5);
    v12 = v5;
    CurrentThread->AbEntrySummary = v6 & ~(1 << v5);
    v2 = (__int64)&CurrentThread->LockEntries[v5];
    goto LABEL_6;
  }
LABEL_15:
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    if ( v2 )
      KeAbPostReleaseEx(BugCheckParameter2);
    return 0;
  }
  else
  {
    if ( v2 )
      *(_BYTE *)(v2 + 26) |= 1u;
    return 1;
  }
}
