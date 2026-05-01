/*
 * XREFs of ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x180132370
 * Callers:
 *     ?ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x1801303F0 (-ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A5E0 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002AA2C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DD450 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800DD820 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800DF4A0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     _lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator() @ 0x18012F6E0 (_lambda_3862d1887d3f5208accb0e0621fd5fc4_--operator().c)
 *     _lambda_a869f7513e8efdf703e23387751d77d1_::operator() @ 0x18012F7B0 (_lambda_a869f7513e8efdf703e23387751d77d1_--operator().c)
 *     ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z @ 0x1801327E0 (-SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWin32ApplicationView::SetPosition(CWin32ApplicationView *this, struct IApplicationViewPosition *a2)
{
  HWND v3; // rsi
  int v4; // eax
  signed int LastErrorFailHr; // ebx
  CWin32ApplicationView *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  wil::details *v10; // rcx
  __int64 v11; // r8
  const char *v12; // r9
  UINT showCmd; // eax
  CWin32ApplicationView *v14; // rcx
  __int64 v16; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  int v21[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v22; // [rsp+68h] [rbp-A0h] BYREF
  __int64 wndpl; // [rsp+70h] [rbp-98h]
  WINDOWPLACEMENT wndpl_8; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v25[2]; // [rsp+A8h] [rbp-60h] BYREF
  POINT v26; // [rsp+B0h] [rbp-58h]
  POINT v27; // [rsp+B8h] [rbp-50h]
  __m128i v28; // [rsp+C0h] [rbp-48h]
  struct tagWINDOWPLACEMENT v29; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v30[16]; // [rsp+100h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  wndpl = -2LL;
  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  if ( !IsWindowVisible(v3) )
    return 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  if ( (**(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *))a2)(
         a2,
         &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1,
         &v17) >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v17 + 72LL))(v17, v25);
    LastErrorFailHr = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D4,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v4);
LABEL_34:
      Microsoft::WRL::WeakRef::~WeakRef(&v17);
      return (unsigned int)LastErrorFailHr;
    }
    memset_0(&wndpl_8, 0, sizeof(wndpl_8));
    wndpl_8.length = 44;
    wndpl_8.flags = v25[0];
    wndpl_8.showCmd = v25[1];
    wndpl_8.ptMinPosition = v26;
    wndpl_8.ptMaxPosition = v27;
    wndpl_8.rcNormalPosition = (RECT)v28;
    *(_OWORD *)&v29.length = *(_OWORD *)&wndpl_8.length;
    *(_OWORD *)&v29.ptMinPosition.y = *(_OWORD *)&wndpl_8.ptMinPosition.y;
    *(_QWORD *)&v29.rcNormalPosition.top = *(__int64 *)((char *)v28.m128i_i64 + 4);
    v29.rcNormalPosition.bottom = _mm_cvtsi128_si32(_mm_srli_si128(v28, 12));
    v29.flags = v25[0] | 4;
    LastErrorFailHr = CWin32ApplicationView::SetWindowPosition(v6, v3, &v29);
    if ( LastErrorFailHr < 0 )
      goto LABEL_34;
  }
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( (**(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *))a2)(
         a2,
         &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
         &v16) >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, &v19);
    LastErrorFailHr = v7;
    if ( v7 < 0 )
    {
      v8 = 482LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_33;
    }
    if ( (_DWORD)v19 == 4 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 24LL))(v16, v30);
      LastErrorFailHr = v7;
      if ( v7 < 0 )
      {
        v8 = 488LL;
        goto LABEL_31;
      }
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 40LL))(v16, v21);
      LastErrorFailHr = v7;
      if ( v7 < 0 )
      {
        v8 = 491LL;
        goto LABEL_31;
      }
      v18 = 0LL;
      v22 = &v18;
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v20);
      if ( v20 )
        lambda_a869f7513e8efdf703e23387751d77d1_::operator()(&v22, v20);
      Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v20);
      LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, HWND, _BYTE *, _QWORD, int))(*(_QWORD *)v18 + 24LL))(
                          v18,
                          v3,
                          v30,
                          0LL,
                          v21[0]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    }
    else
    {
      if ( v17 )
        goto LABEL_35;
      if ( (_DWORD)v19 != 3 )
      {
LABEL_19:
        if ( !v16 )
        {
          wndpl_8.length = 44;
          memset_0(&wndpl_8.flags, 0, 0x28uLL);
          if ( !GetWindowPlacement(v3, &wndpl_8) )
          {
            LastErrorFailHr = wil::details::GetLastErrorFailHr(v10, v9, v11, v12);
            goto LABEL_33;
          }
          showCmd = wndpl_8.showCmd;
          if ( wndpl_8.showCmd == 3 )
            showCmd = 9;
          wndpl_8.showCmd = showCmd;
          v7 = (*(__int64 (__fastcall **)(struct IApplicationViewPosition *, RECT *))(*(_QWORD *)a2 + 24LL))(
                 a2,
                 &wndpl_8.rcNormalPosition);
          LastErrorFailHr = v7;
          if ( v7 < 0 )
          {
            v8 = 513LL;
            goto LABEL_31;
          }
          wndpl_8.flags |= 4u;
          LastErrorFailHr = CWin32ApplicationView::SetWindowPosition(v14, v3, &wndpl_8);
          if ( LastErrorFailHr < 0 )
            goto LABEL_33;
        }
        goto LABEL_35;
      }
      v18 = 0LL;
      v22 = &v18;
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v20);
      if ( v20 )
        lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator()(&v22, v20);
      Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v20);
      LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, HWND, __int64))(*(_QWORD *)v18 + 32LL))(v18, v3, 5LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    }
    if ( LastErrorFailHr < 0 )
    {
LABEL_33:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v16);
      goto LABEL_34;
    }
  }
  if ( !v17 )
    goto LABEL_19;
LABEL_35:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v16);
  Microsoft::WRL::WeakRef::~WeakRef(&v17);
  return 0LL;
}
