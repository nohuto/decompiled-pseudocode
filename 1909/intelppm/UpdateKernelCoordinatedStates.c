/*
 * XREFs of UpdateKernelCoordinatedStates @ 0x1C00358B4
 * Callers:
 *     PepUpdateCoordinatedStateWorker @ 0x1C0037360 (PepUpdateCoordinatedStateWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C002A48C (ProcLibTraceCoordinatedIdleStates.c)
 */

__int64 __fastcall UpdateKernelCoordinatedStates(__int64 a1)
{
  int v2; // ebx
  int v4; // [rsp+28h] [rbp-10h]

  *(_BYTE *)(a1 + 40) = 1;
  v2 = ((__int64 (*)(void))qword_1C001B5E0)();
  if ( v2 >= 0 )
  {
    if ( a1 == qword_1C001B900 )
      ProcLibTraceCoordinatedIdleStates(0);
    return 0;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x19u,
      (__int64)&WPP_5ebc86338b0b3226bdc1929ba03294e5_Traceguids,
      v4);
  }
  return (unsigned int)v2;
}
