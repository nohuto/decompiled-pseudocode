/*
 * XREFs of ??$ApplicationViewBackedViewHostItem_get_Size@AEAIAEAMAEAM@HolographicPositionerTelemetry@@SAXAEAIAEAM1@Z @ 0x180238368
 * Callers:
 *     ?get_Size@ApplicationViewBackedViewHostItem@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x18023CDE0 (-get_Size@ApplicationViewBackedViewHostItem@@UEAAJPEAUSize@Foundation@Windows@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x18022560C (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

int __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_get_Size<unsigned int &,float &,float &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  LPVOID v6; // rax
  const struct _TlgProvider_t *v7; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+50h] [rbp-48h]
  __int64 v11; // [rsp+58h] [rbp-40h]
  __int64 v12; // [rsp+60h] [rbp-38h]
  __int64 v13; // [rsp+68h] [rbp-30h]
  __int64 v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+78h] [rbp-20h]

  v6 = wil::details::static_lazy<HolographicPositionerProvider>::get(
         a1,
         (void (__cdecl *)())lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)v6 + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    v10 = a1;
    v11 = 4LL;
    v12 = a2;
    v13 = 4LL;
    v14 = a3;
    v15 = 4LL;
    LODWORD(v6) = TlgWrite(v7, &unk_1804F0E84, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
