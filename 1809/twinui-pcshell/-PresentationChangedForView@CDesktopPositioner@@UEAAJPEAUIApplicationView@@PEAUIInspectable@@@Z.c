/*
 * XREFs of ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x18033E360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1800572D0 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180065968 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??$query@U?$IVectorView@I@Collections@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IVectorView@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009564C (--$query@U-$IVectorView@I@Collections@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_excep.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowingEnvironment@ApplicationModel@Internal@Windows@@H@Z @ 0x18033DE44 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CDesktopPositioner::PresentationChangedForView(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  char v5; // di
  int ScaleFactorForRect; // esi
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v18; // [rsp+40h] [rbp-89h] BYREF
  __int64 v19; // [rsp+48h] [rbp-81h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-79h] BYREF
  __int64 v21; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v22; // [rsp+60h] [rbp-69h] BYREF
  __int64 v23; // [rsp+68h] [rbp-61h] BYREF
  unsigned int v24; // [rsp+70h] [rbp-59h] BYREF
  __int64 v25; // [rsp+78h] [rbp-51h] BYREF
  __int64 v26; // [rsp+80h] [rbp-49h] BYREF
  int v27; // [rsp+88h] [rbp-41h] BYREF
  int v28; // [rsp+8Ch] [rbp-3Dh] BYREF
  __int64 v29; // [rsp+90h] [rbp-39h] BYREF
  _QWORD v30[3]; // [rsp+98h] [rbp-31h] BYREF
  struct tagRECT v31; // [rsp+B0h] [rbp-19h] BYREF
  struct tagRECT v32; // [rsp+C0h] [rbp-9h] BYREF
  _QWORD v33[2]; // [rsp+D0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v30[1] = -2LL;
  v19 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_c7eb508d_5e36_46e2_8af4_b6f813539dbf,
         &v19) < 0 )
    goto LABEL_39;
  v5 = 0;
  *(_QWORD *)&v31.left = 0LL;
  *(_QWORD *)&v31.right = 0LL;
  ScaleFactorForRect = 100;
  v28 = 0;
  v27 = 0;
  v29 = 0LL;
  v23 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 56LL))(v19, &v29) >= 0 )
  {
    v7 = v19;
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(&v23);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 64LL))(v7, &v23) >= 0 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 72LL))(v19, &v27);
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 88LL))(v19, &v28);
      if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 96LL))(v19, &v22) < 0 || v22 )
        v5 = 2;
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 80LL))(v19, &v24);
      v20 = 0;
      v33[0] = 0LL;
      v33[1] = 0LL;
      v18 = 0LL;
      *(_QWORD *)&v32.left = 0LL;
      *(_QWORD *)&v32.right = 0LL;
      v21 = 0LL;
      if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v23 + 104LL))(
             v23,
             &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
             &v21) >= 0
        && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 32LL))(v21, &v20) >= 0
        && v20 == 2
        && (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v21 + 24LL))(v21, v33) >= 0 )
      {
        v18 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 80LL))(v23, &v18) >= 0
          && (*(int (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v18 + 72LL))(v18, &v32) >= 0 )
        {
          ScaleFactorForRect = GetScaleFactorForRect(&v32);
          v31.left = LODWORD(v33[0]) + ScaleFactorForRect * (int)v29 / 100;
          v31.top = HIDWORD(v33[0]) + ScaleFactorForRect * HIDWORD(v29) / 100;
          v5 |= 1u;
        }
      }
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
      wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
    }
  }
  v30[0] = 0LL;
  if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 48LL))(v19, v30) >= 0 )
  {
    if ( (v5 & 1) == 0 )
      ScaleFactorForRect = GetScaleFactorForRect(&v31);
    v31.right = v31.left + ScaleFactorForRect * LODWORD(v30[0]) / 100;
    v31.bottom = v31.top + ScaleFactorForRect * HIDWORD(v30[0]) / 100;
    v5 |= 4u;
  }
  v26 = 0LL;
  v25 = 0LL;
  v8 = v19;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, &v25) < 0 )
  {
LABEL_38:
    v32 = v31;
    CDesktopPositioner::PositionViewWithOptions((__int64)this - 136, a2, (unsigned int *)&v32, v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
LABEL_39:
    v10 = 0;
    goto LABEL_40;
  }
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    &v18,
    v25);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::Collections::IVectorView<unsigned int>>(
    &v18,
    (__int64)&v21);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v18);
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 56LL))(v21, &v22);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 775LL;
LABEL_27:
    v12 = (unsigned int)v9;
    goto LABEL_28;
  }
  if ( !v22 )
  {
LABEL_37:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
    goto LABEL_38;
  }
  if ( v22 <= 1 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v21 + 48LL))(v21, 0LL, &v24);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 782LL;
      goto LABEL_27;
    }
    v18 = 0LL;
    if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 40LL))(v19, &v20) >= 0 )
    {
      v13 = *((_QWORD *)this + 23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 40LL))(v13, v20, &v18);
      v10 = v14;
      if ( v14 < 0 )
      {
        v15 = 788LL;
LABEL_34:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        goto LABEL_35;
      }
      v16 = v18;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 88LL))(v16, v24, &v26);
      v10 = v14;
      if ( v14 < 0 )
      {
        v15 = 789LL;
        goto LABEL_34;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    goto LABEL_37;
  }
  v10 = -2147024809;
  v12 = 2147942487LL;
  v11 = 779LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)v12);
LABEL_35:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v23);
LABEL_40:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
  return v10;
}
