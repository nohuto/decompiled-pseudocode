/*
 * XREFs of ?ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA?AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@@AEBVMouseInputDataEx@1@@Z @ 0x1C018E588
 * Callers:
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C018FE68 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0031188 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C004A148 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ComputeMouseSystemStateForInterceptor(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int16 v4; // bx
  unsigned __int16 v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // esi
  __int64 result; // rax

  v3 = 0;
  v4 = *(_WORD *)(a2 + 4) & 0xF;
  v6 = v4;
  if ( v4 && !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1024LL, a3) )
  {
    if ( (v4 & 3) != 0 )
    {
      v10 = 1;
    }
    else
    {
      v4 >>= 2;
      v10 = 2;
      if ( v6 < 4u )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    }
    if ( anonymous_namespace_::IsMouseButtonSwapped(v10, (v4 & 2) != 0) )
      v3 = 1;
  }
  result = v3 | 2;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3400), 1, 1) )
    return v3;
  return result;
}
