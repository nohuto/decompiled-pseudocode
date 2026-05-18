/*
 * XREFs of sub_180078454 @ 0x180078454
 * Callers:
 *     sub_180079170 @ 0x180079170 (sub_180079170.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180073150 @ 0x180073150 (sub_180073150.c)
 *     sub_180073308 @ 0x180073308 (sub_180073308.c)
 *     sub_180073380 @ 0x180073380 (sub_180073380.c)
 *     sub_180073538 @ 0x180073538 (sub_180073538.c)
 *     sub_1800735B0 @ 0x1800735B0 (sub_1800735B0.c)
 *     sub_180073628 @ 0x180073628 (sub_180073628.c)
 *     sub_18007ED2C @ 0x18007ED2C (sub_18007ED2C.c)
 *     sub_1800A3178 @ 0x1800A3178 (sub_1800A3178.c)
 *     sub_1800A3820 @ 0x1800A3820 (sub_1800A3820.c)
 *     sub_1800A52CC @ 0x1800A52CC (sub_1800A52CC.c)
 *     sub_1800D4314 @ 0x1800D4314 (sub_1800D4314.c)
 *     sub_1800D4330 @ 0x1800D4330 (sub_1800D4330.c)
 *     sub_18011DAEC @ 0x18011DAEC (sub_18011DAEC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180078454(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rcx
  __int64 *v7; // rax
  volatile signed __int32 *v8; // rbx
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  unsigned int v11; // r14d
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 **v14; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 *v17; // rax
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 result; // rax
  __int64 v27; // rbx
  _DWORD *v28; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v29[3]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v30; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+78h] [rbp-90h] BYREF
  __int128 v33; // [rsp+88h] [rbp-80h] BYREF
  __int128 v34; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v35[6]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v36[8]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v37[8]; // [rsp+E0h] [rbp-28h] BYREF
  volatile signed __int32 *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h] BYREF
  volatile signed __int32 *v40; // [rsp+F8h] [rbp-10h]
  _QWORD v41[4]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v42[40]; // [rsp+120h] [rbp+18h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v44; // [rsp+188h] [rbp+80h] BYREF
  __int128 v45; // [rsp+198h] [rbp+90h] BYREF
  __int128 v46; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v47; // [rsp+1B8h] [rbp+B0h] BYREF
  __int128 v48; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD v49[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v50[3]; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned __int64 v51; // [rsp+200h] [rbp+F8h]

  v35[4] = -2LL;
  v4 = a1[64];
  if ( a1[78] - a1[77] >= 4uLL )
    sub_1800A52CC(a1[64]);
  v28 = 0LL;
  v29[0] = 0LL;
  v5 = a1[81];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a1[81];
  }
  v6 = (_DWORD *)a1[80];
  v28 = v6;
  v29[0] = v5;
  if ( !v6 )
  {
    v7 = (__int64 *)sub_1800D4330(v37, a2);
    std::shared_ptr<__ExceptionPtr>::operator=(&v28, v7);
    v8 = v38;
    if ( v38 )
    {
      if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    v6 = v28;
  }
  if ( v6[2] != a2 )
  {
    sub_18000E4E8(v41);
    sub_18011DAEC(pExceptionObject, v41, 0LL);
    throw (Spectre::Utils::SpectreException *)pExceptionObject;
  }
  v49[0] = 0LL;
  v49[1] = 0LL;
  (*(void (__fastcall **)(_DWORD *, _QWORD *))(*(_QWORD *)v6 + 8LL))(v6, v49);
  v9 = (__int64 *)v49[0];
  v10 = *(__int64 **)v49[0];
  while ( v10 != v9 )
  {
    v50[2] = 0LL;
    v51 = 0LL;
    sub_18000F444(v50, (__int64)(v10 + 4));
    v11 = *((_DWORD *)v10 + 20);
    v35[5] = v42;
    v12 = sub_1800D4314(v10 + 8, v42);
    v35[2] = 0LL;
    v35[3] = 0LL;
    sub_18000F444(v35, (__int64)v50);
    sub_1800A3820(v4, v35, v11, v12);
    if ( v51 >= 0x10 )
    {
      v13 = v50[0];
      if ( v51 + 1 >= 0x1000 )
      {
        v13 = *(_QWORD *)(v50[0] - 8LL);
        if ( (unsigned __int64)(v50[0] - v13 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v13, v51 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v13);
    }
    v14 = (__int64 **)v10[2];
    if ( *((_BYTE *)v14 + 25) )
    {
      for ( i = (__int64 *)v10[1]; !*((_BYTE *)i + 25) && v10 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v10 = i;
      v10 = i;
    }
    else
    {
      v10 = (__int64 *)v10[2];
      for ( j = *v14; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v10 = j;
    }
  }
  v17 = sub_180073538(&v39);
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 8, v17);
  v18 = v40;
  if ( v40 )
  {
    if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  *(_OWORD *)&v29[1] = 0LL;
  v19 = a1[9];
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    v19 = a1[9];
  }
  v29[1] = a1[8];
  v29[2] = v19;
  sub_1800A3178(a1[64], &v29[1]);
  v48 = 0uLL;
  sub_180073380(&v48);
  v30 = 0LL;
  if ( *((_QWORD *)&v48 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 8LL));
  v30 = v48;
  sub_1800A3178(a1[64], &v30);
  v47 = 0uLL;
  sub_1800735B0(&v47);
  v31 = 0LL;
  if ( *((_QWORD *)&v47 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL));
  v31 = v47;
  sub_1800A3178(a1[64], &v31);
  v46 = 0uLL;
  sub_180073308(&v46);
  v32 = 0LL;
  if ( *((_QWORD *)&v46 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL));
  v32 = v46;
  sub_1800A3178(a1[64], &v32);
  v45 = 0uLL;
  sub_180073628(&v45);
  v33 = 0LL;
  if ( *((_QWORD *)&v45 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v45 + 1) + 8LL));
  v33 = v45;
  sub_1800A3178(a1[64], &v33);
  v44 = 0uLL;
  sub_180073150(&v44);
  v34 = 0LL;
  v20 = *((_QWORD *)&v44 + 1);
  if ( *((_QWORD *)&v44 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL));
    v20 = *((_QWORD *)&v44 + 1);
  }
  v34 = v44;
  sub_1800A3178(a1[64], &v34);
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 8), 0xFFFFFFFF) == 1 )
    {
      v21 = *((_QWORD *)&v44 + 1);
      (***((void (__fastcall ****)(_QWORD))&v44 + 1))(*((_QWORD *)&v44 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v44 + 1) + 8LL))(*((_QWORD *)&v44 + 1));
    }
  }
  if ( *((_QWORD *)&v45 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v45 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v22 = *((_QWORD *)&v45 + 1);
      (***((void (__fastcall ****)(_QWORD))&v45 + 1))(*((_QWORD *)&v45 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v45 + 1) + 8LL))(*((_QWORD *)&v45 + 1));
    }
  }
  if ( *((_QWORD *)&v46 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v23 = *((_QWORD *)&v46 + 1);
      (***((void (__fastcall ****)(_QWORD))&v46 + 1))(*((_QWORD *)&v46 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v46 + 1) + 8LL))(*((_QWORD *)&v46 + 1));
    }
  }
  if ( *((_QWORD *)&v47 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v24 = *((_QWORD *)&v47 + 1);
      (***((void (__fastcall ****)(_QWORD))&v47 + 1))(*((_QWORD *)&v47 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v47 + 1) + 8LL))(*((_QWORD *)&v47 + 1));
    }
  }
  if ( *((_QWORD *)&v48 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v25 = *((_QWORD *)&v48 + 1);
      (***((void (__fastcall ****)(_QWORD))&v48 + 1))(*((_QWORD *)&v48 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v48 + 1) + 8LL))(*((_QWORD *)&v48 + 1));
    }
  }
  sub_18007ED2C(v49, v36, *(_QWORD *)v49[0]);
  result = j_j__o_free(v49[0]);
  if ( v29[0] )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29[0] + 8LL));
    if ( !(_DWORD)result )
    {
      v27 = v29[0];
      (**(void (__fastcall ***)(_QWORD))v29[0])(v29[0]);
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v29[0] + 8LL))(v29[0]);
    }
  }
  return result;
}
