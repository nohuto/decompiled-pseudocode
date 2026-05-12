/*
 * XREFs of RaUnitSwallowStopUnitCommand @ 0x1C0048FE4
 * Callers:
 *     RaUnitScsiIrp @ 0x1C00097A0 (RaUnitScsiIrp.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaUnitSwallowStopUnitCommand(__int64 a1)
{
  __int64 v1; // r8
  char v2; // dl
  int v3; // eax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  if ( (*(_DWORD *)(v1 + 540) & 2) == 0 )
    return *(_DWORD *)(a1 + 488) >= 5;
  if ( (*(_BYTE *)(a1 + 449) & 4) == 0 && (*(_BYTE *)(v1 + 108) & 8) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 488);
    if ( v3 == 5 )
    {
      return *(_DWORD *)(a1 + 924) != 0;
    }
    else if ( v3 == 6 )
    {
      return *(_DWORD *)(a1 + 496) == 5;
    }
  }
  return v2;
}
