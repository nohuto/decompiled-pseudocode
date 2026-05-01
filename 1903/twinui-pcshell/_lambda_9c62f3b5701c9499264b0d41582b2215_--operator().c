/*
 * XREFs of _lambda_9c62f3b5701c9499264b0d41582b2215_::operator() @ 0x1803A0C44
 * Callers:
 *     ?OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x1803A2A10 (-OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0unique_animation_clock@@QEAA@AEBU_GUID@@KK@Z @ 0x180247298 (--0unique_animation_clock@@QEAA@AEBU_GUID@@KK@Z.c)
 *     ?_IsViewTabbed@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1803A6078 (-_IsViewTabbed@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_9c62f3b5701c9499264b0d41582b2215_::operator()(__int64 a1)
{
  CDesktopPositioner *v2; // rcx
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, GUID *, __int64 **); // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v15[2]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v16[40]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+20h]
  char v18; // [rsp+90h] [rbp+28h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+30h] BYREF
  __int64 *v20; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+40h] BYREF

  v15[1] = -2LL;
  v2 = *(CDesktopPositioner **)a1;
  if ( *((_QWORD *)v2 + 39) && CDesktopPositioner::_IsViewTabbed(v2, **(struct IApplicationView ***)(a1 + 8)) )
  {
    v15[0] = 0LL;
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 312LL);
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
    v5 = v4(v3, **(_QWORD **)(a1 + 8), v15);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x154,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v5);
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
      return v6;
    }
    if ( v15[0] )
    {
      v20 = 0LL;
      v7 = *(_QWORD *)(*(_QWORD *)a1 + 312LL);
      v8 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 **))(*(_QWORD *)v7 + 64LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      v9 = v8(v7, **(_QWORD **)(a1 + 8), &GUID_f264283f_b510_4555_80ed_4c7216018854, &v20);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = 347LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v9);
LABEL_18:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
        goto LABEL_19;
      }
      if ( v20 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64 *, char *))(*v20 + 160))(v20, &v18);
        v6 = v9;
        if ( v9 < 0 )
        {
          v10 = 355LL;
          goto LABEL_11;
        }
        if ( !v18 )
        {
          v21 = 0LL;
          v11 = *v20;
          v21 = 0LL;
          v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 56))(v20, &v21);
          v6 = v12;
          if ( v12 < 0 )
          {
            v13 = 359LL;
LABEL_17:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v13,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v12);
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
            goto LABEL_18;
          }
          v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 56LL))(v21, &v19);
          v6 = v12;
          if ( v12 < 0 )
          {
            v13 = 362LL;
            goto LABEL_17;
          }
          if ( v19 > 1 )
          {
            **(_DWORD **)(a1 + 16) = 93;
            **(_DWORD **)(a1 + 24) = 536870914;
            unique_animation_clock::unique_animation_clock(
              (unique_animation_clock *)v16,
              &AnimationClock_TabSwitch,
              0x3E8u,
              0);
          }
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    }
    else
    {
      **(_BYTE **)(a1 + 32) = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  }
  return 0LL;
}
