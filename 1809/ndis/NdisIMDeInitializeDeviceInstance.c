/*
 * XREFs of NdisIMDeInitializeDeviceInstance @ 0x1C00F1380
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisReferenceDriver @ 0x1C00151A8 (ndisReferenceDriver.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019E34 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019EC8 (ndisMReferenceIfBlock.c)
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisDereferenceDriver @ 0x1C0052A18 (ndisDereferenceDriver.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C4184 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C01159F0 (ndisDeQueueMiniportOnDriver.c)
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 */

NDIS_STATUS __stdcall NdisIMDeInitializeDeviceInstance(NDIS_HANDLE NdisMiniportHandle)
{
  int v2; // edi
  __int64 v3; // rsi
  bool v4; // cf
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = -1073741823;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x10u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)NdisMiniportHandle);
  v3 = *((_QWORD *)NdisMiniportHandle + 474);
  if ( ndisReferenceMiniport((__int64)NdisMiniportHandle) )
  {
    ndisReferenceDriver(v3);
    v4 = *((_BYTE *)NdisMiniportHandle + 32) < 6u;
    *((_DWORD *)NdisMiniportHandle + 380) = 3;
    if ( v4 )
      *((_BYTE *)NdisMiniportHandle + 5305) = 1;
    ndisPnPRemoveDevice(NdisMiniportHandle);
    *((_DWORD *)NdisMiniportHandle + 975) = 0;
    *((_DWORD *)NdisMiniportHandle + 978) = 0;
    *((_DWORD *)NdisMiniportHandle + 1025) = 0;
    *((_BYTE *)NdisMiniportHandle + 5305) = 0;
    *((_DWORD *)NdisMiniportHandle + 1024) = 7;
    if ( ndisMReferenceIfBlock((__int64)NdisMiniportHandle, 0) )
    {
      *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 509) + 1112LL) = 7;
      *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 509) + 1116LL) = 0;
      v5 = *((_QWORD *)NdisMiniportHandle + 509);
      v7[0] = 1LL;
      v7[2] = 0x21800000008LL;
      v7[1] = v5 + 1112;
      ndisNsiNotifyClientInterfaceChange(v5, 0, (__int64)v7, 1);
      ndisMDereferenceIfBlock((__int64)NdisMiniportHandle, MPIFREF_IMDEINIT);
    }
    if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle) )
    {
      ndisDeQueueMiniportOnDriver(NdisMiniportHandle, *((_QWORD *)NdisMiniportHandle + 474));
      ndisDereferenceDriver(*((_QWORD *)NdisMiniportHandle + 474), 0, 2u);
    }
    ndisDereferenceMiniport((__int64)NdisMiniportHandle, 0x16u);
    ndisDereferenceDriver(v3, 0, 0);
    v2 = 0;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x11u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)NdisMiniportHandle, v2);
  return v2;
}
