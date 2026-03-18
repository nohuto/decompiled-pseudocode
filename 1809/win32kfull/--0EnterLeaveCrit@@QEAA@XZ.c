/*
 * XREFs of ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C01B83CC
 * Callers:
 *     xxxDesktopThread @ 0x1C00BB9E0 (xxxDesktopThread.c)
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 * Callees:
 *     <none>
 */

EnterLeaveCrit *__fastcall EnterLeaveCrit::EnterLeaveCrit(EnterLeaveCrit *this)
{
  EnterCrit(0LL, 1LL);
  return this;
}
