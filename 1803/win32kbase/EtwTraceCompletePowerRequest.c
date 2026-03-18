/*
 * XREFs of EtwTraceCompletePowerRequest @ 0x1C006CBDC
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C006CA40 (xxxUserPowerCalloutWorker.c)
 *     QueuePowerRequest @ 0x1C006DA70 (QueuePowerRequest.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C00A22F0 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C00AE774 (McTemplateK0xq.c)
 */

__int64 __fastcall EtwTraceCompletePowerRequest(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0xq(a1, &CompletedPowerRequest, a3, a1, a2);
  return result;
}
