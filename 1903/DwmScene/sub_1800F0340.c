/*
 * XREFs of sub_1800F0340 @ 0x1800F0340
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E724 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800168B0 @ 0x1800168B0 (sub_1800168B0.c)
 *     sub_180091350 @ 0x180091350 (sub_180091350.c)
 *     sub_180091930 @ 0x180091930 (sub_180091930.c)
 *     sub_1800A3AA0 @ 0x1800A3AA0 (sub_1800A3AA0.c)
 *     sub_1800A3BAC @ 0x1800A3BAC (sub_1800A3BAC.c)
 *     sub_1800A8174 @ 0x1800A8174 (sub_1800A8174.c)
 *     sub_1800A8550 @ 0x1800A8550 (sub_1800A8550.c)
 *     sub_1800A8BB8 @ 0x1800A8BB8 (sub_1800A8BB8.c)
 *     sub_1800A8E0C @ 0x1800A8E0C (sub_1800A8E0C.c)
 *     sub_1800A9AD4 @ 0x1800A9AD4 (sub_1800A9AD4.c)
 *     sub_1800D1BE4 @ 0x1800D1BE4 (sub_1800D1BE4.c)
 *     sub_1800D1F34 @ 0x1800D1F34 (sub_1800D1F34.c)
 *     sub_1800D1F54 @ 0x1800D1F54 (sub_1800D1F54.c)
 *     sub_1800EBED8 @ 0x1800EBED8 (sub_1800EBED8.c)
 *     sub_1800F2344 @ 0x1800F2344 (sub_1800F2344.c)
 *     sub_1800F2AC4 @ 0x1800F2AC4 (sub_1800F2AC4.c)
 *     sub_1800F87C0 @ 0x1800F87C0 (sub_1800F87C0.c)
 *     sub_1800F8BC4 @ 0x1800F8BC4 (sub_1800F8BC4.c)
 *     sub_1800F9420 @ 0x1800F9420 (sub_1800F9420.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800F0340(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 *v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // r15
  char *v14; // r14
  char *v15; // rsi
  __int64 *v16; // rax
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rbx
  volatile signed __int32 *v19; // rbx
  __int64 result; // rax
  __int64 v21; // rbx
  __int128 v22; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25[4]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v26[16]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  size_t v29[4]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v30[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-20h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  __int64 v33[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v34[4]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v35[4]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v36[4]; // [rsp+158h] [rbp+50h] BYREF
  int v37; // [rsp+178h] [rbp+70h] BYREF
  __int64 v38; // [rsp+180h] [rbp+78h]
  __int128 v39; // [rsp+188h] [rbp+80h]
  __int64 v40; // [rsp+198h] [rbp+90h]
  __int64 v41; // [rsp+1A0h] [rbp+98h]
  __int64 v42; // [rsp+1A8h] [rbp+A0h]
  __int128 *v43; // [rsp+1B0h] [rbp+A8h]
  __int64 v44; // [rsp+1B8h] [rbp+B0h] BYREF
  volatile signed __int32 *v45; // [rsp+1C0h] [rbp+B8h]
  __int64 v46; // [rsp+1C8h] [rbp+C0h] BYREF
  volatile signed __int32 *v47; // [rsp+1D0h] [rbp+C8h]
  _BYTE pExceptionObject[32]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v49[8]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v50[8]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v51[8]; // [rsp+278h] [rbp+170h] BYREF
  __int64 v52[8]; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int128 v53; // [rsp+2F8h] [rbp+1F0h] BYREF

  v42 = -2LL;
  v43 = &v23;
  v23 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
  {
LABEL_30:
    std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v7 = *(_DWORD *)(v6 + 8);
    if ( !v7 )
      goto LABEL_30;
  }
  while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) );
  v23 = *(_OWORD *)(a1 + 8);
  v29[2] = 0LL;
  v29[3] = 0LL;
  sub_18000F3F4(v29, (__int64)&qword_18025D660);
  v8 = sub_1800A3BAC(a2, &v44, v29, &v23);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 56), v8);
  v9 = v45;
  if ( v45 )
  {
    if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v25[3] = 15LL;
  LOBYTE(v25[0]) = 0;
  v25[2] = 6LL;
  memmove(v25, "Symbol", 6uLL);
  BYTE6(v25[0]) = 0;
  sub_1800EBED8(*(_QWORD *)(a1 + 56), v25);
  v10 = *(_QWORD *)(a1 + 56) + 528LL;
  if ( v10 != a3 )
    sub_1800168B0(v10, *(char **)a3, *(_QWORD *)(a3 + 8));
  v11 = sub_1800D1BE4(4, 4, 0LL);
  v12 = sub_1800D1F54(0, 4, 0LL) | v11;
  v13 = v12 | sub_1800D1F34(0, 3, 0LL);
  v22 = 0LL;
  v14 = *(char **)a3;
  v15 = *(char **)(a3 + 8);
  while ( v14 != v15 )
  {
    sub_1800A8174(*(_QWORD *)(a1 + 56), *(_DWORD *)v14);
    v16 = sub_1800A8550(*(_QWORD *)(a1 + 56), &v46, 0LL, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v22, v16);
    v17 = v47;
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
    v32 = 15LL;
    v31 = 0LL;
    v30[0] = 0;
    v28 = 15LL;
    v26[0] = 0;
    v27 = 6LL;
    memmove(v26, "Symbol", 6uLL);
    v26[6] = 0;
    v18 = v22;
    sub_1800F8BC4(v22, v26, 0LL, v30);
    sub_1800F87C0(v18, 8, 2, 0, 1);
    v37 = 0;
    v38 = v13;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    sub_1800F9420(v18, &v37);
    sub_1800A8E0C(*(_QWORD *)(a1 + 56));
    v14 += 4;
  }
  v53 = 0uLL;
  sub_1800A3AA0(a2, &v53, 4u);
  v33[2] = 0LL;
  v33[3] = 0LL;
  sub_18000F3F4(v33, (__int64)&qword_18025D680);
  sub_180091350((__int64)v49, v33, 7);
  sub_1800F2344(v53, v49, 0LL);
  sub_180091930(v49);
  v34[2] = 0LL;
  v34[3] = 0LL;
  sub_18000F3F4(v34, (__int64)&qword_18025D6A0);
  sub_180091350((__int64)v50, v34, 5);
  sub_1800F2344(v53, v50, 0LL);
  sub_180091930(v50);
  v35[2] = 0LL;
  v35[3] = 0LL;
  sub_18000F3F4(v35, (__int64)&qword_18025D6C0);
  sub_180091350((__int64)v51, v35, 2);
  sub_1800F2344(v53, v51, 0LL);
  sub_180091930(v51);
  v36[2] = 0LL;
  v36[3] = 0LL;
  sub_18000F3F4(v36, (__int64)&qword_18025D6E0);
  sub_180091350((__int64)v52, v36, 2);
  sub_1800F2344(v53, v52, 0LL);
  sub_180091930(v52);
  sub_1800F2AC4(v53);
  v24 = 0LL;
  if ( *((_QWORD *)&v53 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL));
  v24 = v53;
  sub_1800A9AD4(*(_QWORD *)(a1 + 56), (__int64 *)&v24);
  v19 = (volatile signed __int32 *)*((_QWORD *)&v53 + 1);
  if ( *((_QWORD *)&v53 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  result = sub_1800A8BB8(*(_QWORD *)(a1 + 56));
  if ( *((_QWORD *)&v22 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v22 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v21 = *((_QWORD *)&v22 + 1);
      (***((void (__fastcall ****)(_QWORD))&v22 + 1))(*((_QWORD *)&v22 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v22 + 1) + 8LL))(*((_QWORD *)&v22 + 1));
    }
  }
  return result;
}
