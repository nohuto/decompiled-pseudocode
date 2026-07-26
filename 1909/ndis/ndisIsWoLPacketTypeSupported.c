/*
 * XREFs of ndisIsWoLPacketTypeSupported @ 0x1C001D630
 * Callers:
 *     ndisSourcePreAddWoLPattern @ 0x1C001CF98 (ndisSourcePreAddWoLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C0034B94 (ndisMiniportPreAddWoLPattern.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C0076408 (ndisRejectUnsupportedWoLPatterns.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsWoLPacketTypeSupported(int a1, __int64 a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v2 = a1 - 1;
  if ( v2 )
  {
    v4 = v2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 != 1 )
          {
            LOBYTE(v3) = 0;
            return v3;
          }
          LOBYTE(v3) = *(_BYTE *)(a2 + 1070);
        }
        else
        {
          v3 = *(_DWORD *)(a2 + 1068) >> 3;
        }
      }
      else
      {
        v3 = *(_DWORD *)(a2 + 1068) >> 2;
      }
    }
    else
    {
      v3 = *(_DWORD *)(a2 + 1068) >> 1;
    }
    LOBYTE(v3) = v3 & 1;
  }
  else
  {
    return *(_DWORD *)(a2 + 1068) & 1;
  }
  return v3;
}
