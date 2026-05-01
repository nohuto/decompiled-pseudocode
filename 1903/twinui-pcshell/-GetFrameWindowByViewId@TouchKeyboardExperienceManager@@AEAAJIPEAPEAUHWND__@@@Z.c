/*
 * XREFs of ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x18030FC80
 * Callers:
 *     ?GetViewRect@TouchKeyboardExperienceManager@@QEAAJIPEAUtagRECT@@@Z @ 0x18030FF94 (-GetViewRect@TouchKeyboardExperienceManager@@QEAAJIPEAUtagRECT@@@Z.c)
 *     ?UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x180319748 (-UpdateBorder@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18030EAB0 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::GetFrameWindowByViewId(RTL_SRWLOCK *this, int a2, HWND *a3)
{
  int ViewInfo; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int128 v10; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(this, a2, &v10);
  v5 = ViewInfo;
  if ( ViewInfo < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA62,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ViewInfo);
    goto LABEL_10;
  }
  v12 = 0LL;
  v6 = *(_QWORD *)(v10 + 8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, &v12);
  v5 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v12 + 24LL))(v12, a3);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v5 = 0;
      goto LABEL_9;
    }
    v8 = 2663LL;
  }
  else
  {
    v8 = 2661LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
LABEL_10:
  if ( *((_QWORD *)&v10 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v10 + 1));
  return v5;
}
