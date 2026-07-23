/*
 * XREFs of sub_18010FDD8 @ 0x18010FDD8
 * Callers:
 *     sub_18002CB3C @ 0x18002CB3C (sub_18002CB3C.c)
 *     SbSelectProcedure @ 0x18002CE20 (SbSelectProcedure.c)
 *     sub_18007D76C @ 0x18007D76C (sub_18007D76C.c)
 * Callees:
 *     EtwEventWrite @ 0x180052CB0 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

ULONG __fastcall sub_18010FDD8(REGHANDLE RegHandle, __int64 a2, __int16 a3, unsigned __int16 a4, __int64 a5)
{
  ULONG v9; // r8d
  __int16 v11; // [rsp+28h] [rbp-61h] BYREF
  _QWORD v12[16]; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int16 v13; // [rsp+100h] [rbp+77h] BYREF

  v13 = a4;
  memset(&v12[6], 0, 0x50uLL);
  v11 = a3;
  v12[0] = a2;
  v12[2] = &v11;
  v12[4] = &v13;
  v12[1] = 16LL;
  v9 = 3;
  v12[3] = 2LL;
  v12[5] = 2LL;
  if ( a4 )
  {
    v9 = 4;
    v12[6] = a5;
    v12[7] = a4;
  }
  return EtwEventWrite(RegHandle, &stru_18012C170, v9, (PEVENT_DATA_DESCRIPTOR)v12);
}
