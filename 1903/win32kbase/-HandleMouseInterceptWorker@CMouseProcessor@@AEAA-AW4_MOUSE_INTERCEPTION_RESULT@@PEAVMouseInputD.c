/*
 * XREFs of ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C0191AD4
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C0032110 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0192274 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0031ED8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?CallInterceptor@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C01903B4 (-CallInterceptor@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0190448 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C0191740 (-GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEP.c)
 *     ?HandleInterception@Mouse@InputTraceLogging@@SAX_KW4_MOUSE_INTERCEPTION_RESULT@@AEBU_MouseProcessorData@@@Z @ 0x1C01918F8 (-HandleInterception@Mouse@InputTraceLogging@@SAX_KW4_MOUSE_INTERCEPTION_RESULT@@AEBU_MouseProces.c)
 *     ?Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@Z @ 0x1C0191C74 (-Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C0192058 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 */

__int64 __fastcall CMouseProcessor::HandleMouseInterceptWorker(
        __int64 a1,
        const struct CMouseProcessor::MouseInputDataEx *a2)
{
  __int64 v2; // r14
  __int64 v5; // r8
  bool v7; // al
  char v8; // bl
  unsigned int v9; // ebx
  _QWORD v10[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+30h] [rbp-40h]
  _BYTE v12[56]; // [rsp+38h] [rbp-38h] BYREF
  int v13; // [rsp+90h] [rbp+20h] BYREF

  v2 = a1 + 3448;
  if ( !CMouseProcessor::MouseInterceptState::GetInterceptStateAndBehavior(
          (CMouseProcessor::MouseInterceptState *)(a1 + 3448),
          (enum _MOUSE_PREINTERCEPT_BEHAVIOR *)&v13) )
    return 0LL;
  v7 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 8LL, v5);
  v8 = v13;
  if ( v7 )
    v8 = v13 & 0xFE;
  memset(v12, 0, 0x30uLL);
  CMouseProcessor::PrepareDataForIntercept((CMouseProcessor *)a1, a2, v8 & 1, (struct _MouseInterceptorData *)v12);
  InputTraceLogging::Mouse::CallInterceptor();
  v10[0] = 0LL;
  v10[1] = 0LL;
  v11 = 0LL;
  v9 = CMouseProcessor::MouseInterceptState::CallInterceptor(v2, (__int64)v12, (__int64)v10);
  InputTraceLogging::Mouse::HandleInterception();
  if ( v9 == 2 )
  {
    if ( (dword_1C0219A00 & 1) == 0 )
      dword_1C0219A00 |= 1u;
    HIDWORD(v11) = BYTE4(v11) & 0x76;
    CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(a2, (const struct _MouseProcessorData *)v10);
  }
  return v9;
}
