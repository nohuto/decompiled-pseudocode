/*
 * XREFs of ndisCreateFilterDriverRegistry @ 0x1C00382B0
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C0037390 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_dd @ 0x1C001D754 (WPP_RECORDER_SF_dd.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C0090690 (ndisSetAllFilterDefaultParameters.c)
 */

__int64 __fastcall ndisCreateFilterDriverRegistry(const UNICODE_STRING *a1, char a2)
{
  unsigned int v4; // ebx
  wchar_t *PoolWithTag; // rax
  int v6; // edx
  NTSTATUS RegistryValues; // esi
  NTSTATUS v9; // eax
  int v10; // ecx
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+50h] [rbp-39h] BYREF
  int ValueData; // [rsp+F0h] [rbp+67h] BYREF

  DestinationString.Length = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v4 = 0;
  DestinationString.Buffer = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      84,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1);
  DestinationString.MaximumLength = ndisParameterStr.Length + a1->Length + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, DestinationString.MaximumLength, 0x2020444Eu);
  DestinationString.Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, DestinationString.MaximumLength);
    RtlCopyUnicodeString(&DestinationString, a1);
    RtlAppendUnicodeStringToString(&DestinationString, &ndisParameterStr);
    if ( RtlCheckRegistryKey(1u, (PWSTR)DestinationString.Buffer)
      && RtlCreateRegistryKey(1u, (PWSTR)DestinationString.Buffer) )
    {
      v4 = -1073741823;
    }
    else
    {
      memset(QueryTable, 0, sizeof(QueryTable));
      QueryTable[1].Name = 0LL;
      QueryTable[0].Name = (wchar_t *)L"DefaultFilterSettings";
      QueryTable[0].EntryContext = &ValueData;
      QueryTable[0].Flags = a2 != 0 ? 292 : 36;
      QueryTable[0].DefaultType = a2 != 0 ? 0x4000000 : 0;
      RegistryValues = RtlQueryRegistryValuesEx(1u, (PCWSTR)DestinationString.Buffer, QueryTable, 0LL, 0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          1,
          85,
          (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
          RegistryValues,
          a2);
      if ( RegistryValues )
      {
        if ( RegistryValues == -1073741772 )
        {
          v4 = ndisSetAllFilterDefaultParameters((char)a1, (char)&DestinationString, (char)ndisFilterDriverParamsStr);
          if ( !v4 )
          {
            ValueData = 1;
            v9 = RtlWriteRegistryValue(
                   1u,
                   (PCWSTR)DestinationString.Buffer,
                   L"DefaultFilterSettings",
                   4u,
                   &ValueData,
                   4u);
            v10 = 0;
            if ( v9 )
              v10 = -1073741823;
            v4 = v10;
          }
        }
        else
        {
          v4 = -1073741823;
        }
      }
    }
    if ( DestinationString.Buffer )
      ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
  else
  {
    v4 = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      1,
      86,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1,
      v4);
  }
  return v4;
}
