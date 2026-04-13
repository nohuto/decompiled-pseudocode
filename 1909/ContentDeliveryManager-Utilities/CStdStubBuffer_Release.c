/*
 * XREFs of CStdStubBuffer_Release @ 0x1800545D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall CStdStubBuffer_Release(IRpcStubBuffer *This)
{
  return NdrCStdStubBuffer_Release(This, (IPSFactoryBuffer *)&gPFactory);
}
