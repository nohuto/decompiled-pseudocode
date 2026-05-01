/*
 * XREFs of ?CreateStaticThumbnailVisual@TabViewManager@@AEAA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIShellTabImage@Tabs@ComposableShell@Internal@7@AEBUSize@Foundation@7@@Z @ 0x18024CD90
 * Callers:
 *     ?OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerThumbnailEventArgs@3456@@Z @ 0x180253F70 (-OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIBufferByteAccess@Streams@Storage@Windows@@@?$com_ptr_t@UIBuffer@Streams@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBufferByteAccess@Streams@Storage@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A6A70 (--$query@UIBufferByteAccess@Streams@Storage@Windows@@@-$com_ptr_t@UIBuffer@Streams@Storage@Windo.c)
 *     ??$query@UICompositionBrush@Composition@UI@Windows@@@?$com_ptr_t@UICompositionSurfaceBrush@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UICompositionBrush@Composition@UI@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A6AC0 (--$query@UICompositionBrush@Composition@UI@Windows@@@-$com_ptr_t@UICompositionSurfaceBrush@Compo.c)
 *     ??$query@UIVisual@Composition@UI@Windows@@@?$com_ptr_t@UISpriteVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A6C00 (--$query@UIVisual@Composition@UI@Windows@@@-$com_ptr_t@UISpriteVisual@Composition@UI@Windows@@Ue.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x18024D6AC (-CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUn.c)
 *     ?CreateSurfaceBrushUsingXaml@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x18024D7D0 (-CreateSurfaceBrushUsingXaml@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIS.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall TabViewManager::CreateStaticThumbnailVisual(
        TabViewManager *this,
        _QWORD *a2,
        struct Windows::UI::Composition::ICompositor *a3,
        struct IUnknown *a4,
        __int64 *a5,
        unsigned int *a6)
{
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  _QWORD *v13; // rsi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD); // rdi
  _QWORD *v21; // rax
  int v22; // eax
  __m128 v23; // xmm6
  __m128 v24; // xmm7
  int v25; // eax
  struct IStream *v27; // [rsp+40h] [rbp-21h] BYREF
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v28; // [rsp+48h] [rbp-19h] BYREF
  __int64 v29; // [rsp+50h] [rbp-11h] BYREF
  __int64 v30; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+4Fh]

  v31[1] = -2LL;
  v10 = *a5;
  v30 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 48))(a5, &v30);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2856LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v30 + 56LL))(v30, &a5);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2859LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v13 = (_QWORD *)wil::com_ptr_t<Windows::Storage::Streams::IBuffer,wil::err_exception_policy>::query<Windows::Storage::Streams::IBufferByteAccess>(
                    &v30,
                    (__int64)&v28);
  v27 = 0LL;
  v14 = SHCreateMemoryStreamOnSharedBuffer(*v13, (unsigned int)a5, &v27);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2862LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v14);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v28);
  v28 = 0LL;
  if ( a4 )
  {
    v15 = TabViewManager::CreateSurfaceBrushUsingWIC(this, a3, a4, v27, &v28);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2870LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
  }
  else
  {
    v16 = TabViewManager::CreateSurfaceBrushUsingXaml(this, a3, v27, &v28);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2875LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v16);
  }
  v17 = *(_QWORD *)a3;
  v29 = 0LL;
  v18 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositor *, __int64 *))(v17 + 176))(a3, &v29);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2880LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v19 = v29;
  v20 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 56LL);
  v21 = (_QWORD *)wil::com_ptr_t<Windows::UI::Composition::ICompositionSurfaceBrush,wil::err_exception_policy>::query<Windows::UI::Composition::ICompositionBrush>(
                    &v28,
                    (__int64)v31);
  v22 = v20(v19, *v21);
  if ( v22 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2881LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v22);
  if ( v31[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v31[0] + 16LL))(v31[0]);
  v23 = (__m128)*a6;
  v24 = (__m128)a6[1];
  wil::com_ptr_t<Windows::UI::Composition::ISpriteVisual,wil::err_exception_policy>::query<Windows::UI::Composition::IVisual>(
    &v29,
    (__int64)a2);
  v25 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*a2 + 288LL))(
          *a2,
          _mm_unpacklo_ps(v23, v24).m128_u64[0]);
  if ( v25 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2885LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v25);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v28);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v27);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v30);
  return a2;
}
