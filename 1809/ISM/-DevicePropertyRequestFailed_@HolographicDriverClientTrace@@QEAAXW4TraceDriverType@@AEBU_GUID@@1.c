/*
 * XREFs of ?DevicePropertyRequestFailed_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1J@Z @ 0x18010CDA0
 * Callers:
 *     ?OnDevicePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV2DevicePropertyRequest@234@J@Z @ 0x1801122A0 (-OnDevicePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEA.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::DevicePropertyRequestFailed_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  struct HolographicDriverClientTrace *v8; // rax
  __int64 v9; // r10
  const char *v10; // rax
  __int64 v11; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  const char *v14; // [rsp+58h] [rbp-1h]
  int v15; // [rsp+60h] [rbp+7h]
  int v16; // [rsp+64h] [rbp+Bh]
  __int64 v17; // [rsp+68h] [rbp+Fh]
  __int64 v18; // [rsp+70h] [rbp+17h]
  __int64 v19; // [rsp+78h] [rbp+1Fh]
  __int64 v20; // [rsp+80h] [rbp+27h]
  char *v21; // [rsp+88h] [rbp+2Fh]
  __int64 v22; // [rsp+90h] [rbp+37h]

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
      v14 = v10;
      v15 = v11 + 1;
      v21 = &a5;
      v16 = 0;
      v17 = a3;
      v18 = 16LL;
      v19 = a4;
      v20 = 16LL;
      v22 = 4LL;
      LODWORD(v8) = TlgWrite((TraceLoggingHProvider)v9, &unk_18016DA9F, 0LL, 0LL, 6u, &pData);
    }
  }
  return (int)v8;
}
