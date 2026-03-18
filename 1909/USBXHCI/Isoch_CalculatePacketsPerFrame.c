/*
 * XREFs of Isoch_CalculatePacketsPerFrame @ 0x1C002D6F0
 * Callers:
 *     Isoch_Initialize @ 0x1C0069C00 (Isoch_Initialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Isoch_CalculatePacketsPerFrame(__int64 a1)
{
  unsigned int v1; // r8d
  int v2; // eax
  unsigned int v3; // r8d

  v1 = 1;
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 20LL);
  if ( v2 != 1 && (unsigned int)(v2 - 2) <= 1 )
  {
    v3 = 1 << (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 102LL) - 1);
    if ( v3 > 8 )
      v3 = 8;
    return 8 / v3;
  }
  return v1;
}
