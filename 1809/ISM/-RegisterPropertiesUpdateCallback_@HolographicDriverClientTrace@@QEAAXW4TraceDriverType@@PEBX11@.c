/*
 * XREFs of ?RegisterPropertiesUpdateCallback_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@PEBX11@Z @ 0x18010C06C
 * Callers:
 *     ?RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUISpatialGraphPropertiesUpdatedCallback@234@@Z @ 0x1801135A0 (-RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJP.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int HolographicDriverClientTrace::RegisterPropertiesUpdateCallback_(__int64 a1, int a2, ...)
{
  struct HolographicDriverClientTrace *v3; // rax
  __int64 v4; // r10
  const char *v5; // rax
  __int64 v6; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-21h] BYREF
  const char *v9; // [rsp+58h] [rbp-1h]
  int v10; // [rsp+60h] [rbp+7h]
  int v11; // [rsp+64h] [rbp+Bh]
  va_list v12; // [rsp+68h] [rbp+Fh]
  __int64 v13; // [rsp+70h] [rbp+17h]
  va_list v14; // [rsp+78h] [rbp+1Fh]
  __int64 v15; // [rsp+80h] [rbp+27h]
  va_list v16; // [rsp+88h] [rbp+2Fh]
  __int64 v17; // [rsp+90h] [rbp+37h]
  __int64 v18; // [rsp+C8h] [rbp+6Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+6Fh]
  __int64 v20; // [rsp+D0h] [rbp+77h] BYREF
  va_list va1; // [rsp+D0h] [rbp+77h]
  va_list va2; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  v3 = HolographicDriverClientTrace::Instance();
  v4 = *((_QWORD *)v3 + 1);
  if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 2) != 0 )
  {
    v3 = (struct HolographicDriverClientTrace *)(*(_QWORD *)(v4 + 24) & 2LL);
    if ( v3 == *(struct HolographicDriverClientTrace **)(v4 + 24) )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
          v5 = "SpatialGraph";
        else
          v5 = "(unknown)";
      }
      else
      {
        v5 = "Display";
      }
      v6 = -1LL;
      do
        ++v6;
      while ( v5[v6] );
      v9 = v5;
      v10 = v6 + 1;
      va_copy(v12, va);
      va_copy(v14, va1);
      va_copy(v16, va2);
      v11 = 0;
      v13 = 8LL;
      v15 = 8LL;
      v17 = 8LL;
      LODWORD(v3) = TlgWrite((TraceLoggingHProvider)v4, &unk_18016CF78, 0LL, 0LL, 6u, &pData);
    }
  }
  return (int)v3;
}
