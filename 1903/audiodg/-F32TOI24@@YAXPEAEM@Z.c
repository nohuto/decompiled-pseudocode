/*
 * XREFs of ?F32TOI24@@YAXPEAEM@Z @ 0x140014DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall F32TOI24(unsigned __int8 *a1, float a2)
{
  int v2; // eax

  v2 = (int)(a2 * 8388608.0);
  *a1 = v2;
  *(_WORD *)(a1 + 1) = v2 >> 8;
}
