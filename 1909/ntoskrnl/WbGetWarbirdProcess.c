/*
 * XREFs of WbGetWarbirdProcess @ 0x1405CAF80
 * Callers:
 *     WbDispatchOperation @ 0x1405CADA0 (WbDispatchOperation.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140004610 (KeLeaveGuardedRegion.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400EF6F0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     sub_1405CB158 @ 0x1405CB158 (sub_1405CB158.c)
 *     sub_1405CB190 @ 0x1405CB190 (sub_1405CB190.c)
 *     sub_1406B1270 @ 0x1406B1270 (sub_1406B1270.c)
 *     WbCreateWarbirdProcess @ 0x1406EF6EC (WbCreateWarbirdProcess.c)
 */

__int64 __fastcall WbGetWarbirdProcess(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v8; // rsi
  int v9; // esi
  struct _KTHREAD *v11; // rax
  _RTL_BALANCED_NODE *v12; // rax
  int v13; // r8d
  signed __int8 v14; // cf
  _RTL_BALANCED_NODE *v15; // rsi
  _QWORD *v16; // r14
  _QWORD *v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_14046B5B8, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14046B5B8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&qword_14046B5B8, v8, (ULONG_PTR)&qword_14046B5B8);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  v9 = sub_1405CB190(a1, &v17);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14046B5B8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14046B5B8);
  KeAbPostRelease((ULONG_PTR)&qword_14046B5B8);
  KeLeaveGuardedRegion();
  if ( v9 == -1073741198 )
  {
    if ( !a2 )
      goto LABEL_23;
    v9 = WbCreateWarbirdProcess(a1, &v17);
    if ( v9 < 0 )
      goto LABEL_23;
    v11 = KeGetCurrentThread();
    --v11->SpecialApcDisable;
    v12 = KeAbPreAcquire((ULONG_PTR)&qword_14046B5B8, 0LL, 0);
    v14 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14046B5B8, 0LL);
    v15 = v12;
    if ( v14 )
      ExfAcquirePushLockExclusiveEx(&qword_14046B5B8, v12, (ULONG_PTR)&qword_14046B5B8);
    if ( v15 )
      BYTE2(v15[1].Left) |= 1u;
    v16 = v17;
    v9 = sub_1406B1270((unsigned int)&qword_14046B590, (_DWORD)v17, v13, *v17, 8, -1);
    if ( v9 >= 0 )
      _InterlockedIncrement64(v16 + 29);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14046B5B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14046B5B8);
    KeAbPostRelease((ULONG_PTR)&qword_14046B5B8);
    KeLeaveGuardedRegion();
  }
  if ( v9 < 0 || !a3 )
  {
LABEL_23:
    v3 = v17;
    goto LABEL_11;
  }
  *a3 = v17;
LABEL_11:
  sub_1405CB158(v3);
  return (unsigned int)v9;
}
