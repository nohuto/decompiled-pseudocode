/*
 * XREFs of ?GetChildrenCount@CContainerVectorShape@@UEBAIXZ @ 0x1800DA490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CContainerVectorShape::GetChildrenCount(CContainerVectorShape *this)
{
  return (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 3;
}
