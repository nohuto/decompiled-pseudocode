/*
 * XREFs of ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072BE8
 * Callers:
 *     ndisSubmitIdleRequest @ 0x1C0076428 (ndisSubmitIdleRequest.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     ?ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00770D0 (-ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisShouldEngageNicAutoPowerSaver(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v1; // bl

  v1 = 0;
  if ( a1->AoAc
    && (a1->PnPFlags & 0x60) == 0x60
    && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2
    && (a1->PMHardwareCapabilities.Flags & 4) != 0
    && !ndisAoAcIsControlPathAoAcNicReferencePresent(a1) )
  {
    if ( ndisIsScreenOnNapsEnabled == 1 )
    {
      if ( (unsigned __int8)byte_1C00A025E >= 4u )
        WPP_SF_q(0x28u, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, (__int64)a1);
      return 1;
    }
    if ( ndisLowPowerEpoch || ndisConnectedStandby )
    {
      if ( (unsigned __int8)byte_1C00A025E >= 4u )
        WPP_SF_qdD(
          0x29u,
          &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids,
          (__int64)a1,
          ndisLowPowerEpoch,
          ndisConnectedStandby);
      return 1;
    }
  }
  return v1;
}
