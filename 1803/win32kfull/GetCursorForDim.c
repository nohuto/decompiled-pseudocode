/*
 * XREFs of GetCursorForDim @ 0x1C006B2A4
 * Callers:
 *     xxxEnsureMonitorCursors @ 0x1C0008198 (xxxEnsureMonitorCursors.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C006B19C (xxxSetMonitorIcoCurIndex.c)
 *     NtUserLinkDpiCursor @ 0x1C01F1D30 (NtUserLinkDpiCursor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCursorForDim(__int64 a1, int a2)
{
  __int64 result; // rax

  for ( result = *(_QWORD *)(a1 + 48); result && *(_DWORD *)(result + 76) != a2; result = *(_QWORD *)(result + 40) )
    ;
  return result;
}
