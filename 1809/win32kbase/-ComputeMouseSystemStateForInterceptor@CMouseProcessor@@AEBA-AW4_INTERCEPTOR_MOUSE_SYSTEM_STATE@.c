/*
 * XREFs of ?ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA?AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@@AEBVMouseInputDataEx@1@@Z @ 0x1C0157908
 * Callers:
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C0158964 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0030CE0 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C006FDD4 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ComputeMouseSystemStateForInterceptor(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int16 v3; // bx
  unsigned __int16 v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // esi
  __int64 result; // rax

  v2 = 0;
  v3 = *(_WORD *)(a2 + 4) & 0xF;
  v5 = v3;
  if ( v3 && !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1024) )
  {
    if ( (v3 & 3) != 0 )
    {
      v9 = 1;
    }
    else
    {
      v3 >>= 2;
      v9 = 2;
      if ( v5 < 4u )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    }
    if ( anonymous_namespace_::IsMouseButtonSwapped(v9, (v3 & 2) != 0) )
      v2 = 1;
  }
  result = v2 | 2;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2736), 1, 1) )
    return v2;
  return result;
}
