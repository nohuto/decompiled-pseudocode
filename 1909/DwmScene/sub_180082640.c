/*
 * XREFs of sub_180082640 @ 0x180082640
 * Callers:
 *     sub_18000F808 @ 0x18000F808 (sub_18000F808.c)
 *     sub_180012280 @ 0x180012280 (sub_180012280.c)
 *     sub_180012480 @ 0x180012480 (sub_180012480.c)
 *     sub_18006EA40 @ 0x18006EA40 (sub_18006EA40.c)
 *     sub_180082948 @ 0x180082948 (sub_180082948.c)
 *     sub_1800B8E94 @ 0x1800B8E94 (sub_1800B8E94.c)
 *     sub_1800B9094 @ 0x1800B9094 (sub_1800B9094.c)
 *     sub_1800B9290 @ 0x1800B9290 (sub_1800B9290.c)
 *     sub_1800B948C @ 0x1800B948C (sub_1800B948C.c)
 *     sub_1800B9688 @ 0x1800B9688 (sub_1800B9688.c)
 *     sub_1800DA494 @ 0x1800DA494 (sub_1800DA494.c)
 * Callees:
 *     sub_18000FC30 @ 0x18000FC30 (sub_18000FC30.c)
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18007B288 @ 0x18007B288 (sub_18007B288.c)
 *     sub_180086B30 @ 0x180086B30 (sub_180086B30.c)
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_180082640(__int64 a1, _QWORD **a2)
{
  volatile signed __int32 *v4; // rbx
  char *v5; // r14
  char *v6; // r12
  __int64 v7; // rax
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rcx
  char *v10; // rdx
  volatile signed __int32 *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v21; // [rsp+28h] [rbp-59h]
  __int64 v22; // [rsp+30h] [rbp-51h]
  __int128 v23; // [rsp+48h] [rbp-39h] BYREF
  __int64 v24; // [rsp+58h] [rbp-29h]
  __int64 v25; // [rsp+70h] [rbp-11h] BYREF
  __int64 v26; // [rsp+78h] [rbp-9h]
  __int64 v27; // [rsp+80h] [rbp-1h]
  __int64 v28; // [rsp+88h] [rbp+7h] BYREF
  __int64 v29; // [rsp+90h] [rbp+Fh]

  v24 = -2LL;
  sub_180087524(a1);
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v4 = (volatile signed __int32 *)a2[1];
  }
  v21 = (__int64)*a2;
  v5 = *(char **)(a1 + 376);
  v6 = *(char **)(a1 + 384);
  if ( v5 != v6 )
  {
    v7 = (__int64)*a2;
    do
    {
      v8 = (volatile signed __int32 *)*((_QWORD *)v5 + 1);
      if ( v8 )
      {
        _InterlockedIncrement(v8 + 2);
        v8 = (volatile signed __int32 *)*((_QWORD *)v5 + 1);
      }
      v9 = *(_QWORD *)v5;
      v22 = *(_QWORD *)v5;
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
          if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
          v9 = v22;
        }
        v7 = v21;
      }
      if ( v7 == v9 )
        break;
      v5 += 16;
    }
    while ( v5 != v6 );
  }
  if ( v4 )
  {
    if ( !_InterlockedDecrement(v4 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( !_InterlockedDecrement(v4 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v10 = *(char **)(a1 + 384);
  if ( v5 != v10 )
    return 0;
  if ( *(char **)(a1 + 392) == v10 )
  {
    sub_18000FC30((char **)(a1 + 376), v10, a2);
  }
  else
  {
    *(_QWORD *)v10 = 0LL;
    *((_QWORD *)v10 + 1) = 0LL;
    v11 = (volatile signed __int32 *)a2[1];
    if ( v11 )
      _InterlockedIncrement(v11 + 2);
    *(_QWORD *)v10 = *a2;
    *((_QWORD *)v10 + 1) = a2[1];
    *(_QWORD *)(a1 + 384) += 16LL;
  }
  sub_180086B30(a1);
  (*(void (__fastcall **)(_QWORD))(**a2 + 104LL))(*a2);
  (*(void (__fastcall **)(_QWORD))(**a2 + 136LL))(*a2);
  v12 = *(_QWORD *)(a1 + 24);
  if ( v12 )
  {
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    sub_18007B288(v12, &v25);
    v13 = 0;
    v14 = v25;
    if ( (v26 - v25) >> 4 )
    {
      v15 = 0LL;
      do
      {
        v16 = 2 * v15;
        v17 = *(volatile signed __int32 **)(v14 + 8 * v16 + 8);
        if ( v17 )
        {
          _InterlockedIncrement(v17 + 2);
          v17 = *(volatile signed __int32 **)(v14 + 8 * v16 + 8);
        }
        v18 = *(_QWORD *)(v14 + 8 * v16);
        v28 = 0LL;
        v29 = 0LL;
        sub_1800632D0(v18 + 24, &v28);
        v19 = (__int64)*a2;
        v23 = 0LL;
        if ( v17 )
          _InterlockedIncrement(v17 + 2);
        *(_QWORD *)&v23 = v18;
        *((_QWORD *)&v23 + 1) = v17;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v19 + 88LL))(v19, &v23);
        if ( (_BYTE)v29 )
          sub_180063778(v28);
        if ( v17 )
        {
          if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
            if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          }
        }
        ++v13;
        v14 = v25;
        v15 = v13;
      }
      while ( v13 < (unsigned __int64)((v26 - v25) >> 4) );
    }
    sub_1800113D8(&v25);
  }
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**a2 + 120LL))(*a2, **a2);
  return 1;
}
