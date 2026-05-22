/*
 * XREFs of ?HandStateIgnored_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@@_JHH@Z @ 0x1800F4B14
 * Callers:
 *     ??$HandStateIgnored@U_GUID@@AEA_JII@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEA_J$$QEAI2@Z @ 0x1800F2758 (--$HandStateIgnored@U_GUID@@AEA_JII@SpatialInteractionTraceContinuous@SpatialInteractionDevices@.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800E6E74 (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::HandStateIgnored_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        struct _GUID *a2,
        __int64 a3,
        int a4,
        char a5)
{
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  struct _GUID *v9; // [rsp+58h] [rbp-1h]
  __int64 v10; // [rsp+60h] [rbp+7h]
  __int64 *v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+70h] [rbp+17h]
  int *v13; // [rsp+78h] [rbp+1Fh]
  __int64 v14; // [rsp+80h] [rbp+27h]
  char *v15; // [rsp+88h] [rbp+2Fh]
  __int64 v16; // [rsp+90h] [rbp+37h]
  __int64 v17; // [rsp+C8h] [rbp+6Fh] BYREF
  int v18; // [rsp+D0h] [rbp+77h] BYREF

  v18 = a4;
  v17 = a3;
  v6 = (const struct _TlgProvider_t *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v6 > 5u )
  {
    if ( TlgKeywordOn(v6, 2uLL) )
    {
      v9 = a2;
      v11 = &v17;
      v13 = &v18;
      v15 = &a5;
      v10 = 16LL;
      v12 = 8LL;
      v14 = 4LL;
      v16 = 4LL;
      TlgWrite(v7, &unk_18019FEDE, 0LL, 0LL, 6u, &pData);
    }
  }
}
