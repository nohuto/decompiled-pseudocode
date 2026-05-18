/*
 * XREFs of sub_180069604 @ 0x180069604
 * Callers:
 *     sub_18012CC42 @ 0x18012CC42 (sub_18012CC42.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180069604(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *(_QWORD *)(v4 + 56);
      if ( v5 )
      {
        LOBYTE(a2) = v5 != v4;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
        *(_QWORD *)(v4 + 56) = 0LL;
      }
      v4 += 64LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
