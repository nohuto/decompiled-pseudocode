/*
 * XREFs of ?ndisReadMiniportSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_HANDLE@@@Z @ 0x1C002C450
 * Callers:
 *     ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002C1E8 (-ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C002C8D0 (ndisReadMiniportDefaultPortAuthStates.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     NdisReadConfiguration @ 0x1C002BBB0 (NdisReadConfiguration.c)
 */

__int64 __fastcall ndisReadMiniportSpecificPortAuthStates(
        struct _NDIS_MINIPORT_BLOCK *a1,
        NDIS_HANDLE ConfigurationHandle)
{
  NDIS_HANDLE v2; // rsi
  int v4; // edx
  unsigned int v5; // edi
  _NDIS_PORT_CONTROL_STATE IntegerData; // r12d
  _NDIS_PORT_CONTROL_STATE v8; // r15d
  _NDIS_PORT_AUTHORIZATION_STATE v9; // r14d
  _NDIS_PORT_AUTHORIZATION_STATE v10; // ecx
  UNICODE_STRING Keyword; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING v12; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING v13; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING v14; // [rsp+70h] [rbp-10h] BYREF
  int Status; // [rsp+C0h] [rbp+40h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+C8h] [rbp+48h] BYREF

  *(_QWORD *)&Keyword.Length = 3276848LL;
  Keyword.Buffer = L"PortAuthSendControlState";
  v2 = ConfigurationHandle;
  *(_QWORD *)&v12.Length = 3670070LL;
  v12.Buffer = L"PortAuthReceiveControlState";
  *(_QWORD *)&v13.Length = 4063292LL;
  v13.Buffer = L"PortAuthSendAuthorizationState";
  *(_QWORD *)&v14.Length = 4456514LL;
  v14.Buffer = L"PortAuthReceiveAuthorizationState";
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ConfigurationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ConfigurationHandle,
      13,
      60,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)a1);
  }
  NdisReadConfiguration(&Status, &ParameterValue, v2, &Keyword, NdisParameterInteger);
  v5 = Status;
  if ( !Status && ParameterValue->ParameterData.StringData.Length <= 2u )
  {
    IntegerData = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, v2, &v12, NdisParameterInteger);
    v5 = Status;
    if ( !Status )
    {
      v8 = ParameterValue->ParameterData.IntegerData;
      NdisReadConfiguration(&Status, &ParameterValue, v2, &v13, NdisParameterInteger);
      v5 = Status;
      if ( !Status )
      {
        v9 = ParameterValue->ParameterData.IntegerData;
        NdisReadConfiguration(&Status, &ParameterValue, v2, &v14, NdisParameterInteger);
        v5 = Status;
        if ( !Status )
        {
          v10 = ParameterValue->ParameterData.IntegerData;
          a1->DefaultPortSendAuthorizationState = v9;
          a1->DefaultPortRcvAuthorizationState = v10;
          a1->DefaultPortSendControlState = IntegerData;
          a1->DefaultPortRcvControlState = v8;
          a1->DefaultSendAuthorizationState = v9;
          a1->DefaultRcvAuthorizationState = v10;
          a1->DefaultSendControlState = IntegerData;
          a1->DefaultRcvControlState = v8;
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      13,
      61,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)a1,
      v5);
  }
  return v5;
}
