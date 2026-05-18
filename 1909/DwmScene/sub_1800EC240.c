/*
 * XREFs of sub_1800EC240 @ 0x1800EC240
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180016920 @ 0x180016920 (sub_180016920.c)
 *     sub_180091460 @ 0x180091460 (sub_180091460.c)
 *     sub_1800A3BB0 @ 0x1800A3BB0 (sub_1800A3BB0.c)
 *     sub_1800A3CBC @ 0x1800A3CBC (sub_1800A3CBC.c)
 *     sub_1800A8284 @ 0x1800A8284 (sub_1800A8284.c)
 *     sub_1800A8660 @ 0x1800A8660 (sub_1800A8660.c)
 *     sub_1800A8CC8 @ 0x1800A8CC8 (sub_1800A8CC8.c)
 *     sub_1800A8F1C @ 0x1800A8F1C (sub_1800A8F1C.c)
 *     sub_1800A9BE4 @ 0x1800A9BE4 (sub_1800A9BE4.c)
 *     sub_1800D1CF4 @ 0x1800D1CF4 (sub_1800D1CF4.c)
 *     sub_1800D2044 @ 0x1800D2044 (sub_1800D2044.c)
 *     sub_1800D2084 @ 0x1800D2084 (sub_1800D2084.c)
 *     sub_1800EBFE8 @ 0x1800EBFE8 (sub_1800EBFE8.c)
 *     sub_1800F239C @ 0x1800F239C (sub_1800F239C.c)
 *     sub_1800F2BD4 @ 0x1800F2BD4 (sub_1800F2BD4.c)
 *     sub_1800F88D0 @ 0x1800F88D0 (sub_1800F88D0.c)
 *     sub_1800F8CD4 @ 0x1800F8CD4 (sub_1800F8CD4.c)
 *     sub_1800F9530 @ 0x1800F9530 (sub_1800F9530.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800EC240(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 *v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // r12
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
  int v35; // [rsp+138h] [rbp+30h] BYREF
  __int64 v36; // [rsp+140h] [rbp+38h]
  __int128 v37; // [rsp+148h] [rbp+40h]
  __int64 v38; // [rsp+158h] [rbp+50h]
  __int64 v39; // [rsp+160h] [rbp+58h]
  __int64 v40; // [rsp+168h] [rbp+60h]
  __int128 *v41; // [rsp+170h] [rbp+68h]
  __int64 v42; // [rsp+178h] [rbp+70h] BYREF
  volatile signed __int32 *v43; // [rsp+180h] [rbp+78h]
  __int64 v44; // [rsp+188h] [rbp+80h] BYREF
  volatile signed __int32 *v45; // [rsp+190h] [rbp+88h]
  _BYTE pExceptionObject[32]; // [rsp+198h] [rbp+90h] BYREF
  __int128 v47; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v48[64]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v49[64]; // [rsp+208h] [rbp+100h] BYREF

  v40 = -2LL;
  v41 = &v23;
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
  sub_18000F444(v29, (__int64)&qword_18025E180);
  v8 = sub_1800A3CBC(a2, &v42, v29, &v23);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 56), v8);
  v9 = v43;
  if ( v43 )
  {
    if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v25[3] = 15LL;
  LOBYTE(v25[0]) = 0;
  v25[2] = 4LL;
  memmove(v25, "Font", 4uLL);
  BYTE4(v25[0]) = 0;
  sub_1800EBFE8(*(_QWORD *)(a1 + 56), v25);
  v10 = *(_QWORD *)(a1 + 56) + 528LL;
  if ( v10 != a3 )
    sub_180016920(v10, *(char **)a3, *(_QWORD *)(a3 + 8));
  v11 = sub_1800D1CF4(4, 4, 0LL);
  v12 = sub_1800D2044(0, 3, 0LL) | v11;
  v13 = v12 | sub_1800D2084(0, 2, 0LL);
  v22 = 0LL;
  v14 = *(char **)a3;
  v15 = *(char **)(a3 + 8);
  while ( v14 != v15 )
  {
    sub_1800A8284(*(_QWORD *)(a1 + 56), *(_DWORD *)v14);
    v16 = sub_1800A8660(*(_QWORD *)(a1 + 56), &v44, 0LL, 0LL, 1);
    std::shared_ptr<__ExceptionPtr>::operator=(&v22, v16);
    v17 = v45;
    if ( v45 )
    {
      if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
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
    v27 = 4LL;
    memmove(v26, "Font", 4uLL);
    v26[4] = 0;
    v18 = v22;
    sub_1800F8CD4(v22, v26, 0LL, v30);
    sub_1800F88D0(v18, 8, 2, 0, 1);
    v35 = 0;
    v36 = v13;
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    sub_1800F9530(v18, &v35);
    sub_1800A8F1C(*(_QWORD *)(a1 + 56));
    v14 += 4;
  }
  v47 = 0uLL;
  sub_1800A3BB0(a2, &v47, 2u);
  v33[2] = 0LL;
  v33[3] = 0LL;
  sub_18000F444(v33, (__int64)&qword_18025E1A0);
  sub_180091460((__int64)v48, v33, 5);
  v34[2] = 0LL;
  v34[3] = 0LL;
  sub_18000F444(v34, (__int64)&qword_18025E1C0);
  sub_180091460((__int64)v49, v34, 8);
  sub_1800F239C(v47, v48, 2LL, 0LL);
  sub_1800F2BD4(v47);
  v24 = 0LL;
  if ( *((_QWORD *)&v47 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL));
  v24 = v47;
  sub_1800A9BE4(*(_QWORD *)(a1 + 56), (__int64 *)&v24);
  `eh vector destructor iterator'(v48, 0x40uLL, 2uLL, (void (*)(void *))sub_180091A40);
  v19 = (volatile signed __int32 *)*((_QWORD *)&v47 + 1);
  if ( *((_QWORD *)&v47 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  result = sub_1800A8CC8(*(_QWORD *)(a1 + 56));
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
