/*
 * XREFs of DbgkpLkmdSqmIncrementDword @ 0x14026E088
 * Callers:
 *     DbgkCaptureLiveDump @ 0x140812920 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSqmStatus @ 0x1408134B4 (DbgkpLkmdSqmStatus.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

NTSTATUS __fastcall DbgkpLkmdSqmIncrementDword(REGHANDLE RegHandle, int a2)
{
  int v3; // [rsp+40h] [rbp-9h] BYREF
  int v4; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  int *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]
  int v12; // [rsp+B8h] [rbp+6Fh] BYREF

  v12 = a2;
  v4 = 1;
  v3 = 6;
  v7 = 16LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v9 = 4LL;
  UserData.Ptr = (ULONGLONG)&v3;
  v11 = 4LL;
  v6 = &unk_140377118;
  v8 = &v12;
  v10 = &v4;
  return EtwWriteEx(RegHandle, &SQM_INCREMENT_DWORD, 0LL, 0, 0LL, 0LL, 4u, &UserData);
}
