/*
 * XREFs of VfBugCheckNoStackUsage @ 0x14030AC38
 * Callers:
 *     IovCallDriver @ 0x140924CD4 (IovCallDriver.c)
 *     IovpCallDriverWithStackBuffer @ 0x14092550C (IovpCallDriverWithStackBuffer.c)
 *     VfAfterCallDriver @ 0x140930EB4 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409310A4 (VfBeforeCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __noreturn VfBugCheckNoStackUsage()
{
  KeBugCheckEx(VfBugcheckTmpData, BugCheckParameter1, qword_140986A70, qword_140986A78, qword_140986A80);
}
