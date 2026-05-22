/*
 * XREFs of ?IoctlTimeout_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KK0AEBUSPATIAL_NODE_ID@@PEB_W@Z @ 0x18010BB7C
 * Callers:
 *     ?HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAKPEAU_OVERLAPPED@@KKPEBXKPEAK@Z @ 0x18011005C (-HandleIoctlTimeout@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAKPEAU_OVERL.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::IoctlTimeout_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        int a3,
        int a4,
        const struct _GUID *a5,
        const struct SPATIAL_NODE_ID *a6,
        const wchar_t *a7)
{
  const struct _TlgProvider_t *v9; // rcx
  const WCHAR *v10; // rdx
  __int64 v11; // rax
  int v12; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-51h] BYREF
  const struct _GUID *v14; // [rsp+68h] [rbp-31h]
  __int64 v15; // [rsp+70h] [rbp-29h]
  int *v16; // [rsp+78h] [rbp-21h]
  __int64 v17; // [rsp+80h] [rbp-19h]
  int *v18; // [rsp+88h] [rbp-11h]
  __int64 v19; // [rsp+90h] [rbp-9h]
  const struct _GUID *v20; // [rsp+98h] [rbp-1h]
  __int64 v21; // [rsp+A0h] [rbp+7h]
  const struct SPATIAL_NODE_ID *v22; // [rsp+A8h] [rbp+Fh]
  __int64 v23; // [rsp+B0h] [rbp+17h]
  const WCHAR *v24; // [rsp+B8h] [rbp+1Fh]
  int v25; // [rsp+C0h] [rbp+27h]
  int v26; // [rsp+C4h] [rbp+2Bh]
  int v27; // [rsp+100h] [rbp+67h] BYREF

  v27 = a4;
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v9 > 3u
    && (*((_QWORD *)v9 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v9 + 3) & 0x200000000000LL) == *((_QWORD *)v9 + 3) )
  {
    v10 = a7;
    v16 = &v12;
    v14 = a2;
    v18 = &v27;
    v20 = a5;
    v22 = a6;
    LODWORD(v11) = 0;
    v15 = 16LL;
    v12 = a3;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 16LL;
    v23 = 16LL;
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
    }
    v26 = 0;
    if ( !a7 )
      v10 = &sourceString;
    v24 = v10;
    v25 = 2 * v11 + 2;
    TlgWrite(v9, &unk_18016C9F6, 0LL, 0LL, 8u, &pData);
  }
}
