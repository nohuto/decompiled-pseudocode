/*
 * XREFs of sub_180075380 @ 0x180075380
 * Callers:
 *     sub_180075610 @ 0x180075610 (sub_180075610.c)
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 * Callees:
 *     sub_180016B94 @ 0x180016B94 (sub_180016B94.c)
 *     sub_180073018 @ 0x180073018 (sub_180073018.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180075380(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rdx
  signed __int32 v10; // eax
  __int64 *v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int128 v19; // [rsp+28h] [rbp-29h] BYREF
  __int128 v20; // [rsp+38h] [rbp-19h] BYREF
  __int64 v21; // [rsp+48h] [rbp-9h]
  _QWORD *v22; // [rsp+50h] [rbp-1h]
  __int64 v23; // [rsp+58h] [rbp+7h] BYREF
  __int64 v24; // [rsp+68h] [rbp+17h] BYREF
  __int128 v25; // [rsp+78h] [rbp+27h]

  v21 = -2LL;
  v22 = a2;
  v4 = *a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(*a2 + 64LL);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v5 = *(_QWORD *)(v4 + 56);
        v6 = *(volatile signed __int32 **)(v4 + 64);
        break;
      }
    }
  }
  v25 = 0LL;
  v9 = *(_QWORD *)(v5 + 80);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
      {
        v25 = *(_OWORD *)(v5 + 72);
        break;
      }
    }
  }
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v19 = 0LL;
  if ( *((_QWORD *)&v25 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 12LL));
  v19 = v25;
  sub_180073018((__int64 **)(a1 + 728), (__int64)&v23, &v19);
  v11 = (__int64 *)(v23 + 48);
  v12 = *(_QWORD **)(v23 + 56);
  if ( *(_QWORD **)(v23 + 64) == v12 )
  {
    sub_180016B94(v11, v12, a2);
  }
  else
  {
    *v12 = 0LL;
    v12[1] = 0LL;
    *v12 = *a2;
    v12[1] = a2[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    v11[1] += 16LL;
  }
  v13 = *((_QWORD *)&v19 + 1);
  if ( *((_QWORD *)&v19 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  v20 = 0LL;
  if ( *((_QWORD *)&v25 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 12LL));
  v20 = v25;
  sub_180073018((__int64 **)(a1 + 728), (__int64)&v24, &v20);
  v14 = (__int64)(*(_QWORD *)(v24 + 56) - *(_QWORD *)(v24 + 48)) >> 4;
  v15 = *((_QWORD *)&v20 + 1);
  if ( *((_QWORD *)&v20 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  }
  if ( *((_QWORD *)&v25 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v25 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v16 = *((_QWORD *)&v25 + 1);
      (***((void (__fastcall ****)(_QWORD))&v25 + 1))(*((_QWORD *)&v25 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v25 + 1) + 8LL))(*((_QWORD *)&v25 + 1));
    }
  }
  v17 = (volatile signed __int32 *)a2[1];
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return v14 - 1;
}
