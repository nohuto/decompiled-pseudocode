/*
 * XREFs of WPP_SF_qdDdigi @ 0x180111E18
 * Callers:
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18010FFB4 (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x1801104F4 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdDdigi(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+C8h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids, a2, (__int64 *)va);
}
