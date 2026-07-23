/*
 * XREFs of sub_1800FD9F4 @ 0x1800FD9F4
 * Callers:
 *     sub_1800FFDA8 @ 0x1800FFDA8 (sub_1800FFDA8.c)
 * Callees:
 *     sub_1800156DC @ 0x1800156DC (sub_1800156DC.c)
 */

_QWORD *__fastcall sub_1800FD9F4(unsigned int a1)
{
  _QWORD *result; // rax
  unsigned int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  result = sub_1800156DC(0x18u, 4u, 0x1Cu, 0, 0, &v2);
  if ( result )
  {
    *(_DWORD *)result = v2;
    result[2] = result + 3;
    *((_DWORD *)result + 1) = 4;
  }
  return result;
}
