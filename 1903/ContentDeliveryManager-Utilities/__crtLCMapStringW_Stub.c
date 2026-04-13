/*
 * XREFs of __crtLCMapStringW_Stub @ 0x1800B75E4
 * Callers:
 *     _Towlower @ 0x1800AF370 (_Towlower.c)
 *     _Towupper @ 0x1800AF9B4 (_Towupper.c)
 *     _Wcsxfrm @ 0x1800CA17C (_Wcsxfrm.c)
 * Callees:
 *     __crtLCMapStringW_0 @ 0x1800CB1C5 (__crtLCMapStringW_0.c)
 */

__int64 __fastcall _crtLCMapStringW_Stub(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        int a7)
{
  return _crtLCMapStringW_0(0LL, a1, a2, a3, a4, a5, a6, a7);
}
