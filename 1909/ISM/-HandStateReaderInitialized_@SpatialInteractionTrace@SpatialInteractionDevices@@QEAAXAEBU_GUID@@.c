/*
 * XREFs of ?HandStateReaderInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@_N1111@Z @ 0x1800F4CF4
 * Callers:
 *     ??$HandStateReaderInitialized@U_GUID@@AEB_NAEB_NAEB_NAEB_NAEA_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEB_N111AEA_N@Z @ 0x1800F27C8 (--$HandStateReaderInitialized@U_GUID@@AEB_NAEB_NAEB_NAEB_NAEA_N@SpatialInteractionTrace@SpatialI.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::HandStateReaderInitialized_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const struct _GUID *a2,
        char a3,
        char a4,
        bool a5,
        bool a6,
        bool a7)
{
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-51h] BYREF
  const struct _GUID *v11; // [rsp+58h] [rbp-31h]
  __int64 v12; // [rsp+60h] [rbp-29h]
  char *v13; // [rsp+68h] [rbp-21h]
  __int64 v14; // [rsp+70h] [rbp-19h]
  char *v15; // [rsp+78h] [rbp-11h]
  __int64 v16; // [rsp+80h] [rbp-9h]
  bool *v17; // [rsp+88h] [rbp-1h]
  __int64 v18; // [rsp+90h] [rbp+7h]
  bool *v19; // [rsp+98h] [rbp+Fh]
  __int64 v20; // [rsp+A0h] [rbp+17h]
  bool *v21; // [rsp+A8h] [rbp+1Fh]
  __int64 v22; // [rsp+B0h] [rbp+27h]
  char v23; // [rsp+E8h] [rbp+5Fh] BYREF
  char v24; // [rsp+F0h] [rbp+67h] BYREF

  v24 = a4;
  v23 = a3;
  v8 = (const struct _TlgProvider_t *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v8 > 4u )
  {
    if ( TlgKeywordOn(v8, 2uLL) )
    {
      v11 = a2;
      v13 = &v23;
      v15 = &v24;
      v17 = &a5;
      v19 = &a6;
      v21 = &a7;
      v12 = 16LL;
      v14 = 1LL;
      v16 = 1LL;
      v18 = 1LL;
      v20 = 1LL;
      v22 = 1LL;
      TlgWrite(v9, &unk_1801A021F, 0LL, 0LL, 8u, &pData);
    }
  }
}
