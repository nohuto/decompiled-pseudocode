/*
 * XREFs of PopCoolingInit @ 0x140A229B4
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *PopCoolingInit()
{
  __int64 *result; // rax

  qword_140442E58 = 0LL;
  result = &PopCoolingExtensionList;
  PopCoolingExtensionLock = 0LL;
  qword_140442E68 = (__int64)&PopCoolingExtensionList;
  PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
  return result;
}
