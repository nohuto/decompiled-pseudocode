/*
 * XREFs of PfSnTraceBufferAllocate @ 0x1400E22B8
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     PfSnTraceGetLogEntry @ 0x1400D51A0 (PfSnTraceGetLogEntry.c)
 *     PfSnBeginTrace @ 0x140668544 (PfSnBeginTrace.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

_DWORD *PfSnTraceBufferAllocate()
{
  _DWORD *result; // rax
  _DWORD *v1; // rbx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x11000uLL, 0x42506343u);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0x11000uLL);
    v1[4] = 0;
    result = v1;
    v1[5] = 4350;
  }
  return result;
}
