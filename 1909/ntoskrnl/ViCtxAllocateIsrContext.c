/*
 * XREFs of ViCtxAllocateIsrContext @ 0x1409814BC
 * Callers:
 *     VfCtxHookAndConnectInterrupt @ 0x140981220 (VfCtxHookAndConnectInterrupt.c)
 *     ViCtxSetPrivateConnectParameters @ 0x140981898 (ViCtxSetPrivateConnectParameters.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall ViCtxAllocateIsrContext(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72734956u);
  if ( result )
  {
    *result = a1;
    result[1] = a2;
    result[2] = a3;
  }
  return result;
}
