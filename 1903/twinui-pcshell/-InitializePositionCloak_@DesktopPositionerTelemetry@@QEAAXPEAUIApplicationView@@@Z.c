/*
 * XREFs of ?InitializePositionCloak_@DesktopPositionerTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1803A24D4
 * Callers:
 *     ??$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIApplicationView@@@Z @ 0x18039F448 (--$InitializePositionCloak@AEAPEAUIApplicationView@@@DesktopPositionerTelemetry@@SAXAEAPEAUIAppl.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800222E0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DesktopPositionerTelemetry::InitializePositionCloak_(
        DesktopPositionerTelemetry *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  __int64 WindowForView; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  const struct _TlgProvider_t *v5; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-9h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  _QWORD v8[2]; // [rsp+48h] [rbp+7h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+17h] BYREF
  _QWORD *v10; // [rsp+78h] [rbp+37h]
  int v11; // [rsp+80h] [rbp+3Fh]
  int v12; // [rsp+84h] [rbp+43h]

  v8[1] = -2LL;
  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  if ( WindowForView )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &unk_180599C78;
      v4 = operator new(v3, &unk_180599C78);
      *v4 = &Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::`vftable'{for `ObjectWithClassName'};
      *v4 = &ImmersiveIconsLogging::`vftable';
      v4[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
    }
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 4u )
    {
      v8[0] = WindowForView;
      v10 = v8;
      v11 = 8;
      v12 = 0;
      TlgWrite(v5, &unk_1804DEE3C, 0LL, 0LL, 3u, &pData);
    }
  }
}
