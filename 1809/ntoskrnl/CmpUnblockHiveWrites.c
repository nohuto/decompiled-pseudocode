/*
 * XREFs of CmpUnblockHiveWrites @ 0x1407F1AE8
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x14063D020 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1407F4BE8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1407F4DB0 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     CmpDeleteHive @ 0x1405B0DEC (CmpDeleteHive.c)
 *     CmpGetNextHive @ 0x1405D10F0 (CmpGetNextHive.c)
 */

void __fastcall CmpUnblockHiveWrites(volatile signed __int64 *P, int a2, volatile signed __int32 *a3)
{
  volatile signed __int32 *v5; // rbx
  char *v6; // rsi
  __int64 *i; // rax
  volatile signed __int64 *v8; // rsi

  v5 = (volatile signed __int32 *)P;
  if ( P )
  {
    v6 = (char *)(P + 9);
    if ( (_InterlockedExchangeAdd64(P + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(P + 9);
    KeAbPostRelease((ULONG_PTR)v6);
  }
  else
  {
    for ( i = CmpGetNextHive(0LL); ; i = CmpGetNextHive(v5) )
    {
      v5 = (volatile signed __int32 *)i;
      if ( !a2 || (a2 & (_DWORD)i[519]) == a2 || i == CmpMasterHive )
      {
        v8 = i + 9;
        if ( (_InterlockedExchangeAdd64(i + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        KeAbPostRelease((ULONG_PTR)v8);
        if ( _InterlockedExchangeAdd(v5 + 1072, 0xFFFFFFFF) == 1 )
          CmpDeleteHive(v5);
      }
      if ( v5 == a3 )
        break;
    }
  }
  if ( !_InterlockedDecrement(v5 + 1072) )
    CmpDeleteHive(v5);
}
