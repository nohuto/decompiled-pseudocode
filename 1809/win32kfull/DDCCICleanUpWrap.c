/*
 * XREFs of DDCCICleanUpWrap @ 0x1C0135050
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCMonitorAPI@@QEAAPEAXI@Z @ 0x1C0135078 (--_GCMonitorAPI@@QEAAPEAXI@Z.c)
 */

void *__fastcall DDCCICleanUpWrap(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( qword_1C0317778 )
    result = CMonitorAPI::`scalar deleting destructor'(qword_1C0317778, a2);
  qword_1C0317778 = 0LL;
  return result;
}
