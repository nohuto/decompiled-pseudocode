/*
 * XREFs of ??$EnforcedAppCloseFailed@PEBGAEBI@AppUsageTelemetry@@SAX$$QEAPEBGAEBI@Z @ 0x1800AA108
 * Callers:
 *     ?OnTerminateTimer@Win32AppStateManager@@AEAAXXZ @ 0x1800ACA98 (-OnTerminateTimer@Win32AppStateManager@@AEAAXXZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A4000 (-Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 */

char __fastcall AppUsageTelemetry::EnforcedAppCloseFailed<unsigned short const *,unsigned int const &>(
        LPCWSTR *a1,
        __int64 a2)
{
  const struct _TlgProvider_t *v4; // rax
  TraceLoggingHProvider v5; // r10
  __int64 v7; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  __int64 v10; // [rsp+70h] [rbp-38h]
  int v11; // [rsp+78h] [rbp-30h]
  int v12; // [rsp+7Ch] [rbp-2Ch]
  __int64 *v13; // [rsp+80h] [rbp-28h]
  int v14; // [rsp+88h] [rbp-20h]
  int v15; // [rsp+8Ch] [rbp-1Ch]

  v4 = AppUsageTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = TlgKeywordOn(v4, 0x400000000000uLL);
    if ( (_BYTE)v4 )
    {
      TlgCreateWsz(&pDesc, *a1);
      v12 = 0;
      v15 = 0;
      v13 = &v7;
      v10 = a2;
      v11 = 4;
      v7 = 0x2000000LL;
      v14 = 8;
      LOBYTE(v4) = TlgWrite(v5, &unk_1804E3A1D, 0LL, 0LL, 5u, &pData);
    }
  }
  return (char)v4;
}
