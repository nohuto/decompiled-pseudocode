/*
 * XREFs of ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x180432E98
 * Callers:
 *     ?EnableSessionIdleNotifications@DesktopSingleViewShellExperiencePersonality@@UEAAJPEAUIServiceProvider@@@Z @ 0x180432CE0 (-EnableSessionIdleNotifications@DesktopSingleViewShellExperiencePersonality@@UEAAJPEAUIServicePr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonitorNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180078F90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveMonito.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x180430B08 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z.c)
 *     Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____lambda_5dd62f6e8324cfa711462c7c76a80ce5__&_ @ 0x180432A34 (Microsoft--WRL--Details--Make_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____l.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DesktopSingleViewShellExperiencePersonality::RegisterSessionIdleDetector(
        DesktopSingleViewShellExperiencePersonality *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // esi
  volatile int *v5; // rdx
  int v6; // eax
  __int64 v8[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 1) + 96LL);
  v8[0] = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v8[1] = (__int64)this;
  Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____lambda_5dd62f6e8324cfa711462c7c76a80ce5____(
    &v11,
    v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 3) + 32LL))(
         *((_QWORD *)this + 3),
         v11,
         (char *)this + 32);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), &v10);
    if ( v6 >= 0 )
      CSingleViewShellExperience::OnSessionIdleStateChanged(*((CSingleViewShellExperience **)this + 1), v10);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
        (const char *)(unsigned int)v6);
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
      (const char *)(unsigned int)v3);
  }
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveMonitorNotification>::Release(
      v11,
      v5);
  return v4;
}
