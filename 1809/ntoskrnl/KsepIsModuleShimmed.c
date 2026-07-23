/*
 * XREFs of KsepIsModuleShimmed @ 0x14067F3E8
 * Callers:
 *     KsepGetShimsForDriver @ 0x14067ED6C (KsepGetShimsForDriver.c)
 *     KsepGetShimCallbacksForDriver @ 0x140681A38 (KsepGetShimCallbacksForDriver.c)
 *     KseDriverUnloadImage @ 0x1407102DC (KseDriverUnloadImage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall KsepIsModuleShimmed(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v8; // rbp
  _QWORD *v9; // rax
  _QWORD *v11; // rcx

  v3 = 0;
  if ( !a2 || !a1 || !a3 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  *a3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14043D9A0, 0LL);
  v8 = (_QWORD **)(a1 + 32);
  v9 = *v8;
  while ( v9 != v8 )
  {
    v11 = v9;
    v9 = (_QWORD *)*v9;
    if ( v11[2] == a2 )
    {
      *a3 = v11;
      v3 = 1;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14043D9A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14043D9A0);
  KeAbPostRelease((ULONG_PTR)&qword_14043D9A0);
  KeLeaveCriticalRegion();
  return v3;
}
