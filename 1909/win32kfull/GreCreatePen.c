/*
 * XREFs of GreCreatePen @ 0x1C00E2BC4
 * Callers:
 *     NtGdiCreatePen @ 0x1C00E2BB0 (NtGdiCreatePen.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01E8B40 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GreExtCreatePen @ 0x1C00E2C4C (GreExtCreatePen.c)
 */

__int64 __fastcall GreCreatePen(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  unsigned int v7; // ebp

  v6 = a3;
  v7 = a2;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  if ( a1 <= 6 )
    return GreExtCreatePen(a1, v7, 0LL, v6, 0LL, 0LL, 0, 0LL, 0, 1, a4);
  EngSetLastError(0x57u);
  return 0LL;
}
