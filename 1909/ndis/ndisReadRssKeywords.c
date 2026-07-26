/*
 * XREFs of ndisReadRssKeywords @ 0x1C002A93C
 * Callers:
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     NdisOpenConfigurationEx @ 0x1C002B8A0 (NdisOpenConfigurationEx.c)
 *     NdisCloseConfiguration @ 0x1C002BAD0 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C002BBB0 (NdisReadConfiguration.c)
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C002BF78 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x1C0030808 (-NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETE.c)
 */

__int64 __fastcall ndisReadRssKeywords(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _PROCESSOR_NUMBER v2; // ebx
  _NDIS_RSS_PROFILE IntegerData; // r14d
  struct _PROCESSOR_NUMBER v4; // edi
  unsigned __int16 Length; // r12
  PVOID v6; // rbx
  unsigned __int16 Group; // r15
  unsigned int MaxNumRssProcessors; // ecx
  int v9; // eax
  unsigned int DeviceContext_high; // r15d
  struct _PROCESSOR_NUMBER v11; // r8d
  __int64 result; // rax
  _PROCESSOR_NUMBER v13; // r8d
  __int64 v14; // r11
  unsigned int v15; // r9d
  struct _PROCESSOR_NUMBER v16; // r8d
  int v17; // r9d
  _PROCESSOR_NUMBER v18; // r8d
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+30h] [rbp-38h] BYREF
  PVOID ConfigurationHandle; // [rsp+38h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-28h] BYREF
  int Status; // [rsp+B0h] [rbp+48h] BYREF
  _PROCESSOR_NUMBER v23; // [rsp+B8h] [rbp+50h]
  struct _PROCESSOR_NUMBER v24; // [rsp+C0h] [rbp+58h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+C8h] [rbp+60h] BYREF

  *((_DWORD *)&ConfigObject.Header + 1) = 0;
  v2 = 0;
  IntegerData = NdisRssProfileNumaStatic;
  *(&ConfigObject.Flags + 1) = 0;
  v4 = 0;
  v24 = 0;
  v23 = 0;
  ProcNumber = 0;
  KeGetProcessorNumberFromIndex(ndisRssBaseCpu, &ProcNumber);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  ConfigObject.NdisHandle = a1;
  Length = 20;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !Status )
  {
    v6 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &RssStr, NdisParameterInteger);
    NdisTraceLoggingRssConfiguration(a1, ParameterValue, Status);
    NdisReadConfiguration(&Status, &ParameterValue, v6, &MaxRssProcStr, NdisParameterInteger);
    if ( !Status )
      a1->MaxNumRssProcessors = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssBaseProcGroupStr, NdisParameterInteger);
    if ( Status || ParameterValue->ParameterData.IntegerData >= 0x14 )
    {
      Group = v24.Group;
    }
    else
    {
      Group = ParameterValue->ParameterData.StringData.Length;
      v24.Group = Group;
      v4 = v24;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssBaseProcNumStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData < 0x40 )
    {
      v24.Number = ParameterValue->ParameterData.IntegerData;
      v4 = v24;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssMaxProcGroupStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData < 0x14 )
      Length = ParameterValue->ParameterData.StringData.Length;
    v23.Group = Length;
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssMaxProcNumStr, NdisParameterInteger);
    if ( Status || ParameterValue->ParameterData.IntegerData >= 0x40 )
    {
      v23.Number = 63;
    }
    else
    {
      v23.Number = ParameterValue->ParameterData.IntegerData;
      if ( Length == 20 )
        v23.Group = Group;
    }
    NdisReadConfiguration(&Status, &ParameterValue, v6, &RssProfileStr, NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 4 )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(v6);
    v2 = v23;
  }
  MaxNumRssProcessors = ndisMaxNumRssCpus;
  if ( a1->MaxNumRssProcessors < ndisMaxNumRssCpus )
    MaxNumRssProcessors = a1->MaxNumRssProcessors;
  a1->MaxNumRssProcessors = MaxNumRssProcessors;
  v9 = ndisCompareProcNum(ProcNumber, v4);
  DeviceContext_high = HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
  if ( v9 > 0 )
    v4 = ProcNumber;
  if ( (int)ndisCompareProcNum(
              v4,
              *(struct _PROCESSOR_NUMBER *)((char *)ndisRssProcessors
                                          + 4 * (unsigned int)(HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) - 1))) > 0 )
    v4 = v11;
  result = ndisCompareProcNum(v2, v11);
  v15 = 0;
  if ( (int)result > 0 )
    v2 = v13;
  if ( DeviceContext_high )
  {
    while ( 1 )
    {
      result = ndisCompareProcNum(*(struct _PROCESSOR_NUMBER *)(v14 + 4LL * v15), v4);
      if ( (int)result >= 0 )
        break;
      v15 = v17 + 1;
      if ( v15 >= DeviceContext_high )
        goto LABEL_26;
    }
    result = ndisCompareProcNum(v16, v2);
    if ( (int)result > 0 )
      v2 = v18;
  }
LABEL_26:
  a1->RssBaseProcessor = v4;
  a1->RssMaxProcessor = v2;
  a1->RssProfile = IntegerData;
  return result;
}
