/*
 * XREFs of sub_180118248 @ 0x180118248
 * Callers:
 *     sub_18011926C @ 0x18011926C (sub_18011926C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180118248(_QWORD *a1, __int64 a2)
{
  _OWORD *v4; // rax

  v4 = operator new(0x38uLL);
  if ( v4 )
  {
    *v4 = *(_OWORD *)a2;
    v4[1] = *(_OWORD *)(a2 + 16);
    v4[2] = *(_OWORD *)(a2 + 32);
    *((_QWORD *)v4 + 6) = *(_QWORD *)(a2 + 48);
  }
  *a1 = v4;
  return a1;
}
