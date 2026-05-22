/*
 * XREFs of ?NodePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0_N@Z @ 0x18010DA8C
 * Callers:
 *     ?GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180114E24 (-GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPAT.c)
 *     ?GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAPEAUHOLOGRAPHIC_DEVICE_ERROR_STATUS@@PEA_K@Z @ 0x1801153F0 (-GetNodeErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NO.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::NodePropertyCacheMiss_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3,
        const struct _GUID *a4,
        bool a5)
{
  __int64 v8; // rcx
  BOOL v9; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-21h] BYREF
  const struct _GUID *v11; // [rsp+68h] [rbp-1h]
  __int64 v12; // [rsp+70h] [rbp+7h]
  const struct _GUID *v13; // [rsp+78h] [rbp+Fh]
  __int64 v14; // [rsp+80h] [rbp+17h]
  const struct SPATIAL_NODE_ID *v15; // [rsp+88h] [rbp+1Fh]
  __int64 v16; // [rsp+90h] [rbp+27h]
  BOOL *v17; // [rsp+98h] [rbp+2Fh]
  __int64 v18; // [rsp+A0h] [rbp+37h]

  v8 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 2) != 0 && (*(_QWORD *)(v8 + 24) & 2LL) == *(_QWORD *)(v8 + 24) )
  {
    v9 = a5;
    v17 = &v9;
    v11 = a2;
    v12 = 16LL;
    v13 = a4;
    v14 = 16LL;
    v15 = a3;
    v16 = 16LL;
    v18 = 4LL;
    TlgWrite((TraceLoggingHProvider)v8, &unk_18016C78E, 0LL, 0LL, 6u, &pData);
  }
}
