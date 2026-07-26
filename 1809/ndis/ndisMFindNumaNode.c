/*
 * XREFs of ndisMFindNumaNode @ 0x1C00CA4E4
 * Callers:
 *     ndisMFindNumaDistances @ 0x1C00CA39C (ndisMFindNumaDistances.c)
 * Callees:
 *     NdisCloseConfiguration @ 0x1C00C48C0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00C6760 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00C6C20 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisMFindNumaNode(__int64 a1)
{
  int v2; // ebx
  USHORT HighestNodeNumber; // ax
  unsigned int IntegerData; // edx
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+30h] [rbp-20h] BYREF
  int Status; // [rsp+70h] [rbp+20h] BYREF
  PVOID ConfigurationHandle; // [rsp+78h] [rbp+28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+80h] [rbp+30h] BYREF

  ConfigObject.Flags = 0;
  ConfigObject.NdisHandle = (void *)a1;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( Status < 0 )
    return (unsigned int)IoGetDeviceNumaNode(*(PDEVICE_OBJECT *)(a1 + 3864), (PUSHORT)(a1 + 4432));
  NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NumaNodeIdStr, NdisParameterInteger);
  v2 = Status;
  if ( Status >= 0 )
  {
    HighestNodeNumber = KeQueryHighestNodeNumber();
    IntegerData = ParameterValue->ParameterData.IntegerData;
    if ( IntegerData <= HighestNodeNumber )
      *(_WORD *)(a1 + 4432) = IntegerData;
    else
      v2 = -1073676267;
  }
  NdisCloseConfiguration(ConfigurationHandle);
  if ( v2 < 0 )
    return (unsigned int)IoGetDeviceNumaNode(*(PDEVICE_OBJECT *)(a1 + 3864), (PUSHORT)(a1 + 4432));
  return (unsigned int)v2;
}
