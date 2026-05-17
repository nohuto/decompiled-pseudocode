/*
 * XREFs of sub_18009ADB4 @ 0x18009ADB4
 * Callers:
 *     sub_18009AE0C @ 0x18009AE0C (sub_18009AE0C.c)
 * Callees:
 *     iswctype @ 0x180090110 (iswctype.c)
 *     sub_18009B7E4 @ 0x18009B7E4 (sub_18009B7E4.c)
 */

__int64 __fastcall sub_18009ADB4(_DWORD *a1, __int64 a2)
{
  wint_t v4; // bx

  do
  {
    ++*a1;
    v4 = sub_18009B7E4(a2, a2);
  }
  while ( v4 != 0xFFFF && iswctype(v4, 8u) );
  return v4;
}
