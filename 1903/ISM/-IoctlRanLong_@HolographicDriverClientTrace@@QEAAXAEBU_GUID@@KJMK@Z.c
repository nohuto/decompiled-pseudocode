/*
 * XREFs of ?IoctlRanLong_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KJMK@Z @ 0x180159628
 * Callers:
 *     ??$IoctlRanLong@AEBU_GUID@@AEAKJAEAMAEBK@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEAK$$QEAJAEAMAEBK@Z @ 0x18014ABC4 (--$IoctlRanLong@AEBU_GUID@@AEAKJAEAMAEBK@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEAK$$QEAJA.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161814 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::IoctlRanLong_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        int a3,
        int a4,
        float a5,
        char a6)
{
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  int v10; // [rsp+38h] [rbp-59h] BYREF
  __int64 v11; // [rsp+40h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  const struct _GUID *v13; // [rsp+68h] [rbp-29h]
  __int64 v14; // [rsp+70h] [rbp-21h]
  int *v15; // [rsp+78h] [rbp-19h]
  __int64 v16; // [rsp+80h] [rbp-11h]
  int *v17; // [rsp+88h] [rbp-9h]
  __int64 v18; // [rsp+90h] [rbp-1h]
  float *v19; // [rsp+98h] [rbp+7h]
  __int64 v20; // [rsp+A0h] [rbp+Fh]
  char *v21; // [rsp+A8h] [rbp+17h]
  __int64 v22; // [rsp+B0h] [rbp+1Fh]
  __int64 *v23; // [rsp+B8h] [rbp+27h]
  __int64 v24; // [rsp+C0h] [rbp+2Fh]
  int v25; // [rsp+100h] [rbp+6Fh] BYREF

  v25 = a4;
  v8 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<HolographicDriverClientTrace>::get(
                                           this,
                                           lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v8 > 3u )
  {
    if ( TlgKeywordOn(v8, 0x200000000000uLL) )
    {
      v13 = a2;
      v15 = &v10;
      v14 = 16LL;
      v17 = &v25;
      v19 = &a5;
      v21 = &a6;
      v23 = &v11;
      v10 = a3;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v11 = 0x1000000LL;
      v24 = 8LL;
      TlgWrite(v9, &unk_1801A3DB1, 0LL, 0LL, 8u, &pData);
    }
  }
}
