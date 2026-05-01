/*
 * XREFs of ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x1802BA530
 * Callers:
 *     _lambda_4ae43a7ebf3caa9980047f7d59b4d07c_::operator() @ 0x180092AA8 (_lambda_4ae43a7ebf3caa9980047f7d59b4d07c_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetFocusedWindow @ 0x1802B68DC (_anonymous_namespace_--GetFocusedWindow.c)
 *     ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@W4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@@Z @ 0x1802C30F0 (-NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@W4CoreIn.c)
 *     ?GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@I@Z @ 0x1802CA9D8 (-GetOcclusionKind@TabTipAdapterPolicy@KeyboardHosting@@QEAA-AW4CoreInputViewOcclusionKind@Core@V.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x1802CABAC (-GetPrimaryViewDisplayMode@TabTipAdapterPolicy@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::ShowView(
        TouchKeyboardExperienceManager *this,
        const struct KBViewInfo *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  unsigned int OcclusionKind; // eax
  HWND FocusedWindow; // rax
  HWND Ancestor; // rbx
  __int64 v12; // rdi
  unsigned int PrimaryViewDisplayMode; // eax
  __int64 v15[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v15[1] = -2LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 112LL))(*((_QWORD *)a2 + 1));
  v5 = v4;
  if ( v4 >= 0 )
  {
    v15[0] = 0LL;
    v6 = *((_QWORD *)a2 + 1);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, v15);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 1) + 40LL))(*((_QWORD *)a2 + 1), 0LL);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v16 = *(_OWORD *)((char *)a2 + 40);
        OcclusionKind = KeyboardHosting::TabTipAdapterPolicy::GetOcclusionKind(
                          *(_QWORD *)(*((_QWORD *)this + 87) + 96LL),
                          *((unsigned int *)a2 + 9));
        v7 = KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(
               *((_QWORD *)this + 87),
               &v16,
               OcclusionKind);
        v5 = v7;
        if ( v7 >= 0 )
        {
          if ( *((_DWORD *)a2 + 9)
            || (FocusedWindow = anonymous_namespace_::GetFocusedWindow(),
                Ancestor = GetAncestor(FocusedWindow, 2u),
                v12 = *((_QWORD *)this + 44),
                PrimaryViewDisplayMode = KeyboardHosting::TabTipAdapterPolicy::GetPrimaryViewDisplayMode(*(_QWORD *)(*((_QWORD *)this + 87) + 96LL)),
                v7 = (*(__int64 (__fastcall **)(__int64, HWND, __int128 *, _QWORD))(*(_QWORD *)v12 + 24LL))(
                       v12,
                       Ancestor,
                       &v16,
                       PrimaryViewDisplayMode),
                v5 = v7,
                v7 >= 0) )
          {
            v5 = 0;
            goto LABEL_14;
          }
          v8 = 1857LL;
        }
        else
        {
          v8 = 1850LL;
        }
      }
      else
      {
        v8 = 1845LL;
      }
    }
    else
    {
      v8 = 1841LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_14:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x72E,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
