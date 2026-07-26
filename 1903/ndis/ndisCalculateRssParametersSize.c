/*
 * XREFs of ndisCalculateRssParametersSize @ 0x1C003B634
 * Callers:
 *     ndisSetOpenRSSParameters @ 0x1C003B1AC (ndisSetOpenRSSParameters.c)
 *     ndisSetMiniportRSSParameters @ 0x1C003B4B4 (ndisSetMiniportRSSParameters.c)
 *     ndisQueryMiniportRSSParameters @ 0x1C006F410 (ndisQueryMiniportRSSParameters.c)
 *     ndisQueryOpenRSSParameters @ 0x1C006F770 (ndisQueryOpenRSSParameters.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C5D0C (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCalculateRssParametersSize(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r8d
  int v4; // r9d
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  unsigned int v7; // r10d
  unsigned __int64 v8; // rdx
  unsigned int v9; // eax

  v2 = *(_DWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a1 + 12);
  *a2 = 0;
  v5 = v2 + v4;
  if ( v5 >= v2 )
  {
    v6 = *(_DWORD *)(a1 + 24);
    v7 = v6 + *(unsigned __int16 *)(a1 + 20);
    if ( v7 >= v6 )
    {
      if ( v5 <= v7 )
        v5 = v6 + *(unsigned __int16 *)(a1 + 20);
      if ( *(_BYTE *)(a1 + 1) < 2u )
        goto LABEL_10;
      v8 = *(unsigned int *)(a1 + 32) * (unsigned __int64)*(unsigned int *)(a1 + 36);
      if ( v8 <= 0xFFFFFFFF )
      {
        v9 = *(_DWORD *)(a1 + 28);
        if ( v9 + (unsigned int)v8 >= v9 )
        {
          if ( v5 <= v9 + (unsigned int)v8 )
            v5 = v9 + v8;
LABEL_10:
          *a2 = v5;
          return 0LL;
        }
      }
    }
  }
  return 3221291029LL;
}
