/*
 * XREFs of CmpGlobalUnlockKeyForWrite @ 0x14082ED28
 * Callers:
 *     CmpFreeSiloKeyLockEntry @ 0x14082ECE8 (CmpFreeSiloKeyLockEntry.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     CmpFreeTransientPoolWithTag @ 0x140092A90 (CmpFreeTransientPoolWithTag.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x140602480 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x14064E858 (CmpLockKcbExclusive.c)
 */

void __fastcall CmpGlobalUnlockKeyForWrite(ULONG_PTR a1, _QWORD *a2)
{
  signed __int64 v4; // rax
  signed __int64 i; // rdx
  signed __int64 v6; // rtt
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rdx

  _m_prefetchw(a2 + 2);
  v4 = a2[2];
  for ( i = v4 - 1; i > 0; i = v4 - 1 )
  {
    v6 = v4;
    v4 = _InterlockedCompareExchange64(a2 + 2, i, v4);
    if ( v6 == v4 )
      return;
  }
  if ( i )
    __fastfail(0xEu);
  CmpLockKcbExclusive(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
  v8 = _InterlockedDecrement64(a2 + 2);
  if ( v8 > 0 )
  {
    ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    CmpUnlockKcb(a1);
  }
  else
  {
    if ( v8 )
      __fastfail(0xEu);
    v9 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v10 = (_QWORD *)a2[1], (_QWORD *)*v10 != a2) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    ExReleasePushLockEx((ULONG_PTR)&CmpKeyLockTracker, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    *(_WORD *)(a1 + 8) &= ~0x80u;
    CmpUnlockKcb(a1);
    CmpDereferenceKeyControlBlock(a2[3]);
    CmpFreeTransientPoolWithTag(a2, 0x33374D43u);
  }
}
