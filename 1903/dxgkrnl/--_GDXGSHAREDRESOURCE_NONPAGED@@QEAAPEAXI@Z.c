/*
 * XREFs of ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C003BB98
 * Callers:
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C00FCB7C (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C00FD18C (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001CA08 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
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
