/*
 * XREFs of RIMFreeHidDesc @ 0x1C00EF8B0
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C00EE0A4 (RIMAllocateHidConfigDesc.c)
 *     RIMAllocateHidDesc @ 0x1C00EE340 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00EE898 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C00F2D44 (RIMIDECreateHIDDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00F7A6C (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00F0B24 (WPP_RECORDER_SF_qDD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeHidDesc(__int64 a1, __int64 a2)
{
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2);
  v3 = *(unsigned __int16 *)(a1 + 42);
  LOBYTE(v3) = 3;
  WPP_RECORDER_SF_qDD(
    WPP_GLOBAL_Control->DeviceExtension,
    v3,
    20,
    30,
    (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
    a1,
    *(_WORD *)(a1 + 42),
    *(_WORD *)(a1 + 40));
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 )
    Win32FreePool(v5);
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
    Win32FreePool(v6);
  return Win32FreePool(a1);
}
