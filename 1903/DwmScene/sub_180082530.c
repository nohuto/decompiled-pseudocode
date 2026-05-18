/*
 * XREFs of sub_180082530 @ 0x180082530
 * Callers:
 *     sub_18000F7B8 @ 0x18000F7B8 (sub_18000F7B8.c)
 *     sub_180012230 @ 0x180012230 (sub_180012230.c)
 *     sub_180012430 @ 0x180012430 (sub_180012430.c)
 *     sub_18006E930 @ 0x18006E930 (sub_18006E930.c)
 *     sub_180082838 @ 0x180082838 (sub_180082838.c)
 *     sub_1800B8D84 @ 0x1800B8D84 (sub_1800B8D84.c)
 *     sub_1800B8F84 @ 0x1800B8F84 (sub_1800B8F84.c)
 *     sub_1800B9180 @ 0x1800B9180 (sub_1800B9180.c)
 *     sub_1800B937C @ 0x1800B937C (sub_1800B937C.c)
 *     sub_1800B9578 @ 0x1800B9578 (sub_1800B9578.c)
 *     sub_1800DA384 @ 0x1800DA384 (sub_1800DA384.c)
 * Callees:
 *     sub_18000FBE0 @ 0x18000FBE0 (sub_18000FBE0.c)
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18007B178 @ 0x18007B178 (sub_18007B178.c)
 *     sub_180086A20 @ 0x180086A20 (sub_180086A20.c)
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_180082530(__int64 a1, _QWORD **a2)
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
  sub_180087414(a1);
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
    sub_18000FBE0((char **)(a1 + 376), v10, a2);
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
  sub_180086A20(a1);
  (*(void (__fastcall **)(_QWORD))(**a2 + 104LL))(*a2);
  (*(void (__fastcall **)(_QWORD))(**a2 + 136LL))(*a2);
  v12 = *(_QWORD *)(a1 + 24);
  if ( v12 )
  {
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    sub_18007B178(v12, &v25);
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
        sub_1800631C0(v18 + 24, &v28);
        v19 = (__int64)*a2;
        v23 = 0LL;
        if ( v17 )
          _InterlockedIncrement(v17 + 2);
        *(_QWORD *)&v23 = v18;
        *((_QWORD *)&v23 + 1) = v17;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v19 + 88LL))(v19, &v23);
        if ( (_BYTE)v29 )
          sub_180063668(v28);
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
    sub_180011388(&v25);
  }
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**a2 + 120LL))(*a2, **a2);
  return 1;
}
