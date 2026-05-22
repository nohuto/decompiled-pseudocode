/*
 * XREFs of ?HandReportIgnored_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@@_JHH_N2@Z @ 0x1800F4C40
 * Callers:
 *     ??$HandReportIgnored@U_GUID@@AEA_JIIAEAEAEA_N@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEA_J$$QEAI2AEAEAEA_N@Z @ 0x1800F28EC (--$HandReportIgnored@U_GUID@@AEA_JIIAEAEAEA_N@SpatialInteractionTraceContinuous@SpatialInteracti.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800E70A4 (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::HandReportIgnored_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        struct _GUID *a2,
        __int64 a3,
        int a4,
        char a5,
        bool a6,
        bool a7)
{
  const struct _TlgProvider_t *v8; // rcx
  int v9; // edx
  const struct _TlgProvider_t *v10; // rcx
  bool v11; // [rsp+38h] [rbp-61h] BYREF
  bool v12; // [rsp+39h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-51h] BYREF
  struct _GUID *v14; // [rsp+68h] [rbp-31h]
  __int64 v15; // [rsp+70h] [rbp-29h]
  __int64 *v16; // [rsp+78h] [rbp-21h]
  int *v17; // [rsp+88h] [rbp-11h]
  __int64 v18; // [rsp+90h] [rbp-9h]
  char *v19; // [rsp+98h] [rbp-1h]
  __int64 v20; // [rsp+A0h] [rbp+7h]
  bool *v21; // [rsp+A8h] [rbp+Fh]
  __int64 v22; // [rsp+B0h] [rbp+17h]
  bool *v23; // [rsp+B8h] [rbp+1Fh]
  __int64 v24; // [rsp+C0h] [rbp+27h]
  __int64 v25; // [rsp+F8h] [rbp+5Fh] BYREF
  int v26; // [rsp+100h] [rbp+67h] BYREF

  v26 = a4;
  v25 = a3;
  v8 = (const struct _TlgProvider_t *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v8 > 5u )
  {
    if ( TlgKeywordOn(v8, 2uLL) )
    {
      v14 = a2;
      v16 = &v25;
      v15 = 16LL;
      v17 = &v26;
      v19 = &a5;
      v11 = a6;
      v21 = &v11;
      v12 = a7;
      v23 = &v12;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 1LL;
      v24 = 1LL;
      TlgWrite(v10, &unk_18019FCE1, 0LL, 0LL, v9 + 6, &pData);
    }
  }
}
