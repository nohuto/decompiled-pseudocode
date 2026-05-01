/*
 * XREFs of ?AnimatePositionChanged@VirtualDesktopAddAnimationCoordinator@@MEAAXAEBUPositionChangedInfo@ItemAnimationCoordinatorBase@@@Z @ 0x180324F20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x18000C9B4 (-IsHighContrast@@YAHXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIVirtualDesktopBarElement@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopBarElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802F9B6C (--$As@UIVirtualDesktopBarElement@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ActivitiesInShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802FD908 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ActivitiesInShell@@@wil@@CAX_NW4Repo.c)
 *     ??$As@UIAnimatableScrollViewer@@@?$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAnimatableScrollViewer@@@WRL@Microsoft@@@Details@12@@Z @ 0x18031ACAC (--$As@UIAnimatableScrollViewer@@@-$ComPtr@UIAnimatableMultitaskingViewElement@@@WRL@Microsoft@@Q.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73___ @ 0x180324C98 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772.c)
 */

void __fastcall VirtualDesktopAddAnimationCoordinator::AnimatePositionChanged(
        VirtualDesktopAddAnimationCoordinator *this,
        const struct ItemAnimationCoordinatorBase::PositionChangedInfo *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  char *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdx
  int AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73; // eax
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  __m128i v19; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( *((_DWORD *)a2 + 2) == 8 )
  {
    (*(void (__fastcall **)(_QWORD, char *, _QWORD, _QWORD))(**(_QWORD **)a2 + 512LL))(
      *(_QWORD *)a2,
      (char *)a2 + 12,
      0LL,
      0LL);
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)a2 + 512LL))(*(_QWORD *)a2, (char *)a2 + 28, 25LL);
  }
  else if ( *((_DWORD *)a2 + 2) == 3 )
  {
    v14 = 0LL;
    v4 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IAnimatableScrollViewer>(a2, &v14);
    if ( v4 >= 0 )
      (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v14 + 112LL))(v14, (char *)a2 + 28, 25LL);
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        66LL,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
        (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  else if ( *((_DWORD *)a2 + 2) == 7 && *((_QWORD *)this + 12) )
  {
    v15 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IAnimatableMultitaskingViewElement>::As<IVirtualDesktopBarElement>(a2, &v15);
    if ( v5 >= 0 )
    {
      v6 = *((_DWORD *)this + 62);
      v7 = (char *)a2 + 28;
      v19 = *(__m128i *)((char *)a2 + 28);
      v19.m128i_i32[3] = v6 + _mm_srli_si128(v19, 8).m128i_i32[1];
      v19.m128i_i32[1] += v6;
      (*(void (__fastcall **)(__int64, _QWORD, __m128i *, _QWORD, _QWORD))(*(_QWORD *)v15 + 32LL))(
        v15,
        0LL,
        &v19,
        0LL,
        0LL);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 56LL))(v15, &v14);
      v16 = 0LL;
      wil::Feature<__WilFeatureTraits_Feature_ActivitiesInShell>::ReportUsageToService(v9, v8, v10);
      if ( v14 && !(unsigned int)IsHighContrast() )
      {
        v11 = v14;
        v18 = v14;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        v17 = v11;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73 = DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73___(
                                                                      &v17,
                                                                      v12,
                                                                      &v16);
        if ( AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73 >= 0 )
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 32LL))(v14, 0LL);
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            114LL,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
            (const char *)(unsigned int)AnimationHandler__lambda_ebf7812295cd6a46fe62472baa772b73);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      }
      (*(void (__fastcall **)(__int64, _QWORD, char *, __int64, __int64))(*(_QWORD *)v15 + 32LL))(
        v15,
        0LL,
        v7,
        23LL,
        v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        76LL,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
        (const char *)(unsigned int)v5);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
}
