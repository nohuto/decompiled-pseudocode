/*
 * XREFs of SmKmEtwLogStoreChange @ 0x1408E8F5C
 * Callers:
 *     SmKmStoreAdd @ 0x140672BC0 (SmKmStoreAdd.c)
 *     SmKmStoreDelete @ 0x1406E995C (SmKmStoreDelete.c)
 *     SmKmEtwLogStoreRundown @ 0x140777FC8 (SmKmEtwLogStoreRundown.c)
 * Callees:
 *     EtwWriteEx @ 0x1400366F0 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x140325C3C (-SmStEtwFillStoreEvent@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 */

NTSTATUS __fastcall SmKmEtwLogStoreChange(REGHANDLE *a1, __int64 a2, const EVENT_DESCRIPTOR *a3)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // r8
  ULONG UserDataCount; // edx
  _QWORD v9[2]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v10; // [rsp+50h] [rbp-B0h]
  __int64 v11; // [rsp+54h] [rbp-ACh]
  int v12; // [rsp+5Ch] [rbp-A4h]
  __int64 v13; // [rsp+60h] [rbp-A0h]
  _QWORD v14[20]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15[19]; // [rsp+110h] [rbp+10h] BYREF

  memset(v15, 0, sizeof(v15));
  memset(v14, 0, 0x98uLL);
  v11 = 19LL;
  v9[1] = v14;
  v10 = 0;
  UserData = v15;
  v9[0] = v15;
  v12 = 152;
  if ( a3 == (const EVENT_DESCRIPTOR *)&SmEventStoreDelete )
  {
    v13 = a2;
    UserDataCount = 1;
    v14[0] = a2;
    v15[0].Ptr = (ULONGLONG)v14;
    *(_QWORD *)&v15[0].Size = 8LL;
  }
  else
  {
    SMKM_STORE<SM_TRAITS>::SmStEtwFillStoreEvent(a2, (__int64)v9);
    UserDataCount = v10;
    UserData = (struct _EVENT_DATA_DESCRIPTOR *)v9[0];
  }
  return EtwWriteEx(*a1, a3, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
}
