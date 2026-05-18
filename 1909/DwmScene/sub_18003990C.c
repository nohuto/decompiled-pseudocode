/*
 * XREFs of sub_18003990C @ 0x18003990C
 * Callers:
 *     sub_180129289 @ 0x180129289 (sub_180129289.c)
 *     sub_180129357 @ 0x180129357 (sub_180129357.c)
 *     unknown_libname_40 @ 0x1801293AB (unknown_libname_40.c)
 *     sub_18013432F @ 0x18013432F (sub_18013432F.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003990C(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = a1 + 8;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != v2;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  return result;
}
