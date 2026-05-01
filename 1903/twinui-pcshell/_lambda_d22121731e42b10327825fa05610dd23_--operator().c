/*
 * XREFs of _lambda_d22121731e42b10327825fa05610dd23_::operator() @ 0x18015FD44
 * Callers:
 *     wistd::__function::__func__lambda_d22121731e42b10327825fa05610dd23__void___cdecl(void)_::operator() @ 0x18015FDE0 (wistd--__function--__func__lambda_d22121731e42b10327825fa05610dd23__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_27514f07cfbff6e7a56951d9e4471be4___ @ 0x18015F764 (Windows--Internal--ComTaskPool--QueueTask__lambda_27514f07cfbff6e7a56951d9e4471be4___.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801607D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1801607D0.c)
 */

void __fastcall lambda_d22121731e42b10327825fa05610dd23_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  volatile signed __int32 *v3; // rax
  int v4; // edi
  int v5[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *a1;
  v2 = *a1;
  v3 = (volatile signed __int32 *)(*a1 + 164);
  if ( *a1 )
  {
    _InterlockedIncrement(v3);
    v2 = *a1;
  }
  *(_QWORD *)v5 = v2;
  v6 = v1;
  if ( v1 )
  {
    _InterlockedIncrement(v3);
    v2 = *a1;
  }
  v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_27514f07cfbff6e7a56951d9e4471be4___(
         (__int64)a1,
         v2,
         *(_DWORD *)(v2 + 204),
         v5);
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v6);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x151,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v4);
  if ( v1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v1);
}
