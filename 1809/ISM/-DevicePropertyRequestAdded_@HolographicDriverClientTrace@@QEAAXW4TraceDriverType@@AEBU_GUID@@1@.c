/*
 * XREFs of ?DevicePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@Z @ 0x18010CC94
 * Callers:
 *     ?AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBU_GUID@@W4SpatialGraphPropertyFlags@234@P6AJPEBX_K@Z@Z @ 0x180111DE4 (-AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHologr.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::DevicePropertyRequestAdded_(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  struct HolographicDriverClientTrace *v7; // rax
  __int64 v8; // r10
  const char *v9; // rax
  __int64 v10; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  const char *v13; // [rsp+50h] [rbp-48h]
  int v14; // [rsp+58h] [rbp-40h]
  int v15; // [rsp+5Ch] [rbp-3Ch]
  __int64 v16; // [rsp+60h] [rbp-38h]
  __int64 v17; // [rsp+68h] [rbp-30h]
  __int64 v18; // [rsp+70h] [rbp-28h]
  __int64 v19; // [rsp+78h] [rbp-20h]

  v7 = HolographicDriverClientTrace::Instance();
  v8 = *((_QWORD *)v7 + 1);
  if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 2) != 0 )
  {
    v7 = (struct HolographicDriverClientTrace *)(*(_QWORD *)(v8 + 24) & 2LL);
    if ( v7 == *(struct HolographicDriverClientTrace **)(v8 + 24) )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
          v9 = "SpatialGraph";
        else
          v9 = "(unknown)";
      }
      else
      {
        v9 = "Display";
      }
      v10 = -1LL;
      do
        ++v10;
      while ( v9[v10] );
      v13 = v9;
      v14 = v10 + 1;
      v15 = 0;
      v16 = a3;
      v17 = 16LL;
      v18 = a4;
      v19 = 16LL;
      LODWORD(v7) = TlgWrite((TraceLoggingHProvider)v8, &unk_18016C82E, 0LL, 0LL, 5u, &pData);
    }
  }
  return (int)v7;
}
