/*
 * XREFs of sub_1800229E0 @ 0x1800229E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001CAB0 @ 0x18001CAB0 (sub_18001CAB0.c)
 *     sub_18001CD04 @ 0x18001CD04 (sub_18001CD04.c)
 *     sub_18001CF58 @ 0x18001CF58 (sub_18001CF58.c)
 *     sub_18001D1AC @ 0x18001D1AC (sub_18001D1AC.c)
 *     sub_18001D400 @ 0x18001D400 (sub_18001D400.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_OWORD *__fastcall sub_1800229E0(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  signed __int32 v11; // eax
  __int64 *v12; // rax
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rdx
  signed __int32 v16; // eax
  __int64 *v17; // rax
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rdx
  signed __int32 v21; // eax
  __int64 *v22; // rax
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rdx
  signed __int32 v26; // eax
  __int64 *v27; // rax
  volatile signed __int32 *v28; // rbx
  __int64 v29; // rbx
  __int128 v31; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v32; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v33; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v34; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+78h] [rbp-90h] BYREF
  __int128 v36; // [rsp+88h] [rbp-80h] BYREF
  __int64 v37; // [rsp+98h] [rbp-70h]
  __int64 v38; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 *v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v43; // [rsp+C8h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h] BYREF
  volatile signed __int32 *v47; // [rsp+E8h] [rbp-20h]
  _OWORD v48[2]; // [rsp+F8h] [rbp-10h] BYREF
  _OWORD v49[2]; // [rsp+118h] [rbp+10h] BYREF
  _OWORD v50[2]; // [rsp+138h] [rbp+30h] BYREF
  _OWORD v51[2]; // [rsp+158h] [rbp+50h] BYREF
  _OWORD v52[2]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v54[24]; // [rsp+1B0h] [rbp+A8h] BYREF
  _BYTE v55[24]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v56[24]; // [rsp+1E0h] [rbp+D8h] BYREF
  _BYTE v57[32]; // [rsp+1F8h] [rbp+F0h] BYREF

  v37 = -2LL;
  v31 = 0LL;
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 == 1 )
    {
      v35 = 0LL;
      v20 = *(_QWORD *)(a1 + 16);
      if ( !v20 )
      {
LABEL_77:
        std::bad_function_call::bad_function_call((std::bad_function_call *)v56);
        throw (std::bad_weak_ptr *)v56;
      }
      do
      {
        v21 = *(_DWORD *)(v20 + 8);
        if ( !v21 )
          goto LABEL_77;
      }
      while ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 8), v21 + 1, v21) );
      v35 = *(_OWORD *)(a1 + 8);
      v51[0] = *a3;
      v51[1] = a3[1];
      v22 = sub_18001D400((_QWORD *)a1, &v44, (__int64)v51, (__int64)&v35, a1 + 592);
      std::shared_ptr<__ExceptionPtr>::operator=(&v31, v22);
      v23 = v45;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        }
      }
      if ( *((_QWORD *)&v35 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v35 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v24 = *((_QWORD *)&v35 + 1);
          (***((void (__fastcall ****)(_QWORD))&v35 + 1))(*((_QWORD *)&v35 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 12), 0xFFFFFFFF) == 1 )
          {
            v9 = *((_QWORD *)&v35 + 1);
            goto LABEL_72;
          }
        }
      }
    }
    else if ( *(int *)a3 > 1 )
    {
      if ( *(int *)a3 <= 3 )
      {
        v34 = 0LL;
        v15 = *(_QWORD *)(a1 + 16);
        if ( !v15 )
        {
LABEL_76:
          std::bad_function_call::bad_function_call((std::bad_function_call *)v55);
          throw (std::bad_weak_ptr *)v55;
        }
        do
        {
          v16 = *(_DWORD *)(v15 + 8);
          if ( !v16 )
            goto LABEL_76;
        }
        while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), v16 + 1, v16) );
        v34 = *(_OWORD *)(a1 + 8);
        v50[0] = *a3;
        v50[1] = a3[1];
        v17 = sub_18001CD04((_QWORD *)a1, &v42, (__int64)v50, (__int64)&v34, a1 + 592);
        std::shared_ptr<__ExceptionPtr>::operator=(&v31, v17);
        v18 = v43;
        if ( v43 )
        {
          if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          }
        }
        if ( *((_QWORD *)&v34 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v19 = *((_QWORD *)&v34 + 1);
            (***((void (__fastcall ****)(_QWORD))&v34 + 1))(*((_QWORD *)&v34 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
            {
              v9 = *((_QWORD *)&v34 + 1);
              goto LABEL_72;
            }
          }
        }
      }
      else if ( *(_DWORD *)a3 == 5 )
      {
        v33 = 0LL;
        v10 = *(_QWORD *)(a1 + 16);
        if ( !v10 )
        {
LABEL_75:
          std::bad_function_call::bad_function_call((std::bad_function_call *)v54);
          throw (std::bad_weak_ptr *)v54;
        }
        do
        {
          v11 = *(_DWORD *)(v10 + 8);
          if ( !v11 )
            goto LABEL_75;
        }
        while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) );
        v33 = *(_OWORD *)(a1 + 8);
        v49[0] = *a3;
        v49[1] = a3[1];
        v12 = sub_18001CF58((_QWORD *)a1, &v40, (__int64)v49, (__int64)&v33, a1 + 592);
        std::shared_ptr<__ExceptionPtr>::operator=(&v31, v12);
        v13 = v41;
        if ( v41 )
        {
          if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
            if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          }
        }
        if ( *((_QWORD *)&v33 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v33 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v14 = *((_QWORD *)&v33 + 1);
            (***((void (__fastcall ****)(_QWORD))&v33 + 1))(*((_QWORD *)&v33 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
            {
              v9 = *((_QWORD *)&v33 + 1);
              goto LABEL_72;
            }
          }
        }
      }
      else if ( *(_DWORD *)a3 == 6 )
      {
        v32 = 0LL;
        v4 = *(_QWORD *)(a1 + 16);
        if ( !v4 )
        {
LABEL_74:
          std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
          throw (std::bad_weak_ptr *)pExceptionObject;
        }
        do
        {
          v5 = *(_DWORD *)(v4 + 8);
          if ( !v5 )
            goto LABEL_74;
        }
        while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) );
        v32 = *(_OWORD *)(a1 + 8);
        v48[0] = *a3;
        v48[1] = a3[1];
        v6 = sub_18001CAB0((_QWORD *)a1, &v38, (__int64)v48, (__int64)&v32, a1 + 592);
        std::shared_ptr<__ExceptionPtr>::operator=(&v31, v6);
        v7 = v39;
        if ( v39 )
        {
          if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
            if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
          }
        }
        if ( *((_QWORD *)&v32 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v32 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v8 = *((_QWORD *)&v32 + 1);
            (***((void (__fastcall ****)(_QWORD))&v32 + 1))(*((_QWORD *)&v32 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF) == 1 )
            {
              v9 = *((_QWORD *)&v32 + 1);
LABEL_72:
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
            }
          }
        }
      }
    }
  }
  else
  {
    v36 = 0LL;
    v25 = *(_QWORD *)(a1 + 16);
    if ( !v25 )
    {
LABEL_78:
      std::bad_function_call::bad_function_call((std::bad_function_call *)v57);
      throw (std::bad_weak_ptr *)v57;
    }
    do
    {
      v26 = *(_DWORD *)(v25 + 8);
      if ( !v26 )
        goto LABEL_78;
    }
    while ( v26 != _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v26 + 1, v26) );
    v36 = *(_OWORD *)(a1 + 8);
    v52[0] = *a3;
    v52[1] = a3[1];
    v27 = sub_18001D1AC((_QWORD *)a1, &v46, (__int64)v52, (__int64)&v36, a1 + 592);
    std::shared_ptr<__ExceptionPtr>::operator=(&v31, v27);
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
    if ( *((_QWORD *)&v36 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v36 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v29 = *((_QWORD *)&v36 + 1);
        (***((void (__fastcall ****)(_QWORD))&v36 + 1))(*((_QWORD *)&v36 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 12), 0xFFFFFFFF) == 1 )
        {
          v9 = *((_QWORD *)&v36 + 1);
          goto LABEL_72;
        }
      }
    }
  }
  *a2 = v31;
  return a2;
}
