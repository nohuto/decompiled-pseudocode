/*
 * XREFs of ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B5F28
 * Callers:
 *     ndisSubmitIdleRequest @ 0x1C00B9E74 (ndisSubmitIdleRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qdD @ 0x1C005EF7C (WPP_RECORDER_SF_qdD_ea_1C005EF7C.c)
 *     ?ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BAD2C (-ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisShouldEngageNicAutoPowerSaver(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v1; // bl
  char v2; // di
  int v3; // edx

  v1 = 0;
  v2 = (char)a1;
  if ( a1->AoAc
    && (a1->PnPFlags & 0x60) == 0x60
    && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2
    && (a1->PMHardwareCapabilities.Flags & 4) != 0
    && !ndisAoAcIsControlPathAoAcNicReferencePresent(a1) )
  {
    if ( ndisIsScreenOnNapsEnabled == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v3,
          15,
          41,
          (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
          v2);
      }
      return 1;
    }
    if ( ndisLowPowerEpoch || ndisConnectedStandby )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qdD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v3,
          0xFu,
          0x2Au,
          (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
          v2,
          ndisLowPowerEpoch,
          ndisConnectedStandby);
      return 1;
    }
  }
  return v1;
}
