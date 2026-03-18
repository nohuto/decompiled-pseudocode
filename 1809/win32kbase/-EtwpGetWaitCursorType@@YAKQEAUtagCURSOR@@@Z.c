/*
 * XREFs of ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C00E5920
 * Callers:
 *     EtwTraceWaitCursor @ 0x1C0083360 (EtwTraceWaitCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetWaitCursorType(struct tagCURSOR *const a1)
{
  __int64 result; // rax

  if ( a1 == (struct tagCURSOR *const)qword_1C01C8D28 )
    return 102LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C01CA090 )
    return 111LL;
  result = 0LL;
  if ( a1 == (struct tagCURSOR *const)qword_1C01CAB58 )
    return 116LL;
  return result;
}
