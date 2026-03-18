/*
 * XREFs of VfNotifyVerifierOfEvent @ 0x1409641B0
 * Callers:
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 *     IoShutdownSystem @ 0x1405A7988 (IoShutdownSystem.c)
 *     KdEnterDebugger @ 0x140954648 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140954790 (KdExitDebugger.c)
 *     Phase1InitializationIoReady @ 0x1409FE82C (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x140A0F540 (IoInitSystem.c)
 * Callees:
 *     VfClearVerifierSettings @ 0x140327288 (VfClearVerifierSettings.c)
 *     VfUtilDbgPrint @ 0x1403275C4 (VfUtilDbgPrint.c)
 *     VfNotifyVerifierExtensions @ 0x14096672C (VfNotifyVerifierExtensions.c)
 *     VfInitializeBranchTracing @ 0x140975968 (VfInitializeBranchTracing.c)
 *     VfStartBranchTracing @ 0x140975B00 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140975B88 (VfStopBranchTracing.c)
 */

void __fastcall VfNotifyVerifierOfEvent(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int started; // eax
  __int32 v6; // r9d
  int v7; // eax

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( !v2 )
      {
        _InterlockedAdd(&dword_140435EA8, 1u);
        _InterlockedExchange(&ViKeTrackIrqlDisabled, 1);
        VfStopBranchTracing();
        _InterlockedExchange(&ViFaultsDisabled, v6);
        return;
      }
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 == 1 )
          {
            _InterlockedAdd(&dword_140435EB4, 1u);
            started = VfStartBranchTracing();
            if ( started < 0 && (MmVerifierData & 0x8000000) != 0 )
              VfUtilDbgPrint("Failed to start branch tracing. <Status == 0x%08X>\n", started);
            if ( (VfOptionFlags & 0x10) != 0 )
            {
              VfUtilDbgPrint("Driver Verifier: VERIFIER_OPTION_ONEBOOT set before boot. Clearing Verifier options from Registry.\n");
              VfClearVerifierSettings();
            }
            VfNotifyVerifierExtensions(0LL, 2LL);
          }
        }
        else
        {
          _InterlockedAdd(&dword_140435EB0, 1u);
          VfStartBranchTracing();
        }
        return;
      }
      _InterlockedAdd(&dword_140435EAC, 1u);
    }
    else
    {
      _InterlockedAdd(&dword_140435EA4, 1u);
    }
    VfStopBranchTracing();
    return;
  }
  _InterlockedAdd(&ViNotifyEvent, 1u);
  v7 = VfInitializeBranchTracing();
  if ( v7 < 0 && (MmVerifierData & 0x8000000) != 0 )
    VfUtilDbgPrint("Failed to initialize branch tracing. <Status == 0x%08X>\n", v7);
}
