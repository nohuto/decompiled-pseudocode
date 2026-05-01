/*
 * XREFs of ?ActiveZBandChangedForMonitor@CScreenClippingExperienceManager@@EEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1801AC490
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ?IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z @ 0x18013AA70 (-IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z.c)
 *     ?CloseExperienceIfRunning@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1801AC9C8 (-CloseExperienceIfRunning@CScreenClippingExperienceManager@@AEAAXXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::ActiveZBandChangedForMonitor(__int64 a1, int a2, int a3)
{
  const struct _TlgProvider_t *v4; // rcx
  int v5; // ecx
  int v7; // [rsp+30h] [rbp-31h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-11h] BYREF
  int *v11; // [rsp+70h] [rbp+Fh]
  int v12; // [rsp+78h] [rbp+17h]
  int v13; // [rsp+7Ch] [rbp+1Bh]
  int *v14; // [rsp+80h] [rbp+1Fh]
  int v15; // [rsp+88h] [rbp+27h]
  int v16; // [rsp+8Ch] [rbp+2Bh]
  int v17; // [rsp+C8h] [rbp+67h] BYREF

  v17 = a2;
  Context = 0LL;
  v7 = a3;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v13 = 0;
    v16 = 0;
    v11 = &v17;
    v14 = &v7;
    v12 = 4;
    v15 = 4;
    TlgWrite(v4, &unk_1804C442C, 0LL, 0LL, 4u, &pData);
  }
  if ( ZBandHelpers::IsBelowImmersiveLauncher(v7) || v5 == 4 || v5 == 13 )
    CScreenClippingExperienceManager::CloseExperienceIfRunning((CScreenClippingExperienceManager *)(a1 - 48));
  return 0LL;
}
