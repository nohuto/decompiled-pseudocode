/*
 * XREFs of sub_1800EB0A0 @ 0x1800EB0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E724 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800168B0 @ 0x1800168B0 (sub_1800168B0.c)
 *     sub_1800A3BAC @ 0x1800A3BAC (sub_1800A3BAC.c)
 *     sub_1800A4188 @ 0x1800A4188 (sub_1800A4188.c)
 *     sub_1800A6058 @ 0x1800A6058 (sub_1800A6058.c)
 *     sub_1800A630C @ 0x1800A630C (sub_1800A630C.c)
 *     sub_1800A7F30 @ 0x1800A7F30 (sub_1800A7F30.c)
 *     sub_1800A8174 @ 0x1800A8174 (sub_1800A8174.c)
 *     sub_1800A851C @ 0x1800A851C (sub_1800A851C.c)
 *     sub_1800A8550 @ 0x1800A8550 (sub_1800A8550.c)
 *     sub_1800A8BB8 @ 0x1800A8BB8 (sub_1800A8BB8.c)
 *     sub_1800A8E0C @ 0x1800A8E0C (sub_1800A8E0C.c)
 *     sub_1800BCDD0 @ 0x1800BCDD0 (sub_1800BCDD0.c)
 *     sub_1800D1F34 @ 0x1800D1F34 (sub_1800D1F34.c)
 *     sub_1800EA240 @ 0x1800EA240 (sub_1800EA240.c)
 *     sub_1800EBED8 @ 0x1800EBED8 (sub_1800EBED8.c)
 *     sub_1800F87C0 @ 0x1800F87C0 (sub_1800F87C0.c)
 *     sub_1800F899C @ 0x1800F899C (sub_1800F899C.c)
 *     sub_1800F9420 @ 0x1800F9420 (sub_1800F9420.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800EB0A0(__int64 a1, __int128 *a2, __int64 a3)
{
  __int128 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 *v8; // rax
  __int64 *v9; // rdi
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r13
  char v13; // al
  char *v14; // r15
  char *v15; // r14
  char v16; // si
  char v17; // r12
  __int64 *v18; // rax
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rbx
  __int64 *v21; // rax
  volatile signed __int32 *v22; // rbx
  __int64 *v23; // rax
  volatile signed __int32 *v24; // rbx
  __int64 v25; // rbx
  _QWORD v27[3]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 *v28; // [rsp+60h] [rbp-A8h]
  int v29; // [rsp+68h] [rbp-A0h]
  __int128 v30; // [rsp+70h] [rbp-98h] BYREF
  __int64 v31; // [rsp+80h] [rbp-88h]
  __int128 *v32; // [rsp+88h] [rbp-80h]
  _BYTE v33[16]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-68h]
  __int64 v35; // [rsp+A8h] [rbp-60h]
  _QWORD *v36[2]; // [rsp+B0h] [rbp-58h] BYREF
  size_t v37[4]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v38[16]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-18h]
  __int64 v40; // [rsp+F8h] [rbp-10h]
  int v41; // [rsp+100h] [rbp-8h] BYREF
  __int64 v42; // [rsp+108h] [rbp+0h]
  __int128 v43; // [rsp+110h] [rbp+8h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  __int64 v45; // [rsp+128h] [rbp+20h]
  int v46; // [rsp+130h] [rbp+28h] BYREF
  __int64 v47; // [rsp+138h] [rbp+30h]
  __int128 v48; // [rsp+140h] [rbp+38h]
  __int64 v49; // [rsp+150h] [rbp+48h]
  __int64 v50; // [rsp+158h] [rbp+50h]
  int v51; // [rsp+160h] [rbp+58h] BYREF
  __int64 v52; // [rsp+168h] [rbp+60h]
  __int128 v53; // [rsp+170h] [rbp+68h]
  __int64 v54; // [rsp+180h] [rbp+78h]
  __int64 v55; // [rsp+188h] [rbp+80h]
  __int64 v56; // [rsp+190h] [rbp+88h]
  __int64 *v57; // [rsp+198h] [rbp+90h] BYREF
  __int64 v58; // [rsp+1A0h] [rbp+98h] BYREF
  volatile signed __int32 *v59; // [rsp+1A8h] [rbp+A0h]
  __m128i v60; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v61[8]; // [rsp+1C8h] [rbp+C0h] BYREF
  volatile signed __int32 *v62; // [rsp+1D0h] [rbp+C8h]
  __int64 v63; // [rsp+1D8h] [rbp+D0h] BYREF
  volatile signed __int32 *v64; // [rsp+1E0h] [rbp+D8h]
  _BYTE v65[8]; // [rsp+1E8h] [rbp+E0h] BYREF
  volatile signed __int32 *v66; // [rsp+1F0h] [rbp+E8h]
  _QWORD v67[2]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int128 v68; // [rsp+208h] [rbp+100h]
  __int64 v69; // [rsp+218h] [rbp+110h] BYREF
  __int128 v70; // [rsp+228h] [rbp+120h]
  __int64 v71; // [rsp+238h] [rbp+130h] BYREF
  __int128 v72; // [rsp+248h] [rbp+140h]
  __int64 v73; // [rsp+258h] [rbp+150h] BYREF
  __int128 v74; // [rsp+268h] [rbp+160h]
  _BYTE pExceptionObject[24]; // [rsp+278h] [rbp+170h] BYREF
  __int64 *v76[2]; // [rsp+290h] [rbp+188h] BYREF

  v56 = -2LL;
  v4 = a2;
  v32 = a2;
  v5 = a1;
  v31 = a1;
  v28 = &v30;
  v30 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
  {
LABEL_33:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v7 = *(_DWORD *)(v6 + 8);
    if ( !v7 )
      goto LABEL_33;
  }
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
  v30 = *(_OWORD *)(a1 + 8);
  v37[2] = 0LL;
  v37[3] = 0LL;
  sub_18000F3F4(v37, (__int64)&qword_18025CDF8);
  v8 = sub_1800A3BAC(v4, &v58, v37, &v30);
  v9 = (__int64 *)(v5 + 56);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 56), v8);
  v10 = v59;
  if ( v59 )
  {
    if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v35 = 15LL;
  v33[0] = 0;
  v34 = 15LL;
  memmove(v33, "BackgroundUnlit", 0xFuLL);
  v33[15] = 0;
  sub_1800EBED8(*v9, v33);
  v11 = *v9 + 528;
  if ( v11 != a3 )
    sub_1800168B0(v11, *(char **)a3, *(_QWORD *)(a3 + 8));
  v12 = sub_1800D1F34(0, 3, 0LL);
  sub_1800A7F30(*v9, &qword_18025CE18);
  sub_1800A7F30(*v9, &qword_18025CE38);
  sub_1800A7F30(*v9, &qword_18025CE58);
  sub_1800A7F30(*v9, (size_t *)&qword_18025CE78);
  v29 = sub_1800A7F30(*v9, &qword_18025CE98);
  v76[0] = 0LL;
  v76[1] = 0LL;
  v68 = 0LL;
  sub_18000F3F4(v67, (__int64)&qword_18025CE18);
  v70 = 0LL;
  sub_18000F3F4(&v69, (__int64)&qword_18025CE38);
  v72 = 0LL;
  sub_18000F3F4(&v71, (__int64)&qword_18025CE58);
  v74 = 0LL;
  sub_18000F3F4(&v73, (__int64)&qword_18025CE78);
  v27[1] = v67;
  v27[2] = pExceptionObject;
  v60 = *(__m128i *)&v27[1];
  sub_1800BCDD0(v76, &v60);
  `eh vector destructor iterator'(v67, 0x20uLL, 4uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  sub_1800A630C((__int64)v36);
  v28 = (__int128 *)sub_1800A4188((__int64)v4, v36);
  v13 = sub_1800A7F30(*v9, &qword_18025CEB8);
  v14 = *(char **)a3;
  v15 = *(char **)(a3 + 8);
  if ( v14 != v15 )
  {
    v16 = v29;
    v17 = v13;
    do
    {
      sub_1800A8174(*v9, *(_DWORD *)v14);
      *(_OWORD *)&v27[1] = 0LL;
      v18 = (__int64 *)sub_1800A851C(*v9, (__int64)v61, v16);
      std::shared_ptr<__ExceptionPtr>::operator=(&v27[1], v18);
      v19 = v62;
      if ( v62 )
      {
        if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        }
      }
      v41 = 0;
      v42 = v12;
      v43 = 0LL;
      v44 = 0LL;
      v45 = 0LL;
      v20 = v27[1];
      sub_1800F9420(v27[1], &v41);
      sub_1800F87C0(v20, 0, 1, 3, 1);
      v40 = 15LL;
      v39 = 0LL;
      v38[0] = 0;
      sub_1800F899C(v20, 5LL, v38);
      v21 = sub_1800A8550(*v9, &v63, (__int64)v28, 0LL, 1);
      std::shared_ptr<__ExceptionPtr>::operator=(&v27[1], v21);
      v22 = v64;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        }
      }
      v46 = 0;
      v47 = v12;
      v48 = 0LL;
      v49 = 0LL;
      v50 = 0LL;
      sub_1800F9420(v27[1], &v46);
      sub_1800F87C0(v27[1], 0, 1, 1, 1);
      v23 = (__int64 *)sub_1800A851C(*v9, (__int64)v65, v17);
      std::shared_ptr<__ExceptionPtr>::operator=(&v27[1], v23);
      v24 = v66;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        }
      }
      v51 = 0;
      v52 = v12;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      sub_1800F9420(v27[1], &v51);
      sub_1800F87C0(v27[1], 1, 1, 1, 1);
      sub_1800A8E0C(*v9);
      if ( v27[2] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27[2] + 8LL), 0xFFFFFFFF) == 1 )
        {
          v25 = v27[2];
          (**(void (__fastcall ***)(_QWORD))v27[2])(v27[2]);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27[2] + 8LL))(v27[2]);
        }
      }
      v14 += 4;
    }
    while ( v14 != v15 );
    v5 = v31;
    v4 = v32;
  }
  sub_1800EA240(v5, v4);
  sub_1800A8BB8(*v9);
  sub_1800A6058((__int64 ***)v76, &v57, *(__int64 **)v76[0], v76[0]);
  return j_j__o_free(v76[0]);
}
