/*
 * XREFs of ?SpatialObjectStateStatistics_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@II@Z @ 0x1800EDD94
 * Callers:
 *     ??1SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ @ 0x1800EADA8 (--1SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectStateStatistics_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const struct _GUID *a2,
        int a3,
        int a4)
{
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  const struct _GUID *v9; // [rsp+58h] [rbp+17h]
  __int64 v10; // [rsp+60h] [rbp+1Fh]
  int *v11; // [rsp+68h] [rbp+27h]
  __int64 v12; // [rsp+70h] [rbp+2Fh]
  int *v13; // [rsp+78h] [rbp+37h]
  __int64 v14; // [rsp+80h] [rbp+3Fh]
  int v15; // [rsp+B8h] [rbp+77h] BYREF
  int v16; // [rsp+C0h] [rbp+7Fh] BYREF

  v16 = a4;
  v15 = a3;
  v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 4u )
  {
    if ( TlgKeywordOn(v5, 2uLL) )
    {
      v9 = a2;
      v11 = &v15;
      v13 = &v16;
      v10 = 16LL;
      v12 = v7;
      v14 = v7;
      TlgWrite(v6, &unk_18019F2B4, 0LL, 0LL, 5u, &pData);
    }
  }
}
