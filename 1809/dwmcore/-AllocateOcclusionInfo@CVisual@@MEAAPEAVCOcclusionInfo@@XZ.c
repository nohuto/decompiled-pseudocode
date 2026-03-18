/*
 * XREFs of ?AllocateOcclusionInfo@CVisual@@MEAAPEAVCOcclusionInfo@@XZ @ 0x180065150
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

struct COcclusionInfo *__fastcall CVisual::AllocateOcclusionInfo(CVisual *this)
{
  struct COcclusionInfo *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = (struct COcclusionInfo *)HeapAlloc(WPF::g_processHeap, 0, 0x18uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_QWORD *)result + 1) = 0LL;
  *((_QWORD *)result + 2) = 0LL;
  *(_QWORD *)result = &CVisualOcclusionInfo::`vftable';
  return result;
}
