/*
 * XREFs of NVMeSetFStateIdleTimer @ 0x1C000F81C
 * Callers:
 *     NVMePowerSetFState @ 0x1C000F2D8 (NVMePowerSetFState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeSetFStateIdleTimer(__int64 a1)
{
  unsigned int v2; // ecx
  int v3; // eax

  v2 = 0;
  if ( *(_DWORD *)(a1 + 1580) == 1 )
  {
    v3 = *(_DWORD *)(a1 + 84);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 80);
    if ( v3 == -1 )
    {
      if ( *(_BYTE *)(a1 + 1578) )
      {
        if ( *(_BYTE *)(a1 + 1577) <= 2u )
          return v2;
        v3 = *(_DWORD *)(a1 + 1604);
      }
      else
      {
        v3 = *(_DWORD *)(a1 + 1596);
      }
    }
  }
  if ( v3 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: Setting F-state idle timeout to %ums\n", v3);
    *(_DWORD *)(a1 + 1568) |= 0x20u;
    return (unsigned int)StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 1608), NVMeFStateIdleTimerCallback);
  }
  return v2;
}
