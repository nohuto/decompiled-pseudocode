/*
 * XREFs of sub_18011CA1C @ 0x18011CA1C
 * Callers:
 *     sub_18011D4A4 @ 0x18011D4A4 (sub_18011D4A4.c)
 * Callees:
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     sub_18011CB94 @ 0x18011CB94 (sub_18011CB94.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18011CA1C(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18006DE14();
  *a1 = v2;
  try
  {
    sub_18011CB94(a1);
    result = a1;
  }
  catch ( ... )
  {
    sub_18011D9C0(a1);
    throw;
  }
  return result;
}
