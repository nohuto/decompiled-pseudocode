/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C0009A50
 * Callers:
 *     Display_CPC @ 0x1C000B15C (Display_CPC.c)
 *     Display_LPI @ 0x1C000B630 (Display_LPI.c)
 *     AcpiEval_CSD @ 0x1C0021B3C (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1C00220E0 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x1C00223D0 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x1C0022790 (AcpiEval_TSS.c)
 *     ValidateCoordinatedState @ 0x1C002DA8C (ValidateCoordinatedState.c)
 *     ValidatePccEntry @ 0x1C002DF4C (ValidatePccEntry.c)
 *     ValidatePlatformIdleState @ 0x1C002E334 (ValidatePlatformIdleState.c)
 *     AcpiEval_XPSS @ 0x1C0030898 (AcpiEval_XPSS.c)
 *     PepNotifyQueryProcessorIdleStates @ 0x1C00368B4 (PepNotifyQueryProcessorIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C0036B88 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     InitPepPerfStates @ 0x1C0037784 (InitPepPerfStates.c)
 *     PepQueryPerfDomainInfo @ 0x1C0038188 (PepQueryPerfDomainInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8), 43LL, a5, a4, va, 4LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va);
}
