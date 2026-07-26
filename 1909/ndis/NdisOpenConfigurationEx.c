/*
 * XREFs of NdisOpenConfigurationEx @ 0x1C002B8A0
 * Callers:
 *     ndisReadRssKeywords @ 0x1C002A93C (ndisReadRssKeywords.c)
 *     ndisReadOffloadRegistry @ 0x1C002B2B4 (ndisReadOffloadRegistry.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C002C8D0 (ndisReadMiniportDefaultPortAuthStates.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00329C4 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0038CF4 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ?ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003A4C4 (-ndisMFindNumaNode@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisUpdateHDSplitKeyword @ 0x1C0070AC4 (ndisUpdateHDSplitKeyword.c)
 *     ndisUpdateOffloadKeywords @ 0x1C0070C64 (ndisUpdateOffloadKeywords.c)
 *     DisableMagicPacketKeyword @ 0x1C0072228 (DisableMagicPacketKeyword.c)
 *     ndisWmiSetPMAdminConfig @ 0x1C00777F4 (ndisWmiSetPMAdminConfig.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C00964B8 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0097D5C (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C00B2750 (ndisOidPostIovNicSwitchParameters.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C0105C94 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C0105DDC (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106E7C (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0108568 (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011BB74 (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C011BC98 (ndisReadSSTimeoutKeywords.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00238B0 (NdisOpenProtocolConfiguration.c)
 *     ?ndisAllocateConfigurationString@@YAHPEBU_UNICODE_STRING@@00PEAU1@@Z @ 0x1C002AF7C (-ndisAllocateConfigurationString@@YAHPEBU_UNICODE_STRING@@00PEAU1@@Z.c)
 *     NdisOpenConfiguration @ 0x1C002B160 (NdisOpenConfiguration.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C008F898 (ndisGetOrCreateFilterInstanceKey.c)
 */

NDIS_STATUS __stdcall NdisOpenConfigurationEx(
        PNDIS_CONFIGURATION_OBJECT ConfigObject,
        PNDIS_HANDLE ConfigurationHandle)
{
  unsigned __int8 *NdisHandle; // rdi
  char v3; // r15
  PNDIS_HANDLE v4; // rsi
  void *v6; // r8
  int v7; // ebx
  int v9; // eax
  bool v10; // zf
  _UNICODE_STRING *p_Destination; // r8
  const struct _UNICODE_STRING *v12; // rcx
  const struct _UNICODE_STRING *v13; // r8
  const struct _UNICODE_STRING *v14; // rdx
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-20h] BYREF
  _UNICODE_STRING GuidString; // [rsp+50h] [rbp-10h] BYREF
  int Status; // [rsp+90h] [rbp+30h] BYREF

  NdisHandle = (unsigned __int8 *)ConfigObject->NdisHandle;
  *(_QWORD *)&Destination.Length = 0LL;
  v3 = 0;
  Destination.Buffer = 0LL;
  v4 = ConfigurationHandle;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  LOBYTE(Status) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ConfigurationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ConfigurationHandle,
      8,
      34,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      (char)ConfigObject);
  }
  if ( ConfigObject->Header.Type != 0xA9 || ConfigObject->Header.Size < 0x14u || !ConfigObject->Header.Revision )
    return -1073741811;
  switch ( *NdisHandle )
  {
    case 2u:
      if ( NdisHandle[24] < 6u )
      {
        v7 = -1073741637;
        goto LABEL_15;
      }
      p_Destination = (_UNICODE_STRING *)(NdisHandle + 488);
      goto LABEL_31;
    case 3u:
      v12 = (const struct _UNICODE_STRING *)(NdisHandle + 72);
      goto LABEL_33;
    case 4u:
      v12 = (const struct _UNICODE_STRING *)(NdisHandle + 144);
LABEL_33:
      v13 = 0LL;
      v14 = 0LL;
LABEL_34:
      v7 = ndisAllocateConfigurationString(v12, v14, v13, &Destination);
      Status = v7;
      v10 = v7 == 0;
      goto LABEL_29;
    case 5u:
      if ( (ConfigObject->Flags & 1) != 0 )
      {
        ConfigurationHandle = (PNDIS_HANDLE)*((_QWORD *)NdisHandle + 2);
        if ( (*((_DWORD *)ConfigurationHandle[43] + 10) & 2) == 0 )
          goto LABEL_42;
        v9 = ndisGetOrCreateFilterInstanceKey(
               (unsigned __int8)ConfigurationHandle - 112,
               (__int64)&Status,
               &Destination);
      }
      else
      {
        if ( RtlStringFromGUID(
               (const GUID *const)(*(_QWORD *)(*((_QWORD *)NdisHandle + 4) + 16LL) + 4008LL),
               &GuidString) )
        {
          goto LABEL_42;
        }
        v3 = 1;
        v9 = ndisAllocateConfigurationString(
               (const struct _UNICODE_STRING *)(*((_QWORD *)NdisHandle + 2) + 144LL),
               &GuidString,
               &ndisFilterAdapterStr,
               &Destination);
      }
      v7 = v9;
      Status = v9;
      v10 = v9 == 0;
LABEL_29:
      if ( !v10 )
        goto LABEL_15;
      p_Destination = &Destination;
      goto LABEL_31;
    case 0xAu:
      v6 = NdisHandle;
      goto LABEL_13;
  }
  if ( *NdisHandle != 17 )
  {
    if ( *NdisHandle != 18 )
    {
      if ( *NdisHandle == 134 )
      {
        p_Destination = (_UNICODE_STRING *)*((_QWORD *)NdisHandle + 1);
LABEL_31:
        NdisOpenProtocolConfiguration(&Status, v4, p_Destination);
        goto LABEL_14;
      }
LABEL_42:
      v7 = -1073741823;
      goto LABEL_15;
    }
    v13 = (const struct _UNICODE_STRING *)&ndisAdapterStr;
    v14 = (const struct _UNICODE_STRING *)(*((_QWORD *)NdisHandle + 2) + 3792LL);
    v12 = (const struct _UNICODE_STRING *)(*((_QWORD *)NdisHandle + 3) + 72LL);
    goto LABEL_34;
  }
  v6 = (void *)*((_QWORD *)NdisHandle + 500);
LABEL_13:
  NdisOpenConfiguration(&Status, v4, v6);
LABEL_14:
  v7 = Status;
LABEL_15:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( !v7 && *v4 )
    *((_QWORD *)*v4 + 1) = NdisHandle;
  if ( v3 )
    RtlFreeUnicodeString(&GuidString);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ConfigurationHandle) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ConfigurationHandle,
      8,
      35,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      (char)ConfigObject,
      v7);
  }
  return v7;
}
