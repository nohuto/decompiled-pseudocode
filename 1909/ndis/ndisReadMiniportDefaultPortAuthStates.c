/*
 * XREFs of ndisReadMiniportDefaultPortAuthStates @ 0x1C002C8D0
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     NdisOpenConfigurationEx @ 0x1C002B8A0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C002BAD0 (NdisCloseConfiguration.c)
 *     ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002C1E8 (-ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C002C450 (-ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HA.c)
 */

__int64 __fastcall ndisReadMiniportDefaultPortAuthStates(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edx
  unsigned int MiniportMediaSpecificPortAuthStates; // edi
  unsigned int MiniportSpecificPortAuthStates; // eax
  PVOID v5; // rcx
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-28h] BYREF
  PVOID ConfigurationHandle; // [rsp+70h] [rbp+8h] BYREF

  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  *(&ConfigObject.Flags + 1) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      64,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)a1);
  ConfigObject.Flags = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  MiniportMediaSpecificPortAuthStates = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !MiniportMediaSpecificPortAuthStates )
  {
    MiniportSpecificPortAuthStates = ndisReadMiniportSpecificPortAuthStates(a1, ConfigurationHandle);
    v5 = ConfigurationHandle;
    MiniportMediaSpecificPortAuthStates = MiniportSpecificPortAuthStates;
    if ( !MiniportSpecificPortAuthStates )
    {
      a1->FilterPnPFlags |= 8u;
      NdisCloseConfiguration(v5);
      goto LABEL_9;
    }
    NdisCloseConfiguration(ConfigurationHandle);
    goto LABEL_6;
  }
  if ( a1->MajorNdisVersion < 6u )
LABEL_6:
    MiniportMediaSpecificPortAuthStates = ndisReadMiniportMediaSpecificPortAuthStates(a1);
  if ( MiniportMediaSpecificPortAuthStates )
  {
    a1->DefaultPortSendAuthorizationState = ndisGlobalPortSendAuthorizationState;
    a1->DefaultPortRcvAuthorizationState = ndisGlobalPortReceiveAuthorizationState;
    a1->DefaultPortSendControlState = ndisGlobalPortSendControlState;
    a1->DefaultPortRcvControlState = ndisGlobalPortReceiveControlState;
    a1->DefaultSendAuthorizationState = ndisGlobalPortSendAuthorizationState;
    a1->DefaultRcvAuthorizationState = ndisGlobalPortReceiveAuthorizationState;
    a1->DefaultSendControlState = ndisGlobalPortSendControlState;
    a1->DefaultRcvControlState = ndisGlobalPortReceiveControlState;
  }
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      13,
      65,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)a1,
      MiniportMediaSpecificPortAuthStates);
  }
  return MiniportMediaSpecificPortAuthStates;
}
