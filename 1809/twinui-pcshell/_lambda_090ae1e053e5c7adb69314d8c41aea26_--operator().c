/*
 * XREFs of _lambda_090ae1e053e5c7adb69314d8c41aea26_::operator() @ 0x180092674
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_090ae1e053e5c7adb69314d8c41aea26___::Run @ 0x180093AE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_090ae1e053e5c7adb69314d8c41aea26___--Run.c)
 * Callees:
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x18000D344 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180017738 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802B5CAC (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?IsLightDismissSupportedView@TouchKeyboardExperienceManager@@AEAA_NI@Z @ 0x1802B71A8 (-IsLightDismissSupportedView@TouchKeyboardExperienceManager@@AEAA_NI@Z.c)
 *     ?UnboostPriority@KBViewInfo@@QEAAXXZ @ 0x1802BC728 (-UnboostPriority@KBViewInfo@@QEAAXXZ.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1803B3254 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_090ae1e053e5c7adb69314d8c41aea26_::operator()(unsigned int *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int ViewInfo; // eax
  KBViewInfo *v5; // rsi
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  bool v9; // r8
  unsigned int v10; // eax
  TouchKeyboardExperienceManager *v11; // rcx
  std::_Ref_count_base *v13[2]; // [rsp+28h] [rbp-28h] BYREF
  __int128 v14; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v16; // [rsp+70h] [rbp+20h] BYREF
  struct IInspectable *v17; // [rsp+78h] [rbp+28h] BYREF

  v17 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 2), &v17);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      355LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( !v17 )
  {
    v3 = 0;
    goto LABEL_28;
  }
  *(_OWORD *)v13 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*((_QWORD *)a1 + 2), *a1, v13);
  v3 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16D,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_26;
  }
  v16 = 0LL;
  v5 = v13[0];
  v6 = *((_QWORD *)v13[0] + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, &v16);
  v3 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 48LL))(v16, 0LL);
    v3 = v7;
    if ( v7 < 0 )
    {
      v8 = 369LL;
      goto LABEL_21;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v5 + 1) + 40LL))(*((_QWORD *)v5 + 1), 1LL);
    v3 = v7;
    if ( v7 < 0 )
    {
      v8 = 371LL;
      goto LABEL_21;
    }
    v14 = 0uLL;
    *(_OWORD *)((char *)v5 + 40) = 0uLL;
    v10 = *a1;
    if ( !*a1 )
    {
      if ( !*((_BYTE *)a1 + 4) )
        goto LABEL_19;
      IhmNotification::SendKeyboardSetVisible(0LL, 1, v9);
      v10 = *a1;
    }
    if ( v10 == -1 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v5 + 392LL))(*(_QWORD *)v5, 3LL);
      v3 = v7;
      if ( v7 < 0 )
      {
        v8 = 392LL;
        goto LABEL_21;
      }
LABEL_22:
      if ( TouchKeyboardExperienceManager::IsLightDismissSupportedView(v11, *a1) )
      {
        SingleViewLightDismissHelper::UnregisterWithLightDismiss((SingleViewLightDismissHelper *)(*((_QWORD *)a1 + 2)
                                                                                                + 704LL));
        *(_DWORD *)(*((_QWORD *)a1 + 2) + 720LL) = 9;
      }
      KBViewInfo::UnboostPriority(v5);
      v3 = 0;
      goto LABEL_25;
    }
LABEL_19:
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v5 + 392LL))(*(_QWORD *)v5, 1LL);
    v3 = v7;
    if ( v7 < 0 )
    {
      v8 = 398LL;
      goto LABEL_21;
    }
    goto LABEL_22;
  }
  v8 = 368LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_25:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
LABEL_26:
  if ( v13[1] )
    std::_Ref_count_base::_Decref(v13[1]);
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return v3;
}
