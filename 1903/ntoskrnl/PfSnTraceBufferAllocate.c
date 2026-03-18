/*
 * XREFs of PfSnTraceBufferAllocate @ 0x14012E210
 * Callers:
 *     PfSnTraceGetLogEntry @ 0x14009511C (PfSnTraceGetLogEntry.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     PfSnBeginTrace @ 0x1406D9C78 (PfSnBeginTrace.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
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
    result = v1;
    v1[5] = 4350;
  }
  return result;
}
