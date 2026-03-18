/*
 * XREFs of EtwTraceCompletePowerRequest @ 0x1C0096BD8
 * Callers:
 *     QueuePowerRequest @ 0x1C0096830 (QueuePowerRequest.c)
 *     xxxUserPowerCalloutWorker @ 0x1C00969E0 (xxxUserPowerCalloutWorker.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C00E15A0 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C00EA0B8 (McTemplateK0xq.c)
 */

__int64 __fastcall EtwTraceCompletePowerRequest(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0xq(a1, &CompletedPowerRequest, a3, a1, a2);
  return result;
}
