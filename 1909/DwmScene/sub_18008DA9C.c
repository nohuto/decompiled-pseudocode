/*
 * XREFs of sub_18008DA9C @ 0x18008DA9C
 * Callers:
 *     sub_18008DC04 @ 0x18008DC04 (sub_18008DC04.c)
 * Callees:
 *     sub_18008D4D8 @ 0x18008D4D8 (sub_18008D4D8.c)
 *     sub_18008D7E0 @ 0x18008D7E0 (sub_18008D7E0.c)
 *     sub_18008DB28 @ 0x18008DB28 (sub_18008DB28.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18008DA9C(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v5; // rbx
  _QWORD **v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  _BYTE v12[32]; // [rsp+28h] [rbp-20h] BYREF

  v5 = a3;
  v8 = (_QWORD **)(a1 + 1);
  v9 = (_QWORD *)a1[1];
  if ( a3 == (_QWORD *)*v9 && a4 == v9 )
  {
    sub_18008D7E0((__int64)(a1 + 1));
    sub_18008D4D8(a1, 8LL);
    *a2 = **v8;
  }
  else
  {
    while ( v5 != a4 )
    {
      v10 = v5;
      v5 = (_QWORD *)*v5;
      sub_18008DB28(a1, v12, v10);
    }
    *a2 = v5;
  }
  return a2;
}
