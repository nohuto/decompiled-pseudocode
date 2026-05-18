/*
 * XREFs of sub_1800A4608 @ 0x1800A4608
 * Callers:
 *     sub_1800F8490 @ 0x1800F8490 (sub_1800F8490.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18009FD24 @ 0x18009FD24 (sub_18009FD24.c)
 *     sub_18009FE44 @ 0x18009FE44 (sub_18009FE44.c)
 *     sub_18009FF64 @ 0x18009FF64 (sub_18009FF64.c)
 *     sub_1800A0084 @ 0x1800A0084 (sub_1800A0084.c)
 *     sub_1800A01A4 @ 0x1800A01A4 (sub_1800A01A4.c)
 *     sub_1800A1FB4 @ 0x1800A1FB4 (sub_1800A1FB4.c)
 *     sub_1800A629C @ 0x1800A629C (sub_1800A629C.c)
 *     sub_1800CE5F8 @ 0x1800CE5F8 (sub_1800CE5F8.c)
 *     sub_1800CE968 @ 0x1800CE968 (sub_1800CE968.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_1800A4608(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rbx
  _QWORD *v15; // r12
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // r8
  __int64 **v18; // r13
  unsigned __int64 *v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 *v21; // rdx
  __int64 *v22; // rax
  unsigned __int64 *v23; // rcx
  volatile signed __int32 *v24; // rsi
  volatile signed __int32 *v25; // rsi
  volatile signed __int32 *v26; // rsi
  volatile signed __int32 *v27; // rsi
  volatile signed __int32 *v28; // rbx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *result; // rax
  __int128 v34; // [rsp+28h] [rbp-79h] BYREF
  _QWORD v35[2]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v36; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int64 v37[2]; // [rsp+58h] [rbp-49h] BYREF
  __int64 v38; // [rsp+68h] [rbp-39h] BYREF
  volatile signed __int32 *v39; // [rsp+70h] [rbp-31h]
  __int64 v40; // [rsp+78h] [rbp-29h] BYREF
  volatile signed __int32 *v41; // [rsp+80h] [rbp-21h]
  __int64 v42; // [rsp+88h] [rbp-19h] BYREF
  volatile signed __int32 *v43; // [rsp+90h] [rbp-11h]
  __int64 v44; // [rsp+98h] [rbp-9h] BYREF
  volatile signed __int32 *v45; // [rsp+A0h] [rbp-1h]
  __int64 v46; // [rsp+A8h] [rbp+7h] BYREF
  volatile signed __int32 *v47; // [rsp+B0h] [rbp+Fh]

  v35[1] = -2LL;
  v37[0] = (unsigned __int64)a2;
  v37[1] = (unsigned __int64)a3;
  v35[0] = 0LL;
  v6 = (_QWORD *)(a1 + 18576);
  sub_1800A629C(a1 + 18576, v35, a3);
  v7 = v35[0];
  if ( v35[0] == *v6 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v8 = a3[3];
    if ( v8 < 0x10 )
      goto LABEL_65;
    v9 = v8 + 1;
    v10 = *a3;
    if ( v9 < 0x1000 )
      goto LABEL_64;
    v11 = v9 + 39;
    v12 = *(_QWORD *)(v10 - 8);
    v13 = v10 - v12;
    if ( (unsigned __int64)(v13 - 8) <= 0x1F )
    {
LABEL_63:
      v10 = v12;
      goto LABEL_64;
    }
    v7 = o__invalid_parameter_noinfo_noreturn(v13, v11);
  }
  v14 = v7 + 64;
  v34 = 0LL;
  v15 = (_QWORD *)(v7 + 88);
  if ( *(_QWORD *)(v7 + 88) )
    std::shared_ptr<__ExceptionPtr>::operator=(&v34, (_QWORD *)(v7 + 88));
  v16 = *(unsigned __int64 **)v14;
  if ( *(_QWORD *)v14 )
  {
    v17 = *v16;
    if ( *v16 == v16[1] )
      v17 = v16[3];
  }
  else
  {
    v17 = 0LL;
  }
  v37[0] = v17;
  v18 = (__int64 **)(a1 + 18608);
  if ( (_QWORD)v34 )
    goto LABEL_58;
  if ( *(_BYTE *)(a1 + 18624) )
  {
    v19 = *(unsigned __int64 **)v14;
    if ( !*(_QWORD *)v14 )
      goto LABEL_60;
    v20 = v19[1];
    if ( *v19 == v20 && *((_DWORD *)v19 + 8) != *((_DWORD *)v19 + 6) && *v19 == v20 && v19[3] )
    {
      v21 = *v18;
      v22 = (__int64 *)(*v18)[1];
      if ( *((_BYTE *)v22 + 25) )
        goto LABEL_26;
      do
      {
        if ( v22[4] >= v17 )
        {
          v21 = v22;
          v22 = (__int64 *)*v22;
        }
        else
        {
          v22 = (__int64 *)v22[2];
        }
      }
      while ( !*((_BYTE *)v22 + 25) );
      if ( v21 == *v18 || v17 < v21[4] )
LABEL_26:
        v21 = *v18;
      if ( v21 != *v18 )
      {
        std::shared_ptr<__ExceptionPtr>::operator=(&v34, v21 + 5);
        if ( (_QWORD)v34 )
          goto LABEL_58;
      }
    }
  }
  v23 = *(unsigned __int64 **)v14;
  if ( *(_QWORD *)v14 && (*v23 != v23[1] || *((_DWORD *)v23 + 8) != *((_DWORD *)v23 + 6)) )
  {
    if ( *(_DWORD *)(v14 + 16) == 1 )
    {
      v38 = 0LL;
      v39 = 0LL;
      sub_1800A01A4(*(_QWORD **)(a1 + 18688), &v38, 1);
      sub_1800CE968(v38, a3);
      sub_1800CE5F8(v38, v14);
      std::shared_ptr<__ExceptionPtr>::operator=(&v34, &v38);
      v24 = v39;
      if ( v39 )
      {
        if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        }
      }
    }
    if ( *(_DWORD *)(v14 + 16) == 5 )
    {
      v40 = 0LL;
      v41 = 0LL;
      sub_1800A0084(*(_QWORD **)(a1 + 18688), &v40, 1);
      sub_1800CE968(v40, a3);
      sub_1800CE5F8(v40, v14);
      std::shared_ptr<__ExceptionPtr>::operator=(&v34, &v40);
      v25 = v41;
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        }
      }
    }
    if ( *(_DWORD *)(v14 + 16) == 4 )
    {
      v42 = 0LL;
      v43 = 0LL;
      sub_18009FE44(*(_QWORD **)(a1 + 18688), &v42, 1);
      sub_1800CE968(v42, a3);
      sub_1800CE5F8(v42, v14);
      std::shared_ptr<__ExceptionPtr>::operator=(&v34, &v42);
      v26 = v43;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
        }
      }
    }
    if ( *(_DWORD *)(v14 + 16) == 3 )
    {
      v44 = 0LL;
      v45 = 0LL;
      sub_18009FD24(*(_QWORD **)(a1 + 18688), &v44, 1);
      sub_1800CE968(v44, a3);
      sub_1800CE5F8(v44, v14);
      std::shared_ptr<__ExceptionPtr>::operator=(&v34, &v44);
      v27 = v45;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        }
      }
    }
    if ( *(_DWORD *)(v14 + 16) == 2 )
    {
      v46 = 0LL;
      v47 = 0LL;
      sub_18009FF64(*(_QWORD **)(a1 + 18688), &v46, 1);
      sub_1800CE968(v46, a3);
      sub_1800CE5F8(v46, v14);
      std::shared_ptr<__ExceptionPtr>::operator=(&v34, &v46);
      v28 = v47;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        }
      }
    }
    if ( (_QWORD)v34 )
    {
LABEL_58:
      std::shared_ptr<__ExceptionPtr>::operator=(v15, &v34);
      if ( *(_BYTE *)(a1 + 18624) )
      {
        sub_1800A1FB4((__int64 **)(a1 + 18608), (__int64)&v36, v37);
        std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v36 + 40), &v34);
      }
    }
  }
LABEL_60:
  *(_OWORD *)a2 = v34;
  v29 = a3[3];
  if ( v29 >= 0x10 )
  {
    v30 = v29 + 1;
    v10 = *a3;
    if ( v30 >= 0x1000 )
    {
      v31 = v30 + 39;
      v12 = *(_QWORD *)(v10 - 8);
      v32 = v10 - v12;
      if ( (unsigned __int64)(v32 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v32, v31);
        JUMPOUT(0x1800A4B47LL);
      }
      goto LABEL_63;
    }
LABEL_64:
    j_j__o_free(v10);
  }
LABEL_65:
  a3[2] = 0LL;
  a3[3] = 15LL;
  result = a2;
  *(_BYTE *)a3 = 0;
  return result;
}
