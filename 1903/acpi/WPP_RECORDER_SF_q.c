/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C001DD80
 * Callers:
 *     ACPIMapNamedTable @ 0x1C0001940 (ACPIMapNamedTable.c)
 *     ACPIReleaseGlobalLock @ 0x1C001DAB4 (ACPIReleaseGlobalLock.c)
 *     ACPIAsyncAcquireGlobalLock @ 0x1C001DB90 (ACPIAsyncAcquireGlobalLock.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0058F90 (OSNotifyDeviceWakeCallBack.c)
 *     LinkNodepRunSrsWorker @ 0x1C006BD20 (LinkNodepRunSrsWorker.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C009A324 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1C009C330 (IrqArbpFindSuitableRangeMsi.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00B6B9C (IrqArbpAssignIrqFromLinkNode.c)
 *     ACPIGlobalInitialize @ 0x1C00BC094 (ACPIGlobalInitialize.c)
 *     ACPILoadProcessFACS @ 0x1C00BD728 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessRSDT @ 0x1C00BDC94 (ACPILoadProcessRSDT.c)
 *     ACPILoadProcessDSDT @ 0x1C00BDFB4 (ACPILoadProcessDSDT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v9; // rdi
  unsigned __int16 v10; // r8
  int v11; // eax
  char *v13; // rcx
  int v14; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a3 - 1;
  v11 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v9 + (v10 >> 5) + 1);
  if ( _bittest(&v11, v10 & 0x1F) )
  {
    v13 = (char *)WPP_GLOBAL_Control + 80 * v9;
    if ( (unsigned __int8)v13[41] >= a2 )
      pfnWppTraceMessage(*((_QWORD *)v13 + 3), 43LL, a5, a4, va, 8LL, 0LL);
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v14, va);
}
