/*
 * XREFs of sub_1800AC5CC @ 0x1800AC5CC
 * Callers:
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800C01E0 @ 0x1800C01E0 (sub_1800C01E0.c)
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     sub_1800AAC3C @ 0x1800AAC3C (sub_1800AAC3C.c)
 *     sub_1800AAF48 @ 0x1800AAF48 (sub_1800AAF48.c)
 */

void __fastcall sub_1800AC5CC(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v5; // rax

  v2 = *(char **)(a1 + 424);
  v3 = (_QWORD *)(a1 + 416);
  if ( sub_1800AAF48(*(char **)(a1 + 416), v2, a2) == v2 )
  {
    v5 = (_QWORD *)v3[1];
    if ( (_QWORD *)v3[2] == v5 )
    {
      sub_1800AAC3C(v3, v3[1], a2);
    }
    else
    {
      v5[2] = 0LL;
      v5[3] = 0LL;
      sub_18001115C(v5, a2);
      v3[1] += 32LL;
    }
  }
}
