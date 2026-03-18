/*
 * XREFs of EtwTraceLatencyModeSwitchStop @ 0x1C005C090
 * Callers:
 *     RIMSendLatencyMgtRequest @ 0x1C0059AE0 (RIMSendLatencyMgtRequest.c)
 * Callees:
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 */

__int64 __fastcall EtwTraceLatencyModeSwitchStop(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 4) != 0 )
    return McTemplateK0(a1, &LatencyModeSwitchStop, &Context.Flags);
  return result;
}
