/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C000F2A0
 * Callers:
 *     ACPIMapNamedTable @ 0x1C0002480 (ACPIMapNamedTable.c)
 *     ACPIReleaseGlobalLock @ 0x1C000F004 (ACPIReleaseGlobalLock.c)
 *     ACPIAsyncAcquireGlobalLock @ 0x1C000F0D0 (ACPIAsyncAcquireGlobalLock.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0057410 (OSNotifyDeviceWakeCallBack.c)
 *     LinkNodepRunSrsWorker @ 0x1C0069CC0 (LinkNodepRunSrsWorker.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1C008F1E4 (IrqArbpFindSuitableRangeMsi.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C0091878 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00B30D0 (IrqArbpAssignIrqFromLinkNode.c)
 *     ACPIGlobalInitialize @ 0x1C00B80EC (ACPIGlobalInitialize.c)
 *     ACPILoadProcessRSDT @ 0x1C00BA420 (ACPILoadProcessRSDT.c)
 *     ACPILoadProcessFACS @ 0x1C00BA7D4 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessDSDT @ 0x1C00BAC18 (ACPILoadProcessDSDT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
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
  return WppAutoLogTrace(a1, a2, a3, a5, v14, va, 8LL, 0LL);
}
