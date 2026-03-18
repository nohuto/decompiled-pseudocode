/*
 * XREFs of ?GetRemoteAppSurfaceBounds@CWindowNode@@UEAAJAEAUtagRECT@@@Z @ 0x1800E7150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowNode::GetRemoteAppSurfaceBounds(CWindowNode *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 696);
  return result;
}
