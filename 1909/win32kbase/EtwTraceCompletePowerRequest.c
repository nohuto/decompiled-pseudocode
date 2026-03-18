/*
 * XREFs of EtwTraceCompletePowerRequest @ 0x1C00657E0
 * Callers:
 *     QueuePowerRequest @ 0x1C0065410 (QueuePowerRequest.c)
 *     xxxUserPowerCalloutWorker @ 0x1C00655D0 (xxxUserPowerCalloutWorker.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C0104780 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C010DEC0 (McTemplateK0xq.c)
 */

__int64 __fastcall EtwTraceCompletePowerRequest(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0xq(a1, &CompletedPowerRequest, a3, a1, a2);
  return result;
}
