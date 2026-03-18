/*
 * XREFs of GreCreatePen @ 0x1C00E9444
 * Callers:
 *     NtGdiCreatePen @ 0x1C00E9430 (NtGdiCreatePen.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01B1070 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GreExtCreatePen @ 0x1C00E94CC (GreExtCreatePen.c)
 */

__int64 __fastcall GreCreatePen(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // ebp

  v7 = a2;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  if ( a1 <= 6 )
    return GreExtCreatePen(a1, v7, 0LL, a3, 0LL, 0LL, 0, 0LL, 0, 1, a4);
  EngSetLastError(0x57u);
  return 0LL;
}
