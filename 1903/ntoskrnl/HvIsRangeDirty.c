/*
 * XREFs of HvIsRangeDirty @ 0x14083A468
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x14065F948 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     RtlAreBitsClear @ 0x140098F70 (RtlAreBitsClear.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

bool __fastcall HvIsRangeDirty(__int64 a1, int a2, ULONG a3)
{
  volatile signed __int64 *v6; // rbx
  BOOLEAN v7; // di

  if ( (*(_DWORD *)(a1 + 160) & 1) != 0 || a2 < 0 )
    return 1;
  v6 = (volatile signed __int64 *)(a1 + 80);
  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  v7 = RtlAreBitsClear((PRTL_BITMAP)(a1 + 88), (unsigned int)a2 >> 9, a3);
  if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return v7 == 0;
}
