/*
 * XREFs of ndisWmiQueryPMActiveCapabilities @ 0x1C0077524
 * Callers:
 *     ?ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_GUID@@1@Z @ 0x1C0018A1C (-ndisQueryGuidData@@YAJPEAEKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_NDIS_CO_VC_PTR_BLOCK@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisWmiQueryPMActiveCapabilities(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 result; // rax

  a2[1] = 1;
  if ( (unsigned int)(*(_DWORD *)(a1 + 1044) - 2) <= 2 )
  {
    v2 = 1;
    if ( (*(_BYTE *)(a1 + 1124) & 1) != 0 )
      v2 = 2;
    a2[1] = v2;
  }
  else
  {
    a2[1] = 0;
  }
  a2[2] = 1;
  if ( (unsigned int)(*(_DWORD *)(a1 + 1040) - 2) <= 2 )
  {
    v3 = 1;
    if ( (*(_BYTE *)(a1 + 1124) & 2) != 0 )
      v3 = 2;
    a2[2] = v3;
  }
  else
  {
    a2[2] = 0;
  }
  a2[3] = 1;
  if ( (unsigned int)(*(_DWORD *)(a1 + 1048) - 2) <= 2 )
  {
    v4 = 1;
    if ( (*(_BYTE *)(a1 + 4420) & 8) != 0 )
      v4 = 2;
    a2[3] = v4;
  }
  else
  {
    a2[3] = 0;
  }
  a2[4] = 1;
  if ( (*(_DWORD *)(a1 + 1028) & 1) != 0 )
  {
    v5 = 1;
    if ( (*(_BYTE *)(a1 + 1128) & 1) != 0 )
      v5 = 2;
    a2[4] = v5;
  }
  else
  {
    a2[4] = 0;
  }
  a2[5] = 1;
  if ( (*(_DWORD *)(a1 + 1028) & 2) != 0 )
  {
    v6 = 1;
    if ( (*(_BYTE *)(a1 + 1128) & 2) != 0 )
      v6 = 2;
    a2[5] = v6;
  }
  else
  {
    a2[5] = 0;
  }
  a2[6] = 1;
  result = *(unsigned int *)(a1 + 1028);
  if ( (result & 0x80u) != 0LL )
  {
    result = 1LL;
    if ( *(char *)(a1 + 1128) < 0 )
      result = 2LL;
    a2[6] = result;
  }
  else
  {
    a2[6] = 0;
  }
  return result;
}
