/*
 * XREFs of sub_18011830C @ 0x18011830C
 * Callers:
 *     sub_18000A3D0 @ 0x18000A3D0 (sub_18000A3D0.c)
 *     sub_18011937C @ 0x18011937C (sub_18011937C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

_QWORD *__fastcall sub_18011830C(_QWORD *a1)
{
  void *v2; // rax
  void *v3; // rbx

  v2 = operator new(0x38uLL);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, 0x38uLL);
  else
    v3 = 0LL;
  *a1 = v3;
  return a1;
}
