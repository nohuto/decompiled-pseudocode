/*
 * XREFs of _lambda_f4a572d4522d0cfba348286ca4c2df10_::operator() @ 0x18033C1B8
 * Callers:
 *     ?OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z @ 0x18033D990 (-OnViewClosing@CDesktopPositioner@@UEAAJPEAUIApplicationView@@H@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0unique_animation_clock@@QEAA@AEBU_GUID@@KK@Z @ 0x1801F60B0 (--0unique_animation_clock@@QEAA@AEBU_GUID@@KK@Z.c)
 *     ?_IsViewTabbed@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180341138 (-_IsViewTabbed@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_f4a572d4522d0cfba348286ca4c2df10_::operator()(__int64 a1)
{
  CDesktopPositioner *v2; // rcx
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v12[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v13[32]; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  char v15; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+28h] BYREF
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  __int64 v18; // [rsp+98h] [rbp+38h] BYREF

  v12[1] = -2LL;
  v2 = *(CDesktopPositioner **)a1;
  if ( *((_QWORD *)v2 + 39) && CDesktopPositioner::_IsViewTabbed(v2, **(struct IApplicationView ***)(a1 + 8)) )
  {
    v18 = 0LL;
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 312LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, **(_QWORD **)(a1 + 8), &v18);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x146,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v4);
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      return v5;
    }
    if ( v18 )
    {
      v17 = 0LL;
      v6 = *(_QWORD *)(*(_QWORD *)a1 + 312LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v6 + 56LL))(
             v6,
             **(_QWORD **)(a1 + 8),
             &GUID_f264283f_b510_4555_80ed_4c7216018854,
             &v17);
      v5 = v7;
      if ( v7 < 0 )
      {
        v8 = 333LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v7);
LABEL_18:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        goto LABEL_19;
      }
      if ( v17 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 160LL))(v17, &v15);
        v5 = v7;
        if ( v7 < 0 )
        {
          v8 = 341LL;
          goto LABEL_11;
        }
        if ( !v15 )
        {
          v12[0] = 0LL;
          v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 56LL))(v17, v12);
          v5 = v9;
          if ( v9 < 0 )
          {
            v10 = 345LL;
LABEL_17:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v10,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v9);
            wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v12);
            goto LABEL_18;
          }
          v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12[0] + 56LL))(v12[0], &v16);
          v5 = v9;
          if ( v9 < 0 )
          {
            v10 = 348LL;
            goto LABEL_17;
          }
          if ( v16 > 1 )
          {
            **(_DWORD **)(a1 + 16) = 93;
            **(_DWORD **)(a1 + 24) = 536870914;
            unique_animation_clock::unique_animation_clock(
              (unique_animation_clock *)v13,
              &AnimationClock_TabSwitch,
              0x3E8u,
              0);
          }
          wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v12);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    }
    else
    {
      **(_BYTE **)(a1 + 32) = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  }
  return 0LL;
}
