/*
 * XREFs of PopThermalHandlePreviousShutdown @ 0x140760814
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     _TlgCreateWsz @ 0x140012934 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     PopOpenThermalLoggingKey @ 0x140192004 (PopOpenThermalLoggingKey.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401B8470 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1401B8D90 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401B9BB0 (ZwDeleteValueKey.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA70 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void PopThermalHandlePreviousShutdown()
{
  HANDLE v0; // rbx
  char v1; // r14
  WCHAR *v2; // rdi
  WCHAR *v3; // r15
  int v4; // esi
  WCHAR *PoolWithTag; // rax
  HANDLE v6; // rsi
  ULONG ResultLength; // [rsp+30h] [rbp-81h]
  ULONG Length; // [rsp+48h] [rbp-69h] BYREF
  int Data; // [rsp+4Ch] [rbp-65h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-61h] BYREF
  UNICODE_STRING v11; // [rsp+58h] [rbp-59h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-39h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp-29h] BYREF
  int v15; // [rsp+98h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp+17h] BYREF
  HANDLE *p_KeyHandle; // [rsp+D8h] [rbp+27h]
  int v19; // [rsp+E0h] [rbp+2Fh]
  int v20; // [rsp+E4h] [rbp+33h]

  if ( (int)PopOpenThermalLoggingKey(0, &KeyHandle) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ShutdownOccurred");
    RtlInitUnicodeString(&v11, L"ShutdownSource");
    RtlInitUnicodeString(&ValueName, L"ShutdownTemperature");
    v0 = KeyHandle;
    KeyValueInformation = 0uLL;
    v15 = 0;
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &Length) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      if ( ZwQueryValueKey(v0, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &Length) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      {
        v1 = 1;
        Data = HIDWORD(KeyValueInformation);
      }
      else
      {
        v1 = 0;
        Data = 0;
      }
      v2 = 0LL;
      v3 = (WCHAR *)L"Unknown";
      v4 = 16;
      if ( ZwQueryValueKey(v0, &v11, KeyValuePartialInformation, 0LL, 0, &Length) == -1073741789 )
      {
        PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, Length + 2LL, 0x6D726854u);
        v2 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, Length + 2LL);
          if ( ZwQueryValueKey(v0, &v11, KeyValuePartialInformation, v2, Length, &Length) >= 0
            && *((_DWORD *)v2 + 1) == 1 )
          {
            v4 = *((_DWORD *)v2 + 2);
            v3 = v2 + 6;
          }
        }
      }
      if ( ZwDeleteValueKey(v0, &DestinationString) >= 0 )
      {
        if ( (int)PopOpenThermalLoggingKey(1, &KeyHandle) >= 0 )
        {
          ResultLength = v4;
          v6 = KeyHandle;
          ZwSetValueKey(KeyHandle, &v11, 0, 1u, v3, ResultLength);
          if ( v1 )
            ZwSetValueKey(v6, &ValueName, 0, 4u, &Data, 4u);
          ZwClose(v6);
        }
        ZwUpdateWnfStateData((__int64)&WNF_PO_THERMAL_SHUTDOWN_OCCURRED, 0LL, 0LL);
        if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
        {
          LODWORD(KeyHandle) = Data;
          TlgCreateWsz(&pDesc, v3);
          v20 = 0;
          p_KeyHandle = &KeyHandle;
          v19 = 4;
          TlgWrite(&pCallbackContext, &unk_14036E9CF, 0LL, 0LL, 4u, &pData);
        }
        ZwDeleteValueKey(v0, &ValueName);
        ZwDeleteValueKey(v0, &v11);
      }
      if ( v2 )
        ExFreePoolWithTag(v2, 0x6D726854u);
    }
    if ( v0 )
      ZwClose(v0);
  }
}
