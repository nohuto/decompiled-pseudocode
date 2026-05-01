/*
 * XREFs of ?PresentationChangedForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1803C2A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18007DA58 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18018A27C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18018CA84 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1803C2440 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDesktopPositioner::PresentationChangedForView(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  struct IInspectableVtbl *lpVtbl; // rax
  __int64 (__fastcall *v6)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct IPresentationRequestedArgs *v11; // [rsp+58h] [rbp-39h] BYREF
  int v12; // [rsp+60h] [rbp-31h] BYREF
  struct IImmersiveMonitor *v13; // [rsp+68h] [rbp-29h] BYREF
  __int64 v14; // [rsp+70h] [rbp-21h] BYREF
  int v15; // [rsp+78h] [rbp-19h] BYREF
  _DWORD v16[3]; // [rsp+7Ch] [rbp-15h] BYREF
  struct tagRECT v17; // [rsp+88h] [rbp-9h] BYREF
  struct tagRECT v18; // [rsp+98h] [rbp+7h] BYREF
  _BYTE v19[8]; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+1Fh]
  struct tagRECT v21; // [rsp+B8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v20 = -2LL;
  lpVtbl = a3->lpVtbl;
  v11 = 0LL;
  if ( ((int (__fastcall *)(struct IInspectable *, GUID *, struct IPresentationRequestedArgs **))lpVtbl->QueryInterface)(
         a3,
         &GUID_c7eb508d_5e36_46e2_8af4_b6f813539dbf,
         &v11) < 0 )
    goto LABEL_13;
  v12 = 0;
  *(_QWORD *)&v18.left = 0LL;
  *(_QWORD *)&v18.right = 0LL;
  v16[0] = 0;
  v15 = 0;
  (*(void (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)v11 + 72LL))(v11, &v15);
  (*(void (__fastcall **)(struct IPresentationRequestedArgs *, _DWORD *))(*(_QWORD *)v11 + 88LL))(v11, v16);
  (*(void (__fastcall **)(struct IPresentationRequestedArgs *, _BYTE *))(*(_QWORD *)v11 + 80LL))(v11, v19);
  v14 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v7 = v6(a2, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &v14);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v14 + 24LL))(v14, &v21);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 736LL;
      goto LABEL_6;
    }
    v13 = 0LL;
    v17 = v21;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
    if ( (int)CDesktopPositioner::_GetRectAndFlagsFromPresentationArgs(
                (CDesktopPositioner *)((char *)this - 136),
                v11,
                &v17,
                &v18,
                (enum TRY_POSITION_VIEW_FLAGS *)&v12,
                &v13) >= 0 )
    {
      Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v17);
      if ( !*(_QWORD *)&v17.left )
      {
        v8 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E8,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)0x8007000ELL);
        Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v17.left);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
        goto LABEL_10;
      }
      CDesktopPositioner::PositionViewWithOptions(
        (__int64)this - 136,
        a2,
        (unsigned int *)&v18,
        v12,
        *(__int64 **)&v17.left,
        8,
        (__int64)v13);
      Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v17.left);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
LABEL_13:
    v8 = 0;
    goto LABEL_14;
  }
  v9 = 733LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v7);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
LABEL_14:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v11);
  return v8;
}
