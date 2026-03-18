/*
 * XREFs of xxxDWP_EraseBkgnd @ 0x1C00FEB18
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxFillWindow @ 0x1C009FB24 (xxxFillWindow.c)
 *     xxxInternalPaintDesktop @ 0x1C010C1E8 (xxxInternalPaintDesktop.c)
 */

__int64 __fastcall xxxDWP_EraseBkgnd(__int64 a1, int a2, HDC a3)
{
  HBRUSH v3; // r9

  if ( a2 == 20 )
  {
    v3 = *(HBRUSH *)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 8LL) + 72LL);
    if ( !v3 )
      return 0LL;
    if ( (unsigned __int64)v3 <= 0x1F )
      v3 = *(HBRUSH *)(gpsi + 8LL * (_QWORD)v3 + 4688);
    xxxFillWindow((struct tagWND *)a1, a1, a3, v3);
  }
  else if ( a2 == 39 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) != 0 )
      return 0LL;
    xxxInternalPaintDesktop(a1, a3, 1LL);
  }
  return 1LL;
}
