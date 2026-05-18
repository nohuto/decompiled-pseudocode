/*
 * XREFs of sub_18011F300 @ 0x18011F300
 * Callers:
 *     sub_18011F370 @ 0x18011F370 (sub_18011F370.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011F300(_DWORD *a1, char *a2)
{
  char *v2; // rbx
  char *v4; // rcx

  v2 = a2;
  v4 = (char *)(a1 + 2);
  if ( v4 != a2 )
  {
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(char **)a2;
    sub_180026168(v4, a2, *((_QWORD *)v2 + 2));
  }
  *a1 = 0;
  return unknown_libname_116((__int64 *)v2);
}
