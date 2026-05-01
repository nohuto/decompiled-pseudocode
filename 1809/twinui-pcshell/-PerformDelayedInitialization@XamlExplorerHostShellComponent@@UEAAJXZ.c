/*
 * XREFs of ?PerformDelayedInitialization@XamlExplorerHostShellComponent@@UEAAJXZ @ 0x18025AF00
 * Callers:
 *     <none>
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B9820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1801B9820.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_426bb45a896c97a0e7f03d36232edfea___ @ 0x180259518 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_426bb45a896c97a0e7f03d36232edfea___.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18025B1E4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CAX_NW4Rep.c)
 */

__int64 __fastcall XamlExplorerHostShellComponent::PerformDelayedInitialization(XamlExplorerHostShellComponent *this)
{
  volatile int *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r10d
  char *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  char *v12; // [rsp+20h] [rbp-18h] BYREF
  char *v13; // [rsp+28h] [rbp-10h]

  wil::Feature<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::ReportUsageToService();
  v5 = 0x7FFFFFFF;
  v6 = (char *)this - 48;
  if ( v6 )
  {
    v7 = *((_QWORD *)v6 + 22);
    while ( 1 )
    {
      v3 = (unsigned __int64)v7 >> 63;
      if ( v7 < 0 )
        break;
      if ( (_DWORD)v7 != 0x7FFFFFFF )
      {
        v3 = v7 + 1;
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 22, v7 + 1, v7);
        if ( v8 != v7 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v7 + 16), v2);
  }
LABEL_8:
  v12 = v6;
  v13 = v6;
  if ( v6 )
  {
    v9 = *((_QWORD *)v6 + 22);
    while ( 1 )
    {
      v3 = (unsigned __int64)v9 >> 63;
      if ( v9 < 0 )
        break;
      if ( (_DWORD)v9 != v5 )
      {
        v3 = v9 + 1;
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 22, v9 + 1, v9);
        if ( v10 != v9 )
          continue;
      }
      goto LABEL_15;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v9 + 16), v2);
  }
LABEL_15:
  Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_426bb45a896c97a0e7f03d36232edfea___(
    v3,
    (__int64)v2,
    v4,
    &v12);
  if ( v13 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::Release((__int64)v13);
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::Release((__int64)v6);
  return 0LL;
}
