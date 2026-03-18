/*
 * XREFs of ?GetOwningProcessId@CWindowNode@@UEBAKXZ @ 0x1800DBC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowNode::GetOwningProcessId(CWindowNode *this)
{
  return *(unsigned int *)(*((_QWORD *)this + 82) + 128LL);
}
