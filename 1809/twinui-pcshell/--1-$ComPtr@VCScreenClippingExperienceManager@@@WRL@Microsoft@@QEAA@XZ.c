/*
 * XREFs of ??1?$ComPtr@VCScreenClippingExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18017C844
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CScreenClippingExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x18017C081 (_Microsoft--WRL--Details--MakeAndInitialize_CScreenClippingExperienceManager_IInspe_ea_18017C081.c)
 *     _CScreenClippingExperienceManager::ScreenClippingPendingShowTimerCallback_::_1_::dtor$0 @ 0x18018241A (_CScreenClippingExperienceManager--ScreenClippingPendingShowTimerCallback_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIBuffer@Streams@Storage@Windows@@U?$CloakedIid@UIBufferByteAccess@Streams@Storage@Windows@@@23@U?$CloakedIid@UIMarshal@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180181F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIB_ea_180181F50.c)
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
