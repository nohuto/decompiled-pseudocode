/*
 * XREFs of RaidInitializeRpmb @ 0x1C003B35C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidInitializeRpmb(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rcx
  unsigned int v4; // eax

  v2 = 0;
  v3 = **(_QWORD **)(a1 - 16);
  *(_DWORD *)(v3 + 5712) = *(_DWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 12);
  if ( v4 >= 0x200
    && (*(_DWORD *)(v3 + 5716) = v4,
        *(_BYTE *)(v3 + 5720) = *(_BYTE *)(a2 + 16),
        *(_WORD *)(v3 + 5722) = *(_WORD *)(a2 + 18),
        *(_DWORD *)(a2 + 40) == 1) )
  {
    *(_DWORD *)(v3 + 5744) = 1;
    *(_OWORD *)(v3 + 5728) = *(_OWORD *)(a2 + 24);
  }
  else
  {
    *(_DWORD *)(v3 + 5712) = 0;
    return (unsigned int)-1056964602;
  }
  return v2;
}
