/*
 * XREFs of EtwpQueryProcessOtherInfo @ 0x14069114C
 * Callers:
 *     EtwTraceAppStateChange @ 0x140634190 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14063E8E8 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpBuildProcessEvent @ 0x140690CA4 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1408FC660 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     PsGetProcessSectionBaseAddress @ 0x1400E50D0 (PsGetProcessSectionBaseAddress.c)
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
