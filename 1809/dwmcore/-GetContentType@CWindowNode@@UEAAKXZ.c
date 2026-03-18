/*
 * XREFs of ?GetContentType@CWindowNode@@UEAAKXZ @ 0x1801B9740
 * Callers:
 *     <none>
 * Callees:
 *     ?GetContentType@CVisual@@UEAAKXZ @ 0x1801750F0 (-GetContentType@CVisual@@UEAAKXZ.c)
 */

__int64 __fastcall CWindowNode::GetContentType(CWindowNode *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = *((_QWORD *)this + 95);
  v2 = *((_QWORD *)this + 113);
  return (v2 != 0 ? 0x20000 : 0) | (v1 != 0 ? 0x100 : 0) | (unsigned int)CVisual::GetContentType(this);
}
