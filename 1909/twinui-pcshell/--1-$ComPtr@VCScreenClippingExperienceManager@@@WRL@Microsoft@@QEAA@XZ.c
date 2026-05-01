/*
 * XREFs of ??1?$ComPtr@VCScreenClippingExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801CAE78
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CScreenClippingExperienceManager_IInspectable_IServiceProvider___&__::_1_::dtor$2 @ 0x1801CA6D1 (_Microsoft--WRL--Details--MakeAndInitialize_CScreenClippingExperienceManager_IInspe_ea_1801CA6D1.c)
 *     _CScreenClippingExperienceManager::ScreenClippingPendingShowTimerCallback_::_1_::dtor$0 @ 0x1801D153A (_CScreenClippingExperienceManager--ScreenClippingPendingShowTimerCallback_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIBuffer@Streams@Storage@Windows@@U?$CloakedIid@UIBufferByteAccess@Streams@Storage@Windows@@@23@U?$CloakedIid@UIMarshal@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D0E80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIB_ea_1801D0E80.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CScreenClippingExperienceManager>::~ComPtr<CScreenClippingExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
