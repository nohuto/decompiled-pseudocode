/*
 * XREFs of ?TelemetrySetStaticNodeDurability_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x18010C6F4
 * Callers:
 *     ?SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x180114650 (-SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::TelemetrySetStaticNodeDurability_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  struct HolographicDriverClientTrace *v7; // rax
  const struct _TlgProvider_t *v8; // rcx
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
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)v7 + 1);
  if ( *(_DWORD *)v8 > 4u && (*((_QWORD *)v8 + 2) & 0x200000000002LL) != 0 )
  {
    v7 = (struct HolographicDriverClientTrace *)(*((_QWORD *)v8 + 3) & 0x200000000002LL);
    if ( v7 == *((struct HolographicDriverClientTrace **)v8 + 3) )
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
      LODWORD(v7) = TlgWrite(v8, &unk_18016CD5D, 0LL, 0LL, 6u, &pData);
    }
  }
  return (int)v7;
}
