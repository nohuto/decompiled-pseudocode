/*
 * XREFs of ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x180310260
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180016A64 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x18008578E (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802EED50 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1802EEDD4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ActivitiesInShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802FD908 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ActivitiesInShell@@@wil@@CAX_NW4Repo.c)
 *     ??$As@UIVirtualDesktopNewElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18030F500 (--$As@UIVirtualDesktopNewElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$C.c)
 *     ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x180310094 (-_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ.c)
 */

void __fastcall CVirtualDesktopBarElement::v_LayoutChildren(CVirtualDesktopBarElement *this)
{
  int v2; // edx
  __int64 v3; // rcx
  int v4; // eax
  int v5; // edi
  __m128i v6; // xmm6
  __int32 v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  LANGID ThreadUILanguage_0; // ax
  __int32 v11; // edi
  __int32 v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int32 v16; // ecx
  _DWORD v17[2]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v18; // [rsp+40h] [rbp-21h] BYREF
  __int64 v19[2]; // [rsp+48h] [rbp-19h] BYREF
  __m128i v20; // [rsp+58h] [rbp-9h] BYREF
  __int64 v21; // [rsp+68h] [rbp+7h] BYREF
  int v22; // [rsp+70h] [rbp+Fh]
  int v23; // [rsp+74h] [rbp+13h]
  __m128i v24; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v21 = *((_QWORD *)this + 28);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v19, &v21, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  v2 = *((_DWORD *)this + 15);
  v3 = *((_QWORD *)this + 11);
  LODWORD(v21) = *((_DWORD *)this + 14);
  v22 = v21 + 1;
  HIDWORD(v21) = v2;
  v23 = v2 + 1;
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, &v21, 0LL, 0LL);
  CVirtualDesktopBarElement::_LayoutBackground(this);
  v4 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v20.m128i_i64[0] = 0LL;
  v5 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v17[0] = 0;
  v17[1] = 0;
  v18 = 0LL;
  v20.m128i_i64[1] = __PAIR64__(v4, v5);
  v6 = v20;
  v7 = _mm_srli_si128(v20, 8).m128i_i32[1];
  v8 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopNewElement>((_QWORD *)this + 94, &v18);
  if ( v8 < 0 )
  {
    v9 = 265LL;
LABEL_3:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_8;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v18 + 24LL))(v18, v17);
  if ( v8 < 0 )
  {
    v9 = 266LL;
    goto LABEL_3;
  }
  if ( v7 <= v17[0] )
    v7 = v17[0];
LABEL_8:
  v20.m128i_i32[0] = v20.m128i_i32[2] - v7;
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
  {
    v11 = v5 - v20.m128i_i32[2];
    v12 = v11 - v20.m128i_i32[0];
    v20.m128i_i32[0] = v11;
    v20.m128i_i32[2] += v12;
  }
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 94) + 104LL))(*((_QWORD *)this + 94), &v20);
  wil::Feature<__WilFeatureTraits_Feature_ActivitiesInShell>::ReportUsageToService(v14, v13, v15);
  v16 = *((_DWORD *)this + 84);
  v24 = v6;
  if ( v16 <= v20.m128i_i32[2] - v20.m128i_i32[0] )
    v16 = v20.m128i_i32[2] - v20.m128i_i32[0];
  v24.m128i_i32[2] -= v16;
  v24.m128i_i32[0] = v16;
  (*(void (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 93) + 104LL))(*((_QWORD *)this + 93), &v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v19);
}
