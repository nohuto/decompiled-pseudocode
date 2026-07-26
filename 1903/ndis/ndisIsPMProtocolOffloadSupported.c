/*
 * XREFs of ndisIsPMProtocolOffloadSupported @ 0x1C0023838
 * Callers:
 *     ndisSourcePreAddProtocolOffload @ 0x1C00232D4 (ndisSourcePreAddProtocolOffload.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C0023410 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C0075FEC (ndisRejectUnsupportedPMOffloads.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsPMProtocolOffloadSupported(int a1, __int64 a2)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // eax

  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 != 1 )
      {
        LOBYTE(v4) = 0;
        return v4;
      }
      v4 = *(_DWORD *)(a2 + 1088) >> 7;
    }
    else
    {
      v4 = *(_DWORD *)(a2 + 1088) >> 1;
    }
    LOBYTE(v4) = v4 & 1;
  }
  else
  {
    return *(_DWORD *)(a2 + 1088) & 1;
  }
  return v4;
}
