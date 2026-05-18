/*
 * XREFs of sub_1800C1450 @ 0x1800C1450
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001115C @ 0x18001115C (sub_18001115C.c)
 *     sub_180012480 @ 0x180012480 (sub_180012480.c)
 *     sub_180085BE8 @ 0x180085BE8 (sub_180085BE8.c)
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     sub_180089934 @ 0x180089934 (sub_180089934.c)
 *     sub_18008B3B0 @ 0x18008B3B0 (sub_18008B3B0.c)
 *     sub_180090AF0 @ 0x180090AF0 (sub_180090AF0.c)
 *     sub_180090B14 @ 0x180090B14 (sub_180090B14.c)
 *     sub_180090C88 @ 0x180090C88 (sub_180090C88.c)
 *     sub_180090E8C @ 0x180090E8C (sub_180090E8C.c)
 *     sub_18009BA9C @ 0x18009BA9C (sub_18009BA9C.c)
 *     sub_1800A4B48 @ 0x1800A4B48 (sub_1800A4B48.c)
 *     sub_1800A828C @ 0x1800A828C (sub_1800A828C.c)
 *     sub_1800BB1FC @ 0x1800BB1FC (sub_1800BB1FC.c)
 *     sub_1800FBF54 @ 0x1800FBF54 (sub_1800FBF54.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall sub_1800C1450(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rcx
  __m128i v7; // xmm6
  unsigned __int64 v8; // xmm6_8
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  __int64 *v13; // rax
  __int64 *v14; // rdi
  volatile signed __int32 *v15; // rbx
  __int64 v16; // r8
  __int64 *v17; // rax
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rcx
  __m128i v20; // xmm6
  unsigned __int64 v21; // xmm6_8
  __int64 v22; // rbx
  __int64 v23; // rcx
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  __int64 v32; // [rsp+30h] [rbp-D8h] BYREF
  volatile signed __int32 *v33; // [rsp+38h] [rbp-D0h]
  __int64 v34; // [rsp+40h] [rbp-C8h] BYREF
  volatile signed __int32 *v35; // [rsp+48h] [rbp-C0h]
  __m128i v36; // [rsp+58h] [rbp-B0h] BYREF
  __m128i v37; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v38; // [rsp+78h] [rbp-90h] BYREF
  __int128 v39; // [rsp+88h] [rbp-80h] BYREF
  __int128 v40; // [rsp+98h] [rbp-70h] BYREF
  __int128 v41; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-50h] BYREF
  char v43; // [rsp+C2h] [rbp-46h]
  __int64 v44; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v45; // [rsp+D0h] [rbp-38h]
  __int64 v46[2]; // [rsp+D8h] [rbp-30h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-20h]
  size_t v48[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v49[5]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v50; // [rsp+140h] [rbp+38h] BYREF
  volatile signed __int32 *v51; // [rsp+148h] [rbp+40h]
  char v52[8]; // [rsp+150h] [rbp+48h] BYREF
  volatile signed __int32 *v53; // [rsp+158h] [rbp+50h]
  __int128 v54; // [rsp+168h] [rbp+60h] BYREF
  __int128 v55; // [rsp+178h] [rbp+70h] BYREF
  __int64 v56; // [rsp+188h] [rbp+80h] BYREF
  volatile signed __int32 *v57; // [rsp+190h] [rbp+88h]
  __m128i v58; // [rsp+198h] [rbp+90h] BYREF
  __m128i v59; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 *v60; // [rsp+1B8h] [rbp+B0h] BYREF
  volatile signed __int32 *v61; // [rsp+1C0h] [rbp+B8h]

  v49[4] = -2LL;
  v60 = 0LL;
  v61 = 0LL;
  v48[2] = 0LL;
  v48[3] = 0LL;
  sub_18000F444(v48, (__int64)&qword_18025E5D0);
  sub_1800A4B48(a2, &v60, v48);
  v55 = 0uLL;
  sub_1800A828C(v60, (__int64 *)&v55);
  sub_180090B14(v55, (__int64)&qword_18025D5D8, 1);
  sub_180090AF0(v55);
  v54 = 0uLL;
  v49[2] = 0LL;
  v49[3] = 0LL;
  sub_18001115C(v49, (__int64)&unk_180259788);
  sub_18008B3B0(*a3, (__int64)&v54, v49);
  v59 = 0uLL;
  sub_1800FBF54(&v59, a1, 0LL);
  v56 = 0LL;
  v57 = 0LL;
  v39 = 0LL;
  if ( *((_QWORD *)&v54 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v54 + 1) + 8LL));
  v39 = v54;
  sub_180089934(*a3, (__int64)&v56, qword_18026B080, &v39);
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v46[0]) = 0;
  sub_18000E168(v46, 0x10uLL, 0LL, "PlanarReflection");
  sub_180085BE8(v56, v46);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v6 = v46[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v6 = *(_QWORD *)(v46[0] - 8);
      if ( (unsigned __int64)(v46[0] - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  v34 = 0LL;
  v35 = 0LL;
  sub_180012480(v56, &v34);
  if ( v59.m128i_i64[1] )
    _InterlockedIncrement((volatile signed __int32 *)(v59.m128i_i64[1] + 8));
  v7 = v59;
  v36 = v59;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v34 + 88), &v36);
  v8 = _mm_srli_si128(v7, 8).m128i_u64[0];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
    {
      v9 = v36.m128i_i64[1];
      (**(void (__fastcall ***)(__int64))v36.m128i_i64[1])(v36.m128i_i64[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36.m128i_i64[1] + 8LL))(v36.m128i_i64[1]);
    }
  }
  v40 = 0LL;
  if ( *((_QWORD *)&v55 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v55 + 1) + 8LL));
  v40 = v55;
  sub_18009BA9C(v34, &v40);
  v10 = v56;
  sub_180087524(v56);
  *(_QWORD *)(v10 + 448) &= ~2uLL;
  if ( (*(_BYTE *)(a1 + 560) & 1) != 0 )
  {
    v12 = (_QWORD *)sub_1800BB1FC(*a3, v11);
    v13 = sub_1800A828C(v60, &v50);
    v14 = v12 + 27;
    std::shared_ptr<__ExceptionPtr>::operator=(v12 + 27, v13);
    v15 = v51;
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    sub_180090AF0(*v14);
    sub_180090E8C(*v14, 3);
    sub_180090C88((_QWORD *)*v14, 1, 1, 1);
    v58 = 0uLL;
    LOBYTE(v16) = 1;
    sub_1800FBF54(&v58, a1, v16);
    v41 = 0LL;
    if ( *((_QWORD *)&v54 + 1) )
      _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)&v54 + 1) + 8LL), 1u);
    v41 = v54;
    v17 = (__int64 *)sub_180089934(*a3, (__int64)v52, qword_18026B088, &v41);
    std::shared_ptr<__ExceptionPtr>::operator=(v12 + 25, v17);
    v18 = v53;
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
    v45 = 15LL;
    LOBYTE(v42) = 0;
    v44 = 10LL;
    memmove(&v42, "GroundBack", 0xAuLL);
    v43 = 0;
    sub_180085BE8(v12[25], &v42);
    if ( v45 >= 0x10 )
    {
      v19 = v42;
      if ( v45 + 1 >= 0x1000 )
      {
        v19 = *(_QWORD *)(v42 - 8);
        if ( (unsigned __int64)(v42 - v19 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v19, v45 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v19);
    }
    v32 = 0LL;
    v33 = 0LL;
    sub_180012480(v12[25], &v32);
    if ( v58.m128i_i64[1] )
      _InterlockedIncrement((volatile signed __int32 *)(v58.m128i_i64[1] + 8));
    v20 = v58;
    v37 = v58;
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v32 + 88), &v37);
    v21 = _mm_srli_si128(v20, 8).m128i_u64[0];
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 8), 0xFFFFFFFF) == 1 )
      {
        v22 = v37.m128i_i64[1];
        (**(void (__fastcall ***)(__int64))v37.m128i_i64[1])(v37.m128i_i64[1]);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37.m128i_i64[1] + 8LL))(v37.m128i_i64[1]);
      }
    }
    v38 = 0LL;
    v23 = v12[28];
    if ( v23 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
      v23 = v12[28];
    }
    *(_QWORD *)&v38 = *v14;
    *((_QWORD *)&v38 + 1) = v23;
    sub_18009BA9C(v32, &v38);
    if ( v33 )
    {
      if ( !_InterlockedDecrement(v33 + 2) )
      {
        v24 = v33;
        (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
        if ( !_InterlockedDecrement(v24 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
      }
    }
    v25 = (volatile signed __int32 *)v58.m128i_i64[1];
    if ( v58.m128i_i64[1] )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v58.m128i_i64[1] + 8)) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
        if ( !_InterlockedDecrement(v25 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      }
    }
  }
  if ( v35 )
  {
    if ( !_InterlockedDecrement(v35 + 2) )
    {
      v26 = v35;
      (**(void (__fastcall ***)(volatile signed __int32 *))v35)(v35);
      if ( !_InterlockedDecrement(v26 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
    }
  }
  v27 = v57;
  if ( v57 )
  {
    if ( !_InterlockedDecrement(v57 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      if ( !_InterlockedDecrement(v27 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  v28 = (volatile signed __int32 *)v59.m128i_i64[1];
  if ( v59.m128i_i64[1] )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v59.m128i_i64[1] + 8)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
      if ( !_InterlockedDecrement(v28 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
    }
  }
  v29 = (volatile signed __int32 *)*((_QWORD *)&v54 + 1);
  if ( *((_QWORD *)&v54 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v54 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
      if ( !_InterlockedDecrement(v29 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
    }
  }
  v30 = (volatile signed __int32 *)*((_QWORD *)&v55 + 1);
  if ( *((_QWORD *)&v55 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v55 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
      if ( !_InterlockedDecrement(v30 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
    }
  }
  v31 = v61;
  if ( v61 && !_InterlockedDecrement(v61 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
    if ( !_InterlockedDecrement(v31 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
  }
}
