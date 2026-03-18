/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C010A550
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C0094740 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C020DA48 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C020EDB0 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C020F878 )
    return 116LL;
  return result;
}
