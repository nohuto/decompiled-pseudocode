/*
 * XREFs of ?PerformDelayedInitialization@FullScreenPositioner@@UEAAJXZ @ 0x18018CD90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FullScreenAnimation@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018D414 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FullScreenAnimation@@@wil@@CAX_NW4Re.c)
 */

__int64 __fastcall FullScreenPositioner::PerformDelayedInitialization(FullScreenPositioner *this)
{
  void **v1; // rbx
  HRESULT Service; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (void **)((char *)this + 200);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 25);
  Service = IUnknown_QueryService(
              *((IUnknown **)this - 1),
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              v1);
  v4 = Service;
  if ( Service >= 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_FullScreenAnimation>::ReportUsageToService();
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x147,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)Service);
    return v4;
  }
}
