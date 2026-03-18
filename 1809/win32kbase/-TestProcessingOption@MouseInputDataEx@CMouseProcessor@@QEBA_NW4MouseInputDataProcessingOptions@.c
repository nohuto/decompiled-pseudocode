/*
 * XREFs of ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0030CE0
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0030628 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0030698 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0030860 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0030BA4 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0031264 (-ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C003D1EC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C00807F8 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z.c)
 *     ?ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA?AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@@AEBVMouseInputDataEx@1@@Z @ 0x1C0157908 (-ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA-AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0158370 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@Z @ 0x1C0158494 (-Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C0158964 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0158B84 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

bool __fastcall CMouseProcessor::MouseInputDataEx::TestProcessingOption(__int64 a1, int a2)
{
  if ( ((a2 - 1) & a2) != 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Caller must provide single option value");
  return (a2 & *(_DWORD *)(a1 + 56)) == a2;
}
