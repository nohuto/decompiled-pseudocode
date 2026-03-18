/*
 * XREFs of EtwpRegTraceEnableCallback @ 0x1408BC930
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     CmRegisterCallbackEx @ 0x1407EADA0 (CmRegisterCallbackEx.c)
 *     CmUnRegisterCallback @ 0x1407EB030 (CmUnRegisterCallback.c)
 */

void __fastcall EtwpRegTraceEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  if ( FilterData && FilterData->Size == 4 )
    EtwpRegTraceOptions = *(unsigned int *)FilterData->Ptr;
  if ( ControlCode )
  {
    if ( ControlCode == 1 && !EtwpRegTracingEnabled )
    {
      RtlInitUnicodeString(&DestinationString, L"425500");
      if ( CmRegisterCallbackEx(
             (PEX_CALLBACK_FUNCTION)EtwpRegTraceCallback,
             &DestinationString,
             &DestinationString,
             0LL,
             &EtwpRegTraceCookie,
             0LL) >= 0 )
        EtwpRegTracingEnabled = 1;
    }
  }
  else if ( EtwpRegTracingEnabled )
  {
    CmUnRegisterCallback(EtwpRegTraceCookie);
    EtwpRegTracingEnabled = 0;
  }
}
