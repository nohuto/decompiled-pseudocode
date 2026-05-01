/*
 * XREFs of _lambda_3f773d4746d1dec58197fa131fb54ae4_::operator() @ 0x1800AA428
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f773d4746d1dec58197fa131fb54ae4___::Run @ 0x1800ABEA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3f773d4746d1dec58197fa131fb54ae4___--Run.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001476C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18004ED28 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18032BCCC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18032C8D0 (--1OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AEAVCExperienceManagerAnimationHelper@@_N@Z @ 0x18032D160 (-AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AE.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18032DF70 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x18032F820 (_anonymous_namespace_--IsAnimationEnabled.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StabilizeInputAppActivation@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180333820 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StabilizeInputAppActivation@@@wil@@C.c)
 *     ?StartActivity@OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x18033452C (-StartActivity@OnInputAppRequestedHideActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QE.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180334DB4 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?UnboostPriority@KBViewInfo@@QEAAXXZ @ 0x180338968 (-UnboostPriority@KBViewInfo@@QEAAXXZ.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18043511C (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_3f773d4746d1dec58197fa131fb54ae4_::operator()(unsigned int *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int ViewInfo; // eax
  KBViewInfo *v5; // rsi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  bool v9; // r8
  __int64 v11; // [rsp+38h] [rbp-D0h] BYREF
  HWND v12[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h]
  KBViewInfo *v14[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-A0h]
  _QWORD v16[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v15 = -2LL;
  v12[0] = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 2), (struct IInspectable **)v12);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x210,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( !v12[0] )
  {
    v3 = 0;
    goto LABEL_33;
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v16);
  v16[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)v16,
    *a1);
  *(_OWORD *)v14 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*((_QWORD *)a1 + 2), *a1, v14);
  v3 = ViewInfo;
  if ( ViewInfo >= 0 )
  {
    v11 = 0LL;
    v5 = v14[0];
    v6 = *((_QWORD *)v14[0] + 1);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, &v11);
    v3 = v7;
    if ( v7 >= 0 )
    {
      wil::Feature<__WilFeatureTraits_Feature_StabilizeInputAppActivation>::ReportUsageToService();
      if ( *a1 || !(unsigned __int8)anonymous_namespace_::IsAnimationEnabled() )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v5 + 1) + 40LL))(*((_QWORD *)v5 + 1), 1LL);
        v3 = v7;
        if ( v7 < 0 )
        {
          v8 = 556LL;
          goto LABEL_24;
        }
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v11 + 24LL))(v11, &v12[1]);
        v3 = v7;
        if ( v7 < 0 )
        {
          v8 = 550LL;
          goto LABEL_24;
        }
        v7 = TouchKeyboardExperienceManager::AnimateWindow(
               *((TouchKeyboardExperienceManager **)a1 + 2),
               *((struct IApplicationFrameWrapper **)v5 + 1),
               v12[1],
               (struct CExperienceManagerAnimationHelper *)(*((_QWORD *)a1 + 2) + 792LL),
               0);
        v3 = v7;
        if ( v7 < 0 )
        {
          v8 = 551LL;
          goto LABEL_24;
        }
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v5 + 1) + 40LL))(*((_QWORD *)v5 + 1), 1LL);
        v3 = v7;
        if ( v7 < 0 )
        {
          v8 = 552LL;
          goto LABEL_24;
        }
      }
      v12[1] = 0LL;
      v13 = 0LL;
      *(_OWORD *)((char *)v5 + 40) = 0u;
      if ( !*a1 && *((_BYTE *)a1 + 4) )
        IhmNotification::SendKeyboardSetVisible(0LL, 1, v9);
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v5 + 392LL))(*(_QWORD *)v5, 3LL);
      v3 = v7;
      if ( v7 >= 0 )
      {
        if ( ((*a1 - 2) & 0xFFFFFFFA) == 0 && *a1 != 7 )
        {
          SingleViewLightDismissHelper::UnregisterWithLightDismiss((SingleViewLightDismissHelper *)(*((_QWORD *)a1 + 2)
                                                                                                  + 736LL));
          *(_DWORD *)(*((_QWORD *)a1 + 2) + 752LL) = 9;
        }
        KBViewInfo::UnboostPriority(v5);
        wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
        v3 = 0;
        goto LABEL_29;
      }
      v8 = 581LL;
    }
    else
    {
      v8 = 543LL;
    }
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_29:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x21C,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)ViewInfo);
LABEL_30:
  if ( v14[1] )
    std::_Ref_count_base::_Decref(v14[1]);
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued::~OnInputAppRequestedHideActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedHideActivity_Queued *)v16);
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
  return v3;
}
