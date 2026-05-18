/*
 * XREFs of sub_1801181FC @ 0x1801181FC
 * Callers:
 *     sub_18000A3D0 @ 0x18000A3D0 (sub_18000A3D0.c)
 *     sub_18011926C @ 0x18011926C (sub_18011926C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

_QWORD *__fastcall sub_1801181FC(_QWORD *a1)
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
