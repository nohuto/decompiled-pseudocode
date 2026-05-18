/*
 * XREFs of sub_1800824E8 @ 0x1800824E8
 * Callers:
 *     sub_180085C60 @ 0x180085C60 (sub_180085C60.c)
 * Callees:
 *     sub_18000FC30 @ 0x18000FC30 (sub_18000FC30.c)
 *     sub_180085BF4 @ 0x180085BF4 (sub_180085BF4.c)
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_1800824E8(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbp
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r14
  volatile signed __int32 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 result; // rax

  sub_180087524(a1);
  v4 = *(_QWORD *)(a1 + 40);
  if ( (v4 - *(_QWORD *)(a1 + 32)) >> 4 )
  {
    v5 = *(volatile signed __int32 **)(v4 - 8);
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v5 = *(volatile signed __int32 **)(v4 - 8);
    }
    v6 = *(_QWORD *)(v4 - 16);
    sub_180085BF4(v6, a2);
    v7 = *a2;
    sub_180087524(*a2);
    if ( v5 )
      _InterlockedIncrement(v5 + 3);
    *(_QWORD *)(v7 + 112) = v6;
    v8 = *(volatile signed __int32 **)(v7 + 120);
    *(_QWORD *)(v7 + 120) = v5;
    if ( v8 && _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
  }
  v9 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(a1 + 48) == v9 )
    return sub_18000FC30((char **)(a1 + 32), (char *)v9, a2);
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)(v9 + 8) = 0LL;
  v10 = a2[1];
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  *(_QWORD *)v9 = *a2;
  result = a2[1];
  *(_QWORD *)(v9 + 8) = result;
  *(_QWORD *)(a1 + 40) += 16LL;
  return result;
}
