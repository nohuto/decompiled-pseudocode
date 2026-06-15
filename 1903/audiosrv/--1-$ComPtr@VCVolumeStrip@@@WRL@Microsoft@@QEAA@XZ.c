/*
 * XREFs of ??1?$ComPtr@VCVolumeStrip@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C8D40
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVolumeStrip_IVolumeStrip_unsigned_short_const___&__::_1_::dtor$2 @ 0x18007186A (_Microsoft--WRL--Details--MakeAndInitialize_CVolumeStrip_IVolumeStrip_unsigned_shor_ea_18007186A.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003F8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallb.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<CVolumeStrip>::~ComPtr<CVolumeStrip>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::Release(result);
  }
  return result;
}
