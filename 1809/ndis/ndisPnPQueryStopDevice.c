/*
 * XREFs of ndisPnPQueryStopDevice @ 0x1C0118E30
 * Callers:
 *     ndisPnPIrpQueryStop @ 0x1C00F4860 (ndisPnPIrpQueryStop.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C00F30DC (ndisPnPQueryRemoveDevice.c)
 */

__int64 __fastcall ndisPnPQueryStopDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v2; // edi
  KIRQL v3; // dl
  bool v4; // zf
  unsigned __int64 *p_Lock; // rcx

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x4Fu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)a1);
  if ( (a1->PnPCapabilities & 1) != 0 )
  {
    v2 = -1073741823;
  }
  else
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    v4 = a1->UserModeOpenReferences == 0;
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    p_Lock = &a1->Lock;
    if ( v4 )
    {
      KeReleaseSpinLock(p_Lock, v3);
      v2 = ndisPnPQueryRemoveDevice(a1);
    }
    else
    {
      v2 = -1073741823;
      KeReleaseSpinLock(p_Lock, v3);
    }
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x50u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)a1);
  return v2;
}
