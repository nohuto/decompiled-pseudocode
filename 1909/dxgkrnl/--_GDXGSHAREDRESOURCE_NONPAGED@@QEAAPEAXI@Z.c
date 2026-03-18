/*
 * XREFs of ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C003BCF8
 * Callers:
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C010184C (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C01022DC (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001CA58 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

_QWORD *__fastcall DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(_QWORD *P)
{
  CRefCountedBuffer *v2; // rcx

  v2 = (CRefCountedBuffer *)P[1];
  if ( v2 )
    CRefCountedBuffer::RefCountedBufferRelease(v2);
  ExFreePoolWithTag(P, 0);
  return P;
}
