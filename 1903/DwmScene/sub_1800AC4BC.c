/*
 * XREFs of sub_1800AC4BC @ 0x1800AC4BC
 * Callers:
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 *     sub_1800C00D0 @ 0x1800C00D0 (sub_1800C00D0.c)
 *     sub_1800DC25C @ 0x1800DC25C (sub_1800DC25C.c)
 * Callees:
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     sub_1800AAB2C @ 0x1800AAB2C (sub_1800AAB2C.c)
 *     sub_1800AAE38 @ 0x1800AAE38 (sub_1800AAE38.c)
 */

void __fastcall sub_1800AC4BC(__int64 a1, __int64 a2)
{
  char *v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v5; // rax

  v2 = *(char **)(a1 + 424);
  v3 = (_QWORD *)(a1 + 416);
  if ( sub_1800AAE38(*(char **)(a1 + 416), v2, a2) == v2 )
  {
    v5 = (_QWORD *)v3[1];
    if ( (_QWORD *)v3[2] == v5 )
    {
      sub_1800AAB2C(v3, v3[1], a2);
    }
    else
    {
      v5[2] = 0LL;
      v5[3] = 0LL;
      sub_18001110C(v5, a2);
      v3[1] += 32LL;
    }
  }
}
