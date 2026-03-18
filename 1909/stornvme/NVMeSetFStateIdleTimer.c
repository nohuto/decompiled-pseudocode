/*
 * XREFs of NVMeSetFStateIdleTimer @ 0x1C000D958
 * Callers:
 *     NVMePowerSetFState @ 0x1C000D414 (NVMePowerSetFState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeSetFStateIdleTimer(__int64 a1)
{
  unsigned int v2; // ecx
  int v3; // eax

  v2 = 0;
  if ( *(_DWORD *)(a1 + 1588) == 1 )
  {
    v3 = *(_DWORD *)(a1 + 84);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 80);
    if ( v3 == -1 )
    {
      if ( *(_BYTE *)(a1 + 1586) )
      {
        if ( *(_BYTE *)(a1 + 1585) <= 2u )
          return v2;
        v3 = *(_DWORD *)(a1 + 1612);
      }
      else
      {
        v3 = *(_DWORD *)(a1 + 1604);
      }
    }
  }
  if ( v3 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: Setting F-state idle timeout to %ums\n", v3);
    *(_DWORD *)(a1 + 1576) |= 0x20u;
    return (unsigned int)StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 1616));
  }
  return v2;
}
