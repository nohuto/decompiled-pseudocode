/*
 * XREFs of ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C0035278
 * Callers:
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C012C1C0 (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1C012C2E0 (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011958 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
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
