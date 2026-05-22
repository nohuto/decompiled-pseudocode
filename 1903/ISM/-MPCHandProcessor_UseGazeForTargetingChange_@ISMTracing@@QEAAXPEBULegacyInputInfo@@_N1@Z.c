/*
 * XREFs of ?MPCHandProcessor_UseGazeForTargetingChange_@ISMTracing@@QEAAXPEBULegacyInputInfo@@_N1@Z @ 0x180135970
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180136440 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCHandProcessor_UseGazeForTargetingChange_(
        ISMTracing *this,
        const struct LegacyInputInfo *a2,
        char a3,
        char a4)
{
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // rdx
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-49h] BYREF
  char *v10; // [rsp+58h] [rbp-29h]
  __int64 v11; // [rsp+60h] [rbp-21h]
  char *v12; // [rsp+68h] [rbp-19h]
  __int64 v13; // [rsp+70h] [rbp-11h]
  char *v14; // [rsp+78h] [rbp-9h]
  __int64 v15; // [rsp+80h] [rbp-1h]
  char *v16; // [rsp+88h] [rbp+7h]
  __int64 v17; // [rsp+90h] [rbp+Fh]
  char *v18; // [rsp+98h] [rbp+17h]
  __int64 v19; // [rsp+A0h] [rbp+1Fh]
  char *v20; // [rsp+A8h] [rbp+27h]
  __int64 v21; // [rsp+B0h] [rbp+2Fh]
  char *v22; // [rsp+B8h] [rbp+37h]
  __int64 v23; // [rsp+C0h] [rbp+3Fh]
  char v24; // [rsp+F8h] [rbp+77h] BYREF
  char v25; // [rsp+100h] [rbp+7Fh] BYREF

  v25 = a4;
  v24 = a3;
  v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                        (__int64)this,
                                        lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 4u )
  {
    if ( TlgKeywordOn(v5, 1uLL) )
    {
      v11 = v8;
      v10 = (char *)a2 + 80;
      v12 = (char *)a2 + 828;
      v14 = &v24;
      v16 = &v25;
      v18 = (char *)a2 + 972;
      v20 = (char *)a2 + 764;
      v22 = (char *)a2 + 765;
      v13 = v8;
      v15 = v6;
      v17 = v6;
      v19 = v6;
      v21 = v6;
      v23 = v6;
      TlgWrite(v7, &unk_1801A0FC8, 0LL, 0LL, 9u, &pData);
    }
  }
}
