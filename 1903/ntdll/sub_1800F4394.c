/*
 * XREFs of sub_1800F4394 @ 0x1800F4394
 * Callers:
 *     sub_1800F48DC @ 0x1800F48DC (sub_1800F48DC.c)
 *     sub_1800F4B1C @ 0x1800F4B1C (sub_1800F4B1C.c)
 * Callees:
 *     sub_1800F4348 @ 0x1800F4348 (sub_1800F4348.c)
 */

__int64 __fastcall sub_1800F4394(unsigned __int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // r10
  _QWORD *v5; // r8
  int v6; // r11d
  __int64 i; // rbx
  unsigned __int64 v8; // rdx

  v1 = qword_180166990;
LABEL_2:
  v3 = sub_1800F4348((_QWORD *)qword_180163BA0, a1);
  if ( v3 && *(_QWORD *)(v3 + 8) != v1 )
  {
    v5 = (_QWORD *)(v3 + 48);
    v6 = 0;
    for ( i = 0LL; i < *(int *)(v3 + 16); ++i )
    {
      v8 = *(v5 - 1);
      if ( v8 <= v4 && v8 + *v5 > v4 )
      {
        if ( v8 != v4 )
        {
          a1 = *(v5 - 1);
          goto LABEL_2;
        }
        return v3 + 8 * (5LL * v6 + 3);
      }
      ++v6;
      v5 += 5;
    }
  }
  return 0LL;
}
