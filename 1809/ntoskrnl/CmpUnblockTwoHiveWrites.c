/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x1407F1BF0
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1407F4FBC (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x1407F515C (CmpVirtualPathPresent.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     CmpDeleteHive @ 0x1405B0DEC (CmpDeleteHive.c)
 */

void __fastcall CmpUnblockTwoHiveWrites(char *P, _QWORD *a2)
{
  char *v4; // rsi

  if ( P )
  {
    v4 = P + 72;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 9);
    KeAbPostRelease((ULONG_PTR)v4);
  }
  if ( a2 )
  {
    if ( (_InterlockedExchangeAdd64(a2 + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2 + 9);
    KeAbPostRelease((ULONG_PTR)(a2 + 9));
  }
  if ( P && !_InterlockedDecrement((volatile signed __int32 *)P + 1072) )
    CmpDeleteHive(P);
  if ( a2 )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)a2 + 1072) )
      CmpDeleteHive(a2);
  }
}
