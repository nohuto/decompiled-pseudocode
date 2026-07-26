/*
 * XREFs of ndisWdfMiniportUpdatePowerState @ 0x1C00A6138
 * Callers:
 *     ndisWdfDevicePowerDown @ 0x1C00A5954 (ndisWdfDevicePowerDown.c)
 *     ndisWdfDevicePowerOn @ 0x1C00A5BE0 (ndisWdfDevicePowerOn.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ?ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BD96C (-ndisWdfIsAoAcPowerTransition@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisWdfMiniportUpdatePowerState(__int64 a1, int a2)
{
  unsigned __int16 v3; // ax

  *(_DWORD *)(a1 + 3884) = *(_DWORD *)(a1 + 3880);
  *(_DWORD *)(a1 + 3880) = a2;
  *(_DWORD *)(a1 + 3868) = a2;
  if ( a2 == 1 )
  {
    v3 = 12;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 4456) )
      ndisWdfIsAoAcPowerTransition((struct _NDIS_MINIPORT_BLOCK *)a1);
    v3 = 14;
  }
  return ndisLogMiniportEvent(a1, v3);
}
