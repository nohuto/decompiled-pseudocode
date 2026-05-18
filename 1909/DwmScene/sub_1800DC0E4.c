/*
 * XREFs of sub_1800DC0E4 @ 0x1800DC0E4
 * Callers:
 *     sub_1800DDB68 @ 0x1800DDB68 (sub_1800DDB68.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18006CE94 @ 0x18006CE94 (sub_18006CE94.c)
 *     sub_180078228 @ 0x180078228 (sub_180078228.c)
 *     sub_1800A4114 @ 0x1800A4114 (sub_1800A4114.c)
 *     sub_1800A41D0 @ 0x1800A41D0 (sub_1800A41D0.c)
 *     sub_1800DBF60 @ 0x1800DBF60 (sub_1800DBF60.c)
 *     sub_1800F5930 @ 0x1800F5930 (sub_1800F5930.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_1800DC0E4(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int16 v11; // r12
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 *v20; // rax
  volatile signed __int32 *v21; // rbx
  __int128 v23; // [rsp+30h] [rbp-81h] BYREF
  __int128 v24; // [rsp+40h] [rbp-71h] BYREF
  _QWORD *v25; // [rsp+50h] [rbp-61h]
  __int64 v26[2]; // [rsp+60h] [rbp-51h] BYREF
  __m128i si128; // [rsp+70h] [rbp-41h]
  __int64 v28; // [rsp+80h] [rbp-31h]
  _BYTE v29[8]; // [rsp+88h] [rbp-29h] BYREF
  volatile signed __int32 *v30; // [rsp+90h] [rbp-21h]
  __int64 v31; // [rsp+98h] [rbp-19h] BYREF
  volatile signed __int32 *v32; // [rsp+A0h] [rbp-11h]
  __int64 v33; // [rsp+A8h] [rbp-9h] BYREF
  volatile signed __int32 *v34; // [rsp+B0h] [rbp-1h]

  v28 = -2LL;
  v25 = a5;
  if ( byte_18026BB80 )
  {
    v9 = sub_18006CE94(*a3);
    v10 = sub_180078228(v9);
    si128 = _mm_load_si128(xmmword_180145F90);
    LOBYTE(v26[0]) = 0;
    sub_18000E168(v26, 0x17uLL, 0LL, "Global/PlanarReflection");
    v11 = sub_1800A4114(v10, (__int64)v26);
    if ( si128.m128i_i64[1] >= 0x10uLL )
    {
      v12 = v26[0];
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v12 = *(_QWORD *)(v26[0] - 8);
        if ( (unsigned __int64)(v26[0] - v12 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v12, si128.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v12);
    }
    v13 = sub_1800A41D0(v10, &v31);
    v14 = (__int64 *)sub_1800F5930(*v13, v29, v11);
    std::shared_ptr<__ExceptionPtr>::operator=(a5, v14);
    v15 = v30;
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v16 = v32;
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
  }
  v17 = *(_QWORD *)(a1 + 272);
  v23 = 0LL;
  v18 = a3[1];
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v18 = a3[1];
  }
  *(_QWORD *)&v23 = *a3;
  *((_QWORD *)&v23 + 1) = v18;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v17 + 88LL))(v17, &v23);
  v24 = 0LL;
  v19 = a5[1];
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v19 = a5[1];
  }
  *(_QWORD *)&v24 = *a5;
  *((_QWORD *)&v24 + 1) = v19;
  v20 = sub_1800DBF60(a1, &v33, *a3, a4, &v24);
  std::shared_ptr<__ExceptionPtr>::operator=(a5, v20);
  v21 = v34;
  if ( v34 )
  {
    if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *a5;
  a2[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  return a2;
}
