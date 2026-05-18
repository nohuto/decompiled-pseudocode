/*
 * XREFs of sub_1800A88B0 @ 0x1800A88B0
 * Callers:
 *     sub_1800A3EA0 @ 0x1800A3EA0 (sub_1800A3EA0.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     sub_180077BF4 @ 0x180077BF4 (sub_180077BF4.c)
 *     sub_1800904B0 @ 0x1800904B0 (sub_1800904B0.c)
 *     sub_1800A40B8 @ 0x1800A40B8 (sub_1800A40B8.c)
 *     sub_1800A9304 @ 0x1800A9304 (sub_1800A9304.c)
 *     sub_1800F5410 @ 0x1800F5410 (sub_1800F5410.c)
 *     sub_1800F82A8 @ 0x1800F82A8 (sub_1800F82A8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall sub_1800A88B0(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  volatile signed __int32 *v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  unsigned __int128 v11; // kr00_16
  __int64 v12; // rsi
  __int64 **v13; // rax
  __int64 i; // rax
  signed __int32 v15; // eax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 *j; // rcx
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  _QWORD *v21; // r14
  _QWORD *v22; // rbx
  _QWORD *v23; // rsi
  _QWORD *k; // rdi
  __int64 **v25; // rax
  __int64 m; // rax
  __int64 *n; // rcx
  volatile signed __int32 *v28; // rbx
  __int64 *v29; // rax
  __int64 v30; // [rsp+40h] [rbp-91h] BYREF
  volatile signed __int32 *v31; // [rsp+48h] [rbp-89h]
  _QWORD v32[4]; // [rsp+50h] [rbp-81h] BYREF
  _QWORD v33[5]; // [rsp+70h] [rbp-61h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+98h] [rbp-39h] BYREF
  unsigned __int128 v35; // [rsp+D8h] [rbp+7h]
  __int64 v36; // [rsp+E8h] [rbp+17h] BYREF
  volatile signed __int32 *v37; // [rsp+F0h] [rbp+1Fh]

  v36 = 0LL;
  v37 = 0LL;
  v4 = *(_QWORD *)sub_1800A9304(a1, &v30);
  v5 = sub_1800A40B8(v4);
  sub_180077BF4(v5, &v36, a2);
  v7 = v31;
  if ( v31 )
  {
    if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  sub_1800634AC(v36 + 24, v6);
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_18000E498(v33);
    v29 = sub_18000E498(v32);
    sub_180027770(pExceptionObject, v29, 545, (__int64)v33, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v8 = *(_QWORD **)(a1 + 480);
  v9 = (_QWORD *)*v8;
  while ( v9 != v8 )
  {
    v35 = 0LL;
    v10 = v9[5];
    if ( v10 )
    {
      while ( 1 )
      {
        v15 = *(_DWORD *)(v10 + 8);
        if ( !v15 )
          break;
        if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v15 + 1, v15) )
        {
          v16 = v9[4];
          *(_QWORD *)&v35 = v16;
          v17 = v9[5];
          *((_QWORD *)&v35 + 1) = v17;
          v11 = __PAIR128__(v17, v16);
          goto LABEL_9;
        }
      }
    }
    v11 = v35;
LABEL_9:
    if ( (_QWORD)v11 )
      sub_1800904B0(v11, a2);
    if ( *((_QWORD *)&v11 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v12 = *((_QWORD *)&v35 + 1);
        (***((void (__fastcall ****)(_QWORD))&v35 + 1))(*((_QWORD *)&v35 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v35 + 1) + 8LL))(*((_QWORD *)&v35 + 1));
      }
    }
    v13 = (__int64 **)v9[2];
    if ( *((_BYTE *)v13 + 25) )
    {
      for ( i = v9[1]; !*(_BYTE *)(i + 25) && v9 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v9 = (_QWORD *)i;
      v9 = (_QWORD *)i;
    }
    else
    {
      v9 = (_QWORD *)v9[2];
      for ( j = *v13; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v9 = j;
    }
  }
  v19 = (_QWORD *)(a1 + 256);
  v20 = 10LL;
  do
  {
    if ( *v19 )
      sub_1800F5410(*v19, a2);
    v19 += 2;
    --v20;
  }
  while ( v20 );
  v21 = *(_QWORD **)(a1 + 416);
  v22 = (_QWORD *)*v21;
  while ( v22 != v21 )
  {
    v23 = (_QWORD *)v22[5];
    for ( k = (_QWORD *)*v23; k != v23; k = (_QWORD *)*k )
      sub_1800F82A8(k[2], a2);
    v25 = (__int64 **)v22[2];
    if ( *((_BYTE *)v25 + 25) )
    {
      for ( m = v22[1]; !*(_BYTE *)(m + 25) && v22 == *(_QWORD **)(m + 16); m = *(_QWORD *)(m + 8) )
        v22 = (_QWORD *)m;
      v22 = (_QWORD *)m;
    }
    else
    {
      v22 = (_QWORD *)v22[2];
      for ( n = *v25; !*((_BYTE *)n + 25); n = (__int64 *)*n )
        v22 = n;
    }
  }
  v28 = v37;
  if ( v37 && !_InterlockedDecrement(v37 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
    if ( !_InterlockedDecrement(v28 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
  }
}
