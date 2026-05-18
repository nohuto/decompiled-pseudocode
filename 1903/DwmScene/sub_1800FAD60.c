/*
 * XREFs of sub_1800FAD60 @ 0x1800FAD60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800FAD60(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  volatile signed __int32 *v12; // rbx
  __int128 v14; // [rsp+30h] [rbp-31h] BYREF
  __int128 v15; // [rsp+40h] [rbp-21h] BYREF
  __int64 v16; // [rsp+50h] [rbp-11h]
  __int128 v17; // [rsp+60h] [rbp-1h] BYREF

  v16 = -2LL;
  *(_QWORD *)&v14 = a2;
  v17 = 0uLL;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 184) + 16LL))(*(_QWORD *)(a1 + 184), &v17);
  v14 = 0LL;
  v9 = a5[1];
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v9 = a5[1];
  }
  *(_QWORD *)&v14 = *a5;
  *((_QWORD *)&v14 + 1) = v9;
  v15 = 0LL;
  if ( *((_QWORD *)&v17 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL));
  v15 = v17;
  (*(void (__fastcall **)(__int64, __int64, __int64, __int128 *, __int128 *))(*(_QWORD *)a1 + 56LL))(
    a1,
    a3,
    a4,
    &v15,
    &v14);
  v10 = *(_QWORD *)(a1 + 232);
  *a2 = 0LL;
  a2[1] = 0LL;
  v11 = *(_QWORD *)(v10 + 144);
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  *a2 = *(_QWORD *)(v10 + 136);
  a2[1] = *(_QWORD *)(v10 + 144);
  v12 = (volatile signed __int32 *)*((_QWORD *)&v17 + 1);
  if ( *((_QWORD *)&v17 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return a2;
}
