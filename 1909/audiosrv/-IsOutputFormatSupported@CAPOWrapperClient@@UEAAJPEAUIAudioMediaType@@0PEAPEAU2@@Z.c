/*
 * XREFs of ?IsOutputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18013ABB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x18001FC20 (-IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0010_.c)
 */

__int64 __fastcall CAPOWrapperClient::IsOutputFormatSupported(
        CAPOWrapperClient *this,
        const GUID *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  return CAPOWrapperClient::IsAudioFormatSupported((__int64)this - 8, 1LL, a2, (__int64)a3, a4);
}
