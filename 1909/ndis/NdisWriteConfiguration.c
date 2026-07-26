/*
 * XREFs of NdisWriteConfiguration @ 0x1C002A770
 * Callers:
 *     ndisUpdateHDSplitKeyword @ 0x1C0070AC4 (ndisUpdateHDSplitKeyword.c)
 *     ndisWritePMAdminConfigState @ 0x1C0077A3C (ndisWritePMAdminConfigState.c)
 *     ndisWriteConfigurationIfPresent @ 0x1C007F654 (ndisWriteConfigurationIfPresent.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A851C (ndisWmiChangeSingleInstance.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C00B2750 (ndisOidPostIovNicSwitchParameters.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C0105DDC (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C0119D6C (ndisNDKHandleWmiChangeRequest.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 */

void __stdcall NdisWriteConfiguration(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        PNDIS_CONFIGURATION_PARAMETER ParameterValue)
{
  char v7; // r12
  char *v8; // r14
  _NDIS_PARAMETER_TYPE ParameterType; // eax
  wchar_t *Buffer; // rdi
  ULONG v11; // ebp
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *ValueData; // r15
  ULONG Length; // ebx
  __int64 v14; // rdx
  wchar_t *PoolWithTag; // rax
  const WCHAR *v16; // rdx
  ULONG v17; // ecx
  char ValueLength; // [rsp+28h] [rbp-30h]

  v7 = 0;
  v8 = (char *)ConfigurationHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    ValueLength = (char)ConfigurationHandle;
    LOBYTE(ConfigurationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ConfigurationHandle,
      8,
      28,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      ValueLength);
  }
  *Status = 0;
  ParameterType = ParameterValue->ParameterType;
  Buffer = Keyword->Buffer;
  if ( ParameterValue->ParameterType < NdisParameterInteger )
    goto LABEL_26;
  if ( ParameterType <= NdisParameterHexInteger )
  {
    ValueData = &ParameterValue->ParameterData;
    Length = 4;
    v11 = 4;
  }
  else if ( ParameterType == NdisParameterString )
  {
    ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
    v11 = 1;
    Length = ParameterValue->ParameterData.StringData.Length + 2;
  }
  else
  {
    v11 = 3;
    if ( ParameterType != NdisParameterMultiString )
    {
      if ( ParameterType == NdisParameterBinary )
      {
        ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
        Length = ParameterValue->ParameterData.StringData.Length;
        goto LABEL_9;
      }
LABEL_26:
      *Status = -1073741637;
      goto LABEL_18;
    }
    ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
    v11 = 7;
    Length = ParameterValue->ParameterData.StringData.Length;
  }
LABEL_9:
  v14 = Keyword->Length;
  if ( (unsigned __int16)v14 < 2u || Buffer[((unsigned __int64)Keyword->Length >> 1) - 1] )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v14 + 2, 0x2020444Eu);
    Buffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      *Status = -1073741670;
      goto LABEL_18;
    }
    v7 = 1;
    memmove(PoolWithTag, Keyword->Buffer, Keyword->Length);
    Buffer[(unsigned __int64)Keyword->Length >> 1] = 0;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v8 + 2) + 16LL) & 2) == 0 || *((_QWORD *)v8 + 4) )
  {
    v16 = (const WCHAR *)*((_QWORD *)v8 + 4);
    v17 = 0x40000000;
  }
  else
  {
    v16 = (const WCHAR *)(v8 + 176);
    v17 = 1;
  }
  *Status = RtlWriteRegistryValue(v17, v16, (PCWSTR)Buffer, v11, ValueData, Length);
  if ( v7 )
    ExFreePoolWithTag(Buffer, 0);
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ConfigurationHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ConfigurationHandle,
      8,
      29,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      (char)v8);
  }
}
