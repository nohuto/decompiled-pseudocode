/*
 * XREFs of ndisComparePMProtocolOffloads @ 0x1C00BA298
 * Callers:
 *     ndisSourcePreAddProtocolOffload @ 0x1C00B9FCC (ndisSourcePreAddProtocolOffload.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00BA0A0 (ndisMiniportPreAddProtocolOffload.c)
 * Callees:
 *     memcmp @ 0x1C0026D30 (memcmp.c)
 */

bool __fastcall ndisComparePMProtocolOffloads(__int64 a1, __int64 a2)
{
  int v2; // r8d
  char v3; // bl
  int v6; // r8d
  int v7; // r8d
  size_t v8; // r8
  unsigned __int64 v9; // rcx

  v2 = *(_DWORD *)(a1 + 12);
  v3 = 0;
  if ( v2 != *(_DWORD *)(a2 + 12) )
    return 0;
  v6 = v2 - 1;
  if ( !v6 )
  {
    v9 = *(_QWORD *)(a1 + 160) - *(_QWORD *)(a2 + 160);
    if ( !v9 )
    {
      v9 = *(_QWORD *)(a1 + 168) - *(_QWORD *)(a2 + 168);
      if ( !v9 )
        v9 = *(unsigned int *)(a1 + 176) - (unsigned __int64)*(unsigned int *)(a2 + 176);
    }
    return v9 == 0;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = 76LL;
LABEL_8:
    if ( !memcmp((const void *)(a1 + 160), (const void *)(a2 + 160), v8) )
      return 1;
    return v3;
  }
  if ( v7 == 1 )
  {
    v8 = 48LL;
    goto LABEL_8;
  }
  return v3;
}
