/*
 * XREFs of sub_18011CB2C @ 0x18011CB2C
 * Callers:
 *     sub_18011D5B4 @ 0x18011D5B4 (sub_18011D5B4.c)
 * Callees:
 *     sub_18006DF24 @ 0x18006DF24 (sub_18006DF24.c)
 *     sub_18011CCA4 @ 0x18011CCA4 (sub_18011CCA4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18011CB2C(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18006DF24();
  *a1 = v2;
  try
  {
    sub_18011CCA4(a1);
    result = a1;
  }
  catch ( ... )
  {
    sub_18011DAD0(a1);
    throw;
  }
  return result;
}
