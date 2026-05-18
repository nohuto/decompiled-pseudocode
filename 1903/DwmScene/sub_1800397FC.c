/*
 * XREFs of sub_1800397FC @ 0x1800397FC
 * Callers:
 *     sub_180129179 @ 0x180129179 (sub_180129179.c)
 *     sub_180129247 @ 0x180129247 (sub_180129247.c)
 *     unknown_libname_40 @ 0x18012929B (unknown_libname_40.c)
 *     sub_18013421F @ 0x18013421F (sub_18013421F.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800397FC(__int64 a1, __int64 a2)
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
