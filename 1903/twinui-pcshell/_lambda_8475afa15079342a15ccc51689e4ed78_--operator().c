/*
 * XREFs of _lambda_8475afa15079342a15ccc51689e4ed78_::operator() @ 0x18009CE28
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8475afa15079342a15ccc51689e4ed78___::Run @ 0x18009E580 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8475afa15079342a15ccc51689e4ed78___--Run.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180044C6C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18030C880 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18030D4AC (--1OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18030EAB0 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x1803108E0 (-MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAU.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_GenericInputProcessor@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180313F38 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_GenericInputProcessor@@@wil@@CAX_NW4.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x1803142C0 (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?StartActivity@OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x180314E00 (-StartActivity@OnInputAppRequestedResizeActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180315548 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180319748 (-UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_8475afa15079342a15ccc51689e4ed78_::operator()(unsigned int *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int ViewInfo; // eax
  TouchKeyboardExperienceManager *v5; // rcx
  __int64 v6; // rdx
  struct IInspectable *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool v10; // di
  struct IInspectableVtbl *lpVtbl; // rbx
  int v12; // eax
  __int64 v13; // rdx
  struct IApplicationFrame *v15; // [rsp+28h] [rbp-E0h] BYREF
  struct IInspectable *v16; // [rsp+30h] [rbp-D8h] BYREF
  struct IInspectable *v17[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h]
  _QWORD v19[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v18 = -2LL;
  v16 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 6), &v16);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x256,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( !v16 )
  {
    v3 = 0;
    goto LABEL_27;
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v19);
  v19[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued *)v19,
    *a1);
  *(_OWORD *)v17 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*((_QWORD *)a1 + 4), *a1, v17);
  v3 = ViewInfo;
  if ( ViewInfo >= 0 )
  {
    v7 = v17[0];
    ViewInfo = TouchKeyboardExperienceManager::SetHostedPos(
                 v5,
                 (struct IApplicationFrameWrapper *)v17[0][1].lpVtbl,
                 0LL,
                 (const struct tagRECT *)(a1 + 1));
    v3 = ViewInfo;
    if ( ViewInfo < 0 )
    {
      v6 = 609LL;
      goto LABEL_13;
    }
    ViewInfo = (*((__int64 (__fastcall **)(struct IInspectableVtbl *))v7[1].lpVtbl->QueryInterface + 12))(v7[1].lpVtbl);
    v3 = ViewInfo;
    if ( ViewInfo < 0 )
    {
      v6 = 610LL;
      goto LABEL_13;
    }
    ViewInfo = TouchKeyboardExperienceManager::UpdateBorder(
                 *((TouchKeyboardExperienceManager **)a1 + 4),
                 *a1,
                 *((_BYTE *)a1 + 20));
    v3 = ViewInfo;
    if ( ViewInfo < 0 )
    {
      v6 = 612LL;
      goto LABEL_13;
    }
    if ( *a1 == 5 )
    {
      LOBYTE(v8) = 3;
      wil::Feature<__WilFeatureTraits_Feature_GenericInputProcessor>::ReportUsageToService(v9, v8);
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    v15 = 0LL;
    lpVtbl = v7[1].lpVtbl;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    v12 = (*((__int64 (__fastcall **)(struct IInspectableVtbl *, struct IApplicationFrame **))lpVtbl->QueryInterface + 4))(
            lpVtbl,
            &v15);
    v3 = v12;
    if ( v12 >= 0 )
    {
      v12 = TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
              v15,
              (struct IApplicationFrameWrapper *)v7[1].lpVtbl,
              v10);
      v3 = v12;
      if ( v12 >= 0 )
      {
        wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v19);
        v3 = 0;
        goto LABEL_23;
      }
      v13 = 619LL;
    }
    else
    {
      v13 = 618LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_23:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    goto LABEL_24;
  }
  v6 = 608LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)ViewInfo);
LABEL_24:
  if ( v17[1] )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v17[1]);
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued::~OnInputAppRequestedResizeActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity_Queued *)v19);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return v3;
}
