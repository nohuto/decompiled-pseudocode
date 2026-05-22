/*
 * XREFs of ?DevicePropertyCacheMiss_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1_N@Z @ 0x18010D96C
 * Callers:
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18011471C (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180114AD0 (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::DevicePropertyCacheMiss_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  struct HolographicDriverClientTrace *v8; // rax
  __int64 v9; // r10
  const char *v10; // rax
  __int64 v11; // rcx
  int v13; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-21h] BYREF
  const char *v15; // [rsp+68h] [rbp-1h]
  int v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+74h] [rbp+Bh]
  __int64 v18; // [rsp+78h] [rbp+Fh]
  __int64 v19; // [rsp+80h] [rbp+17h]
  __int64 v20; // [rsp+88h] [rbp+1Fh]
  __int64 v21; // [rsp+90h] [rbp+27h]
  int *v22; // [rsp+98h] [rbp+2Fh]
  __int64 v23; // [rsp+A0h] [rbp+37h]

  v8 = HolographicDriverClientTrace::Instance();
  v9 = *((_QWORD *)v8 + 1);
  if ( *(_DWORD *)v9 > 4u && (*(_BYTE *)(v9 + 16) & 2) != 0 )
  {
    v8 = (struct HolographicDriverClientTrace *)(*(_QWORD *)(v9 + 24) & 2LL);
    if ( v8 == *(struct HolographicDriverClientTrace **)(v9 + 24) )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
          v10 = "SpatialGraph";
        else
          v10 = "(unknown)";
      }
      else
      {
        v10 = "Display";
      }
      v11 = -1LL;
      do
        ++v11;
      while ( v10[v11] );
      v15 = v10;
      v16 = v11 + 1;
      v13 = a5;
      v22 = &v13;
      v17 = 0;
      v18 = a3;
      v19 = 16LL;
      v20 = a4;
      v21 = 16LL;
      v23 = 4LL;
      LODWORD(v8) = TlgWrite((TraceLoggingHProvider)v9, &unk_18016DB91, 0LL, 0LL, 6u, &pData);
    }
  }
  return (int)v8;
}
