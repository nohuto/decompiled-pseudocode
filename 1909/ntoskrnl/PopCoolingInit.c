/*
 * XREFs of PopCoolingInit @ 0x140A22A94
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *PopCoolingInit()
{
  __int64 *result; // rax

  qword_140442DF8 = 0LL;
  result = &PopCoolingExtensionList;
  PopCoolingExtensionLock = 0LL;
  qword_140442E08 = (__int64)&PopCoolingExtensionList;
  PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
  return result;
}
