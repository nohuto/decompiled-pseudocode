/*
 * XREFs of _lambda_95049987556ed2fca2fb7bfd11a04e1e_::operator() @ 0x180092F00
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_95049987556ed2fca2fb7bfd11a04e1e___::Run @ 0x180093B20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_95049987556ed2fca2fb7bfd11a04e1e___--Run.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180017738 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802B5CAC (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x1802BA3C0 (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1802BCD24 (-UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_95049987556ed2fca2fb7bfd11a04e1e_::operator()(unsigned int *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int ViewInfo; // eax
  TouchKeyboardExperienceManager *v5; // rcx
  __int64 v6; // rdx
  std::_Ref_count_base *v7; // rsi
  std::_Ref_count_base *v9[2]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IInspectable *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 6), &v11);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      426LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( !v11 )
  {
    v3 = 0;
    goto LABEL_17;
  }
  *(_OWORD *)v9 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(*((_QWORD *)a1 + 4), *a1, v9);
  v3 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v6 = 434LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_15;
  }
  v7 = v9[0];
  ViewInfo = TouchKeyboardExperienceManager::SetHostedPos(
               v5,
               *((struct IApplicationFrameWrapper **)v9[0] + 1),
               0LL,
               (const struct tagRECT *)(a1 + 1));
  v3 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v6 = 435LL;
    goto LABEL_13;
  }
  ViewInfo = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v7 + 1) + 96LL))(*((_QWORD *)v7 + 1));
  v3 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v6 = 436LL;
    goto LABEL_13;
  }
  ViewInfo = TouchKeyboardExperienceManager::UpdateBorder(
               *((TouchKeyboardExperienceManager **)a1 + 4),
               *a1,
               *((_BYTE *)a1 + 20));
  v3 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    v6 = 438LL;
    goto LABEL_13;
  }
  v3 = 0;
LABEL_15:
  if ( v9[1] )
    std::_Ref_count_base::_Decref(v9[1]);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v3;
}
