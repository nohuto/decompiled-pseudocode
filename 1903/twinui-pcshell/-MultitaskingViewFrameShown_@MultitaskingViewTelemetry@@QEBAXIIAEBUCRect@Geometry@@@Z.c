/*
 * XREFs of ?MultitaskingViewFrameShown_@MultitaskingViewTelemetry@@QEBAXIIAEBUCRect@Geometry@@@Z @ 0x18035C318
 * Callers:
 *     ?Show@CMultitaskingViewFrame@@UEAAJXZ @ 0x18035CDA0 (-Show@CMultitaskingViewFrame@@UEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800FFF24 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 */

void __fastcall MultitaskingViewTelemetry::MultitaskingViewFrameShown_(
        MultitaskingViewTelemetry *this,
        int a2,
        int a3,
        const struct Geometry::CRect *a4)
{
  __int64 v5; // rcx
  wil::TraceLoggingProvider *v6; // rax
  _QWORD *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  int *v13; // [rsp+68h] [rbp-19h]
  int v14; // [rsp+70h] [rbp-11h]
  int v15; // [rsp+74h] [rbp-Dh]
  int *v16; // [rsp+78h] [rbp-9h]
  int v17; // [rsp+80h] [rbp-1h]
  int v18; // [rsp+84h] [rbp+3h]
  const struct Geometry::CRect *v19; // [rsp+88h] [rbp+7h]
  int v20; // [rsp+90h] [rbp+Fh]
  int v21; // [rsp+94h] [rbp+13h]
  char *v22; // [rsp+98h] [rbp+17h]
  int v23; // [rsp+A0h] [rbp+1Fh]
  int v24; // [rsp+A4h] [rbp+23h]
  char *v25; // [rsp+A8h] [rbp+27h]
  int v26; // [rsp+B0h] [rbp+2Fh]
  int v27; // [rsp+B4h] [rbp+33h]
  char *v28; // [rsp+B8h] [rbp+37h]
  int v29; // [rsp+C0h] [rbp+3Fh]
  int v30; // [rsp+C4h] [rbp+43h]
  int v31; // [rsp+F0h] [rbp+6Fh] BYREF
  int v32; // [rsp+F8h] [rbp+77h] BYREF

  v32 = a3;
  v31 = a2;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &unk_180599C78;
    v6 = (wil::TraceLoggingProvider *)operator new(v5, &unk_180599C78);
    wil::TraceLoggingProvider::TraceLoggingProvider(v6);
    *v7 = &ImmersiveIconsLogging::`vftable';
    v7[3] = &`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&unk_180599C78, qword_180599C90);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &unk_180599C78);
  }
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v8 > 5u )
  {
    if ( TlgKeywordOn(v8, 0x200000000000uLL) )
    {
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v13 = &v31;
      v16 = &v32;
      v22 = (char *)a4 + 4;
      v25 = (char *)a4 + 8;
      v28 = (char *)a4 + 12;
      v14 = 4;
      v17 = 4;
      v19 = a4;
      v20 = 4;
      v23 = 4;
      v26 = 4;
      v29 = 4;
      TlgWrite(v9, &unk_1804DD60C, 0LL, 0LL, 8u, &pData);
    }
  }
}
