/*
 * XREFs of sub_1800D5638 @ 0x1800D5638
 * Callers:
 *     sub_1800D50B4 @ 0x1800D50B4 (sub_1800D50B4.c)
 * Callees:
 *     sub_180026314 @ 0x180026314 (sub_180026314.c)
 *     sub_1800635DC @ 0x1800635DC (sub_1800635DC.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D5638(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *i; // rdi
  volatile signed __int32 *v4; // rsi

  sub_1800635DC((__int64)a1);
  v2 = a1[5];
  while ( v2 )
  {
    a1[5] = --v2;
    if ( v2 )
      ++a1[4];
    else
      a1[4] = 0LL;
  }
  sub_180026314(a1 + 6);
  for ( i = a1 + 8; i != a1 + 18; i += 2 )
  {
    *i = 0LL;
    v4 = (volatile signed __int32 *)i[1];
    i[1] = 0LL;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
  }
  if ( a1 + 18 <= a1 + 23 )
    memset(a1 + 18, 0, 8LL * (a1 + 23 >= a1 + 18 ? 5 : 0));
  return sub_180063668((__int64)a1);
}
