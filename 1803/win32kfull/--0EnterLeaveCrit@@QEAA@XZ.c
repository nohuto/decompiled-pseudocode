/*
 * XREFs of ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0196A54
 * Callers:
 *     RawInputThread @ 0x1C001CA60 (RawInputThread.c)
 * Callees:
 *     <none>
 */

EnterLeaveCrit *__fastcall EnterLeaveCrit::EnterLeaveCrit(EnterLeaveCrit *this)
{
  EnterCrit(0LL, 1LL);
  return this;
}
