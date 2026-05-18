/*
 * XREFs of sub_18008949C @ 0x18008949C
 * Callers:
 *     sub_18008962C @ 0x18008962C (sub_18008962C.c)
 *     unknown_libname_6 @ 0x18008D2E0 (unknown_libname_6.c)
 * Callees:
 *     sub_180026420 @ 0x180026420 (sub_180026420.c)
 *     sub_180063530 @ 0x180063530 (sub_180063530.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800892E0 @ 0x1800892E0 (sub_1800892E0.c)
 *     sub_18008DB64 @ 0x18008DB64 (sub_18008DB64.c)
 *     sub_18011E090 @ 0x18011E090 (sub_18011E090.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008949C(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx
  __int64 *v6; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (_QWORD *)(a1 + 200);
  sub_180026420((__int64 ***)(a1 + 200), &v6, **(__int64 ***)(a1 + 200), *(__int64 **)(a1 + 200));
  j_j__o_free(*v2);
  sub_18011E090(a1 + 184);
  sub_1800892E0((_QWORD *)(a1 + 120));
  sub_18008DB64(a1 + 88, v7, **(_QWORD **)(a1 + 88));
  j_j__o_free(*(_QWORD *)(a1 + 88));
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  sub_180063530((__int64 *)(a1 + 48));
  if ( *(_BYTE *)(a1 + 32) )
    sub_180063668(*(_QWORD *)(a1 + 24));
  result = sub_18011E090(a1 + 16);
  v5 = *(volatile signed __int32 **)(a1 + 8);
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return result;
}
