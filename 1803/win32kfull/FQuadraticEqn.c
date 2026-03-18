/*
 * XREFs of FQuadraticEqn @ 0x1C02BB618
 * Callers:
 *     CurveTransitions @ 0x1C02BB044 (CurveTransitions.c)
 * Callees:
 *     FSqrt @ 0x1C02BB6E8 (FSqrt.c)
 *     QDiv2 @ 0x1C02BBE28 (QDiv2.c)
 */

void __fastcall FQuadraticEqn(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax

  *a4 = 0;
  v6 = a2;
  if ( !a1 )
  {
    if ( !a2 )
      return;
    v7 = -65536 * a3;
LABEL_8:
    *a4 = 1;
    v12 = QDiv2(v7, a2);
    a6 = a5;
    goto LABEL_9;
  }
  v8 = 2 * a1;
  v9 = 2 * a3 * 2 * a1;
  if ( a2 * a2 - v9 <= 0 )
  {
    if ( a2 * a2 != v9 )
      return;
    a2 = 2 * a1;
    v7 = -65536 * v6;
    goto LABEL_8;
  }
  *a4 = 2;
  v10 = a2 << 16;
  v11 = (FSqrt() + 0x8000) >> 16;
  *a5 = QDiv2(v11 - v10, v8);
  v12 = QDiv2(-(v11 + v10), v8);
LABEL_9:
  *a6 = v12;
}
