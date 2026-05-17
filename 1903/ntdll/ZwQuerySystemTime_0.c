/*
 * XREFs of ZwQuerySystemTime_0 @ 0x180075A60
 * Callers:
 *     ZwQuerySystemTime @ 0x18009D220 (ZwQuerySystemTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemTime_0(_QWORD *a1)
{
  *a1 = MEMORY[0x7FFE0014];
  return 0LL;
}
