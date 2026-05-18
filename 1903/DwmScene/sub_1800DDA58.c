/*
 * XREFs of sub_1800DDA58 @ 0x1800DDA58
 * Callers:
 *     sub_1800BE0F8 @ 0x1800BE0F8 (sub_1800BE0F8.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180063430 @ 0x180063430 (sub_180063430.c)
 *     sub_18006A958 @ 0x18006A958 (sub_18006A958.c)
 *     sub_18006A9DC @ 0x18006A9DC (sub_18006A9DC.c)
 *     sub_18006AA88 @ 0x18006AA88 (sub_18006AA88.c)
 *     sub_18006CCE8 @ 0x18006CCE8 (sub_18006CCE8.c)
 *     sub_1800AE8E0 @ 0x1800AE8E0 (sub_1800AE8E0.c)
 *     sub_1800DBDEC @ 0x1800DBDEC (sub_1800DBDEC.c)
 *     sub_1800DBFD4 @ 0x1800DBFD4 (sub_1800DBFD4.c)
 *     ?do_while@details@Concurrency@@YA?AV?$task@_N@2@V?$function@$$A6A?AV?$task@_N@Concurrency@@XZ@std@@@Z @ 0x1800DE270 (-do_while@details@Concurrency@@YA-AV-$task@_N@2@V-$function@$$A6A-AV-$task@_N@Concurrency@@XZ@st.c)
 *     sub_1800F964C @ 0x1800F964C (sub_1800F964C.c)
 *     sub_1800F97D0 @ 0x1800F97D0 (sub_1800F97D0.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800DDA58(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rdi
  __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rbx
  void (__fastcall **v16)(__int64); // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rax
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  __int64 result; // rax
  volatile signed __int32 *v31; // rbx
  __int64 v32; // rbx
  volatile signed __int32 *v33; // rbx
  __int128 v34; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h]
  volatile signed __int32 *v36; // [rsp+60h] [rbp-A8h]
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h]
  __int128 v39; // [rsp+78h] [rbp-90h] BYREF
  __int128 v40; // [rsp+88h] [rbp-80h] BYREF
  __int128 v41; // [rsp+98h] [rbp-70h] BYREF
  __int128 v42; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v43; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v44; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v45; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v46[2]; // [rsp+E8h] [rbp-20h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-10h]
  __int128 v48; // [rsp+108h] [rbp+0h] BYREF
  __int128 v49; // [rsp+118h] [rbp+10h] BYREF
  __int128 v50; // [rsp+128h] [rbp+20h] BYREF
  __int128 v51; // [rsp+138h] [rbp+30h] BYREF
  __int128 v52; // [rsp+148h] [rbp+40h] BYREF
  __int128 v53; // [rsp+158h] [rbp+50h] BYREF
  __int64 v54; // [rsp+168h] [rbp+60h]
  _BYTE v55[8]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v56; // [rsp+178h] [rbp+70h]
  _BYTE v57[8]; // [rsp+180h] [rbp+78h] BYREF
  __int64 v58; // [rsp+188h] [rbp+80h]
  __int64 v59; // [rsp+190h] [rbp+88h] BYREF
  volatile signed __int32 *v60; // [rsp+198h] [rbp+90h]
  __int128 v61; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v62; // [rsp+1B8h] [rbp+B0h] BYREF
  volatile signed __int32 *v63; // [rsp+1C0h] [rbp+B8h]
  __int128 v64; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD v65[2]; // [rsp+1D8h] [rbp+D0h] BYREF

  v54 = -2LL;
  v61 = 0uLL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 376LL))(*a2, v55);
  v61 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v61 = *(_OWORD *)v6;
        break;
      }
    }
  }
  v9 = v56;
  if ( v56 && _InterlockedExchangeAdd((volatile signed __int32 *)(v56 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v7, v6);
  sub_180063430(a1[36] + 16LL);
  v35 = 0LL;
  v36 = 0LL;
  v11 = (__int64 *)sub_18006CCE8(v61, v10);
  v12 = (volatile signed __int32 *)v11[1];
  if ( v12 )
  {
    _InterlockedIncrement(v12 + 2);
    v12 = (volatile signed __int32 *)v11[1];
  }
  v35 = *v11;
  v36 = v12;
  v13 = a1[34];
  v41 = 0LL;
  if ( *((_QWORD *)&v61 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v61 + 1) + 8LL));
  v41 = v61;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v13 + 88LL))(v13, &v41);
  v34 = 0LL;
  if ( a1[8] )
  {
    v14 = (__int64 *)Concurrency::details::do_while(a1, v57, a2, &v61);
    std::shared_ptr<__ExceptionPtr>::operator=(&v34, v14);
    v15 = v58;
    if ( v58 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v58 + 8), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(__int64))v15)(v15);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
        {
          v16 = *(void (__fastcall ***)(__int64))v15;
          v17 = v15;
LABEL_25:
          v16[1](v17);
        }
      }
    }
  }
  else
  {
    v18 = a1[57];
    v19 = *(_QWORD *)(v18 + 144);
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      v19 = *(_QWORD *)(v18 + 144);
    }
    v37 = *(_QWORD *)(v18 + 136);
    v38 = v19;
    std::shared_ptr<__ExceptionPtr>::operator=(&v34, &v37);
    if ( v38 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 8), 0xFFFFFFFF) == 1 )
      {
        v20 = v38;
        (**(void (__fastcall ***)(__int64))v38)(v38);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 12), 0xFFFFFFFF) == 1 )
        {
          v17 = v38;
          v16 = *(void (__fastcall ***)(__int64))v38;
          goto LABEL_25;
        }
      }
    }
  }
  sub_1800AE8E0(a1[34], &v62, (__int64 *)&v61);
  v21 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 184LL))(*a2);
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 200LL))(*a2, &v64);
  v39 = 0LL;
  v22 = v21[1];
  if ( v22 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 12));
    v22 = v21[1];
  }
  *(_QWORD *)&v39 = *v21;
  *((_QWORD *)&v39 + 1) = v22;
  sub_18006A9DC(v35, (__int64 *)&v39);
  v42 = 0LL;
  if ( *((_QWORD *)&v64 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v64 + 1) + 12LL));
  v42 = v64;
  sub_18006A958(v35, (__int64 *)&v42);
  v40 = 0LL;
  v23 = v21[1];
  if ( v23 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 12));
    v23 = v21[1];
  }
  *(_QWORD *)&v40 = *v21;
  *((_QWORD *)&v40 + 1) = v23;
  sub_18006A9DC(v62, (__int64 *)&v40);
  v43 = 0LL;
  if ( *((_QWORD *)&v64 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v64 + 1) + 12LL));
  v43 = v64;
  sub_18006A958(v62, (__int64 *)&v43);
  v24 = *((_QWORD *)&v64 + 1);
  if ( *((_QWORD *)&v64 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v64 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v61 + 104LL))(v61, &v62);
  v65[0] = 0LL;
  v65[1] = 0LL;
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v46[0]) = 0;
  sub_18000E118(v46, 0x10uLL, 0LL, "IPM_ProcessScene");
  sub_1800F964C(v65, &v62, v46);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v25 = v46[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v25 = *(_QWORD *)(v46[0] - 8);
      if ( (unsigned __int64)(v46[0] - v25 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v25, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v25);
  }
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v46[0]) = 0;
  if ( a3 )
  {
    v44 = 0LL;
    if ( *((_QWORD *)&v34 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL));
    v44 = v34;
    v26 = sub_1800DBFD4((__int64)a1, &v59, (__int64 *)&v61, (__int64)a2, &v44);
    std::shared_ptr<__ExceptionPtr>::operator=(&v34, v26);
    v27 = v60;
    if ( v60 )
    {
      if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
      }
    }
  }
  v45 = 0LL;
  if ( *((_QWORD *)&v34 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL));
  v45 = v34;
  sub_1800DBDEC((__int64)a1, (__int64)a2, (__int64)&v45);
  sub_1800F97D0(v65);
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v61 + 112LL))(v61, &v62);
  v49 = 0LL;
  v48 = 0LL;
  sub_18006AA88(v35, (__int64)&v48, (__int64)&v49);
  v28 = (volatile signed __int32 *)*((_QWORD *)&v48 + 1);
  if ( *((_QWORD *)&v48 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
      if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
    }
  }
  v29 = (volatile signed __int32 *)*((_QWORD *)&v49 + 1);
  if ( *((_QWORD *)&v49 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
      if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
    }
  }
  v50 = 0LL;
  sub_18006A9DC(v35, (__int64 *)&v50);
  v51 = 0LL;
  sub_18006A958(v35, (__int64 *)&v51);
  v52 = 0LL;
  sub_18006A9DC(v62, (__int64 *)&v52);
  v53 = 0LL;
  result = sub_18006A958(v62, (__int64 *)&v53);
  v31 = v63;
  if ( v63 )
  {
    result = (unsigned int)_InterlockedDecrement(v63 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
      result = (unsigned int)_InterlockedDecrement(v31 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
    }
  }
  if ( *((_QWORD *)&v34 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v32 = *((_QWORD *)&v34 + 1);
      (***((void (__fastcall ****)(_QWORD))&v34 + 1))(*((_QWORD *)&v34 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v34 + 1) + 8LL))(*((_QWORD *)&v34 + 1));
    }
  }
  if ( v12 )
  {
    result = (unsigned int)_InterlockedDecrement(v12 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  v33 = (volatile signed __int32 *)*((_QWORD *)&v61 + 1);
  if ( *((_QWORD *)&v61 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v61 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
      result = (unsigned int)_InterlockedDecrement(v33 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
    }
  }
  return result;
}
