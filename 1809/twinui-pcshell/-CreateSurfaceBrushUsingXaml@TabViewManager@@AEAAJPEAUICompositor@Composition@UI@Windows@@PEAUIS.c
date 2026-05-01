/*
 * XREFs of ?CreateSurfaceBrushUsingXaml@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x1801DA13C
 * Callers:
 *     ?CreateStaticThumbnailVisual@TabViewManager@@AEAA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIShellTabImage@Tabs@ComposableShell@Internal@7@AEBUSize@Foundation@7@@Z @ 0x1801D9730 (-CreateStaticThumbnailVisual@TabViewManager@@AEAA-AV-$com_ptr_t@UIVisual@Composition@UI@Windows@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabViewManager::CreateSurfaceBrushUsingXaml(
        TabViewManager *this,
        struct Windows::UI::Composition::ICompositor *a2,
        struct IStream *a3,
        struct Windows::UI::Composition::ICompositionSurfaceBrush **a4)
{
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbx
  int v15; // eax
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v17; // rax
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v22; // [rsp+78h] [rbp+38h] BYREF

  v20[1] = -2LL;
  *a4 = 0LL;
  v19 = 0LL;
  v7 = CreateRandomAccessStreamOverStream(a3, 0LL, &GUID_905a0fe1_bc53_11df_8c49_001e4fc686da, &v19);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC4,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v7);
LABEL_15:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
    return (unsigned int)v8;
  }
  v9 = *((_QWORD *)this + 177);
  v18 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 72LL))(v9, v19, &v18);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC7,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v10);
LABEL_14:
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
    goto LABEL_15;
  }
  v22 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositor *, struct Windows::UI::Composition::ICompositionSurfaceBrush **))(*(_QWORD *)a2 + 184LL))(
          a2,
          &v22);
  v8 = v11;
  if ( v11 < 0 )
  {
    v12 = (unsigned int)v11;
    v13 = 3274LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)v12);
    wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v22);
    goto LABEL_14;
  }
  v14 = (__int64)v22;
  v15 = (**v18)(v18, &GUID_1527540d_42c7_47a6_a408_668f79a90dfb, v20);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5800LL,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v15);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 104LL))(v14, v20[0]);
  if ( v20[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 16LL))(v20[0]);
  if ( v8 < 0 )
  {
    v12 = (unsigned int)v8;
    v13 = 3275LL;
    goto LABEL_13;
  }
  v17 = v22;
  v22 = 0LL;
  *a4 = v17;
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v22);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v18);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v19);
  return 0LL;
}
