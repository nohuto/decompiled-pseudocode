/*
 * XREFs of ?PropertyCache_SetValue_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1PEBX_K@Z @ 0x18010D308
 * Callers:
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x18011047C (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 *     ?LogValueChanged@PropertyCache@Holographic@Internal@Windows@@MEAAXAEBU_GUID@@AEBV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180110750 (-LogValueChanged@PropertyCache@Holographic@Internal@Windows@@MEAAXAEBU_GUID@@AEBV-$vector@EV-$al.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::PropertyCache_SetValue_(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  struct HolographicDriverClientTrace *v9; // rax
  __int64 v10; // r10
  const char *v11; // rax
  __int64 v12; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-29h] BYREF
  const char *v15; // [rsp+58h] [rbp-9h]
  int v16; // [rsp+60h] [rbp-1h]
  int v17; // [rsp+64h] [rbp+3h]
  __int64 v18; // [rsp+68h] [rbp+7h]
  __int64 v19; // [rsp+70h] [rbp+Fh]
  __int64 v20; // [rsp+78h] [rbp+17h]
  __int64 v21; // [rsp+80h] [rbp+1Fh]
  char *v22; // [rsp+88h] [rbp+27h]
  __int64 v23; // [rsp+90h] [rbp+2Fh]

  v9 = HolographicDriverClientTrace::Instance();
  v10 = *((_QWORD *)v9 + 1);
  if ( *(_DWORD *)v10 > 4u && (*(_BYTE *)(v10 + 16) & 2) != 0 )
  {
    v9 = (struct HolographicDriverClientTrace *)(*(_QWORD *)(v10 + 24) & 2LL);
    if ( v9 == *(struct HolographicDriverClientTrace **)(v10 + 24) )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
          v11 = "SpatialGraph";
        else
          v11 = "(unknown)";
      }
      else
      {
        v11 = "Display";
      }
      v12 = -1LL;
      do
        ++v12;
      while ( v11[v12] );
      v15 = v11;
      v16 = v12 + 1;
      v22 = &a6;
      v17 = 0;
      v18 = a3;
      v19 = 16LL;
      v20 = a4;
      v21 = 16LL;
      v23 = 8LL;
      LODWORD(v9) = TlgWrite((TraceLoggingHProvider)v10, &unk_18016D1FC, 0LL, 0LL, 6u, &pData);
    }
  }
  return (int)v9;
}
