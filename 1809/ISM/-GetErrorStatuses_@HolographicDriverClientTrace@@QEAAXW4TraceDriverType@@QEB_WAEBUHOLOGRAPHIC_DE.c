/*
 * XREFs of ?GetErrorStatuses_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@QEB_WAEBUHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@Z @ 0x18010CB38
 * Callers:
 *     ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@234@@Z @ 0x180115300 (-GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU-$VariableSize.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::GetErrorStatuses_(__int64 a1, int a2, const WCHAR *a3, _DWORD *a4)
{
  struct HolographicDriverClientTrace *v4; // rax
  const struct _TlgProvider_t *v8; // r10
  const char *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-19h] BYREF
  const char *v14; // [rsp+58h] [rbp+7h]
  int v15; // [rsp+60h] [rbp+Fh]
  int v16; // [rsp+64h] [rbp+13h]
  const WCHAR *v17; // [rsp+68h] [rbp+17h]
  int v18; // [rsp+70h] [rbp+1Fh]
  int v19; // [rsp+74h] [rbp+23h]
  _DWORD *v20; // [rsp+78h] [rbp+27h]
  __int64 v21; // [rsp+80h] [rbp+2Fh]
  _DWORD *v22; // [rsp+88h] [rbp+37h]
  int v23; // [rsp+90h] [rbp+3Fh]
  int v24; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  v4 = (struct HolographicDriverClientTrace *)&retaddr;
  if ( *a4 < 0xFFFFu )
  {
    v4 = HolographicDriverClientTrace::Instance();
    v8 = (const struct _TlgProvider_t *)*((_QWORD *)v4 + 1);
    if ( *(_DWORD *)v8 > 4u && (*((_QWORD *)v8 + 2) & 0x400000000000LL) != 0 )
    {
      v4 = (struct HolographicDriverClientTrace *)(*((_QWORD *)v8 + 3) & 0x400000000000LL);
      if ( v4 == *((struct HolographicDriverClientTrace **)v8 + 3) )
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
        v14 = v9;
        v15 = v10 + 1;
        LODWORD(v9) = 0;
        v16 = 0;
        if ( a3 )
        {
          v9 = (const char *)-1LL;
          do
            ++v9;
          while ( a3[(_QWORD)v9] );
        }
        v19 = 0;
        v18 = 2 * (_DWORD)v9 + 2;
        v20 = a4;
        v22 = a4 + 1;
        v11 = *a4;
        if ( !a3 )
          a3 = &sourceString;
        v21 = 2LL;
        v17 = a3;
        v23 = 16 * v11 + 4;
        v24 = 0;
        LODWORD(v4) = TlgWrite(v8, &unk_18016D144, 0LL, 0LL, 6u, &pData);
      }
    }
  }
  return (int)v4;
}
