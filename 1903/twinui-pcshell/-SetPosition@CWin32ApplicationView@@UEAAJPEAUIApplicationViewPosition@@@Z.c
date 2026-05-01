/*
 * XREFs of ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x18015BD90
 * Callers:
 *     ?ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x180159F40 (-ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z.c)
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801017C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     _lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator() @ 0x180159160 (_lambda_3862d1887d3f5208accb0e0621fd5fc4_--operator().c)
 *     _lambda_a869f7513e8efdf703e23387751d77d1_::operator() @ 0x180159230 (_lambda_a869f7513e8efdf703e23387751d77d1_--operator().c)
 *     ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z @ 0x18015C1F0 (-SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWin32ApplicationView::SetPosition(CWin32ApplicationView *this, struct IApplicationViewPosition *a2)
{
  HWND v3; // rsi
  int v4; // eax
  CWin32ApplicationView *v5; // rcx
  signed int LastErrorFailHr; // ebx
  int v7; // eax
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rdx
  wil::details *v11; // rcx
  __int64 v12; // r8
  const char *v13; // r9
  volatile signed __int32 *v14; // rbx
  UINT showCmd; // eax
  CWin32ApplicationView *v16; // rcx
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21[2]; // [rsp+50h] [rbp-B8h] BYREF
  volatile signed __int32 *v22; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 wndpl; // [rsp+68h] [rbp-A0h]
  WINDOWPLACEMENT wndpl_8; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v26[2]; // [rsp+A0h] [rbp-68h] BYREF
  POINT v27; // [rsp+A8h] [rbp-60h]
  POINT v28; // [rsp+B0h] [rbp-58h]
  __m128i v29; // [rsp+B8h] [rbp-50h]
  struct tagWINDOWPLACEMENT v30; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v31[16]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  wndpl = -2LL;
  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  if ( !IsWindowVisible(v3) )
    return 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  if ( (**(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *))a2)(
         a2,
         &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1,
         &v19) >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v19 + 72LL))(v19, v26);
    LastErrorFailHr = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D4,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v4);
LABEL_34:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
      return (unsigned int)LastErrorFailHr;
    }
    wndpl_8.length = 44;
    wndpl_8.flags = v26[0];
    wndpl_8.showCmd = v26[1];
    wndpl_8.ptMinPosition = v27;
    wndpl_8.ptMaxPosition = v28;
    wndpl_8.rcNormalPosition = (RECT)v29;
    *(_OWORD *)&v30.length = *(_OWORD *)&wndpl_8.length;
    *(_OWORD *)&v30.ptMinPosition.y = *(_OWORD *)&wndpl_8.ptMinPosition.y;
    *(_QWORD *)&v30.rcNormalPosition.top = *(__int64 *)((char *)v29.m128i_i64 + 4);
    v30.rcNormalPosition.bottom = _mm_cvtsi128_si32(_mm_srli_si128(v29, 12));
    v30.flags = v26[0] | 4;
    LastErrorFailHr = CWin32ApplicationView::SetWindowPosition(v5, v3, &v30);
    if ( LastErrorFailHr < 0 )
      goto LABEL_34;
  }
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  if ( (**(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *))a2)(
         a2,
         &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
         &v18) >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 32LL))(v18, v21);
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
    if ( v21[0] == 4 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 24LL))(v18, v31);
      LastErrorFailHr = v7;
      if ( v7 < 0 )
      {
        v8 = 488LL;
        goto LABEL_31;
      }
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 40LL))(v18, &v21[1]);
      LastErrorFailHr = v7;
      if ( v7 < 0 )
      {
        v8 = 491LL;
        goto LABEL_31;
      }
      v20 = 0LL;
      v23 = (volatile signed __int32 *)&v20;
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v22);
      v9 = v22;
      if ( v22 )
      {
        lambda_a869f7513e8efdf703e23387751d77d1_::operator()((__int64 **)&v23, (__int64)v22);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v9);
      }
      LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, HWND, _BYTE *, _QWORD, int))(*(_QWORD *)v20 + 24LL))(
                          v20,
                          v3,
                          v31,
                          0LL,
                          v21[1]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    }
    else
    {
      if ( v19 )
        goto LABEL_35;
      if ( v21[0] != 3 )
      {
LABEL_19:
        if ( !v18 )
        {
          wndpl_8.length = 44;
          memset_0(&wndpl_8.flags, 0, 0x28uLL);
          if ( !GetWindowPlacement(v3, &wndpl_8) )
          {
            LastErrorFailHr = wil::details::GetLastErrorFailHr(v11, v10, v12, v13);
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
          LastErrorFailHr = CWin32ApplicationView::SetWindowPosition(v16, v3, &wndpl_8);
          if ( LastErrorFailHr < 0 )
            goto LABEL_33;
        }
        goto LABEL_35;
      }
      v20 = 0LL;
      v22 = (volatile signed __int32 *)&v20;
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v23);
      v14 = v23;
      if ( v23 )
      {
        lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator()((__int64 **)&v22, (__int64)v23);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v14);
      }
      LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, HWND, __int64))(*(_QWORD *)v20 + 32LL))(v20, v3, 5LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    }
    if ( LastErrorFailHr < 0 )
    {
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      goto LABEL_34;
    }
  }
  if ( !v19 )
    goto LABEL_19;
LABEL_35:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
  return 0LL;
}
