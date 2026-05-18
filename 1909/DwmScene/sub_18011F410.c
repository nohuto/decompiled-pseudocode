/*
 * XREFs of sub_18011F410 @ 0x18011F410
 * Callers:
 *     sub_18011F480 @ 0x18011F480 (sub_18011F480.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011F410(_DWORD *a1, char *a2)
{
  char *v2; // rbx
  char *v4; // rcx

  v2 = a2;
  v4 = (char *)(a1 + 2);
  if ( v4 != a2 )
  {
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(char **)a2;
    sub_180026278(v4, a2, *((_QWORD *)v2 + 2));
  }
  *a1 = 0;
  return unknown_libname_116((__int64 *)v2);
}
