/*
 * XREFs of FastGetProfileStringFromIDW @ 0x1C00A8440
 * Callers:
 *     xxxODI_ColorInit @ 0x1C00AA830 (xxxODI_ColorInit.c)
 * Callees:
 *     FastGetProfileStringW @ 0x1C003C7A0 (FastGetProfileStringW.c)
 *     RtlLoadStringOrError @ 0x1C0067F00 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileStringFromIDW(
        __int64 a1,
        unsigned int a2,
        ULONG a3,
        const wchar_t *a4,
        wchar_t *a5,
        unsigned int a6,
        int a7)
{
  WCHAR v11[80]; // [rsp+40h] [rbp-C8h] BYREF

  RtlLoadStringOrError(a3, v11, 80, 0);
  return FastGetProfileStringW(a1, a2, v11, a4, a5, a6, a7);
}
