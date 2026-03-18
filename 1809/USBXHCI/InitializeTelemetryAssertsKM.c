/*
 * XREFs of InitializeTelemetryAssertsKM @ 0x1C00062E4
 * Callers:
 *     DriverEntry @ 0x1C005CAF8 (DriverEntry.c)
 * Callees:
 *     memmove @ 0x1C0006C80 (memmove.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     TraceLoggingRegisterEx @ 0x1C0057008 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKM(const void **a1, ETWENABLECALLBACK *a2, void *a3)
{
  NTSTATUS RegistryValues; // esi
  TLG_PENABLECALLBACK v5; // rdx
  PVOID v6; // r8
  TLG_PENABLECALLBACK v7; // rdx
  PVOID v8; // r8
  PVOID PoolWithTag; // rax
  void *v10; // r14
  int Length; // r8d
  __int64 v12; // rcx
  bool v13; // zf
  CHAR *v14; // rbx
  struct _STRING v16; // [rsp+38h] [rbp-49h] BYREF
  struct _STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  UNICODE_STRING SourceString; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v19[14]; // [rsp+68h] [rbp-19h] BYREF

  qword_1C00505F8 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
  g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
  RegistryValues = -1073741801;
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, a2, a3);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0056008, v5, v6);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0056078, v7, v8);
  RtlInitAnsiString(&DestinationString, 0LL);
  KeInitializeSpinLock(&g_AssertSpinLock);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)a1 + 2LL, 0x74727341u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, *(unsigned __int16 *)a1 + 2LL);
    memmove(v10, a1[1], *(unsigned __int16 *)a1);
    RtlInitUnicodeString(&SourceString, 0LL);
    memset(v19, 0, sizeof(v19));
    v19[2] = L"ImagePath";
    LODWORD(v19[1]) = 32;
    v19[3] = &SourceString;
    LODWORD(v19[4]) = 2;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, v10, v19, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      RegistryValues = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
      RtlFreeUnicodeString(&SourceString);
      if ( RegistryValues >= 0 )
      {
        Length = DestinationString.Length;
        v12 = (unsigned int)DestinationString.Length - 1;
        if ( DestinationString.Length != 1 )
        {
          while ( DestinationString.Buffer[v12] != 92 )
          {
            v13 = (_DWORD)v12 == 1;
            v12 = (unsigned int)(v12 - 1);
            if ( v13 )
              goto LABEL_9;
          }
          Length = v12;
        }
LABEL_9:
        if ( Length != DestinationString.Length )
        {
          RtlInitAnsiString(&v16, &DestinationString.Buffer[Length + 1]);
          g_ModuleName = (LPCSTR)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v16.Length + 1, 0x74727341u);
          v14 = (CHAR *)g_ModuleName;
          memset((void *)g_ModuleName, 0, (unsigned int)v16.Length + 1);
          memmove(v14, v16.Buffer, v16.Length);
        }
        _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
      }
    }
    ExFreePoolWithTag(v10, 0x74727341u);
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)RegistryValues;
}
