/*
 * XREFs of ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x1C000FCA8
 * Callers:
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C000FAD4 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     CalcForegroundInsertAfter @ 0x1C000FD34 (CalcForegroundInsertAfter.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall GetLastNonBottomMostWindow(struct tagWND *a1, int a2)
{
  __int64 v2; // r10
  __int64 i; // r9

  v2 = 0LL;
  for ( i = *(_QWORD *)(*((_QWORD *)a1 + 10) + 88LL);
        i && (*(_BYTE *)(*(_QWORD *)(i + 40) + 20LL) & 0x20) == 0;
        i = *(_QWORD *)(i + 64) )
  {
    if ( !a2 || a1 != (struct tagWND *)i )
      v2 = i;
  }
  return (struct tagWND *)v2;
}
