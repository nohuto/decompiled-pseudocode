/*
 * XREFs of NdisMRegisterMiniport @ 0x1C009E750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisInitializeNsi @ 0x1C010A8C4 (ndisInitializeNsi.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C0139034 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 */

NDIS_STATUS __stdcall NdisMRegisterMiniport(
        NDIS_HANDLE NdisWrapperHandle,
        PNDIS_MINIPORT_CHARACTERISTICS MiniportCharacteristics,
        UINT CharacteristicsLength)
{
  char v3; // di
  struct _NDIS51_MINIPORT_CHARACTERISTICS *v5; // rsi
  NDIS_STATUS v7; // ebx
  int v8; // eax
  void *v10; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v10 = 0LL;
  v5 = (struct _NDIS51_MINIPORT_CHARACTERISTICS *)MiniportCharacteristics;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MiniportCharacteristics) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportCharacteristics,
      1,
      10,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)NdisWrapperHandle);
  }
  if ( !ndisNsiInitialized )
    ndisInitializeNsi(NdisWrapperHandle);
  if ( CharacteristicsLength >= 0x70 )
  {
    if ( v5->Ndis50Chars.MajorNdisVersion < 6u )
    {
      v8 = ndisRegisterMiniportDriver(NdisWrapperHandle, v5, CharacteristicsLength, &v10);
      v3 = (char)v10;
      v7 = v8;
    }
    else
    {
      v7 = -1073676284;
    }
  }
  else
  {
    v7 = -1073676283;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MiniportCharacteristics) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportCharacteristics,
      1,
      11,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      v3,
      v7);
  }
  return v7;
}
