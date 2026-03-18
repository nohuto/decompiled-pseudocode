/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x1406F47A8
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1406F4644 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x14082D68C (CmpVirtualPathPresent.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     CmpDeleteHive @ 0x1406629D0 (CmpDeleteHive.c)
 */

void __fastcall CmpUnblockTwoHiveWrites(char *P, _QWORD *a2)
{
  char *v4; // rsi
  char v5; // al

  if ( P )
  {
    v4 = P + 72;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 9);
    KeAbPostRelease((ULONG_PTR)v4);
  }
  if ( a2 )
  {
    v5 = _InterlockedExchangeAdd64(a2 + 9, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
      ExfTryToWakePushLock(a2 + 9);
    KeAbPostRelease((ULONG_PTR)(a2 + 9));
  }
  if ( P && !_InterlockedDecrement((volatile signed __int32 *)P + 1068) )
    CmpDeleteHive(P);
  if ( a2 )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)a2 + 1068) )
      CmpDeleteHive(a2);
  }
}
