/*
 * XREFs of EditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C00B66D0
 * Callers:
 *     <none>
 * Callees:
 *     GetActiveHKL @ 0x1C00B4694 (GetActiveHKL.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01DB284 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall EditionFinalizeKoreanImeCompStrOnMouseClick(__int64 a1, int a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 80);
  if ( (*gpsi & 4) != 0
    && !a2
    && (GetActiveHKL() & 0x3FF) == 0x12
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 136) + 8LL) + 10LL) & 1) == 0 )
  {
    if ( gpqForeground )
      FinalizeKoreanImeCompStrOnMouseClick((struct tagWND *)v2);
  }
}
