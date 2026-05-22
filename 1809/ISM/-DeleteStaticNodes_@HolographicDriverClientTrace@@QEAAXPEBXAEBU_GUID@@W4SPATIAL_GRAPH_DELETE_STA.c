/*
 * XREFs of ?DeleteStaticNodes_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@W4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x18010C5F8
 * Callers:
 *     ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x180114100 (-DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_D.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::DeleteStaticNodes_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int16 a5,
        __int64 a6)
{
  struct HolographicDriverClientTrace *v8; // rax
  __int64 v9; // rcx
  unsigned __int16 v11; // [rsp+38h] [rbp-49h] BYREF
  int v12; // [rsp+3Ch] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v14; // [rsp+68h] [rbp-19h]
  __int64 v15; // [rsp+70h] [rbp-11h]
  __int64 v16; // [rsp+78h] [rbp-9h]
  __int64 v17; // [rsp+80h] [rbp-1h]
  int *v18; // [rsp+88h] [rbp+7h]
  __int64 v19; // [rsp+90h] [rbp+Fh]
  __int16 *v20; // [rsp+98h] [rbp+17h]
  __int64 v21; // [rsp+A0h] [rbp+1Fh]
  __int64 v22; // [rsp+A8h] [rbp+27h]
  int v23; // [rsp+B0h] [rbp+2Fh]
  int v24; // [rsp+B4h] [rbp+33h]
  __int64 v25; // [rsp+E0h] [rbp+5Fh] BYREF

  v25 = a2;
  v8 = HolographicDriverClientTrace::Instance();
  v9 = *((_QWORD *)v8 + 1);
  if ( *(_DWORD *)v9 > 4u && (*(_BYTE *)(v9 + 16) & 2) != 0 )
  {
    v8 = (struct HolographicDriverClientTrace *)(*(_QWORD *)(v9 + 24) & 2LL);
    if ( v8 == *(struct HolographicDriverClientTrace **)(v9 + 24) )
    {
      v14 = &v25;
      v11 = a5;
      v18 = &v12;
      v20 = (__int16 *)&v11;
      v22 = a6;
      v15 = 8LL;
      v16 = a3;
      v17 = 16LL;
      v12 = a4;
      v19 = 4LL;
      v21 = 2LL;
      v23 = 16 * a5;
      v24 = 0;
      LODWORD(v8) = TlgWrite((TraceLoggingHProvider)v9, &unk_18016D06A, 0LL, 0LL, 7u, &pData);
    }
  }
  return (int)v8;
}
