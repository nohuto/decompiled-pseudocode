/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C010CEC0
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C0095DF0 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C0210A48 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C0211DB0 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C0212878 )
    return 116LL;
  return result;
}
