/*
 * XREFs of ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXIIU_GUID@@@Z @ 0x1800C50B4
 * Callers:
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x1800C4F34 (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 * Callees:
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x180014604 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall InputETW::UIAHitTest::RequestUIAHitTest(int a1, int a2, struct _GUID *a3)
{
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  int *v8; // [rsp+58h] [rbp+17h]
  int v9; // [rsp+60h] [rbp+1Fh]
  int v10; // [rsp+64h] [rbp+23h]
  int *v11; // [rsp+68h] [rbp+27h]
  int v12; // [rsp+70h] [rbp+2Fh]
  int v13; // [rsp+74h] [rbp+33h]
  struct _GUID *v14; // [rsp+78h] [rbp+37h]
  int v15; // [rsp+80h] [rbp+3Fh]
  int v16; // [rsp+84h] [rbp+43h]
  int v17; // [rsp+A8h] [rbp+67h] BYREF
  int v18; // [rsp+B0h] [rbp+6Fh] BYREF

  v18 = a2;
  v17 = a1;
  if ( InputETW::IsVerboseEnabled(1uLL) )
  {
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<InputETW>::get(
                                                      v4,
                                                      lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                        + 1);
    if ( *(_DWORD *)v5 > 5u )
    {
      if ( TlgKeywordOn(v5, 1uLL) )
      {
        v10 = 0;
        v13 = 0;
        v16 = 0;
        v8 = &v17;
        v11 = &v18;
        v9 = 4;
        v12 = 4;
        v14 = a3;
        v15 = 16;
        TlgWrite(v6, &unk_18019DC5B, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
