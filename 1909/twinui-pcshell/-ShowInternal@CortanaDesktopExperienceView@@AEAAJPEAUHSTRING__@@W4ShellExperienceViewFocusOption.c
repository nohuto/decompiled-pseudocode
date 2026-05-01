/*
 * XREFs of ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x180049314
 * Callers:
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x18004B140 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18004D930 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800497EC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SearchInAllMarkets@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180049830 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SearchInAllMarkets@@@wil@@CAX_NW4Rep.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180049894 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Relaunch@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180049914 (-Relaunch@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experienc.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::ShowInternal(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // ebx
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  const struct _TlgProvider_t *v15; // rcx
  UINT32 cData; // [rsp+20h] [rbp-60h]
  _BYTE v17[4]; // [rsp+30h] [rbp-50h] BYREF
  WINBOOL fPending; // [rsp+34h] [rbp-4Ch] BYREF
  unsigned int v19; // [rsp+38h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-38h] BYREF
  unsigned int *v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+70h] [rbp-10h]
  int v24; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  if ( TabletModeHelpers::IsTabletMode((TabletModeHelpers *)a1) )
  {
    v8 = 1;
  }
  else
  {
    wil::Feature<__WilFeatureTraits_Feature_SearchInAllMarkets>::ReportUsageToService();
    v19 = 2;
    if ( (unsigned int)SHRegGetDWORD(
                         HKEY_CURRENT_USER,
                         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
                         L"SearchboxTaskbarMode",
                         &v19) == -2147024894
      && (fPending = 0,
          (int)SHRegGetDWORD(
                 HKEY_CURRENT_USER,
                 L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
                 L"SearchboxTaskbarModeForceGlyph",
                 (unsigned int *)&fPending) >= 0) )
    {
      v8 = v19;
      if ( fPending )
        v8 = 1;
    }
    else
    {
      v8 = v19;
    }
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805C2118;
    qword_1805C2118[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2130 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2118, qword_1805C2130);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805C2118);
  }
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u && TlgKeywordOn(v9, 0x400000000000uLL) )
  {
    v24 = 0;
    v22 = &v19;
    v19 = v8;
    v23 = 4;
    TlgWrite(v15, &unk_1804ED59A, 0LL, 0LL, 3u, &pData);
  }
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805C2118;
    qword_1805C2118[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2130 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2118, qword_1805C2130);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805C2118);
  }
  v10 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v10 > 4u )
  {
    v24 = 0;
    v22 = (unsigned int *)((char *)a1 + 253);
    v23 = 1;
    TlgWrite(v10, &unk_1804ED641, 0LL, 0LL, 3u, &pData);
  }
  v11 = a1[21];
  v17[0] = 0;
  if ( v11 )
  {
    if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 72LL))(v11, v17) >= 0 )
    {
      if ( v17[0] )
      {
        v12 = CortanaDesktopExperienceView::Relaunch(a1, a2, a4);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x857,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v12,
            cData);
      }
    }
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)a1[21] + 88LL))(a1[21], a2, a3);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x85A,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v13,
      cData);
  return 0LL;
}
