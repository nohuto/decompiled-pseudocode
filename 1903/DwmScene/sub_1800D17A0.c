/*
 * XREFs of sub_1800D17A0 @ 0x1800D17A0
 * Callers:
 *     sub_1800D0CF4 @ 0x1800D0CF4 (sub_1800D0CF4.c)
 * Callees:
 *     memcmp @ 0x180125AA8 (memcmp.c)
 */

bool __fastcall sub_1800D17A0(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  size_t v4; // r8
  char v5; // si

  v2 = a2;
  v3 = a1;
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  v4 = v3[2];
  v5 = 0;
  if ( v4 == v2[2]
    && !memcmp(a1, a2, v4)
    && *((_DWORD *)v3 + 8) == *((_DWORD *)v2 + 8)
    && *((_DWORD *)v3 + 9) == *((_DWORD *)v2 + 9)
    && *((_BYTE *)v3 + 40) == *((_BYTE *)v2 + 40) )
  {
    return *((_DWORD *)v3 + 11) == *((_DWORD *)v2 + 11);
  }
  return v5;
}
