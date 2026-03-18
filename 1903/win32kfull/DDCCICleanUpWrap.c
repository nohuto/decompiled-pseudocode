/*
 * XREFs of DDCCICleanUpWrap @ 0x1C013FD60
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCMonitorAPI@@QEAAPEAXI@Z @ 0x1C013FD88 (--_GCMonitorAPI@@QEAAPEAXI@Z.c)
 */

void *__fastcall DDCCICleanUpWrap(__int64 a1, unsigned int a2)
{
  void *result; // rax

  if ( qword_1C032C788 )
    result = CMonitorAPI::`scalar deleting destructor'(qword_1C032C788, a2);
  qword_1C032C788 = 0LL;
  return result;
}
