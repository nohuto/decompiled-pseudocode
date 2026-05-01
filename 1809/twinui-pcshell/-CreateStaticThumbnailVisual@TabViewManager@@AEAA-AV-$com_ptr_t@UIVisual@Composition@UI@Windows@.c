/*
 * XREFs of ?CreateStaticThumbnailVisual@TabViewManager@@AEAA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIShellTabImage@Tabs@ComposableShell@Internal@7@AEBUSize@Foundation@7@@Z @ 0x1801D9730
 * Callers:
 *     ?OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerThumbnailEventArgs@3456@@Z @ 0x1801E1A30 (-OnThumbnailRequested@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Wind.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180019B98 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIBufferByteAccess@Streams@Storage@Windows@@@?$com_ptr_t@UIBuffer@Streams@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBufferByteAccess@Streams@Storage@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18008FCF0 (--$query@UIBufferByteAccess@Streams@Storage@Windows@@@-$com_ptr_t@UIBuffer@Streams@Storage@Windo.c)
 *     ??$query@UICompositionBrush@Composition@UI@Windows@@@?$com_ptr_t@UICompositionSurfaceBrush@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UICompositionBrush@Composition@UI@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18008FD40 (--$query@UICompositionBrush@Composition@UI@Windows@@@-$com_ptr_t@UICompositionSurfaceBrush@Compo.c)
 *     ??$query@UIVisual@Composition@UI@Windows@@@?$com_ptr_t@UISpriteVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIVisual@Composition@UI@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18008FE80 (--$query@UIVisual@Composition@UI@Windows@@@-$com_ptr_t@UISpriteVisual@Composition@UI@Windows@@Ue.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUnknown@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x1801DA018 (-CreateSurfaceBrushUsingWIC@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIUn.c)
 *     ?CreateSurfaceBrushUsingXaml@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIStream@@PEAPEAUICompositionSurfaceBrush@345@@Z @ 0x1801DA13C (-CreateSurfaceBrushUsingXaml@TabViewManager@@AEAAJPEAUICompositor@Composition@UI@Windows@@PEAUIS.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall TabViewManager::CreateStaticThumbnailVisual(
        TabViewManager *this,
        _QWORD *a2,
        struct Windows::UI::Composition::ICompositor *a3,
        struct IUnknown *a4,
        __int64 a5,
        unsigned int *a6)
{
  int v10; // eax
  int v11; // eax
  _QWORD *v12; // rsi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rbx
  _QWORD *v18; // rax
  int v19; // eax
  __m128 v20; // xmm6
  __m128 v21; // xmm7
  int v22; // eax
  struct IStream *v24; // [rsp+40h] [rbp-21h] BYREF
  struct Windows::UI::Composition::ICompositionSurfaceBrush *v25; // [rsp+48h] [rbp-19h] BYREF
  __int64 v26; // [rsp+50h] [rbp-11h] BYREF
  __int64 v27; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v28[2]; // [rsp+60h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+4Fh]

  v28[1] = -2LL;
  v27 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a5 + 48LL))(a5, &v27);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      3302LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 56LL))(v27, &a5);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      3305LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = (_QWORD *)wil::com_ptr_t<Windows::Storage::Streams::IBuffer,wil::err_exception_policy>::query<Windows::Storage::Streams::IBufferByteAccess>(
                    &v27,
                    (__int64)&v25);
  v24 = 0LL;
  v13 = SHCreateMemoryStreamOnSharedBuffer(*v12, (unsigned int)a5, &v24);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      3308LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v13);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v25);
  v25 = 0LL;
  if ( a4 )
  {
    v14 = TabViewManager::CreateSurfaceBrushUsingWIC(this, a3, a4, v24, &v25);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3316LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
  }
  else
  {
    v15 = TabViewManager::CreateSurfaceBrushUsingXaml(this, a3, v24, &v25);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3321LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v15);
  }
  v26 = 0LL;
  v16 = (*(__int64 (__fastcall **)(struct Windows::UI::Composition::ICompositor *, __int64 *))(*(_QWORD *)a3 + 176LL))(
          a3,
          &v26);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      3326LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v17 = v26;
  v18 = (_QWORD *)wil::com_ptr_t<Windows::UI::Composition::ICompositionSurfaceBrush,wil::err_exception_policy>::query<Windows::UI::Composition::ICompositionBrush>(
                    &v25,
                    (__int64)v28);
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 56LL))(v17, *v18);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      3327LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v19);
  if ( v28[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
  v20 = (__m128)*a6;
  v21 = (__m128)a6[1];
  wil::com_ptr_t<Windows::UI::Composition::ISpriteVisual,wil::err_exception_policy>::query<Windows::UI::Composition::IVisual>(
    &v26,
    (__int64)a2);
  v22 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)*a2 + 288LL))(
          *a2,
          _mm_unpacklo_ps(v20, v21).m128_u64[0]);
  if ( v22 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      3331LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v22);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v25);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)&v24);
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v27);
  return a2;
}
