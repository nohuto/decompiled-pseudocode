/*
 * XREFs of ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180222768
 * Callers:
 *     ?HandleRecoveryForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x180220050 (-HandleRecoveryForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180222E68 (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_OnShellStateChanged@HolographicPositioner@@AEAAJW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x180224474 (-_OnShellStateChanged@HolographicPositioner@@AEAAJW4ShellState@Holographic@Shell@Internal@Window.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@@Z @ 0x180053AD8 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18022330C (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x180224FF0 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostI.c)
 *     ?CreateForView@ViewHostItemFactory@Holographic@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@AEAVAsyncEventSerialInvocationContextToken@7@PEAUIServiceProvider@@@Z @ 0x180237E78 (-CreateForView@ViewHostItemFactory@Holographic@Shell@Internal@Windows@@YA-AV-$com_ptr_t@UIViewHo.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18042E470 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_CloseView(HolographicPositioner *this, struct IApplicationView *a2)
{
  IUnknown **ViewHostItem; // rax
  IUnknown *v5; // rbx
  __int64 v6; // rcx
  IUnknown **v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  IUnknown *punk; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF
  void *ppvOut; // [rsp+88h] [rbp+38h] BYREF

  v17[1] = -2LL;
  LODWORD(v19) = 0;
  if ( !HolographicPositioner::_IsViewWin32Slate(a2) )
  {
    ppvOut = 0LL;
    punk = 0LL;
    LODWORD(v19) = 2;
    (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL))(
      (char *)this + 8,
      &GUID_00000000_0000_0000_c000_000000000046,
      &punk);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v8 = IUnknown_QueryService(punk, &stru_180518910, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    if ( (v8 & 0x80000000) == 0 )
    {
      v14 = ApplicationViewHelpers::CloseView(a2, ppvOut, 10LL);
      v8 = v14;
      if ( v14 >= 0 )
      {
        v8 = 0;
        goto LABEL_18;
      }
      v12 = (unsigned int)v14;
      v13 = 2145LL;
    }
    else
    {
      v12 = v8;
      v13 = 2138LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)v12);
LABEL_18:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    return v8;
  }
  ViewHostItem = (IUnknown **)HolographicPositioner::_FindViewHostItem(this, &v19, a2);
  v5 = *ViewHostItem;
  *ViewHostItem = 0LL;
  punk = v5;
  v6 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v5
    || (v7 = (IUnknown **)Windows::Internal::Shell::Holographic::ViewHostItemFactory::CreateForView(
                            v17,
                            a2,
                            (char *)this + 288,
                            ((unsigned __int64)this + 56) & -(__int64)(this != 0LL)),
        v5 = *v7,
        *v7 = 0LL,
        punk = v5,
        wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(v17),
        v5) )
  {
    v11 = HolographicPositioner::_TransitionViewFromHolographic(
            this,
            a2,
            (struct Windows::Internal::Shell::Holographic::IViewHostItem *)v5);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v8 = 0;
      goto LABEL_11;
    }
    v9 = (unsigned int)v11;
    v10 = 2133LL;
  }
  else
  {
    v8 = -2147024882;
    v9 = 2147942414LL;
    v10 = 2130LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)v9);
LABEL_11:
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&punk);
  return v8;
}
