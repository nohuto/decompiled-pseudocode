/*
 * XREFs of VfBugCheckNoStackUsage @ 0x1403286C4
 * Callers:
 *     IovCallDriver @ 0x140962E34 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x14096368C (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x14096E734 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x14096E920 (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_1409C7DB0, qword_1409C7DB8, qword_1409C7DC0);
}
