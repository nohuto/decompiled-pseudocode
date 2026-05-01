/*
 * XREFs of _lambda_4ae43a7ebf3caa9980047f7d59b4d07c_::operator() @ 0x180092AA8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4ae43a7ebf3caa9980047f7d59b4d07c___::Run @ 0x180093B00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4ae43a7ebf3caa9980047f7d59b4d07c___--Run.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180017738 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?BoostPriority@KBViewInfo@@QEAAXXZ @ 0x1802B50F8 (-BoostPriority@KBViewInfo@@QEAAXXZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802B5CAC (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?IsLightDismissSupportedView@TouchKeyboardExperienceManager@@AEAA_NI@Z @ 0x1802B71A8 (-IsLightDismissSupportedView@TouchKeyboardExperienceManager@@AEAA_NI@Z.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x1802BA3C0 (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x1802BA530 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z.c)
 *     ?UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1802BCD24 (-UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803B0D50 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_4ae43a7ebf3caa9980047f7d59b4d07c_::operator()(unsigned int *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int ViewInfo; // eax
  KBViewInfo *v5; // rsi
  __int64 v6; // rbx
  int updated; // eax
  TouchKeyboardExperienceManager *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  TouchKeyboardExperienceManager *v11; // rcx
  int v12; // eax
  std::_Ref_count_base *v14[2]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IApplicationFrame *v16; // [rsp+70h] [rbp+30h] BYREF
  struct IInspectable *v17; // [rsp+78h] [rbp+38h] BYREF

  v17 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 6), &v17);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      283LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( !v17 )
  {
    v3 = 0;
    goto LABEL_36;
  }
  *(_OWORD *)v14 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*((_QWORD *)a1 + 4), *a1, v14);
  v3 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x123,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_34;
  }
  v16 = 0LL;
  v5 = v14[0];
  v6 = *((_QWORD *)v14[0] + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  updated = (*(__int64 (__fastcall **)(__int64, struct IApplicationFrame **))(*(_QWORD *)v6 + 32LL))(v6, &v16);
  v3 = updated;
  if ( updated >= 0 )
  {
    updated = TouchKeyboardExperienceManager::SetHostedPos(
                v8,
                *((struct IApplicationFrameWrapper **)v5 + 1),
                v16,
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
              TouchKeyboardExperienceManager::ShowView(*((TouchKeyboardExperienceManager **)a1 + 4), v5);
              if ( TouchKeyboardExperienceManager::IsLightDismissSupportedView(v11, *a1) )
              {
                v12 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
                        *((_QWORD *)a1 + 4) + 704LL,
                        1026LL,
                        (*((_QWORD *)a1 + 4) + 168LL) & -(__int64)(*((_QWORD *)a1 + 4) != 0LL),
                        *(_QWORD *)v5,
                        -2LL);
                if ( v12 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    337LL,
                    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                    (const char *)(unsigned int)v12);
                *(_DWORD *)(*((_QWORD *)a1 + 4) + 720LL) = *a1;
              }
              v3 = 0;
              goto LABEL_33;
            }
            v9 = 327LL;
          }
          else
          {
            v9 = 324LL;
          }
        }
        else
        {
          v9 = 322LL;
        }
      }
      else
      {
        v9 = 321LL;
      }
    }
    else
    {
      v9 = 295LL;
    }
  }
  else
  {
    v9 = 294LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)updated);
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
LABEL_34:
  if ( v14[1] )
    std::_Ref_count_base::_Decref(v14[1]);
LABEL_36:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return v3;
}
