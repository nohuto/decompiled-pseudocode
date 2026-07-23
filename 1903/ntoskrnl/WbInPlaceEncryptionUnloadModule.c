/*
 * XREFs of WbInPlaceEncryptionUnloadModule @ 0x1406D5BE0
 * Callers:
 *     WbProcessModuleUnload @ 0x1406D5B04 (WbProcessModuleUnload.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     sub_1405B3A44 @ 0x1405B3A44 (sub_1405B3A44.c)
 *     sub_1406D5FB8 @ 0x1406D5FB8 (sub_1406D5FB8.c)
 */

__int64 __fastcall WbInPlaceEncryptionUnloadModule(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // r12d
  unsigned __int64 *v6; // rbx
  _RTL_BALANCED_NODE *v7; // rax
  _RTL_BALANCED_NODE *v8; // rdi
  unsigned int i; // edi
  char v10; // si
  __int64 v12; // rbp

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = (unsigned __int64 *)(a1 + 176);
  v7 = KeAbPreAcquire(a1 + 176, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  for ( i = 0; i < *(_DWORD *)(a1 + 140); ++i )
  {
    v12 = *(_QWORD *)(i * *(_DWORD *)(a1 + 136) + *(_QWORD *)(a1 + 152));
    if ( v12 )
    {
      if ( *(_QWORD *)(v12 + 32) == a2 )
      {
        v3 = sub_1406D5FB8((int)a1 + 136, 0, 0, i, 0LL);
        if ( v3 >= 0 )
        {
          sub_1405B3A44((volatile signed __int64 *)v12);
          --i;
        }
      }
    }
  }
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v3;
}
