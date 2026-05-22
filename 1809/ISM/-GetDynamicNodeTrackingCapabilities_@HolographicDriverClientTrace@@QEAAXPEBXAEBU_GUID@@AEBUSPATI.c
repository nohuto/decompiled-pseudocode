/*
 * XREFs of ?GetDynamicNodeTrackingCapabilities_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x18010C2A4
 * Callers:
 *     ?GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x180113CB0 (-GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::GetDynamicNodeTrackingCapabilities_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  struct HolographicDriverClientTrace *v7; // rax
  __int64 v8; // rcx
  int v10; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-21h] BYREF
  __int64 *v12; // [rsp+68h] [rbp-1h]
  __int64 v13; // [rsp+70h] [rbp+7h]
  __int64 v14; // [rsp+78h] [rbp+Fh]
  __int64 v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  __int64 v17; // [rsp+90h] [rbp+27h]
  int *v18; // [rsp+98h] [rbp+2Fh]
  __int64 v19; // [rsp+A0h] [rbp+37h]
  __int64 v20; // [rsp+D0h] [rbp+67h] BYREF

  v20 = a2;
  v7 = HolographicDriverClientTrace::Instance();
  v8 = *((_QWORD *)v7 + 1);
  if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 2) != 0 )
  {
    v7 = (struct HolographicDriverClientTrace *)(*(_QWORD *)(v8 + 24) & 2LL);
    if ( v7 == *(struct HolographicDriverClientTrace **)(v8 + 24) )
    {
      v13 = 8LL;
      v12 = &v20;
      v10 = a5;
      v18 = &v10;
      v14 = a3;
      v15 = 16LL;
      v16 = a4;
      v17 = 16LL;
      v19 = 4LL;
      LODWORD(v7) = TlgWrite((TraceLoggingHProvider)v8, &unk_18016D387, 0LL, 0LL, 6u, &pData);
    }
  }
  return (int)v7;
}
