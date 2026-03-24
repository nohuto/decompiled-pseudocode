/*
 * XREFs of VfBugCheckNoStackUsage @ 0x14030AA48
 * Callers:
 *     IovCallDriver @ 0x140923CD4 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x14092450C (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x14092FEB4 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409300A4 (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140985A70, qword_140985A78, qword_140985A80);
}
