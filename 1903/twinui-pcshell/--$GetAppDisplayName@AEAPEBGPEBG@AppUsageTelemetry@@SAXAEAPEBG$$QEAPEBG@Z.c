/*
 * XREFs of ??$GetAppDisplayName@AEAPEBGPEBG@AppUsageTelemetry@@SAXAEAPEBG$$QEAPEBG@Z @ 0x1800A0470
 * Callers:
 *     _lambda_4cf016c90d53211c670cf0afc9cf3df4_::operator() @ 0x1800A19A4 (_lambda_4cf016c90d53211c670cf0afc9cf3df4_--operator().c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A4000 (-Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 */

char __fastcall AppUsageTelemetry::GetAppDisplayName<unsigned short const * &,unsigned short const *>(
        LPCWSTR *a1,
        LPCWSTR *a2)
{
  const struct _TlgProvider_t *v4; // rax
  TraceLoggingHProvider v5; // r10
  __int64 v7; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+70h] [rbp-38h] BYREF
  __int64 *v11; // [rsp+80h] [rbp-28h]
  int v12; // [rsp+88h] [rbp-20h]
  int v13; // [rsp+8Ch] [rbp-1Ch]

  v4 = AppUsageTelemetry::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = TlgKeywordOn(v4, 0x400000000000uLL);
    if ( (_BYTE)v4 )
    {
      TlgCreateWsz(&pDesc, *a1);
      TlgCreateWsz(&v10, *a2);
      v13 = 0;
      v11 = &v7;
      v7 = 0x2000000LL;
      v12 = 8;
      LOBYTE(v4) = TlgWrite(v5, &unk_1804E3572, 0LL, 0LL, 5u, &pData);
    }
  }
  return (char)v4;
}
