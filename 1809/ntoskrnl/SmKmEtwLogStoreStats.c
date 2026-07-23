/*
 * XREFs of SmKmEtwLogStoreStats @ 0x1408ADAA8
 * Callers:
 *     SmKmStoreDelete @ 0x1406CA730 (SmKmStoreDelete.c)
 *     SmKmEtwLogStoreRundown @ 0x140751428 (SmKmEtwLogStoreRundown.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ?SmStEtwFillStoreStatsEvent@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x140308D58 (-SmStEtwFillStoreStatsEvent@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 */

NTSTATUS __fastcall SmKmEtwLogStoreStats(REGHANDLE *a1, __int64 a2)
{
  NTSTATUS result; // eax
  PEVENT_DATA_DESCRIPTOR UserDataCount[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v6[1360]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v7[48]; // [rsp+5B0h] [rbp+4B0h] BYREF

  memset(v7, 0, sizeof(v7));
  memset(v6, 0, sizeof(v6));
  memset(UserDataCount, 0, sizeof(UserDataCount));
  HIDWORD(UserDataCount[2]) = 3;
  UserDataCount[0] = (PEVENT_DATA_DESCRIPTOR)v7;
  HIDWORD(UserDataCount[3]) = 1360;
  UserDataCount[1] = (PEVENT_DATA_DESCRIPTOR)v6;
  result = SMKM_STORE<SM_TRAITS>::SmStEtwFillStoreStatsEvent(a2, (__int64)UserDataCount);
  if ( result )
    return EtwWriteEx(*a1, &SmEventStoreIoStats, 0LL, 0, 0LL, 0LL, (ULONG)UserDataCount[2], UserDataCount[0]);
  return result;
}
