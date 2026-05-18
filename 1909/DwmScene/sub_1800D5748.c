/*
 * XREFs of sub_1800D5748 @ 0x1800D5748
 * Callers:
 *     sub_1800D51C4 @ 0x1800D51C4 (sub_1800D51C4.c)
 * Callees:
 *     sub_180026424 @ 0x180026424 (sub_180026424.c)
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D5748(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *i; // rdi
  volatile signed __int32 *v4; // rsi

  sub_1800636EC((__int64)a1);
  v2 = a1[5];
  while ( v2 )
  {
    a1[5] = --v2;
    if ( v2 )
      ++a1[4];
    else
      a1[4] = 0LL;
  }
  sub_180026424(a1 + 6);
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
  return sub_180063778((__int64)a1);
}
