/*
 * XREFs of sub_180063530 @ 0x180063530
 * Callers:
 *     sub_180067114 @ 0x180067114 (sub_180067114.c)
 *     sub_18006717C @ 0x18006717C (sub_18006717C.c)
 *     sub_18006C250 @ 0x18006C250 (sub_18006C250.c)
 *     sub_18007482C @ 0x18007482C (sub_18007482C.c)
 *     sub_1800748FC @ 0x1800748FC (sub_1800748FC.c)
 *     sub_180079F64 @ 0x180079F64 (sub_180079F64.c)
 *     sub_18008949C @ 0x18008949C (sub_18008949C.c)
 *     sub_1800B37CC @ 0x1800B37CC (sub_1800B37CC.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180063530(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  volatile signed __int32 *v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        v4 = *(volatile signed __int32 **)(v1 + 8);
        if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
        v1 += 16LL;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    v5 = (a1[2] - v1) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v5 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v1 - 8);
      v7 = v5 + 39;
      if ( (unsigned __int64)(v1 - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v7);
        JUMPOUT(0x1800635DALL);
      }
      v1 = *(_QWORD *)(v1 - 8);
    }
    result = j_j__o_free(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
