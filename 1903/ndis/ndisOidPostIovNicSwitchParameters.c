/*
 * XREFs of ndisOidPostIovNicSwitchParameters @ 0x1C00B2580
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     NdisWriteConfiguration @ 0x1C002A780 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C002AD70 (NdisOpenConfigurationKeyByName.c)
 *     NdisOpenConfigurationEx @ 0x1C002B8B0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C002BAE0 (NdisCloseConfiguration.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B08E0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisOidPostIovNicSwitchParameters(__int64 a1)
{
  __int64 v1; // r15
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // r13
  NDIS_STATUS v8; // eax
  PVOID v9; // rsi
  PVOID v10; // r14
  __int64 v11; // r8
  unsigned __int16 *v12; // rdx
  _IF_COUNTED_STRING_LH *p_SwitchFriendlyName; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+58h] [rbp-18h] BYREF
  int Status; // [rsp+B0h] [rbp+40h] BYREF
  PVOID ConfigurationHandle; // [rsp+B8h] [rbp+48h] BYREF
  PVOID SubKeyHandle; // [rsp+C0h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  ConfigurationHandle = 0LL;
  SubKeyHandle = 0LL;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  v4 = v1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      27,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v3,
      v1);
    v4 = *(_QWORD *)(a1 + 32);
  }
  if ( *(_DWORD *)(v4 + 4) == 1 )
  {
    if ( v3 )
    {
      v5 = *(_DWORD *)(a1 + 40);
      if ( !v5 || v5 == -1071448016 )
      {
        v6 = *(_QWORD *)(v1 + 40);
        SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v3, *(_DWORD *)(v6 + 12));
        if ( SwitchBySwitchId )
        {
          ConfigObject.Flags = 0;
          ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
          ConfigObject.NdisHandle = v3;
          v8 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
          v9 = ConfigurationHandle;
          Status = v8;
          if ( !v8 )
          {
            NdisOpenConfigurationKeyByName(&Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
            v10 = SubKeyHandle;
            if ( !Status && (*(_DWORD *)(v6 + 4) & 0x10000) != 0 )
            {
              v11 = 4LL;
              v12 = (unsigned __int16 *)(v6 + 16);
              p_SwitchFriendlyName = &SwitchBySwitchId->SwitchParameters.SwitchFriendlyName;
              v14 = (_OWORD *)(v6 + 16);
              do
              {
                *(_OWORD *)&p_SwitchFriendlyName->Length = *v14;
                *(_OWORD *)&p_SwitchFriendlyName->String[7] = v14[1];
                *(_OWORD *)&p_SwitchFriendlyName->String[15] = v14[2];
                *(_OWORD *)&p_SwitchFriendlyName->String[23] = v14[3];
                *(_OWORD *)&p_SwitchFriendlyName->String[31] = v14[4];
                *(_OWORD *)&p_SwitchFriendlyName->String[39] = v14[5];
                *(_OWORD *)&p_SwitchFriendlyName->String[47] = v14[6];
                p_SwitchFriendlyName = (_IF_COUNTED_STRING_LH *)((char *)p_SwitchFriendlyName + 128);
                v15 = v14[7];
                v14 += 8;
                *(_OWORD *)&p_SwitchFriendlyName[-1].String[249] = v15;
                --v11;
              }
              while ( v11 );
              *(_DWORD *)&p_SwitchFriendlyName->Length = *(_DWORD *)v14;
              ParameterValue.ParameterType = NdisParameterString;
              ParameterValue.ParameterData.StringData.Buffer = (wchar_t *)(v6 + 18);
              ParameterValue.ParameterData.StringData.Length = *v12;
              ParameterValue.ParameterData.StringData.MaximumLength = *v12 + 2;
              NdisWriteConfiguration(&Status, v10, &NicSwitchNameStr, &ParameterValue);
            }
            if ( v10 )
              NdisCloseConfiguration(v10);
          }
          if ( v9 )
            NdisCloseConfiguration(v9);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      28,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v3,
      v1);
}
