/*
 * XREFs of ndisCalculateRssParametersSize @ 0x1C001FB34
 * Callers:
 *     ndisSetOpenRSSParameters @ 0x1C001F030 (ndisSetOpenRSSParameters.c)
 *     ndisSetMiniportRSSParameters @ 0x1C001F2CC (ndisSetMiniportRSSParameters.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C00483C4 (ndisQueryMiniportRSSParameters.c)
 *     ndisQueryOpenRSSParameters @ 0x1C0048528 (ndisQueryOpenRSSParameters.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0080BFC (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCalculateRssParametersSize(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  int v3; // r8d
  unsigned int v4; // r8d
  unsigned int v7; // r10d
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // eax

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a1 + 12);
  *a2 = 0;
  v4 = v2 + v3;
  if ( v4 >= v2 )
  {
    v7 = v4;
    v8 = *(_DWORD *)(a1 + 24);
    v9 = v8 + *(unsigned __int16 *)(a1 + 20);
    if ( v9 >= v8 )
    {
      if ( v4 <= v9 )
        v7 = v9;
      if ( *(_BYTE *)(a1 + 1) < 2u )
        goto LABEL_10;
      if ( *(unsigned int *)(a1 + 32) * (unsigned __int64)*(unsigned int *)(a1 + 36) <= 0xFFFFFFFF )
      {
        v10 = *(_DWORD *)(a1 + 28);
        v11 = v10 + *(_DWORD *)(a1 + 32) * *(_DWORD *)(a1 + 36);
        if ( v11 >= v10 )
        {
          if ( v7 <= v11 )
            v7 = v10 + *(_DWORD *)(a1 + 32) * *(_DWORD *)(a1 + 36);
LABEL_10:
          *a2 = v7;
          return 0LL;
        }
      }
    }
  }
  return 3221291029LL;
}
