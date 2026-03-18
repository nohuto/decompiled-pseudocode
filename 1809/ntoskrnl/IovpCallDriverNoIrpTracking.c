/*
 * XREFs of IovpCallDriverNoIrpTracking @ 0x1409244A0
 * Callers:
 *     IovCallDriver @ 0x140923CD4 (IovCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x1401731D4 (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x140285278 (IopPerfCallDriver.c)
 *     VfAfterCallDriver @ 0x14092FEB4 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1409300A4 (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverNoIrpTracking(PVOID Object, IRP *a2, __int64 a3)
{
  unsigned int v5; // esi
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v5 = VfBeforeCallDriver(Object, a2, 0LL);
  if ( (IopFunctionPointerMask & 2) != 0 )
    v6 = IopPerfCallDriver(Object, a2);
  else
    v6 = IopfCallDriver((__int64)Object, a2);
  LODWORD(v8) = v6;
  VfAfterCallDriver(0LL, &v8, v5);
  return (unsigned int)v8;
}
