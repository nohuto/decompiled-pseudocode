/*
 * XREFs of DDCCICleanUpWrap @ 0x1C00F0220
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCMonitorAPI@@QEAAPEAXI@Z @ 0x1C00F0344 (--_GCMonitorAPI@@QEAAPEAXI@Z.c)
 */

void *__fastcall DDCCICleanUpWrap(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( qword_1C03270B8 )
    result = CMonitorAPI::`scalar deleting destructor'(qword_1C03270B8, a2);
  qword_1C03270B8 = 0LL;
  return result;
}
