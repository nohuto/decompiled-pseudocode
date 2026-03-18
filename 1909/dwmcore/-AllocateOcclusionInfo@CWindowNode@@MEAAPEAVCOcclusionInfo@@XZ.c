/*
 * XREFs of ?AllocateOcclusionInfo@CWindowNode@@MEAAPEAVCOcclusionInfo@@XZ @ 0x1800D1BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 */

struct COcclusionInfo *__fastcall CWindowNode::AllocateOcclusionInfo(CWindowNode *this)
{
  struct COcclusionInfo *result; // rax

  result = (struct COcclusionInfo *)operator new(0x28uLL);
  if ( !result )
    return 0LL;
  *((_QWORD *)result + 1) = 0LL;
  *((_QWORD *)result + 2) = 0LL;
  *((_QWORD *)result + 3) = 0LL;
  *((_QWORD *)result + 4) = 0LL;
  *(_QWORD *)result = &CWindowOcclusionInfo::`vftable';
  return result;
}
