/*
 * XREFs of sub_180080104 @ 0x180080104
 * Callers:
 *     sub_18007FE50 @ 0x18007FE50 (sub_18007FE50.c)
 *     sub_180081018 @ 0x180081018 (sub_180081018.c)
 * Callees:
 *     sub_18007FF3C @ 0x18007FF3C (sub_18007FF3C.c)
 *     sub_180080790 @ 0x180080790 (sub_180080790.c)
 *     sub_1800808D0 @ 0x1800808D0 (sub_1800808D0.c)
 *     sub_180080DF4 @ 0x180080DF4 (sub_180080DF4.c)
 *     sub_180080EA8 @ 0x180080EA8 (sub_180080EA8.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180080104(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(__int64, __int64))
{
  __int64 v9; // r14
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rbp
  bool v16; // zf

  if ( a2 != a3 )
  {
    v9 = a3;
    v11 = a1;
    if ( a1 != a2 )
    {
      while ( !a8(a2, v11) )
      {
        v11 += 16LL;
        --a4;
        if ( v11 == a2 )
          return;
      }
      v13 = a2 - 16;
      do
      {
        v14 = a5;
        v15 = v9;
        v9 -= 16LL;
        --a5;
        if ( a2 == v9 )
        {
          sub_180080EA8(v11, a2, v15);
          return;
        }
        v16 = a8(v9, v13) == 0;
        v13 = a2 - 16;
      }
      while ( v16 );
      if ( a4 == 1 )
      {
        sub_180080DF4(v11, a2, v15);
      }
      else if ( a4 > v14 || a4 > a7 )
      {
        if ( v14 > a7 )
          sub_18007FF3C(v11, a2, v15, a4, v14, a6, a7, a8);
        else
          sub_1800808D0(v11, a2, v15, a6, (__int64)a8);
      }
      else
      {
        sub_180080790(v11, a2, v15, a6, (__int64)a8);
      }
    }
  }
}
