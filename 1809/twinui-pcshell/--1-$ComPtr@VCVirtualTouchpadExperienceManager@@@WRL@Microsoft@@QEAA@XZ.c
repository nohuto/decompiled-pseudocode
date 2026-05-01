/*
 * XREFs of ??1?$ComPtr@VCVirtualTouchpadExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180177A64
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualTouchpadExperienceManager_IInspectable_IServiceProvider_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x1801771C3 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualTouchpadExperienceManager_IInsp_ea_1801771C3.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@UIApplicationFrameEventHandler@@UIScaleChangeSink@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017A0B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVir_ea_18017A0B0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualTouchpadExperienceManager>::~ComPtr<CVirtualTouchpadExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::Release(result);
  }
  return result;
}
