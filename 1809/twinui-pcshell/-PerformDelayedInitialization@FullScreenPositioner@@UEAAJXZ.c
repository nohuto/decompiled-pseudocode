/*
 * XREFs of ?PerformDelayedInitialization@FullScreenPositioner@@UEAAJXZ @ 0x180141F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FullScreenAnimation@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180142574 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FullScreenAnimation@@@wil@@CAX_NW4Re.c)
 */

__int64 __fastcall FullScreenPositioner::PerformDelayedInitialization(FullScreenPositioner *this)
{
  void **v1; // rbx
  HRESULT Service; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (void **)((char *)this + 200);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
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
      (void *)0x13B,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)Service);
    return v4;
  }
}
