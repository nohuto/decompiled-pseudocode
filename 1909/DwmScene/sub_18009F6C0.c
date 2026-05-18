/*
 * XREFs of sub_18009F6C0 @ 0x18009F6C0
 * Callers:
 *     sub_18001BD00 @ 0x18001BD00 (sub_18001BD00.c)
 *     sub_1800ACAF0 @ 0x1800ACAF0 (sub_1800ACAF0.c)
 *     sub_1800B88B0 @ 0x1800B88B0 (sub_1800B88B0.c)
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800D08D8 @ 0x1800D08D8 (sub_1800D08D8.c)
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 *     sub_1800FAB30 @ 0x1800FAB30 (sub_1800FAB30.c)
 *     sub_1800FB260 @ 0x1800FB260 (sub_1800FB260.c)
 *     sub_180101020 @ 0x180101020 (sub_180101020.c)
 *     sub_180101170 @ 0x180101170 (sub_180101170.c)
 *     sub_18010FFE4 @ 0x18010FFE4 (sub_18010FFE4.c)
 *     sub_180113740 @ 0x180113740 (sub_180113740.c)
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000E774 (--0bad_function_call@std@@QEAA@XZ.c)
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     sub_180064400 @ 0x180064400 (sub_180064400.c)
 *     sub_180064430 @ 0x180064430 (sub_180064430.c)
 *     sub_180064684 @ 0x180064684 (sub_180064684.c)
 *     sub_18007B288 @ 0x18007B288 (sub_18007B288.c)
 *     sub_18009F390 @ 0x18009F390 (sub_18009F390.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_18009F6C0(_QWORD *a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v5; // rcx
  char result; // al
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  volatile signed __int32 *v15; // r8
  volatile signed __int32 *v16; // rbx
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  volatile signed __int32 *v18; // [rsp+28h] [rbp-58h]
  __int128 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h]
  _BYTE pExceptionObject[24]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v22; // [rsp+60h] [rbp-20h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+70h] [rbp-10h]

  v20 = -2LL;
  v5 = (_DWORD *)a1[14];
  *v5 = *a2;
  v5[1] = a2[1];
  v5[2] = a2[2];
  v5[3] = a2[3];
  v5[4] = a2[4];
  v5[5] = a2[5];
  v5[6] = a2[6];
  v5[7] = a2[7];
  v5[8] = a2[8];
  v5[9] = a2[9];
  v5[10] = a2[10];
  v5[11] = a2[11];
  v5[12] = a2[12];
  if ( a3 )
    sub_180064684((__int64)a1, 1, 1);
  result = sub_180064430((__int64)a1, 1);
  if ( result )
  {
    if ( a3 )
    {
      v19 = 0LL;
      v7 = *(_QWORD *)(a3 + 16);
      if ( !v7 )
      {
LABEL_26:
        std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
        throw (std::bad_weak_ptr *)pExceptionObject;
      }
      do
      {
        v8 = *(_DWORD *)(v7 + 8);
        if ( !v8 )
          goto LABEL_26;
      }
      while ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) );
      v19 = *(_OWORD *)(a3 + 8);
      sub_18009F390(a1, (__int64 *)&v19);
      if ( *((_QWORD *)&v19 + 1)
        && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v9 = *((_QWORD *)&v19 + 1);
        (***((void (__fastcall ****)(_QWORD))&v19 + 1))(*((_QWORD *)&v19 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
      }
      sub_180064684((__int64)a1, 2, 0);
      return sub_180064684((__int64)a1, 4, 0);
    }
    else
    {
      v10 = sub_180064400((__int64)a1);
      v22 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      sub_18007B288(v10, &v22);
      v11 = 0;
      v12 = v22;
      if ( (v23 - v22) >> 4 )
      {
        v13 = 0LL;
        do
        {
          v17 = 0LL;
          v18 = 0LL;
          v14 = 2 * v13;
          v15 = *(volatile signed __int32 **)(v12 + 8 * v14 + 8);
          if ( v15 )
          {
            _InterlockedIncrement(v15 + 2);
            v15 = *(volatile signed __int32 **)(v12 + 8 * v14 + 8);
          }
          v17 = *(_QWORD *)(v12 + 8 * v14);
          v18 = v15;
          sub_18009F390(a1, &v17);
          if ( v18 )
          {
            if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
            {
              v16 = v18;
              (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
              if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
            }
          }
          ++v11;
          v12 = v22;
          v13 = v11;
        }
        while ( v11 < (unsigned __int64)((v23 - v22) >> 4) );
      }
      return sub_1800113D8(&v22);
    }
  }
  return result;
}
