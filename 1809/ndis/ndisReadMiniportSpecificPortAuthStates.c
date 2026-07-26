/*
 * XREFs of ndisReadMiniportSpecificPortAuthStates @ 0x1C00BC95C
 * Callers:
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C00BC674 (ndisReadMiniportDefaultPortAuthStates.c)
 *     ndisReadMiniportMediaSpecificPortAuthStates @ 0x1C00BC768 (ndisReadMiniportMediaSpecificPortAuthStates.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     NdisReadConfiguration @ 0x1C00C6760 (NdisReadConfiguration.c)
 */

__int64 __fastcall ndisReadMiniportSpecificPortAuthStates(_DWORD *a1, void *a2)
{
  unsigned int v4; // edi
  unsigned int IntegerData; // r12d
  unsigned int v7; // r15d
  unsigned int v8; // r14d
  unsigned int v9; // ecx
  UNICODE_STRING Keyword; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING v11; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v12; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING v13; // [rsp+60h] [rbp-10h] BYREF
  int Status; // [rsp+B0h] [rbp+40h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+B8h] [rbp+48h] BYREF

  *(_DWORD *)&Keyword.Length = 3276848;
  Keyword.Buffer = L"PortAuthSendControlState";
  *(_DWORD *)&v11.Length = 3670070;
  v11.Buffer = L"PortAuthReceiveControlState";
  *(_DWORD *)&v12.Length = 4063292;
  v12.Buffer = L"PortAuthSendAuthorizationState";
  *(_DWORD *)&v13.Length = 4456514;
  v13.Buffer = L"PortAuthReceiveAuthorizationState";
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x32u, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, (__int64)a1);
  NdisReadConfiguration(&Status, &ParameterValue, a2, &Keyword, NdisParameterInteger);
  v4 = Status;
  if ( !Status && ParameterValue->ParameterData.StringData.Length <= 2u )
  {
    IntegerData = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, a2, &v11, NdisParameterInteger);
    v4 = Status;
    if ( !Status )
    {
      v7 = ParameterValue->ParameterData.IntegerData;
      NdisReadConfiguration(&Status, &ParameterValue, a2, &v12, NdisParameterInteger);
      v4 = Status;
      if ( !Status )
      {
        v8 = ParameterValue->ParameterData.IntegerData;
        NdisReadConfiguration(&Status, &ParameterValue, a2, &v13, NdisParameterInteger);
        v4 = Status;
        if ( !Status )
        {
          v9 = ParameterValue->ParameterData.IntegerData;
          a1[838] = v8;
          a1[839] = v9;
          a1[836] = IntegerData;
          a1[837] = v7;
          a1[834] = v8;
          a1[835] = v9;
          a1[832] = IntegerData;
          a1[833] = v7;
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x33u, &WPP_b87f241b44683114d5775ca3de93698d_Traceguids, (__int64)a1, v4);
  return v4;
}
