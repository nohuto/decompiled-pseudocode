/*
 * XREFs of sub_1800A635C @ 0x1800A635C
 * Callers:
 *     sub_1800A8F24 @ 0x1800A8F24 (sub_1800A8F24.c)
 * Callees:
 *     sub_18002B69C @ 0x18002B69C (sub_18002B69C.c)
 *     sub_1800A66F4 @ 0x1800A66F4 (sub_1800A66F4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A635C(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18002B69C();
  *a1 = v2;
  try
  {
    sub_1800A66F4(a1);
    result = a1;
  }
  catch ( ... )
  {
    sub_1800A9F98(a1);
    throw;
  }
  return result;
}
