/*
 * XREFs of sub_1800DD508 @ 0x1800DD508
 * Callers:
 *     sub_1800AEF3C @ 0x1800AEF3C (sub_1800AEF3C.c)
 *     sub_1800BB184 @ 0x1800BB184 (sub_1800BB184.c)
 *     sub_1800BB35C @ 0x1800BB35C (sub_1800BB35C.c)
 * Callees:
 *     sub_18000FBE0 @ 0x18000FBE0 (sub_18000FBE0.c)
 *     __std_type_info_compare @ 0x180125AA2 (__std_type_info_compare.c)
 *     __RTtypeid @ 0x180125AAE (__RTtypeid.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DD508(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v5 = *(_QWORD **)(a1 + 40);
  v6 = *(_QWORD **)(a1 + 48);
  while ( v5 != v6 )
  {
    v7 = _RTtypeid(*v5);
    if ( !(unsigned int)_std_type_info_compare(*a3 + 8LL, v7 + 8) )
    {
      v8 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)(a2 + 16) == v8 )
      {
        sub_18000FBE0((char **)a2, (char *)v8, v5);
      }
      else
      {
        *(_QWORD *)v8 = 0LL;
        *(_QWORD *)(v8 + 8) = 0LL;
        v9 = v5[1];
        if ( v9 )
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        *(_QWORD *)v8 = *v5;
        *(_QWORD *)(v8 + 8) = v5[1];
        *(_QWORD *)(a2 + 8) += 16LL;
      }
    }
    v5 += 2;
  }
  return a2;
}
