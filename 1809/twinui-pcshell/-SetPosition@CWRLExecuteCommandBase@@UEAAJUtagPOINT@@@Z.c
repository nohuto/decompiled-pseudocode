/*
 * XREFs of ?SetPosition@CWRLExecuteCommandBase@@UEAAJUtagPOINT@@@Z @ 0x1800828E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWRLExecuteCommandBase::SetPosition(struct tagPOINT *this, struct tagPOINT a2)
{
  __int64 result; // rax

  this[8] = a2;
  result = 0LL;
  this[7].x |= 8u;
  return result;
}
