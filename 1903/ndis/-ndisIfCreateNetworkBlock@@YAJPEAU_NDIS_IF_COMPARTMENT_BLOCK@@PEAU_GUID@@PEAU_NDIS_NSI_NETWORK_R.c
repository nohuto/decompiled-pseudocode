/*
 * XREFs of ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00364BC
 * Callers:
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C00361F8 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0065530 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C0011F54 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C003F544 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisIfCreateNetworkBlock(
        struct _NDIS_IF_COMPARTMENT_BLOCK *a1,
        _LIST_ENTRY *a2,
        struct _NDIS_NSI_NETWORK_RW *a3,
        struct _NDIS_IF_NETWORK_BLOCK **a4)
{
  struct _NDIS_IF_NETWORK_BLOCK *v4; // rdi
  unsigned int v6; // ebx
  struct _GUID *v8; // r12
  const wchar_t *v10; // rcx
  __int64 v11; // r14
  _LIST_ENTRY **PoolWithTag; // rax
  _LIST_ENTRY **v13; // rsi
  struct _GUID v14; // xmm0
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  _LIST_ENTRY *i; // r14
  unsigned int v18; // eax
  unsigned int v19; // edx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_NetworkLink; // rcx
  _LIST_ENTRY *v23; // rax
  int v25; // eax
  _LIST_ENTRY *j; // rax
  unsigned int v27; // eax
  char v28; // [rsp+30h] [rbp-48h]

  v4 = 0LL;
  v6 = 0;
  v8 = (struct _GUID *)a2;
  v10 = (const wchar_t *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids;
  v11 = 4LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      22,
      120,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v28);
  }
  if ( (a1->Flags & 1) != 0 || !v8 || !ndisIsValidIfStringParts(v10, a3->NetworkName.Length) )
  {
    v6 = -1073741811;
    goto LABEL_19;
  }
  PoolWithTag = (_LIST_ENTRY **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x268uLL, 0x6669444Eu);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v6 = -1073741670;
    goto LABEL_19;
  }
  memset(PoolWithTag, 0, 0x268uLL);
  v14 = *v8;
  v13[6] = &a1->Link;
  *((struct _GUID *)v13 + 2) = v14;
  v13[8] = (_LIST_ENTRY *)(v13 + 7);
  v13[7] = (_LIST_ENTRY *)(v13 + 7);
  v15 = v13 + 10;
  *((_DWORD *)v13 + 19) = 1;
  do
  {
    *v15 = *(_OWORD *)&a3->Header.Type;
    v15[1] = *(_OWORD *)&a3->NetworkName.String[1];
    v15[2] = *(_OWORD *)&a3->NetworkName.String[9];
    v15[3] = *(_OWORD *)&a3->NetworkName.String[17];
    v15[4] = *(_OWORD *)&a3->NetworkName.String[25];
    v15[5] = *(_OWORD *)&a3->NetworkName.String[33];
    v15[6] = *(_OWORD *)&a3->NetworkName.String[41];
    v15 += 8;
    v16 = *(_OWORD *)&a3->NetworkName.String[49];
    a3 = (struct _NDIS_NSI_NETWORK_RW *)((char *)a3 + 128);
    *(v15 - 1) = v16;
    --v11;
  }
  while ( v11 );
  *v15 = *(_OWORD *)&a3->Header.Type;
  for ( i = ndisIfNetworkList.Flink; i != &ndisIfNetworkList; i = i->Flink )
  {
    v25 = ndisCompareGuid(v8, (const struct _GUID *)&i[2]);
    if ( !v25 )
    {
      v6 = -1073741270;
LABEL_41:
      ExFreePoolWithTag(v13, 0);
      goto LABEL_19;
    }
    if ( v25 < 0 )
      break;
  }
  v18 = *((_DWORD *)v13 + 22);
  if ( v18 )
  {
    if ( v18 >= 0x7FFFFFF )
    {
      v6 = -1073741811;
      goto LABEL_41;
    }
    goto LABEL_16;
  }
  if ( !ndisIfSiteIdWrapped )
  {
    ndisIfSiteScopeId.0 = ($013671E5920392F7B68C675C97F9F7D8)(ndisIfSiteScopeId.Value ^ (ndisIfSiteScopeId.Value ^ (*(_DWORD *)&ndisIfSiteScopeId.0 + 1)) & 0xFFFFFFF);
    if ( (ndisIfSiteScopeId.Value & 0xFFFFFFF) != 0xFFFFFFF )
    {
      v19 = ndisIfSiteScopeId.Value & 0xFFFFFFF;
      goto LABEL_15;
    }
    ndisIfSiteIdWrapped = 1;
    ndisIfSiteScopeId.0 = ($013671E5920392F7B68C675C97F9F7D8)(ndisIfSiteScopeId.Value & 0xF0000000 | 0x7FFFFFF);
  }
  v19 = (ndisIfSiteScopeId.Value & 0xFFFFFFF) + 1;
  if ( (ndisIfSiteScopeId.Value & 0xFFFFFFF) != 0xFFFFFFE )
  {
    while ( 2 )
    {
      for ( j = ndisIfNetworkList.Flink; ; j = j->Flink )
      {
        if ( j == &ndisIfNetworkList )
        {
          v27 = (v19 ^ ndisIfSiteScopeId.Value) & 0xFFFFFFF ^ ndisIfSiteScopeId.Value;
          goto LABEL_38;
        }
        if ( v19 == LODWORD(j[5].Blink) )
          break;
      }
      if ( ++v19 != 0xFFFFFFF )
        continue;
      break;
    }
  }
  v19 = 0xFFFFFFF;
  v27 = ndisIfSiteScopeId.Value & 0xF0000000 | 0xFFFFFFE;
LABEL_38:
  ndisIfSiteScopeId.0 = ($013671E5920392F7B68C675C97F9F7D8)v27;
LABEL_15:
  *((_DWORD *)v13 + 22) = v19;
  if ( v19 == 0xFFFFFFF )
  {
    v6 = -1073741670;
    goto LABEL_41;
  }
LABEL_16:
  Blink = i->Blink;
  ++ndisIfNetworkCount;
  Flink = Blink->Flink;
  if ( Blink->Flink->Blink != Blink
    || (*v13 = Flink,
        v13[1] = Blink,
        Flink->Blink = (_LIST_ENTRY *)v13,
        p_NetworkLink = &a1->NetworkLink,
        Blink->Flink = (_LIST_ENTRY *)v13,
        v23 = (_LIST_ENTRY *)(v13 + 2),
        a2 = a1->NetworkLink.Flink,
        a2->Blink != &a1->NetworkLink) )
  {
    __fastfail(3u);
  }
  v23->Flink = a2;
  v13[3] = p_NetworkLink;
  a2->Blink = v23;
  p_NetworkLink->Flink = v23;
  _InterlockedIncrement(&a1->Ref);
  v4 = (struct _NDIS_IF_NETWORK_BLOCK *)v13;
LABEL_19:
  *a4 = v4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      0x16u,
      0x79u,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      (char)v8,
      (char)v4,
      v6);
  return v6;
}
