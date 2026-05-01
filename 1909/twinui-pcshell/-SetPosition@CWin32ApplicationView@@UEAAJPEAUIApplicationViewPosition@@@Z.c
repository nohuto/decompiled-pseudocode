/*
 * XREFs of ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x18017B040
 * Callers:
 *     ?ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x1801791E0 (-ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003E8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18003E9AC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801207DC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     _lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator() @ 0x1801783E0 (_lambda_3862d1887d3f5208accb0e0621fd5fc4_--operator().c)
 *     _lambda_a869f7513e8efdf703e23387751d77d1_::operator() @ 0x1801784B0 (_lambda_a869f7513e8efdf703e23387751d77d1_--operator().c)
 *     ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z @ 0x18017B4A0 (-SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z.c)
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
  __int64 *v9; // rbx
  volatile int *v10; // rdx
  __int64 v11; // rdx
  wil::details *v12; // rcx
  __int64 v13; // r8
  const char *v14; // r9
  __int64 *v15; // rbx
  volatile int *v16; // rdx
  UINT showCmd; // eax
  CWin32ApplicationView *v18; // rcx
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  int v23[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 wndpl; // [rsp+68h] [rbp-A0h]
  WINDOWPLACEMENT wndpl_8; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v28[2]; // [rsp+A0h] [rbp-68h] BYREF
  POINT v29; // [rsp+A8h] [rbp-60h]
  POINT v30; // [rsp+B0h] [rbp-58h]
  __m128i v31; // [rsp+B8h] [rbp-50h]
  struct tagWINDOWPLACEMENT v32; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v33[16]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  wndpl = -2LL;
  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  if ( !IsWindowVisible(v3) )
    return 0LL;
  v21 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  if ( (**(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *))a2)(
         a2,
         &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1,
         &v21) >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v21 + 72LL))(v21, v28);
    LastErrorFailHr = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D4,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v4);
LABEL_34:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
      return (unsigned int)LastErrorFailHr;
    }
    wndpl_8.length = 44;
    wndpl_8.flags = v28[0];
    wndpl_8.showCmd = v28[1];
    wndpl_8.ptMinPosition = v29;
    wndpl_8.ptMaxPosition = v30;
    wndpl_8.rcNormalPosition = (RECT)v31;
    *(_OWORD *)&v32.length = *(_OWORD *)&wndpl_8.length;
    *(_OWORD *)&v32.ptMinPosition.y = *(_OWORD *)&wndpl_8.ptMinPosition.y;
    *(_QWORD *)&v32.rcNormalPosition.top = *(__int64 *)((char *)v31.m128i_i64 + 4);
    v32.rcNormalPosition.bottom = _mm_cvtsi128_si32(_mm_srli_si128(v31, 12));
    v32.flags = v28[0] | 4;
    LastErrorFailHr = CWin32ApplicationView::SetWindowPosition(v5, v3, &v32);
    if ( LastErrorFailHr < 0 )
      goto LABEL_34;
  }
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  if ( (**(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *))a2)(
         a2,
         &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
         &v20) >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 32LL))(v20, v23);
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
    if ( v23[0] == 4 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v20 + 24LL))(v20, v33);
      LastErrorFailHr = v7;
      if ( v7 < 0 )
      {
        v8 = 488LL;
        goto LABEL_31;
      }
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 40LL))(v20, &v23[1]);
      LastErrorFailHr = v7;
      if ( v7 < 0 )
      {
        v8 = 491LL;
        goto LABEL_31;
      }
      v22 = 0LL;
      v25 = &v22;
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v24);
      v9 = v24;
      if ( v24 )
      {
        lambda_a869f7513e8efdf703e23387751d77d1_::operator()(&v25, (__int64)v24);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
          (__int64)v9,
          v10);
      }
      LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, HWND, _BYTE *, _QWORD, int))(*(_QWORD *)v22 + 24LL))(
                          v22,
                          v3,
                          v33,
                          0LL,
                          v23[1]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    }
    else
    {
      if ( v21 )
        goto LABEL_35;
      if ( v23[0] != 3 )
      {
LABEL_19:
        if ( !v20 )
        {
          wndpl_8.length = 44;
          memset_0(&wndpl_8.flags, 0, 0x28uLL);
          if ( !GetWindowPlacement(v3, &wndpl_8) )
          {
            LastErrorFailHr = wil::details::GetLastErrorFailHr(v12, v11, v13, v14);
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
          LastErrorFailHr = CWin32ApplicationView::SetWindowPosition(v18, v3, &wndpl_8);
          if ( LastErrorFailHr < 0 )
            goto LABEL_33;
        }
        goto LABEL_35;
      }
      v22 = 0LL;
      v24 = &v22;
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v25);
      v15 = v25;
      if ( v25 )
      {
        lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator()(&v24, (__int64)v25);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(
          (__int64)v15,
          v16);
      }
      LastErrorFailHr = (*(__int64 (__fastcall **)(__int64, HWND, __int64))(*(_QWORD *)v22 + 32LL))(v22, v3, 5LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    }
    if ( LastErrorFailHr < 0 )
    {
LABEL_33:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      goto LABEL_34;
    }
  }
  if ( !v21 )
    goto LABEL_19;
LABEL_35:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  return 0LL;
}
