/*
 * XREFs of sub_1800A646C @ 0x1800A646C
 * Callers:
 *     sub_1800A9034 @ 0x1800A9034 (sub_1800A9034.c)
 * Callees:
 *     sub_18002B7AC @ 0x18002B7AC (sub_18002B7AC.c)
 *     sub_1800A6804 @ 0x1800A6804 (sub_1800A6804.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A646C(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = sub_18002B7AC();
  *a1 = v2;
  try
  {
    sub_1800A6804(a1);
    result = a1;
  }
  catch ( ... )
  {
    sub_1800AA0A8(a1);
    throw;
  }
  return result;
}
