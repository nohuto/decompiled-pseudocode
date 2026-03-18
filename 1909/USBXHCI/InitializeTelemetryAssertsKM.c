/*
 * XREFs of InitializeTelemetryAssertsKM @ 0x1C0008084
 * Callers:
 *     DriverEntry @ 0x1C0064410 (DriverEntry.c)
 * Callees:
 *     memmove @ 0x1C0008A40 (memmove.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     TraceLoggingRegisterEx @ 0x1C005E008 (TraceLoggingRegisterEx.c)
 */

__int64 __fastcall InitializeTelemetryAssertsKM(const void **a1)
{
  NTSTATUS RegistryValues; // esi
  PVOID PoolWithTag; // rax
  void *v4; // r14
  ETWENABLECALLBACK *Length; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  bool v8; // zf
  CHAR *v9; // rbx
  TLG_PENABLECALLBACK v10; // rdx
  PVOID v11; // r8
  TLG_PENABLECALLBACK v12; // rdx
  PVOID v13; // r8
  struct _STRING v15; // [rsp+38h] [rbp-49h] BYREF
  struct _STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  UNICODE_STRING SourceString; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v18[14]; // [rsp+68h] [rbp-19h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RegistryValues = -1073741801;
  qword_1C0057638 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
  g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
  RtlInitAnsiString(&DestinationString, 0LL);
  KeInitializeSpinLock(&g_AssertSpinLock);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)a1 + 2LL, 0x74727341u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, *(unsigned __int16 *)a1 + 2LL);
    memmove(v4, a1[1], *(unsigned __int16 *)a1);
    *(_QWORD *)&SourceString.Length = 0LL;
    SourceString.Buffer = 0LL;
    RtlInitUnicodeString(&SourceString, 0LL);
    memset(v18, 0, sizeof(v18));
    v18[2] = L"ImagePath";
    LODWORD(v18[1]) = 32;
    v18[3] = &SourceString;
    LODWORD(v18[4]) = 2;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, v4, v18, 0LL, 0LL);
    if ( RegistryValues >= 0 )
    {
      RegistryValues = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
      RtlFreeUnicodeString(&SourceString);
      if ( RegistryValues >= 0 )
      {
        Length = (ETWENABLECALLBACK *)DestinationString.Length;
        v6 = DestinationString.Length;
        v7 = (unsigned int)DestinationString.Length - 1;
        if ( DestinationString.Length != 1 )
        {
          while ( DestinationString.Buffer[v7] != 92 )
          {
            v8 = (_DWORD)v7 == 1;
            v7 = (unsigned int)(v7 - 1);
            if ( v8 )
              goto LABEL_9;
          }
          v6 = (unsigned int)v7;
        }
LABEL_9:
        if ( (_DWORD)v6 != DestinationString.Length )
        {
          *(_QWORD *)&v15.Length = 0LL;
          v15.Buffer = 0LL;
          RtlInitAnsiString(&v15, &DestinationString.Buffer[(unsigned int)(v6 + 1)]);
          g_ModuleName = (LPCSTR)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v15.Length + 1, 0x74727341u);
          v9 = (CHAR *)g_ModuleName;
          memset((void *)g_ModuleName, 0, (unsigned int)v15.Length + 1);
          memmove(v9, v15.Buffer, v15.Length);
        }
        TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, Length, (PVOID)v6);
        TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C005D008, v10, v11);
        TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C005D078, v12, v13);
        _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
      }
    }
    ExFreePoolWithTag(v4, 0x74727341u);
  }
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)RegistryValues;
}
