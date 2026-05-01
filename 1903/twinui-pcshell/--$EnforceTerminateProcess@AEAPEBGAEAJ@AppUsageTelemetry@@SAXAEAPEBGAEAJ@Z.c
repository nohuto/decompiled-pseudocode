/*
 * XREFs of ??$EnforceTerminateProcess@AEAPEBGAEAJ@AppUsageTelemetry@@SAXAEAPEBGAEAJ@Z @ 0x1800AEBB0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_42dce70c870a3964e7319458b8bf7bca___::Run @ 0x1800ACF50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_42dce70c870a3964e7319458b8bf7bca___--Run.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180030AEC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A4000 (-Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 */

char __fastcall AppUsageTelemetry::EnforceTerminateProcess<unsigned short const * &,long &>(LPCWSTR *a1, int *a2)
{
  const struct _TlgProvider_t *v4; // rax
  int v5; // ecx
  TraceLoggingHProvider v6; // r10
  int v8; // [rsp+30h] [rbp-19h] BYREF
  __int64 v9; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]
  __int64 *v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+8Ch] [rbp+43h]

  v4 = AppUsageTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = TlgKeywordOn(v4, 0x400000000000uLL);
    if ( (_BYTE)v4 )
    {
      TlgCreateWsz(&pDesc, *a1);
      v14 = 0;
      v5 = *a2;
      v17 = 0;
      v12 = &v8;
      v15 = &v9;
      v8 = v5;
      v13 = 4;
      v9 = 0x2000000LL;
      v16 = 8;
      LOBYTE(v4) = TlgWrite(v6, &unk_1804E3A9C, 0LL, 0LL, 5u, &pData);
    }
  }
  return (char)v4;
}
