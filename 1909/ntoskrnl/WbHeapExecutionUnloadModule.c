/*
 * XREFs of WbHeapExecutionUnloadModule @ 0x1406D5528
 * Callers:
 *     WbProcessModuleUnload @ 0x1406D5338 (WbProcessModuleUnload.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140004610 (KeLeaveGuardedRegion.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     sub_1405CAA28 @ 0x1405CAA28 (sub_1405CAA28.c)
 *     sub_1406D57EC @ 0x1406D57EC (sub_1406D57EC.c)
 */

__int64 __fastcall WbHeapExecutionUnloadModule(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // r12d
  unsigned __int64 *v6; // rdi
  _RTL_BALANCED_NODE *v7; // rax
  _RTL_BALANCED_NODE *v8; // rsi
  unsigned int i; // esi
  __int64 v10; // r14

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = (unsigned __int64 *)(a1 + 48);
  v7 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
  {
    v10 = *(_QWORD *)(i * *(_DWORD *)(a1 + 8) + *(_QWORD *)(a1 + 24));
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 64) == a2 )
      {
        v3 = sub_1406D57EC((int)a1 + 8, 0, 0, i, 0LL);
        if ( v3 >= 0 )
        {
          sub_1405CAA28(a1, v10);
          --i;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveGuardedRegion();
  return (unsigned int)v3;
}
