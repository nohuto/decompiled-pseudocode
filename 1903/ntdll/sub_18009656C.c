/*
 * XREFs of sub_18009656C @ 0x18009656C
 * Callers:
 *     sub_180092D30 @ 0x180092D30 (sub_180092D30.c)
 *     sub_1800936C0 @ 0x1800936C0 (sub_1800936C0.c)
 * Callees:
 *     <none>
 */

_BOOL8 sub_18009656C()
{
  return qword_180163430 == (_security_cookie | 1);
}
