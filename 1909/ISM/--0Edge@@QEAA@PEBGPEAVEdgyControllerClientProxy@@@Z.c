/*
 * XREFs of ??0Edge@@QEAA@PEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801014CC
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801016E8 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180102458 (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
Edge *__fastcall Edge::Edge(Edge *this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 7LL;
  *((_WORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  memset_0((char *)this + 52, 0, 0x28uLL);
  *(_QWORD *)((char *)this + 92) = 0LL;
  Edge::Set(this, a2, a3);
  return this;
}
