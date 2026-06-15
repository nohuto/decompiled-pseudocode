/*
 * XREFs of ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180005150
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x180005180 (-IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_.c)
 */

__int64 __fastcall CAPOWrapperClient::IsInputFormatSupported(
        CAPOWrapperClient *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  return CAPOWrapperClient::IsAudioFormatSupported((char *)this - 8, 0LL, a2, a3, a4);
}
