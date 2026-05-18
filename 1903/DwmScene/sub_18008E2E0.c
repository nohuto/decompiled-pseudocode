/*
 * XREFs of sub_18008E2E0 @ 0x18008E2E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008DE50 @ 0x18008DE50 (sub_18008DE50.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18008E2E0(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rbx
  __int64 v9; // xmm6_8
  volatile signed __int32 *v10; // rbx
  __int128 v12; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h]
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF

  v14 = -2LL;
  v13 = a4;
  v15 = 0uLL;
  sub_18008DE50(&v15, a4);
  v12 = 0LL;
  v8 = *((_QWORD *)&v15 + 1);
  if ( *((_QWORD *)&v15 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL));
    v8 = *((_QWORD *)&v15 + 1);
  }
  v9 = v15;
  v12 = v15;
  (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 144LL))(a1, &v12, a3);
  *a2 = v9;
  a2[1] = v8;
  v10 = (volatile signed __int32 *)a4[1];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return a2;
}
