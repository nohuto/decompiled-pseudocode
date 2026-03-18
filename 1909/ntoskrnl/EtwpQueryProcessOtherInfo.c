/*
 * XREFs of EtwpQueryProcessOtherInfo @ 0x1406846BC
 * Callers:
 *     EtwTraceAppStateChange @ 0x140636F48 (EtwTraceAppStateChange.c)
 *     EtwpBuildProcessEvent @ 0x140684214 (EtwpBuildProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406C9A78 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408FC040 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     PsGetProcessSectionBaseAddress @ 0x1400EA070 (PsGetProcessSectionBaseAddress.c)
 */

__int64 __fastcall EtwpQueryProcessOtherInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  result = PsGetProcessSectionBaseAddress(a1);
  if ( result )
  {
    result = (__int64)RtlImageNtHeader((PVOID)result);
    if ( result )
    {
      *(_DWORD *)a2 = *(_DWORD *)(result + 88);
      result = *(unsigned int *)(result + 8);
      *(_DWORD *)(a2 + 4) = result;
    }
  }
  return result;
}
