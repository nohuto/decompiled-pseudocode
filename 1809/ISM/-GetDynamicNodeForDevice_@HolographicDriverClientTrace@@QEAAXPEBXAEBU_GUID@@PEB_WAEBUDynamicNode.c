/*
 * XREFs of ?GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x18010C17C
 * Callers:
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x180113AD0 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 *     ?GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNodeInfo@234@@Z @ 0x180114FC0 (-GetFloorDynamicNode@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUDynamicNode.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::GetDynamicNodeForDevice_(
        HolographicDriverClientTrace *this,
        const void *a2,
        const struct _GUID *a3,
        const wchar_t *a4,
        const struct Windows::Internal::Holographic::DynamicNodeInfo *a5)
{
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // rax
  int v9; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-31h] BYREF
  const void **v11; // [rsp+68h] [rbp-11h]
  __int64 v12; // [rsp+70h] [rbp-9h]
  const struct _GUID *v13; // [rsp+78h] [rbp-1h]
  __int64 v14; // [rsp+80h] [rbp+7h]
  const wchar_t *v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+90h] [rbp+17h]
  int v17; // [rsp+94h] [rbp+1Bh]
  const struct Windows::Internal::Holographic::DynamicNodeInfo *v18; // [rsp+98h] [rbp+1Fh]
  __int64 v19; // [rsp+A0h] [rbp+27h]
  int *v20; // [rsp+A8h] [rbp+2Fh]
  __int64 v21; // [rsp+B0h] [rbp+37h]
  const void *v22; // [rsp+E0h] [rbp+67h] BYREF

  v22 = a2;
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v7 > 4u
    && (*((_QWORD *)v7 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v7 + 3) & 0x400000000000LL) == *((_QWORD *)v7 + 3) )
  {
    v12 = 8LL;
    v11 = &v22;
    v13 = a3;
    LODWORD(v8) = 0;
    v14 = 16LL;
    if ( a4 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a4[v8] );
    }
    v17 = 0;
    v16 = 2 * v8 + 2;
    v18 = a5;
    if ( !a4 )
      a4 = &sourceString;
    v19 = 16LL;
    v15 = a4;
    v9 = *((_DWORD *)a5 + 4);
    v20 = &v9;
    v21 = 4LL;
    TlgWrite(v7, &unk_18016D43B, 0LL, 0LL, 7u, &pData);
  }
}
