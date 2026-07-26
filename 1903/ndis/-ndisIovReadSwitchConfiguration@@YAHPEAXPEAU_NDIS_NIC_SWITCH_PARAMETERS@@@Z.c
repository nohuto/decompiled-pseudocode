/*
 * XREFs of ?ndisIovReadSwitchConfiguration@@YAHPEAXPEAU_NDIS_NIC_SWITCH_PARAMETERS@@@Z @ 0x1C00B0D94
 * Callers:
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00329D4 (ndisIovCreateDefaultNicSwitch.c)
 * Callees:
 *     NdisReadConfiguration @ 0x1C002BBC0 (NdisReadConfiguration.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 */

__int64 __fastcall ndisIovReadSwitchConfiguration(
        NDIS_HANDLE ConfigurationHandle,
        struct _NDIS_NIC_SWITCH_PARAMETERS *a2)
{
  unsigned int v4; // edx
  PNDIS_CONFIGURATION_PARAMETER v5; // rdx
  unsigned __int16 Length; // ax
  int Status; // [rsp+48h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+50h] [rbp+20h] BYREF

  Status = 0;
  ParameterValue = 0LL;
  if ( a2->Header.Revision && a2->Header.Size >= 0x224u )
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchFlagsStr, NdisParameterInteger);
    v4 = Status;
    if ( !Status )
    {
      a2->Flags = ParameterValue->ParameterData.IntegerData;
      NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchTypeStr, NdisParameterInteger);
      v4 = Status;
      if ( !Status )
      {
        a2->SwitchType = ParameterValue->ParameterData.IntegerData;
        NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchIdStr, NdisParameterInteger);
        v4 = Status;
        if ( !Status )
        {
          a2->SwitchId = ParameterValue->ParameterData.IntegerData;
          NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchNameStr, NdisParameterString);
          v4 = Status;
          if ( !Status )
          {
            v5 = ParameterValue;
            Length = ParameterValue->ParameterData.StringData.Length;
            if ( Length <= 0x200u )
            {
              a2->SwitchFriendlyName.Length = Length;
              memmove(
                a2->SwitchFriendlyName.String,
                v5->ParameterData.StringData.Buffer,
                v5->ParameterData.StringData.Length);
              NdisReadConfiguration(
                &Status,
                &ParameterValue,
                ConfigurationHandle,
                &NicSwitchNumVFsStr,
                NdisParameterInteger);
              v4 = Status;
              if ( !Status )
                a2->NumVFs = ParameterValue->ParameterData.IntegerData;
            }
            else
            {
              return (unsigned int)-1073741811;
            }
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073676267;
  }
  return v4;
}
