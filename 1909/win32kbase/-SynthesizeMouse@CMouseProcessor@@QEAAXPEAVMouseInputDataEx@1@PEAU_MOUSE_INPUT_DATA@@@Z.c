/*
 * XREFs of ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C00313C0
 * Callers:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0030264 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     SynthesizeMouseInput @ 0x1C00949B0 (SynthesizeMouseInput.c)
 *     SynthesizeMouseInputForPTP @ 0x1C01827D0 (SynthesizeMouseInputForPTP.c)
 *     SynthesizeMouseInputWithNextPreview @ 0x1C01828F0 (SynthesizeMouseInputWithNextPreview.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C018DEC8 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C018DFCC (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C018E070 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C018EA90 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0031188 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0031458 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     isChildPartition @ 0x1C0031698 (isChildPartition.c)
 *     IsMouseIVEnabled @ 0x1C0031AA4 (IsMouseIVEnabled.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C0031E8C (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C018F8E4 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 *     ?SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ @ 0x1C0191158 (-SynchronizeCursorPosition@RootCursorAsync@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::SynthesizeMouse(
        CMouseProcessor *this,
        struct tagPOINT a2,
        struct _MOUSE_INPUT_DATA *a3)
{
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  int v9; // edx
  char v10; // [rsp+58h] [rbp+20h] BYREF

  InputTraceLogging::Mouse::ProcessInput(0LL, *(const struct CMouseProcessor::MouseInputDataEx **)&a2, 1);
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption(*(_QWORD *)&a2, 512LL, v6)
    && !CMouseProcessor::MouseInputDataEx::TestProcessingOption(*(_QWORD *)&a2, 4LL, v7)
    && !CMouseProcessor::MouseInputDataEx::TestProcessingOption(*(_QWORD *)&a2, 0x8000LL, v8)
    && *((_DWORD *)this + 16) == (unsigned int)PsGetCurrentThreadId()
    && (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::HandleMouseInterceptWorker)(this, a2) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v9, 6, 16, (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids);
    }
  }
  else
  {
    if ( (unsigned __int8)IsMouseIVEnabled() )
    {
      if ( (unsigned __int8)isChildPartition() )
        CMouseProcessor::RootCursorAsync::SynchronizeCursorPosition((CMouseProcessor *)((char *)this + 3552));
    }
    memset((char *)this + 2680, 0, 0x30uLL);
    CMouseProcessor::ProcessMouseInputData(
      this,
      (struct CMouseProcessor::MouseInputDataEx *)&v10,
      a2,
      *(const struct _MOUSE_INPUT_DATA **)&gptCursorAsync,
      (const struct tagUIPI_INFO_INT *)a3);
  }
}
