/*
 * XREFs of ?NodePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0@Z @ 0x18010D168
 * Callers:
 *     ?AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBUSPATIAL_NODE_ID@@@Z @ 0x180111F64 (-AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHologra.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::NodePropertyRequestAdded_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3,
        const struct _GUID *a4)
{
  __int64 v7; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  const struct _GUID *v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  const struct SPATIAL_NODE_ID *v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  const struct _GUID *v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v7 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 2) != 0 && (*(_QWORD *)(v7 + 24) & 2LL) == *(_QWORD *)(v7 + 24) )
  {
    v9 = a2;
    v10 = 16LL;
    v11 = a3;
    v12 = 16LL;
    v13 = a4;
    v14 = 16LL;
    TlgWrite((TraceLoggingHProvider)v7, &unk_18016C0C0, 0LL, 0LL, 5u, &pData);
  }
}
