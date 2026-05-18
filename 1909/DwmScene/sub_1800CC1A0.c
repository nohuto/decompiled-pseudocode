/*
 * XREFs of sub_1800CC1A0 @ 0x1800CC1A0
 * Callers:
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 *     sub_180090C88 @ 0x180090C88 (sub_180090C88.c)
 *     sub_1800ACAF0 @ 0x1800ACAF0 (sub_1800ACAF0.c)
 *     sub_1800F75B8 @ 0x1800F75B8 (sub_1800F75B8.c)
 *     sub_1800F9550 @ 0x1800F9550 (sub_1800F9550.c)
 *     sub_18010DDE0 @ 0x18010DDE0 (sub_18010DDE0.c)
 *     sub_18010F964 @ 0x18010F964 (sub_18010F964.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     sub_18003E16C @ 0x18003E16C (sub_18003E16C.c)
 *     sub_180064400 @ 0x180064400 (sub_180064400.c)
 *     sub_180064430 @ 0x180064430 (sub_180064430.c)
 *     sub_180064684 @ 0x180064684 (sub_180064684.c)
 *     sub_18006CEC8 @ 0x18006CEC8 (sub_18006CEC8.c)
 *     sub_18007B288 @ 0x18007B288 (sub_18007B288.c)
 *     sub_18008FB70 @ 0x18008FB70 (sub_18008FB70.c)
 *     sub_18009F950 @ 0x18009F950 (sub_18009F950.c)
 *     sub_1800CC010 @ 0x1800CC010 (sub_1800CC010.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall sub_1800CC1A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // r12
  __int64 v7; // rcx
  char result; // al
  __int64 v9; // rax
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rbx
  int v15; // eax
  __int64 *v16; // rax
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  signed __int32 v21; // eax
  volatile signed __int32 *v22; // rbx
  unsigned int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  volatile signed __int32 *v28; // rbx
  __int128 v29; // [rsp+28h] [rbp-79h] BYREF
  __int64 v30; // [rsp+38h] [rbp-69h]
  volatile signed __int32 *v31; // [rsp+40h] [rbp-61h]
  __int64 v32; // [rsp+48h] [rbp-59h]
  __int64 v33; // [rsp+50h] [rbp-51h] BYREF
  volatile signed __int32 *v34; // [rsp+58h] [rbp-49h]
  _BYTE pExceptionObject[24]; // [rsp+60h] [rbp-41h] BYREF
  __int128 v36; // [rsp+78h] [rbp-29h] BYREF
  __int64 v37; // [rsp+88h] [rbp-19h] BYREF
  __int64 v38; // [rsp+90h] [rbp-11h]
  __int64 v39; // [rsp+98h] [rbp-9h]
  __int64 v40; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v41; // [rsp+A8h] [rbp+7h]
  __int64 v42; // [rsp+B0h] [rbp+Fh]

  v32 = -2LL;
  v6 = (__int64 *)(a1 + 112);
  v7 = *(_QWORD *)(a1 + 112);
  if ( v7 )
  {
    result = sub_18008FB70(v7, a2);
    if ( result )
      return result;
    v9 = sub_180064400(a1);
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    sub_18007B288(v9, &v37);
    v10 = 0;
    v11 = v37;
    if ( (v38 - v37) >> 4 )
    {
      v12 = 0LL;
      do
      {
        v30 = 0LL;
        v31 = 0LL;
        v13 = 2 * v12;
        v14 = *(volatile signed __int32 **)(v11 + 8 * v13 + 8);
        if ( v14 )
        {
          _InterlockedIncrement(v14 + 2);
          v14 = *(volatile signed __int32 **)(v11 + 8 * v13 + 8);
        }
        v30 = *(_QWORD *)(v11 + 8 * v13);
        v31 = v14;
        v15 = sub_18006CEC8(v30);
        sub_18009F950(a1, v15);
        if ( v14 )
        {
          if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
            if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          }
        }
        ++v10;
        v11 = v37;
        v12 = v10;
      }
      while ( v10 < (unsigned __int64)((v38 - v37) >> 4) );
    }
    sub_1800113D8(&v37);
  }
  else
  {
    v16 = sub_18003E16C(&v33);
    std::shared_ptr<__ExceptionPtr>::operator=(v6, v16);
    v17 = v34;
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
  }
  v18 = *v6;
  *(_OWORD *)v18 = *(_OWORD *)a2;
  *(_OWORD *)(v18 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v18 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v18 + 48) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(v18 + 64) = *(_QWORD *)(a2 + 64);
  if ( a3 )
    sub_180064684(a1, 1, 1);
  result = sub_180064430(a1, 1);
  if ( result )
  {
    v19 = sub_180064400(a1);
    if ( a3 )
    {
      v29 = 0LL;
      v20 = *(_QWORD *)(a3 + 16);
      if ( !v20 )
      {
LABEL_42:
        std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
        throw (std::bad_weak_ptr *)pExceptionObject;
      }
      do
      {
        v21 = *(_DWORD *)(v20 + 8);
        if ( !v21 )
          goto LABEL_42;
      }
      while ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 8), v21 + 1, v21) );
      v29 = *(_OWORD *)(a3 + 8);
      sub_1800CC010(a1, (__int64 *)&v29);
      v22 = (volatile signed __int32 *)*((_QWORD *)&v29 + 1);
      if ( *((_QWORD *)&v29 + 1)
        && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      }
      sub_180064684(a1, 2, 0);
      return sub_180064684(a1, 4, 0);
    }
    else
    {
      v40 = 0LL;
      v41 = 0LL;
      v42 = 0LL;
      sub_18007B288(v19, &v40);
      v23 = 0;
      v24 = v40;
      if ( (v41 - v40) >> 4 )
      {
        v25 = 0LL;
        do
        {
          v26 = 2 * v25;
          v36 = 0LL;
          v27 = *(_QWORD *)(v24 + 8 * v26 + 8);
          if ( v27 )
            _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
          v36 = *(_OWORD *)(v24 + 8 * v26);
          sub_1800CC010(a1, (__int64 *)&v36);
          v28 = (volatile signed __int32 *)*((_QWORD *)&v36 + 1);
          if ( *((_QWORD *)&v36 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v36 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
              if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
            }
          }
          ++v23;
          v24 = v40;
          v25 = v23;
        }
        while ( v23 < (unsigned __int64)((v41 - v40) >> 4) );
      }
      return sub_1800113D8(&v40);
    }
  }
  return result;
}
