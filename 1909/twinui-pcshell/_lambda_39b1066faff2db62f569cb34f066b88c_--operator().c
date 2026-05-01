/*
 * XREFs of _lambda_39b1066faff2db62f569cb34f066b88c_::operator() @ 0x1800AA13C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_39b1066faff2db62f569cb34f066b88c___::Run @ 0x1800ABE90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_39b1066faff2db62f569cb34f066b88c___--Run.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001476C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18032BCCC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18032C878 (--1OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@@Z @ 0x18032DE94 (-FindFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@AEAV-$ComPtr@UIApp.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18032E034 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV-$shared_pt.c)
 *     ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x18032F978 (-IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z.c)
 *     ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x18032FDB0 (-MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAU.c)
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x1803307B4 (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_GenericInputProcessor@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180333760 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_GenericInputProcessor@@@wil@@CAX_NW4.c)
 *     ?StartActivity@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x18033433C (-StartActivity@OnApplicationFrameCommand@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180334DB4 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18043511C (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_39b1066faff2db62f569cb34f066b88c_::operator()(_QWORD *a1)
{
  int v2; // eax
  TouchKeyboardExperienceManager *v3; // rcx
  int FrameWrapper; // ebx
  _QWORD *v5; // rcx
  int v6; // eax
  bool v7; // r8
  int ViewInfo; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  bool v12; // si
  struct IApplicationFrameWrapper *v14; // [rsp+28h] [rbp-E0h] BYREF
  struct IInspectable *v15; // [rsp+30h] [rbp-D8h] BYREF
  struct IInspectable *v16[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h]
  _QWORD v18[40]; // [rsp+58h] [rbp-B0h] BYREF
  OLECHAR sz[40]; // [rsp+198h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v17 = -2LL;
  v15 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 2), &v15);
  v3 = retaddr;
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x66D,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( !v15 || !TouchKeyboardExperienceManager::IsFrameReady(v3, (struct IApplicationFrame *)*a1) )
  {
    FrameWrapper = 0;
    goto LABEL_31;
  }
  memset_0(sz, 0, sizeof(sz));
  if ( !StringFromGUID2((const GUID *const)a1[1], sz, 40) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x67A,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80004005LL);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v18);
  v18[0] = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)v18,
    sz);
  v14 = 0LL;
  FrameWrapper = TouchKeyboardExperienceManager::FindFrameWrapper(a1[3], *a1, &v14);
  if ( FrameWrapper >= 0 )
  {
    v5 = (_QWORD *)a1[1];
    if ( *v5 == ApplicationFrameCloseCommand && v5[1] == 0x575B26E93947F081LL )
    {
      v6 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v14 + 40LL))(v14, 1LL);
      FrameWrapper = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x683,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
        goto LABEL_29;
      }
      IhmNotification::SendKeyboardSetVisible(0LL, 1, v7);
    }
    else if ( *v5 == ApplicationFrameExitedSizeMoveCommand && v5[1] == 0x789E03E893229A8ALL )
    {
      *(_OWORD *)v16 = 0LL;
      ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(a1[3], v14, v16);
      FrameWrapper = ViewInfo;
      if ( ViewInfo >= 0 )
      {
        if ( HIDWORD(v16[0][4].lpVtbl) == 5 )
        {
          LOBYTE(v9) = 3;
          wil::Feature<__WilFeatureTraits_Feature_GenericInputProcessor>::ReportUsageToService(v10, v9);
          v12 = 1;
        }
        else
        {
          v12 = 0;
        }
        ViewInfo = TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
                     (struct IApplicationFrame *)*a1,
                     v14,
                     v12);
        FrameWrapper = ViewInfo;
        if ( ViewInfo >= 0 )
        {
          ViewInfo = TouchKeyboardExperienceManager::NotifyPositionAndSizeUpdateCompleted(
                       (TouchKeyboardExperienceManager *)a1[3],
                       (struct IApplicationFrame *)*a1);
          FrameWrapper = ViewInfo;
          if ( ViewInfo >= 0 )
          {
            if ( v16[1] )
              std::_Ref_count_base::_Decref((std::_Ref_count_base *)v16[1]);
            goto LABEL_28;
          }
          v11 = 1678LL;
        }
        else
        {
          v11 = 1677LL;
        }
      }
      else
      {
        v11 = 1673LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ViewInfo);
      if ( v16[1] )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v16[1]);
      goto LABEL_29;
    }
LABEL_28:
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
    FrameWrapper = 0;
  }
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::~OnApplicationFrameCommand((TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand *)v18);
LABEL_31:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return (unsigned int)FrameWrapper;
}
