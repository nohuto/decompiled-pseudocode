/*
 * XREFs of RIMFreeHidDesc @ 0x1C0052898
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C004DE5C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C004F0B8 (RIMCreateHidDesc.c)
 *     RIMAllocateHidConfigDesc @ 0x1C011A4F0 (RIMAllocateHidConfigDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C011BD08 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C011C038 (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C011D6F4 (RIMIDECreateHIDDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x1C0121FA0 (RIMFreeSpecificDevWorker.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0052924 (WPP_RECORDER_SF_qDD.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFreeHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
  v4 = *(unsigned __int16 *)(a1 + 42);
  LOBYTE(v4) = 3;
  WPP_RECORDER_SF_qDD(
    a1,
    v4,
    21,
    33,
    (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids,
    a1,
    *(_WORD *)(a1 + 42),
    *(_WORD *)(a1 + 40));
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
    Win32FreePool(v5);
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
    Win32FreePool(v6);
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
    Win32FreePool(v7);
  Win32FreePool(a1);
}
