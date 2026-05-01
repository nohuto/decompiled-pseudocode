/*
 * XREFs of ?_OnWindowPosChanged@CMultitaskingViewFrame@@AEAAXXZ @ 0x1802FCAF4
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802FCF00 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801301B0 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ??$As@UIFrameElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFrameElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802F9AA0 (--$As@UIFrameElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$As@UIVirtualDesktopBarElement@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopBarElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802F9B6C (--$As@UIVirtualDesktopBarElement@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@.c)
 */

void __fastcall CMultitaskingViewFrame::_OnWindowPosChanged(CMultitaskingViewFrame *this)
{
  HWND v2; // rcx
  struct tagRECT *v3; // rdx
  HWND v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+28h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v10; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v2 = (HWND)*((_QWORD *)this + 5);
  Rect = 0LL;
  GetWindowRect(v2, &Rect);
  if ( !Platform::Guid::Equals((Platform::Guid *)&Rect, (const struct _GUID *)((char *)this + 2536)) )
  {
    v4 = (HWND)*((_QWORD *)this + 5);
    *(_QWORD *)&v10.left = 0LL;
    *(_QWORD *)&v10.right = 0LL;
    *v3 = Rect;
    GetClientRect(v4, &v10);
    v5 = *((_QWORD *)this + 313);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v5 + 104LL))(v5, &v10);
      v7 = 0LL;
      Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IFrameElement>((_QWORD *)this + 313, &v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    }
    v8 = 0LL;
    if ( *((_QWORD *)this + 316) )
    {
      v6 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IVirtualDesktopBarElement>(
             (_QWORD *)this + 316,
             &v8);
      if ( v6 >= 0 )
        (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v8 + 24LL))(v8, &Rect);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          839LL,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
          (const char *)(unsigned int)v6);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
}
