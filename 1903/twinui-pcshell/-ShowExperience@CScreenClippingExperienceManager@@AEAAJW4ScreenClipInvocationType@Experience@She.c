/*
 * XREFs of ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1801B28D0
 * Callers:
 *     ?HandleOpenFromActionCenter@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801ADFA0 (-HandleOpenFromActionCenter@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801AE1C0 (-HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?HandleOpenFromSearchBox@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801AE6FC (-HandleOpenFromSearchBox@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?HandlePendingShowExperience@CScreenClippingExperienceManager@@AEAAJAEA_N@Z @ 0x1801AE9D4 (-HandlePendingShowExperience@CScreenClippingExperienceManager@@AEAAJAEA_N@Z.c)
 *     ?HandleScreenClippingPendingShowReturn@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1801AED10 (-HandleScreenClippingPendingShowReturn@CScreenClippingExperienceManager@@AEAAXXZ.c)
 *     ?HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801AEE48 (-HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1801AF530 (-LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@She.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180046514 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?EnsureScreenClippingBroker@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801ACDCC (-EnsureScreenClippingBroker@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?get@?$static_lazy@VShellScreenClippingLogging@@@details@wil@@QEAAPEAVShellScreenClippingLogging@@P6AXXZ@Z @ 0x1801B3F5C (-get@-$static_lazy@VShellScreenClippingLogging@@@details@wil@@QEAAPEAVShellScreenClippingLogging.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::ShowExperience(__int64 a1, int a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v15; // [rsp+38h] [rbp-49h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-41h] BYREF
  int v17; // [rsp+44h] [rbp-3Dh] BYREF
  LPVOID Context[2]; // [rsp+48h] [rbp-39h] BYREF
  GUID v19; // [rsp+58h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR v20; // [rsp+68h] [rbp-19h] BYREF
  int *v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+90h] [rbp+Fh]
  int v23; // [rsp+94h] [rbp+13h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  Context[1] = (LPVOID)-2LL;
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
    && fPending )
  {
    Context[0] = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v4 > 5u )
    TlgWrite(v4, &unk_1804C38BF, 0LL, 0LL, 2u, &pData);
  v17 = a2;
  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<ShellScreenClippingLogging>::get(
                                           v4,
                                           lambda_d71f6d60408a6de3c75f9a9c93a2d5fc_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v5 > 5u && TlgKeywordOn(v5, 0x400000000000uLL) )
  {
    v21 = &v17;
    v22 = 4;
    v23 = 0;
    TlgWrite(v6, &unk_1804C2D23, 0LL, 0LL, 3u, &v20);
  }
  *(_BYTE *)(a1 + 432) = 0;
  v7 = CScreenClippingExperienceManager::EnsureScreenClippingBroker((CScreenClippingExperienceManager *)a1);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v15 = 0LL;
    v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 368);
    v10 = **v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v11 = v10(v9, &GUID_9c3e7124_7a72_487e_b6ed_12b7c3abff4a, &v15);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v19 = GUID_NULL;
      LOBYTE(v12) = a2 == 3;
      v11 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v15 + 24LL))(v15, &v19, v12);
      v8 = v11;
      if ( v11 >= 0 )
      {
        v11 = CSingleViewShellExperience::Show(a1 + 88, 0LL);
        v8 = v11;
        if ( v11 >= 0 )
        {
          v8 = 0;
          goto LABEL_19;
        }
        v13 = 1014LL;
      }
      else
      {
        v13 = 1012LL;
      }
    }
    else
    {
      v13 = 1009LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    return v8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3EE,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
