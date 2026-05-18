/*
 * XREFs of sub_18000F4F4 @ 0x18000F4F4
 * Callers:
 *     sub_18012795E @ 0x18012795E (sub_18012795E.c)
 *     sub_18012D38D @ 0x18012D38D (sub_18012D38D.c)
 *     sub_18012D5E2 @ 0x18012D5E2 (sub_18012D5E2.c)
 *     sub_18012D623 @ 0x18012D623 (sub_18012D623.c)
 *     sub_18012D6A3 @ 0x18012D6A3 (sub_18012D6A3.c)
 *     sub_18012D6E9 @ 0x18012D6E9 (sub_18012D6E9.c)
 *     sub_18012D73E @ 0x18012D73E (sub_18012D73E.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000F4F4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  volatile signed __int32 *v5; // rcx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      v5 = *(volatile signed __int32 **)(v4 + 8);
      if ( v5 )
      {
        result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      v4 += 16LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
