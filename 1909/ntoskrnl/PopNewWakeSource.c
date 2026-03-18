/*
 * XREFs of PopNewWakeSource @ 0x1408A7354
 * Callers:
 *     PopHandleWakeSources @ 0x140596234 (PopHandleWakeSources.c)
 *     PopProcessWakeSourceWork @ 0x1408A73A4 (PopProcessWakeSourceWork.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall PopNewWakeSource(int a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x206D654Du);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x50uLL);
    v3[4] = a1;
  }
  return v3;
}
