/*
 * XREFs of ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C0080968
 * Callers:
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0030BA4 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C00807F8 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0157C00 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

bool __fastcall CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(__int64 a1, int a2)
{
  int v2; // r8d
  int v5; // eax

  v2 = *(_DWORD *)(a1 + 60);
  v5 = v2;
  if ( v2 && (v2 & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM("CommitMousePosAndMoveResult is not set-up correctly");
    v5 = *(_DWORD *)(a1 + 60);
  }
  return (a2 & v5) == a2;
}
