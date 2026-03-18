/*
 * XREFs of ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014C2B8
 * Callers:
 *     _lambda_9809129e8e2c8ffa8590d024b20886a2_::_lambda_invoker_cdecl_ @ 0x1C008CA10 (_lambda_9809129e8e2c8ffa8590d024b20886a2_--_lambda_invoker_cdecl_.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C014B724 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014A4E8 (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C01607F0 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 */

__int64 __fastcall CPTPProcessor::UpdateEnvironment(__int64 a1, char a2, struct tagHID_POINTER_DEVICE_INFO *a3)
{
  if ( (a2 & 1) != 0 )
    CPTPProcessor::BuildEnvironment((CPTPProcessor *)a1, a3);
  return PTPEngineTraceProducer::SetEnvironment(
           *(PTPEngineTraceProducer **)(a1 + 600),
           (const struct PTPEnvironment *)(a1 + 608));
}
