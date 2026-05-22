/*
 * XREFs of ?PrecachePropertiesElapsedTime_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@_K@Z @ 0x18010D78C
 * Callers:
 *     ?PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ @ 0x180115AD0 (-PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int HolographicDriverClientTrace::PrecachePropertiesElapsedTime_(__int64 a1, int a2, __int64 a3, ...)
{
  struct HolographicDriverClientTrace *v5; // rax
  const struct _TlgProvider_t *v6; // r10
  const char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r10
  const char *v10; // rax
  __int64 v11; // rdx
  __int64 v13; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  const char *v15; // [rsp+68h] [rbp+7h]
  int v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+74h] [rbp+13h]
  __int64 v18; // [rsp+78h] [rbp+17h]
  __int64 v19; // [rsp+80h] [rbp+1Fh]
  va_list v20; // [rsp+88h] [rbp+27h]
  __int64 v21; // [rsp+90h] [rbp+2Fh]
  __int64 *v22; // [rsp+98h] [rbp+37h]
  __int64 v23; // [rsp+A0h] [rbp+3Fh]
  unsigned __int64 v24; // [rsp+E0h] [rbp+7Fh] BYREF
  va_list va; // [rsp+E0h] [rbp+7Fh]
  va_list va1; // [rsp+E8h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, _QWORD);
  if ( v24 < 0xBB8 )
  {
    v5 = HolographicDriverClientTrace::Instance();
    v9 = *((_QWORD *)v5 + 1);
    if ( *(_DWORD *)v9 > 4u && (*(_BYTE *)(v9 + 16) & 2) != 0 )
    {
      v5 = (struct HolographicDriverClientTrace *)(*(_QWORD *)(v9 + 24) & 2LL);
      if ( v5 == *(struct HolographicDriverClientTrace **)(v9 + 24) )
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
        va_copy(v20, va);
        v17 = 0;
        v18 = a3;
        v19 = 16LL;
        v21 = 8LL;
        LODWORD(v5) = TlgWrite((TraceLoggingHProvider)v9, &unk_18016C438, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  else
  {
    v5 = HolographicDriverClientTrace::Instance();
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)v5 + 1);
    if ( *(_DWORD *)v6 > 4u && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0 )
    {
      v5 = (struct HolographicDriverClientTrace *)(*((_QWORD *)v6 + 3) & 0x200000000000LL);
      if ( v5 == *((struct HolographicDriverClientTrace **)v6 + 3) )
      {
        if ( a2 )
        {
          if ( a2 == 1 )
            v7 = "SpatialGraph";
          else
            v7 = "(unknown)";
        }
        else
        {
          v7 = "Display";
        }
        v8 = -1LL;
        do
          ++v8;
        while ( v7[v8] );
        v15 = v7;
        v16 = v8 + 1;
        va_copy(v20, va);
        v22 = &v13;
        v17 = 0;
        v18 = a3;
        v19 = 16LL;
        v21 = 8LL;
        v13 = 3000LL;
        v23 = 8LL;
        LODWORD(v5) = TlgWrite(v6, &unk_18016CAA6, 0LL, 0LL, 6u, &pData);
      }
    }
  }
  return (int)v5;
}
