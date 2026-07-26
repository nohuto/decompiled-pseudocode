/*
 * XREFs of NdisMRemoveMiniportInternal @ 0x1C00650EC
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C0042598 (ndisIfDeregisterInterfaceEx.c)
 *     NdisMRemoveMiniport @ 0x1C00650D0 (NdisMRemoveMiniport.c)
 *     ndisMiniportFatalError @ 0x1C00F434C (ndisMiniportFatalError.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall NdisMRemoveMiniportInternal(__int64 a1, unsigned __int16 a2)
{
  KIRQL v4; // al
  int v5; // ecx

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x61u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, a1);
  if ( (*(_DWORD *)(a1 + 120) & 0x100) == 0 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
    v5 = *(_DWORD *)(a1 + 124);
    if ( (v5 & 0x100) != 0 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
    }
    else
    {
      *(_DWORD *)(a1 + 124) = v5 | 0x100;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
      ndisLogMiniportEvent(a1, a2);
      IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 3864));
    }
    if ( (unsigned __int8)byte_1C00A025C >= 4u )
      WPP_SF_q(0x62u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, a1);
  }
}
