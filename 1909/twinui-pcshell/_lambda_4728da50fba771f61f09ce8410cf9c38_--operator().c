/*
 * XREFs of _lambda_4728da50fba771f61f09ce8410cf9c38_::operator() @ 0x1800AA730
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4728da50fba771f61f09ce8410cf9c38___::Run @ 0x1800ABEB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4728da50fba771f61f09ce8410cf9c38___--Run.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001476C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18032BCCC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 *     ??1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18032C928 (--1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?BoostPriority@KBViewInfo@@QEAAXXZ @ 0x18032D348 (-BoostPriority@KBViewInfo@@QEAAXXZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18032DF70 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x180333AE8 (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x180333D74 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z.c)
 *     ?StartActivity@OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x180334734 (-StartActivity@OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QE.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180334DB4 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180338F98 (-UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180432868 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_4728da50fba771f61f09ce8410cf9c38_::operator()(unsigned int *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int ViewInfo; // eax
  KBViewInfo *v5; // rsi
  struct IInspectableVtbl *lpVtbl; // rbx
  int updated; // eax
  TouchKeyboardExperienceManager *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  struct IApplicationFrame *v14; // [rsp+28h] [rbp-E0h] BYREF
  struct IInspectable *v15; // [rsp+30h] [rbp-D8h] BYREF
  struct IInspectable *v16[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h]
  _QWORD v18[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v17 = -2LL;
  v15 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 6), &v15);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1B8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( !v15 )
  {
    v3 = 0;
    goto LABEL_40;
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v18);
  v18[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::StartActivity(
    (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *)v18,
    *a1);
  *(_OWORD *)v16 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*((_QWORD *)a1 + 4), *a1, v16);
  v3 = ViewInfo;
  if ( ViewInfo >= 0 )
  {
    v14 = 0LL;
    v5 = (KBViewInfo *)v16[0];
    lpVtbl = v16[0][1].lpVtbl;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    updated = (*((__int64 (__fastcall **)(struct IInspectableVtbl *, struct IApplicationFrame **))lpVtbl->QueryInterface
               + 4))(
                lpVtbl,
                &v14);
    v3 = updated;
    if ( updated >= 0 )
    {
      updated = TouchKeyboardExperienceManager::SetHostedPos(
                  v8,
                  *((struct IApplicationFrameWrapper **)v5 + 1),
                  v14,
                  (const struct tagRECT *)(a1 + 1));
      v3 = updated;
      if ( updated >= 0 )
      {
        if ( *((_BYTE *)a1 + 20) || (v10 = 0LL, *((_BYTE *)a1 + 21)) )
          v10 = 1LL;
        if ( *a1 < 2 || *a1 == 4 )
        {
          v10 = 0LL;
        }
        else if ( *a1 == 5 )
        {
          v10 = 0LL;
        }
        updated = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v5 + 2) + 32LL))(*((_QWORD *)v5 + 2), v10);
        v3 = updated;
        if ( updated >= 0 )
        {
          updated = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 2) + 96LL))(*((_QWORD *)v5 + 2));
          v3 = updated;
          if ( updated >= 0 )
          {
            updated = TouchKeyboardExperienceManager::UpdateBorder(
                        *((TouchKeyboardExperienceManager **)a1 + 4),
                        *a1,
                        *((_BYTE *)a1 + 22));
            v3 = updated;
            if ( updated >= 0 )
            {
              *(_OWORD *)((char *)v5 + 40) = *(_OWORD *)(a1 + 1);
              updated = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v5 + 392LL))(*(_QWORD *)v5, 4LL);
              v3 = updated;
              if ( updated >= 0 )
              {
                KBViewInfo::BoostPriority(v5);
                v11 = TouchKeyboardExperienceManager::ShowView(*((TouchKeyboardExperienceManager **)a1 + 4), v5);
                if ( v11 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x1EF,
                    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                    (const char *)(unsigned int)v11);
                if ( ((*a1 - 2) & 0xFFFFFFFA) == 0 && *a1 != 7 )
                {
                  v12 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
                          *((_QWORD *)a1 + 4) + 736LL,
                          1026LL,
                          (*((_QWORD *)a1 + 4) + 168LL) & -(__int64)(*((_QWORD *)a1 + 4) != 0LL),
                          *(_QWORD *)v5);
                  if ( v12 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x1F4,
                      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                      (const char *)(unsigned int)v12);
                  *(_DWORD *)(*((_QWORD *)a1 + 4) + 752LL) = *a1;
                }
                wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
                v3 = 0;
                goto LABEL_36;
              }
              v9 = 487LL;
            }
            else
            {
              v9 = 483LL;
            }
          }
          else
          {
            v9 = 481LL;
          }
        }
        else
        {
          v9 = 480LL;
        }
      }
      else
      {
        v9 = 454LL;
      }
    }
    else
    {
      v9 = 453LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
LABEL_36:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    goto LABEL_37;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C2,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)ViewInfo);
LABEL_37:
  if ( v16[1] )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v16[1]);
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::~OnInputAppRequestedShowActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *)v18);
LABEL_40:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return v3;
}
