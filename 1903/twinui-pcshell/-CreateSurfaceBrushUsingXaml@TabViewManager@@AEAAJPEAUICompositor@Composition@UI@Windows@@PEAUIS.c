/*
 * XREFs of ?CreateSurfaceBrushUsingXaml@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x18022E220
 * Callers:
 *     ?CreateStaticThumbnailVisual@TabViewManager@@AEAA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIShellTabImage@Tabs@ComposableShell@Internal@7@AEBUSize@Foundation@7@@Z @ 0x18022D7E0 (-CreateStaticThumbnailVisual@TabViewManager@@AEAA-AV-$com_ptr_t@UIVisual@Composition@UI@Windows@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B924 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabViewManager::CreateSurfaceBrushUsingXaml(
        TabViewManager *this,
        struct Windows::UI::Composition::ICompositor *a2,
        struct IStream *a3,
        struct Windows::UI::Composition::ICompositionSurfaceBrush **a4)
{
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD); // rdi
  int v16; // eax
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v18; // rax
  __int64 (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v23; // [rsp+78h] [rbp+38h] BYREF

  v21[1] = -2LL;
  *a4 = 0LL;
  v20 = 0LL;
  v7 = CreateRandomAccessStreamOverStream(a3, 0LL, &GUID_905a0fe1_bc53_11df_8c49_001e4fc686da, &v20);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB06,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v7);
LABEL_15:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
    return (unsigned int)v8;
  }
  v19 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 178) + 72LL))(
         *((_QWORD *)this + 178),
         v20,
         &v19);
  v8 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB09,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v9);
LABEL_14:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
    goto LABEL_15;
  }
  v10 = *(_QWORD *)a2;
  v23 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositor *, struct Windows::UI::Composition::ICompositionSurfaceBrush **))(v10 + 184))(
          a2,
          &v23);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = (unsigned int)v11;
    v13 = 2828LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)v12);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v23);
    goto LABEL_14;
  }
  v14 = (__int64)v23;
  v15 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 104LL);
  v16 = (**v19)(v19, &GUID_1527540d_42c7_47a6_a408_668f79a90dfb, v21);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5421LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v16);
  v8 = v15(v14, v21[0]);
  if ( v21[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
  if ( v8 < 0 )
  {
    v12 = (unsigned int)v8;
    v13 = 2829LL;
    goto LABEL_13;
  }
  v18 = v23;
  v23 = 0LL;
  *a4 = v18;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v23);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v19);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v20);
  return 0LL;
}
