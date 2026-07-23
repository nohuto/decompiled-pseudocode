/*
 * XREFs of sub_18004FD48 @ 0x18004FD48
 * Callers:
 *     sub_18004FB14 @ 0x18004FB14 (sub_18004FB14.c)
 * Callees:
 *     sub_18004FDA8 @ 0x18004FDA8 (sub_18004FDA8.c)
 */

void __fastcall sub_18004FD48(__int64 a1)
{
  int v1; // edi
  _QWORD *v2; // rbx
  _QWORD *v3; // rdx
  _QWORD *v4; // rax

  v1 = a1;
  v2 = (_QWORD *)(a1 + 72);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = (_QWORD *)v2[1];
    if ( (_QWORD *)*v3 != v2 || (v4 = (_QWORD *)v3[1], (_QWORD *)*v4 != v3) )
      __fastfail(3u);
    v2[1] = v4;
    *v4 = v2;
    sub_18004FDA8(v1);
  }
}
