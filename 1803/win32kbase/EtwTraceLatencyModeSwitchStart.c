/*
 * XREFs of EtwTraceLatencyModeSwitchStart @ 0x1C00AC050
 * Callers:
 *     RIMSendLatencyMgtRequest @ 0x1C00F19F0 (RIMSendLatencyMgtRequest.c)
 * Callees:
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceLatencyModeSwitchStart(__int64 a1)
{
  __int64 result; // rax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 4) != 0 )
    return McTemplateK0(a1, &LatencyModeSwitchStart, &W32kControlGuid);
  return result;
}
