/*
 * XREFs of ?NodePropertyRequestFailed_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0J@Z @ 0x18010D230
 * Callers:
 *     ?OnNodePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV2NodePropertyRequest@234@J@Z @ 0x1801123A0 (-OnNodePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::NodePropertyRequestFailed_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3,
        const struct _GUID *a4,
        char a5)
{
  __int64 v8; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  const struct _GUID *v10; // [rsp+58h] [rbp-1h]
  __int64 v11; // [rsp+60h] [rbp+7h]
  const struct SPATIAL_NODE_ID *v12; // [rsp+68h] [rbp+Fh]
  __int64 v13; // [rsp+70h] [rbp+17h]
  const struct _GUID *v14; // [rsp+78h] [rbp+1Fh]
  __int64 v15; // [rsp+80h] [rbp+27h]
  char *v16; // [rsp+88h] [rbp+2Fh]
  __int64 v17; // [rsp+90h] [rbp+37h]

  v8 = *((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 2) != 0 && (*(_QWORD *)(v8 + 24) & 2LL) == *(_QWORD *)(v8 + 24) )
  {
    v10 = a2;
    v16 = &a5;
    v11 = 16LL;
    v12 = a3;
    v13 = 16LL;
    v14 = a4;
    v15 = 16LL;
    v17 = 4LL;
    TlgWrite((TraceLoggingHProvider)v8, &unk_18016D59A, 0LL, 0LL, 6u, &pData);
  }
}
