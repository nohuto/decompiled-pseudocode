/*
 * XREFs of ?NodePropertyCallbackRegistered_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18015A038
 * Callers:
 *     ?RegisterNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x18015C8B0 (-RegisterNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UE.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::NodePropertyCallbackRegistered_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3)
{
  const struct _TlgProvider_t *v5; // rcx
  int v6; // edx
  const struct _TlgProvider_t *v7; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const struct _GUID *v9; // [rsp+50h] [rbp-38h]
  int v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+5Ch] [rbp-2Ch]
  const struct SPATIAL_NODE_ID *v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+6Ch] [rbp-1Ch]

  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<HolographicDriverClientTrace>::get(
                                           this,
                                           lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v5 > 4u )
  {
    if ( TlgKeywordOn(v5, 2uLL) )
    {
      v11 = 0;
      v14 = 0;
      v10 = v6 + 14;
      v13 = v6 + 14;
      v9 = a2;
      v12 = a3;
      TlgWrite(v7, &unk_1801A361B, 0LL, 0LL, 4u, &pData);
    }
  }
}
