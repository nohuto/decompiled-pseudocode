/*
 * XREFs of ??1?$ComPtr@VSurfaceHubPositioner@@@WRL@Microsoft@@QEAA@XZ @ 0x1803383D4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SurfaceHubPositioner_IUnknown__::_1_::dtor$2 @ 0x180337E69 (_Microsoft--WRL--Details--MakeAndInitialize_SurfaceHubPositioner_IUnknown__--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UICustomShellManager@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180076910 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_180076910.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SurfaceHubPositioner>::~ComPtr<SurfaceHubPositioner>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,ICustomShellManager,Microsoft::WRL::FtmBase>::Release(
             result,
             a2);
  }
  return result;
}
