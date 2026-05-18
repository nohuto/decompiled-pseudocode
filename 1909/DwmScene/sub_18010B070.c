/*
 * XREFs of sub_18010B070 @ 0x18010B070
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F6AC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_1800171D4 @ 0x1800171D4 (sub_1800171D4.c)
 *     sub_18002C0E4 @ 0x18002C0E4 (sub_18002C0E4.c)
 *     sub_18006CDF8 @ 0x18006CDF8 (sub_18006CDF8.c)
 *     sub_180073A84 @ 0x180073A84 (sub_180073A84.c)
 *     sub_180074950 @ 0x180074950 (sub_180074950.c)
 *     sub_18009AB00 @ 0x18009AB00 (sub_18009AB00.c)
 *     sub_1800AE9F0 @ 0x1800AE9F0 (sub_1800AE9F0.c)
 *     sub_1800F975C @ 0x1800F975C (sub_1800F975C.c)
 *     sub_1800F98E0 @ 0x1800F98E0 (sub_1800F98E0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall sub_18010B070(__int64 a1, __int64 *a2, _QWORD *a3, __int64 *a4, unsigned __int64 *a5)
{
  const void **v9; // rax
  const void *v10; // rdx
  _QWORD *v11; // rax
  char *v12; // rcx
  __int64 v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  signed __int32 v17; // eax
  __int64 v18; // rsi
  __int64 i; // rdi
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  __int64 v22; // rcx
  __int128 v23; // [rsp+20h] [rbp-B1h] BYREF
  __int64 v24[3]; // [rsp+30h] [rbp-A1h] BYREF
  char *Src; // [rsp+48h] [rbp-89h] BYREF
  __m128i si128; // [rsp+58h] [rbp-79h]
  __int64 v27; // [rsp+68h] [rbp-69h]
  char v28[8]; // [rsp+70h] [rbp-61h] BYREF
  __int64 v29; // [rsp+78h] [rbp-59h]
  _BYTE pExceptionObject[24]; // [rsp+80h] [rbp-51h] BYREF
  __int64 v31; // [rsp+98h] [rbp-39h] BYREF
  volatile signed __int32 *v32; // [rsp+A0h] [rbp-31h]
  __int64 v33; // [rsp+A8h] [rbp-29h] BYREF
  volatile signed __int32 *v34; // [rsp+B0h] [rbp-21h]
  __int64 v35[2]; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v36; // [rsp+C8h] [rbp-9h] BYREF
  __int128 v37; // [rsp+D8h] [rbp+7h]

  v27 = -2LL;
  v9 = sub_18002C0E4((const void **)&Src, (_QWORD *)(a1 + 24), " ");
  v10 = a5;
  if ( a5[3] >= 0x10 )
    v10 = (const void *)*a5;
  v11 = std::string::append(v9, v10, a5[2]);
  v37 = 0LL;
  v36 = *(_OWORD *)v11;
  v37 = *((_OWORD *)v11 + 1);
  v11[2] = 0LL;
  v11[3] = 15LL;
  *(_BYTE *)v11 = 0;
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v12 = Src;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v12 = (char *)*((_QWORD *)Src - 1);
      if ( (unsigned __int64)(Src - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v12);
  }
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(Src) = 0;
  v31 = 0LL;
  v32 = 0LL;
  sub_1800AE9F0(a1, &v31, a2);
  sub_18006CDF8(*a2, v13);
  v35[0] = 0LL;
  v35[1] = 0LL;
  sub_1800F975C(v35, &v31, (__int64)&v36);
  memset(v24, 0, sizeof(v24));
  v14 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a3 + 200LL))(*a3, v28);
  sub_180073A84(v24, v14, (__int64)&v36);
  v15 = v29;
  if ( v29 && _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 192LL))(a1, a2, a3);
  v33 = 0LL;
  v34 = 0LL;
  v23 = 0LL;
  v16 = *(_QWORD *)(a1 + 16);
  if ( !v16 )
  {
LABEL_33:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v17 = *(_DWORD *)(v16 + 8);
    if ( !v17 )
      goto LABEL_33;
  }
  while ( v17 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17) );
  v23 = *(_OWORD *)(a1 + 8);
  sub_1800171D4(&v33, (__int64 *)&v23);
  v18 = *(_QWORD *)(a1 + 112);
  for ( i = *(_QWORD *)(a1 + 104); i != v18; i += 48LL )
    sub_18009AB00(*a4, &v31, 0LL, &v33);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1);
  v20 = v34;
  if ( v34 )
  {
    if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  sub_180074950(v24);
  sub_1800F98E0((__int64)v35);
  v21 = v32;
  if ( v32 )
  {
    if ( !_InterlockedDecrement(v32 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( !_InterlockedDecrement(v21 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  if ( *((_QWORD *)&v37 + 1) >= 0x10uLL )
  {
    v22 = v36;
    if ( (unsigned __int64)(*((_QWORD *)&v37 + 1) + 1LL) >= 0x1000 )
    {
      v22 = *(_QWORD *)(v36 - 8);
      if ( (unsigned __int64)(v36 - v22 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v22, *((_QWORD *)&v37 + 1) + 40LL);
        __debugbreak();
      }
    }
    j_j__o_free(v22);
  }
}
