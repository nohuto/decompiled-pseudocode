/*
 * XREFs of FastUpdateWinIni @ 0x1C00A86D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLoadStringOrError @ 0x1C0067F00 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     FastWriteProfileStringW @ 0x1C00A8740 (FastWriteProfileStringW.c)
 */

__int64 __fastcall FastUpdateWinIni(__int64 a1, unsigned int a2, ULONG a3, __int64 a4)
{
  _WORD v8[40]; // [rsp+20h] [rbp-78h] BYREF

  RtlLoadStringOrError(a3, v8, 40, 0);
  return FastWriteProfileStringW(a1, a2, v8, a4);
}
