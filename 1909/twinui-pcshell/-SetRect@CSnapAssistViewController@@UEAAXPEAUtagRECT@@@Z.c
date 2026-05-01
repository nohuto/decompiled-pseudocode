/*
 * XREFs of ?SetRect@CSnapAssistViewController@@UEAAXPEAUtagRECT@@@Z @ 0x180088330
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

void __fastcall CSnapAssistViewController::SetRect(struct tagRECT *this, struct tagRECT *a2)
{
  this[2] = *a2;
}
