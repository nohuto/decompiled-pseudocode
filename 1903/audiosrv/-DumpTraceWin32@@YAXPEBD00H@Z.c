/*
 * XREFs of ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x18013CE68
 * Callers:
 *     ?IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayElementErrorDetails@@@Z @ 0x18013CAE8 (-IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayEleme.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _snprintf_s @ 0x180064F8C (_snprintf_s.c)
 *     ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x18013CF0C (-NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z.c)
 *     ?get@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z @ 0x18013CF90 (-get@-$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z.c)
 */

void __fastcall DumpTraceWin32(const char *a1, const char *a2, const char *a3, int a4)
{
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // rcx
  NUIAudioTracing *v7; // rcx
  char Buffer[512]; // [rsp+40h] [rbp-218h] BYREF

  snprintf_s(Buffer, 0x200uLL, 0xFFFFFFFFFFFFFFFFuLL, "Function %s(%s) : *** TRACE *** code = 0x%x!\n", a2, a3, a4);
  Buffer[511] = 0;
  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<NUIAudioTracing>::get(
                                           v4,
                                           lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( v5 && *(_DWORD *)v5 )
  {
    if ( TlgKeywordOn(v5, 0LL) )
    {
      wil::details::static_lazy<NUIAudioTracing>::get(
        v6,
        lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_);
      NUIAudioTracing::NuiAudioTrace_(v7, Buffer);
    }
  }
}
