/*
 * XREFs of NdisIMRegisterLayeredMiniport @ 0x1C009D4D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisInitializeNsi @ 0x1C010A8C4 (ndisInitializeNsi.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C0139034 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisIMRegisterLayeredMiniport(
        NDIS_HANDLE NdisWrapperHandle,
        PNDIS_MINIPORT_CHARACTERISTICS MiniportCharacteristics,
        UINT CharacteristicsLength,
        PNDIS_HANDLE DriverHandle)
{
  struct _NDIS51_MINIPORT_CHARACTERISTICS *v6; // rbx
  int v8; // ebx
  char *v9; // rcx

  v6 = (struct _NDIS51_MINIPORT_CHARACTERISTICS *)MiniportCharacteristics;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MiniportCharacteristics) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportCharacteristics,
      1,
      12,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)NdisWrapperHandle);
  }
  if ( !ndisNsiInitialized )
    ndisInitializeNsi(NdisWrapperHandle);
  if ( v6->Ndis50Chars.MajorNdisVersion < 6u )
  {
    v8 = ndisRegisterMiniportDriver(NdisWrapperHandle, v6, CharacteristicsLength, DriverHandle);
    if ( !v8 )
    {
      v9 = (char *)*DriverHandle;
      *((_WORD *)v9 + 13) |= 1u;
      KeInitializeMutex((PRKMUTEX)(v9 + 416), 0xFFFFu);
    }
  }
  else
  {
    v8 = -1073676284;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MiniportCharacteristics) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportCharacteristics,
      1,
      13,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)*DriverHandle,
      v8);
  }
  return v8;
}
