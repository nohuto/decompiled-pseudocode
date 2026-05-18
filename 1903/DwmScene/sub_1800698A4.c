/*
 * XREFs of sub_1800698A4 @ 0x1800698A4
 * Callers:
 *     sub_1800670A8 @ 0x1800670A8 (sub_1800670A8.c)
 *     sub_1800671B8 @ 0x1800671B8 (sub_1800671B8.c)
 *     sub_18006C250 @ 0x18006C250 (sub_18006C250.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800698A4(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 result; // rax

  v2 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    if ( v2 != v4 )
    {
      do
      {
        v5 = *(_QWORD *)(v2 + 56);
        if ( v5 )
        {
          LOBYTE(a2) = v5 != v2;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
          *(_QWORD *)(v2 + 56) = 0LL;
        }
        v2 += 64LL;
      }
      while ( v2 != v4 );
      v2 = *a1;
    }
    v6 = (a1[2] - v2) & 0xFFFFFFFFFFFFFFC0uLL;
    if ( v6 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v2 - 8);
      v8 = v6 + 39;
      if ( (unsigned __int64)(v2 - v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v7, v8);
        JUMPOUT(0x18006994CLL);
      }
      v2 = *(_QWORD *)(v2 - 8);
    }
    result = j_j__o_free(v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
