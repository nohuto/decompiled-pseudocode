/*
 * XREFs of NdisIMDeInitializeDeviceInstance @ 0x1C009D330
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisDereferenceDriver @ 0x1C00172A0 (ndisDereferenceDriver.c)
 *     ndisMDereferenceIfBlock @ 0x1C001AE20 (ndisMDereferenceIfBlock.c)
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     ndisMReferenceIfBlock @ 0x1C001C65C (ndisMReferenceIfBlock.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00FF438 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C0136900 (ndisDeQueueMiniportOnDriver.c)
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 */

NDIS_STATUS __stdcall NdisIMDeInitializeDeviceInstance(NDIS_HANDLE NdisMiniportHandle)
{
  NDIS_STATUS v2; // edi
  __int64 v3; // rsi
  int v4; // edx
  bool v5; // cf
  int v7; // [rsp+60h] [rbp+8h] BYREF

  v2 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      16,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)NdisMiniportHandle);
  v3 = *((_QWORD *)NdisMiniportHandle + 470);
  if ( (unsigned __int8)ndisReferenceMiniport((__int64)NdisMiniportHandle) )
  {
    ndisReferenceRefEx((PKSPIN_LOCK)(v3 + 392), 0, &v7);
    v5 = *((_BYTE *)NdisMiniportHandle + 32) < 6u;
    *((_DWORD *)NdisMiniportHandle + 380) = 3;
    if ( v5 )
      *((_BYTE *)NdisMiniportHandle + 5265) = 1;
    ndisPnPRemoveDevice((char)NdisMiniportHandle);
    *((_DWORD *)NdisMiniportHandle + 967) = 0;
    *((_DWORD *)NdisMiniportHandle + 970) = 0;
    *((_DWORD *)NdisMiniportHandle + 1017) = 0;
    *((_DWORD *)NdisMiniportHandle + 1016) = 7;
    *((_BYTE *)NdisMiniportHandle + 5265) = 0;
    if ( ndisMReferenceIfBlock((__int64)NdisMiniportHandle, 0) )
    {
      *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 505) + 1112LL) = 7;
      *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 505) + 1116LL) = 0;
      ndisNsiSyncMiniportOperStatusNotification(NdisMiniportHandle);
      ndisMDereferenceIfBlock((__int64)NdisMiniportHandle, MPIFREF_IMDEINIT);
    }
    if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle) )
    {
      ndisDeQueueMiniportOnDriver((char)NdisMiniportHandle, *((_QWORD *)NdisMiniportHandle + 470));
      ndisDereferenceDriver(*((_QWORD *)NdisMiniportHandle + 470), 0, 2u);
    }
    ndisDereferenceMiniport((__int64)NdisMiniportHandle, 0x16u);
    ndisDereferenceDriver(v3, 0, 0);
    v2 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      1,
      17,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)NdisMiniportHandle,
      v2);
  }
  return v2;
}
