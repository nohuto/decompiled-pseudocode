/*
 * XREFs of _lambda_75fd98ac14c9b18bffd1e748aa36b6a5_::operator() @ 0x1800AAE84
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_75fd98ac14c9b18bffd1e748aa36b6a5___::Run @ 0x1800ABED0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_75fd98ac14c9b18bffd1e748aa36b6a5___--Run.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001476C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18032BCCC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18032C8A4 (--1OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18032DE94 (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x18032F978 (-IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z.c)
 *     ?StartActivity@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x18033444C (-StartActivity@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180334DB4 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_75fd98ac14c9b18bffd1e748aa36b6a5_::operator()(struct IApplicationFrame **a1)
{
  int v2; // eax
  TouchKeyboardExperienceManager *v3; // rcx
  int FrameWrapper; // ebx
  int v5; // eax
  __int64 v7; // [rsp+28h] [rbp-E0h] BYREF
  struct IInspectable *v8[2]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v9[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A0h] [rbp+98h]

  v8[1] = (struct IInspectable *)-2LL;
  v8[0] = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 1), v8);
  v3 = retaddr;
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x63D,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( v8[0] && TouchKeyboardExperienceManager::IsFrameReady(v3, *a1) )
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v9);
    v9[0] = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::`vftable';
    TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)v9);
    v7 = 0LL;
    FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper(a1[2], *a1, &v7);
    if ( FrameWrapper >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7);
      FrameWrapper = v5;
      if ( v5 >= 0 )
      {
        wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v9);
        FrameWrapper = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x64E,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged::~OnApplicationFramePositionChanged((TouchKeyboardExperienceTelemetryLogger::OnApplicationFramePositionChanged *)v9);
  }
  else
  {
    FrameWrapper = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v8);
  return (unsigned int)FrameWrapper;
}
