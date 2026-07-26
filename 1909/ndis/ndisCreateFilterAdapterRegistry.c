/*
 * XREFs of ndisCreateFilterAdapterRegistry @ 0x1C003A580
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C0090690 (ndisSetAllFilterDefaultParameters.c)
 */

__int64 __fastcall ndisCreateFilterAdapterRegistry(const UNICODE_STRING *a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // r14
  __int64 v5; // rcx
  NTSTATUS v6; // ebx
  wchar_t *PoolWithTag; // rax
  char v9; // [rsp+38h] [rbp-79h]
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-69h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-59h] BYREF
  _UNICODE_STRING GuidString; // [rsp+68h] [rbp-49h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+78h] [rbp-39h] BYREF
  int v14; // [rsp+120h] [rbp+6Fh] BYREF

  v2 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v3 = a2;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v14 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      87,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1,
      v9);
  }
  v5 = *(_QWORD *)(v3 + 16);
  if ( v5 )
  {
    if ( !RtlStringFromGUID((const GUID *const)(v5 + 4008), &GuidString) )
    {
      v6 = RtlUpcaseUnicodeString(&DestinationString, &GuidString, 1u);
      RtlFreeUnicodeString(&GuidString);
      if ( !v6 )
      {
        Destination.MaximumLength = DestinationString.Length
                                  + ndisParameterStr.Length
                                  + ndisFilterAdapterStr.Length
                                  + a1->Length
                                  + 2;
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination.MaximumLength, 0x2020444Eu);
        Destination.Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, Destination.MaximumLength);
          RtlCopyUnicodeString(&Destination, a1);
          RtlAppendUnicodeStringToString(&Destination, &ndisParameterStr);
          if ( !RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer) )
          {
            memset(QueryTable, 0, sizeof(QueryTable));
            QueryTable[0].Name = L"SkipNdisAdaptersKeyGeneration";
            QueryTable[0].Flags = 292;
            QueryTable[0].EntryContext = &v14;
            QueryTable[0].DefaultType = 0x4000000;
            QueryTable[1].Name = 0LL;
            if ( !RtlQueryRegistryValuesEx(1u, (PCWSTR)Destination.Buffer, QueryTable, 0LL, 0LL) && v14 == 1 )
              goto LABEL_10;
          }
          RtlAppendUnicodeStringToString(&Destination, &ndisFilterAdapterStr);
          if ( !RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer)
            || !RtlCreateRegistryKey(1u, (PWSTR)Destination.Buffer) )
          {
            RtlAppendUnicodeStringToString(&Destination, &DestinationString);
            if ( !RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer) )
              goto LABEL_10;
            if ( !RtlCreateRegistryKey(1u, (PWSTR)Destination.Buffer) )
            {
              v2 = ndisSetAllFilterDefaultParameters((char)a1, (char)&Destination, (char)ndisFilterAdapterParamsStr);
              goto LABEL_10;
            }
          }
          v2 = -1073741823;
        }
        else
        {
          v2 = -1073741670;
        }
LABEL_10:
        RtlFreeUnicodeString(&DestinationString);
        goto LABEL_11;
      }
    }
    v2 = -1073741823;
  }
  else
  {
    v2 = -1073741811;
  }
LABEL_11:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      88,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1,
      v3,
      v2);
  }
  return v2;
}
