/*
 * XREFs of CmpUnblockHiveWrites @ 0x1406F49FC
 * Callers:
 *     CmpVEExecuteOpenLogic @ 0x1406BA460 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1406F485C (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x14082D478 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     CmpGetNextHive @ 0x140637EC0 (CmpGetNextHive.c)
 *     CmpDeleteHive @ 0x1406629D0 (CmpDeleteHive.c)
 */

void __fastcall CmpUnblockHiveWrites(volatile signed __int64 *P, int a2, volatile signed __int32 *a3)
{
  volatile signed __int32 *v5; // rbx
  char *v6; // rsi
  char v7; // al
  __int64 *i; // rax
  volatile signed __int64 *v9; // rsi

  v5 = (volatile signed __int32 *)P;
  if ( P )
  {
    v6 = (char *)(P + 9);
    v7 = _InterlockedExchangeAdd64(P + 9, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
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
        v9 = i + 9;
        if ( (_InterlockedExchangeAdd64(i + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v9);
        KeAbPostRelease((ULONG_PTR)v9);
        if ( _InterlockedExchangeAdd(v5 + 1068, 0xFFFFFFFF) == 1 )
          CmpDeleteHive(v5);
      }
      if ( v5 == a3 )
        break;
    }
  }
  if ( !_InterlockedDecrement(v5 + 1068) )
    CmpDeleteHive(v5);
}
