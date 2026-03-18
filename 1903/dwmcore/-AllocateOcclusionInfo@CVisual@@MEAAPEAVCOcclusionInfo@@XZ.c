/*
 * XREFs of ?AllocateOcclusionInfo@CVisual@@MEAAPEAVCOcclusionInfo@@XZ @ 0x180088190
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 */

struct COcclusionInfo *__fastcall CVisual::AllocateOcclusionInfo(CVisual *this)
{
  struct COcclusionInfo *result; // rax

  result = (struct COcclusionInfo *)operator new(0x18uLL);
  if ( result )
  {
    *((_QWORD *)result + 1) = 0LL;
    *((_QWORD *)result + 2) = 0LL;
    *(_QWORD *)result = &CVisualOcclusionInfo::`vftable';
  }
  return result;
}
