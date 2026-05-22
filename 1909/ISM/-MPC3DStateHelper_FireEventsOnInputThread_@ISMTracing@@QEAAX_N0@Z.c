/*
 * XREFs of ?MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z @ 0x18007C1A4
 * Callers:
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x18007BEF8 (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPC3DStateHelper_FireEventsOnInputThread_(ISMTracing *this, char a2, char a3)
{
  __int64 v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  int v5; // edx
  const struct _TlgProvider_t *v6; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  char *v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  char *v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]
  char v14; // [rsp+98h] [rbp+10h] BYREF
  char v15; // [rsp+A0h] [rbp+18h] BYREF

  v15 = a3;
  v14 = a2;
  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v4 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                          v3,
                                          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v4 > 4u )
    {
      if ( TlgKeywordOn(v4, 1uLL) )
      {
        v10 = 0;
        v13 = 0;
        v8 = &v14;
        v11 = &v15;
        v9 = v5;
        v12 = v5;
        TlgWrite(v6, &unk_18019B490, 0LL, 0LL, 4u, &pData);
      }
    }
  }
}
