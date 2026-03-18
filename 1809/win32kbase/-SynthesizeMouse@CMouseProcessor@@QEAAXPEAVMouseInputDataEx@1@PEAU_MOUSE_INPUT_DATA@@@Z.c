/*
 * XREFs of ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0030628
 * Callers:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C002EC58 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     SynthesizeMouseInput @ 0x1C0081E60 (SynthesizeMouseInput.c)
 *     SynthesizeMouseInputWithNextPreview @ 0x1C0151740 (SynthesizeMouseInputWithNextPreview.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C015735C (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C015746C (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C015751C (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0157C00 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 * Callees:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0030698 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0030CE0 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z @ 0x1C0031360 (-ProcessInput@Mouse@InputTraceLogging@@SAXPEBURIMDEV@@PEBVMouseInputDataEx@CMouseProcessor@@_N@Z.c)
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0158370 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 */

void __fastcall CMouseProcessor::SynthesizeMouse(
        CMouseProcessor *this,
        struct tagPOINT a2,
        struct _MOUSE_INPUT_DATA *a3)
{
  int v6; // edx
  char v7; // [rsp+58h] [rbp+20h] BYREF

  InputTraceLogging::Mouse::ProcessInput(0LL, *(const struct CMouseProcessor::MouseInputDataEx **)&a2, 1);
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                          a2,
                          512LL)
    && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                           a2,
                           4LL)
    && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::MouseInputDataEx::TestProcessingOption)(
                           a2,
                           0x10000LL)
    && *((_DWORD *)this + 18) == (unsigned int)PsGetCurrentThreadId()
    && (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))CMouseProcessor::HandleMouseInterceptWorker)(this, a2) == 1 )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), v6, 10, 15, (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids);
  }
  else
  {
    CMouseProcessor::ProcessMouseInputData(
      this,
      (struct CMouseProcessor::MouseInputDataEx *)&v7,
      a2,
      *(const struct _MOUSE_INPUT_DATA **)&gptCursorAsync,
      (const struct tagUIPI_INFO_INT *)a3);
  }
}
