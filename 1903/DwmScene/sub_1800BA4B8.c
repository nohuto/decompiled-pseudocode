/*
 * XREFs of sub_1800BA4B8 @ 0x1800BA4B8
 * Callers:
 *     sub_1800BF770 @ 0x1800BF770 (sub_1800BF770.c)
 * Callees:
 *     sub_180063430 @ 0x180063430 (sub_180063430.c)
 *     sub_1800BAD70 @ 0x1800BAD70 (sub_1800BAD70.c)
 *     sub_1800C1AF8 @ 0x1800C1AF8 (sub_1800C1AF8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_1800BA4B8(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // r8
  __int64 v9; // rdx
  signed __int32 v10; // eax
  __int64 v11; // rdx
  __int128 *v12; // rcx
  char v13; // di
  __int64 v14; // rbx
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rbx
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  __int128 v21; // [rsp+20h] [rbp-69h] BYREF
  __int128 v22; // [rsp+30h] [rbp-59h] BYREF
  __int128 v23; // [rsp+40h] [rbp-49h] BYREF
  int v24; // [rsp+50h] [rbp-39h]
  _QWORD *v25; // [rsp+58h] [rbp-31h]
  __int64 v26; // [rsp+60h] [rbp-29h]
  _QWORD *v27; // [rsp+68h] [rbp-21h]
  _BYTE v28[8]; // [rsp+70h] [rbp-19h] BYREF
  volatile signed __int32 *v29; // [rsp+78h] [rbp-11h]
  __int128 v30; // [rsp+80h] [rbp-9h]
  __int64 v31; // [rsp+90h] [rbp+7h] BYREF
  volatile signed __int32 *v32; // [rsp+98h] [rbp+Fh]

  v26 = -2LL;
  v25 = a3;
  v27 = a4;
  v24 = 0;
  sub_180063430(a1 + 16);
  v8 = *a4;
  v30 = 0LL;
  v9 = *(_QWORD *)(v8 + 64);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
      {
        v30 = *(_OWORD *)(v8 + 56);
        break;
      }
    }
  }
  v31 = 0LL;
  v32 = 0LL;
  v21 = 0LL;
  if ( *((_QWORD *)&v30 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL));
  v21 = v30;
  v22 = 0LL;
  v11 = a3[1];
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v11 = a3[1];
  }
  sub_1800C1AF8(a1, &v31, &v22, &v21, v21, *((_QWORD *)&v21 + 1), *a3, v11);
  if ( v31 )
  {
    v12 = (__int128 *)sub_1800BAD70(v31, v28);
    v13 = 5;
  }
  else
  {
    v23 = 0LL;
    v12 = &v23;
    v13 = 6;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = *(_QWORD *)v12;
  a2[1] = *((_QWORD *)v12 + 1);
  *(_QWORD *)v12 = 0LL;
  *((_QWORD *)v12 + 1) = 0LL;
  if ( (v13 & 2) != 0 )
  {
    v13 &= ~2u;
    if ( *((_QWORD *)&v23 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v14 = *((_QWORD *)&v23 + 1);
        (***((void (__fastcall ****)(_QWORD))&v23 + 1))(*((_QWORD *)&v23 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
      }
    }
  }
  if ( (v13 & 1) != 0 )
  {
    v15 = v29;
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  v16 = v32;
  if ( v32 )
  {
    if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  if ( *((_QWORD *)&v30 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v17 = *((_QWORD *)&v30 + 1);
      (***((void (__fastcall ****)(_QWORD))&v30 + 1))(*((_QWORD *)&v30 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
    }
  }
  v18 = (volatile signed __int32 *)a3[1];
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  v19 = (volatile signed __int32 *)a4[1];
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  return a2;
}
