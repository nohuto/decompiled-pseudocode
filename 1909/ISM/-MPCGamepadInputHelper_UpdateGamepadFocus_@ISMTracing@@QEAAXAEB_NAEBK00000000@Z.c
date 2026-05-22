/*
 * XREFs of ?MPCGamepadInputHelper_UpdateGamepadFocus_@ISMTracing@@QEAAXAEB_NAEBK00000000@Z @ 0x1800874A0
 * Callers:
 *     ??$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_NAEAK$$QEA_N2020000@Z @ 0x180087270 (--$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCGamepadInputHelper_UpdateGamepadFocus_(
        ISMTracing *this,
        const bool *a2,
        const unsigned int *a3,
        const bool *a4,
        const bool *a5,
        const bool *a6,
        const bool *a7,
        const bool *a8,
        const bool *a9,
        const bool *a10,
        const bool *a11)
{
  const struct _TlgProvider_t *v14; // rcx
  __int64 v15; // rdx
  const struct _TlgProvider_t *v16; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-B1h] BYREF
  const bool *v18; // [rsp+58h] [rbp-91h]
  __int64 v19; // [rsp+60h] [rbp-89h]
  const unsigned int *v20; // [rsp+68h] [rbp-81h]
  __int64 v21; // [rsp+70h] [rbp-79h]
  const bool *v22; // [rsp+78h] [rbp-71h]
  __int64 v23; // [rsp+80h] [rbp-69h]
  const bool *v24; // [rsp+88h] [rbp-61h]
  __int64 v25; // [rsp+90h] [rbp-59h]
  const bool *v26; // [rsp+98h] [rbp-51h]
  __int64 v27; // [rsp+A0h] [rbp-49h]
  const bool *v28; // [rsp+A8h] [rbp-41h]
  __int64 v29; // [rsp+B0h] [rbp-39h]
  const bool *v30; // [rsp+B8h] [rbp-31h]
  __int64 v31; // [rsp+C0h] [rbp-29h]
  const bool *v32; // [rsp+C8h] [rbp-21h]
  __int64 v33; // [rsp+D0h] [rbp-19h]
  const bool *v34; // [rsp+D8h] [rbp-11h]
  __int64 v35; // [rsp+E0h] [rbp-9h]
  const bool *v36; // [rsp+E8h] [rbp-1h]
  __int64 v37; // [rsp+F0h] [rbp+7h]

  v14 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                         (__int64)this,
                                         lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v14 > 4u )
  {
    if ( TlgKeywordOn(v14, 1uLL) )
    {
      v24 = a5;
      v26 = a6;
      v28 = a7;
      v30 = a8;
      v32 = a9;
      v34 = a10;
      v36 = a11;
      v18 = a2;
      v19 = v15;
      v20 = a3;
      v21 = 4LL;
      v22 = a4;
      v23 = v15;
      v25 = v15;
      v27 = v15;
      v29 = v15;
      v31 = v15;
      v33 = v15;
      v35 = v15;
      v37 = v15;
      TlgWrite(v16, &unk_18019BD80, 0LL, 0LL, 0xCu, &pData);
    }
  }
}
