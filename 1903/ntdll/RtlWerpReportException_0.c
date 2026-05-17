/*
 * XREFs of RtlWerpReportException_0 @ 0x1800DB7E4
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 *     sub_1800DBEC0 @ 0x1800DBEC0 (sub_1800DBEC0.c)
 *     RtlWerpReportException @ 0x1800DC320 (RtlWerpReportException.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800DC32C @ 0x1800DC32C (sub_1800DC32C.c)
 */

__int64 __fastcall RtlWerpReportException_0(
        unsigned int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v7; // rbx
  __int64 result; // rax
  _QWORD v11[176]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v12[176]; // [rsp+5A0h] [rbp+4A0h] BYREF

  v7 = a4;
  *a6 = 0LL;
  if ( a4 > 5 )
    return 3221226539LL;
  memset(v12, 0, 0x578uLL);
  v12[6] = __PAIR64__(a1, a5);
  LODWORD(v12[0]) = 91751760;
  LODWORD(v12[5]) = 0x20000000;
  v12[7] = a2;
  if ( a3 && (_DWORD)v7 )
    memmove(&v12[8], a3, 8 * v7);
  memset((char *)v11 + 4, 0, 0x574uLL);
  LODWORD(v11[0]) = 91751760;
  result = sub_1800DC32C(v12, v11);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)result == 258 )
    {
      return 3221226048LL;
    }
    else
    {
      *a6 = v11[6];
      return 0LL;
    }
  }
  return result;
}
