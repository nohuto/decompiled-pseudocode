/*
 * XREFs of RIMFreeHidDesc @ 0x1C005C3E0
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C005B1DC (RIMFreeSpecificDevWorker.c)
 *     RIMCreateHidDesc @ 0x1C005C480 (RIMCreateHidDesc.c)
 *     RIMAllocateHidDesc @ 0x1C005D02C (RIMAllocateHidDesc.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0140670 (RIMAllocateHidConfigDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0142008 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01423CC (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C0146468 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C005CF44 (WPP_RECORDER_SF_qDD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFreeHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qDD(
      (_DWORD)gRimLog,
      a2,
      1,
      33,
      (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
      a1,
      *(_WORD *)(a1 + 42),
      *(_WORD *)(a1 + 40));
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 )
    Win32FreePool(v5);
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
    Win32FreePool(v6);
  Win32FreePool(a1);
}
