/*
 * XREFs of sub_180089324 @ 0x180089324
 * Callers:
 *     sub_180089024 @ 0x180089024 (sub_180089024.c)
 * Callees:
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180089324(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v6; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  sub_18001115C((_QWORD *)a1, (__int64)a2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v6 = a3[1];
  if ( v6 )
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
  *(_QWORD *)(a1 + 32) = *a3;
  *(_QWORD *)(a1 + 40) = a3[1];
  *(_QWORD *)(a1 + 48) = qword_18026C298;
  *(_DWORD *)(a1 + 56) = dword_18026C2A0;
  *(_QWORD *)(a1 + 60) = qword_18026C298;
  *(_DWORD *)(a1 + 68) = dword_18026C2A0;
  *(_BYTE *)(a1 + 72) = 1;
  _InterlockedExchange((volatile __int32 *)(a1 + 76), 0);
  *(_BYTE *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  unknown_libname_116(a2);
  return a1;
}
