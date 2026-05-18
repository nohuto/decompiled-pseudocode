/*
 * XREFs of sub_1800F9EB8 @ 0x1800F9EB8
 * Callers:
 *     sub_1800FAA20 @ 0x1800FAA20 (sub_1800FAA20.c)
 *     sub_1800FB150 @ 0x1800FB150 (sub_1800FB150.c)
 * Callees:
 *     sub_180016B24 @ 0x180016B24 (sub_180016B24.c)
 *     sub_1800F9FA0 @ 0x1800F9FA0 (sub_1800F9FA0.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_1800F9EB8(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]

  *a2 = 0LL;
  a2[1] = 0LL;
  sub_1800F9FA0(a2);
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  v5 = *a2;
  v10 = *a2;
  v11 = v4;
  v6 = (_QWORD *)a1[20];
  if ( (_QWORD *)a1[21] == v6 )
  {
    sub_180016B24(a1 + 19, v6, &v10);
    v7 = v11;
  }
  else
  {
    *v6 = v5;
    v6[1] = v4;
    v7 = 0LL;
    v11 = 0LL;
    a1[20] += 16LL;
  }
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
    {
      v8 = v11;
      (**(void (__fastcall ***)(__int64))v11)(v11);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return a2;
}
