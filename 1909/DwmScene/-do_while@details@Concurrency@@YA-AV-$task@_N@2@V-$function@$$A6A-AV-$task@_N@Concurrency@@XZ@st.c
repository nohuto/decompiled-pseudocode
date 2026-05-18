/*
 * XREFs of ?do_while@details@Concurrency@@YA?AV?$task@_N@2@V?$function@$$A6A?AV?$task@_N@Concurrency@@XZ@std@@@Z @ 0x1800DE380
 * Callers:
 *     sub_1800DDB68 @ 0x1800DDB68 (sub_1800DDB68.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     sub_18006A320 @ 0x18006A320 (sub_18006A320.c)
 *     sub_18006CDF8 @ 0x18006CDF8 (sub_18006CDF8.c)
 *     sub_1800F975C @ 0x1800F975C (sub_1800F975C.c)
 *     sub_1800F98E0 @ 0x1800F98E0 (sub_1800F98E0.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall Concurrency::details::do_while(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v17[2]; // [rsp+28h] [rbp-29h] BYREF
  __m128i si128; // [rsp+38h] [rbp-19h]
  __int64 v19; // [rsp+48h] [rbp-9h]
  __int128 v20; // [rsp+50h] [rbp-1h] BYREF
  __int128 v21; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v22; // [rsp+70h] [rbp+1Fh] BYREF
  _QWORD v23[2]; // [rsp+80h] [rbp+2Fh] BYREF

  v19 = -2LL;
  v20 = 0uLL;
  v6 = sub_18006CDF8(*a4, (__int64)a2);
  v20 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  v20 = *(_OWORD *)v6;
  v23[0] = 0LL;
  v23[1] = 0LL;
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v17[0]) = 0;
  sub_18000E168(v17, 0x1CuLL, 0LL, "IPM_ResolveMultisampledInput");
  sub_1800F975C(v23, &v20, v17);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v8 = v17[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v8 = *(_QWORD *)(v17[0] - 8);
      if ( (unsigned __int64)(v17[0] - v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v8);
  }
  v9 = a1[57];
  v22 = 0LL;
  v10 = *(_QWORD *)(v9 + 144);
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  v22 = *(_OWORD *)(v9 + 136);
  v21 = 0LL;
  v11 = a1[9];
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v11 = a1[9];
  }
  *(_QWORD *)&v21 = a1[8];
  *((_QWORD *)&v21 + 1) = v11;
  sub_18006A320((_QWORD **)v20, (__int64)&v21, (__int64)&v22);
  *a2 = 0LL;
  a2[1] = 0LL;
  v12 = a1[9];
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  *a2 = a1[8];
  a2[1] = a1[9];
  v13 = (volatile signed __int32 *)*((_QWORD *)&v21 + 1);
  if ( *((_QWORD *)&v21 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = (volatile signed __int32 *)*((_QWORD *)&v22 + 1);
  if ( *((_QWORD *)&v22 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v22 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  sub_1800F98E0(v23);
  v15 = (volatile signed __int32 *)*((_QWORD *)&v20 + 1);
  if ( *((_QWORD *)&v20 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  return a2;
}
