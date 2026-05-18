/*
 * XREFs of sub_18000F544 @ 0x18000F544
 * Callers:
 *     sub_180127A6E @ 0x180127A6E (sub_180127A6E.c)
 *     sub_18012D49D @ 0x18012D49D (sub_18012D49D.c)
 *     sub_18012D6F2 @ 0x18012D6F2 (sub_18012D6F2.c)
 *     sub_18012D733 @ 0x18012D733 (sub_18012D733.c)
 *     sub_18012D7B3 @ 0x18012D7B3 (sub_18012D7B3.c)
 *     sub_18012D7F9 @ 0x18012D7F9 (sub_18012D7F9.c)
 *     sub_18012D84E @ 0x18012D84E (sub_18012D84E.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000F544(__int64 a1, __int64 a2, __int64 a3)
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
