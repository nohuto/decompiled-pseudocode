/*
 * XREFs of ??$ActiveAppsCount@_K@AppUsageTelemetry@@SAX$$QEA_K@Z @ 0x1800AE52C
 * Callers:
 *     _lambda_3edc654c66854fb27c6b7c00085e6f36_::operator() @ 0x1800B0048 (_lambda_3edc654c66854fb27c6b7c00085e6f36_--operator().c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B2940 (-Provider@AppUsageTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 */

char __fastcall AppUsageTelemetry::ActiveAppsCount<unsigned __int64>(int *a1)
{
  const struct _TlgProvider_t *v2; // rax
  const struct _TlgProvider_t *v3; // r10
  int v4; // ecx
  int v6; // [rsp+30h] [rbp-68h] BYREF
  __int64 v7; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v2 = AppUsageTelemetry::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    LOBYTE(v2) = TlgKeywordOn(v2, 0x400000000000uLL);
    if ( (_BYTE)v2 )
    {
      v4 = *a1;
      v11 = 0;
      v14 = 0;
      v9 = &v6;
      v6 = v4;
      v12 = &v7;
      v10 = 4;
      v7 = 0x2000000LL;
      v13 = 8;
      LOBYTE(v2) = TlgWrite(v3, &unk_180509CFD, 0LL, 0LL, 4u, &pData);
    }
  }
  return (char)v2;
}
