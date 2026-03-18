/*
 * XREFs of RIMIDEIsCompatibleDevice @ 0x1C014B14C
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C00A05D0 (RIMIDEAdoptOrphanedRimDevs.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMIDEIsCompatibleDevice(__int64 a1, __int64 a2)
{
  char v2; // al
  int v4; // r8d
  int v5; // ecx

  v2 = *(_BYTE *)(a2 + 48);
  v4 = 16;
  if ( !v2 )
  {
    v4 = 1;
    return (v4 & *(_DWORD *)(a1 + 84)) != 0;
  }
  if ( v2 == 1 )
  {
    v4 = 2;
    return (v4 & *(_DWORD *)(a1 + 84)) != 0;
  }
  if ( v2 != 2 )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
  {
    v4 = 32;
  }
  else
  {
    v5 = *(_DWORD *)(*(_QWORD *)(a2 + 480) + 24LL);
    if ( (unsigned int)(v5 - 5) <= 1 )
    {
      v4 = 4;
      return (v4 & *(_DWORD *)(a1 + 84)) != 0;
    }
    if ( v5 == 7 )
    {
      v4 = 8;
      return (v4 & *(_DWORD *)(a1 + 84)) != 0;
    }
    if ( (unsigned int)(v5 - 1) > 3 )
      return 0LL;
  }
  return (v4 & *(_DWORD *)(a1 + 84)) != 0;
}
