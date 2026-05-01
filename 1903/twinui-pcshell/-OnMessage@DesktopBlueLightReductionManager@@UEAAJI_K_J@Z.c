/*
 * XREFs of ?OnMessage@DesktopBlueLightReductionManager@@UEAAJI_K_J@Z @ 0x180160530
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ae1862e88fce429ff542ba2505a27793___ @ 0x18015F894 (Windows--Internal--ComTaskPool--QueueTask__lambda_ae1862e88fce429ff542ba2505a27793___.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801607D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1801607D0.c)
 */

__int64 __fastcall DesktopBlueLightReductionManager::OnMessage(DesktopBlueLightReductionManager *this, int a2)
{
  char *v2; // rbx
  volatile signed __int32 *v3; // rax
  int v4; // edi
  char *v6; // [rsp+30h] [rbp-18h] BYREF
  char *v7; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 == 30 )
  {
    v2 = (char *)this - 104;
    v3 = (volatile signed __int32 *)((char *)this + 60);
    if ( this != (DesktopBlueLightReductionManager *)104 )
    {
      _InterlockedIncrement(v3);
      v2 = (char *)this - 104;
    }
    v6 = (char *)this - 104;
    v7 = v2;
    if ( v2 )
    {
      _InterlockedIncrement(v3);
      v2 = (char *)this - 104;
    }
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_ae1862e88fce429ff542ba2505a27793___(
           (__int64)this,
           (__int64)this - 104,
           *((_DWORD *)this + 25),
           &v6);
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v7);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xE0,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v4);
    if ( v2 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v2);
  }
  return 0LL;
}
