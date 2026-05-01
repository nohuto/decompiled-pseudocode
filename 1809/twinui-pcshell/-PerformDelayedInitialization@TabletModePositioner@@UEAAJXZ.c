/*
 * XREFs of ?PerformDelayedInitialization@TabletModePositioner@@UEAAJXZ @ 0x1803496A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180066A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7f660cca33f77aa7791b61c633544cbe__&___ptr64_ @ 0x180343448 (Windows--Internal--ComTaskPool--QueueTask__lambda_7f660cca33f77aa7791b61c633544cbe__-___ptr64_.c)
 */

__int64 __fastcall TabletModePositioner::PerformDelayedInitialization(
        TabletModePositioner *this,
        __int64 a2,
        __int64 a3)
{
  char *v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v10; // [rsp+38h] [rbp+10h] BYREF

  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService((__int64)this, a2, a3);
  v4 = (char *)this - 24;
  v10 = v4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
  v10 = v4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
  v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_7f660cca33f77aa7791b61c633544cbe______ptr64_(v5, &v10);
  v7 = v6;
  if ( v6 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v6);
  if ( v4 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v7;
}
