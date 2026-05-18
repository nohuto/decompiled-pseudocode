/*
 * XREFs of sub_1800989B0 @ 0x1800989B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     sub_1800F4F20 @ 0x1800F4F20 (sub_1800F4F20.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_1800989B0(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v4; // rbx
  unsigned __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  volatile signed __int32 *v20; // rbx
  __int128 v21; // [rsp+28h] [rbp-58h] BYREF
  __int128 v22; // [rsp+38h] [rbp-48h] BYREF
  __int128 v23; // [rsp+48h] [rbp-38h] BYREF
  __int128 v24; // [rsp+58h] [rbp-28h] BYREF

  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v4 = (volatile signed __int32 *)a2[1];
  }
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  sub_1800634AC(*a2 + 24LL, (__int64)a2);
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 104);
  v7 = *(_QWORD *)(a1 + 112) - v6;
  result = (unsigned __int64)((unsigned __int128)(v7 * (__int128)0x2E8BA2E8BA2E8BA3LL) >> 64) >> 63;
  v9 = v7 / 88;
  if ( v7 / 88 )
  {
    v10 = 0LL;
    do
    {
      v11 = *(_QWORD *)(v6 + v10 + 40);
      if ( v11 )
      {
        v21 = 0LL;
        v12 = a2[1];
        if ( v12 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
          v12 = a2[1];
          v11 = *(_QWORD *)(v6 + v10 + 40);
        }
        *(_QWORD *)&v21 = *a2;
        *((_QWORD *)&v21 + 1) = v12;
        sub_1800F4F20(v11, &v21);
      }
      v13 = *(_QWORD *)(v6 + v10 + 24);
      if ( v13 )
      {
        v22 = 0LL;
        v14 = a2[1];
        if ( v14 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
          v14 = a2[1];
          v13 = *(_QWORD *)(v6 + v10 + 24);
        }
        *(_QWORD *)&v22 = *a2;
        *((_QWORD *)&v22 + 1) = v14;
        sub_1800F4F20(v13, &v22);
      }
      v15 = *(_QWORD *)(v6 + v10 + 56);
      if ( v15 )
      {
        v23 = 0LL;
        v16 = a2[1];
        if ( v16 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
          v16 = a2[1];
          v15 = *(_QWORD *)(v6 + v10 + 56);
        }
        *(_QWORD *)&v23 = *a2;
        *((_QWORD *)&v23 + 1) = v16;
        sub_1800F4F20(v15, &v23);
      }
      v17 = *(_QWORD *)(v6 + v10 + 72);
      if ( v17 )
      {
        v24 = 0LL;
        v18 = a2[1];
        if ( v18 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
          v18 = a2[1];
          v17 = *(_QWORD *)(v6 + v10 + 72);
        }
        *(_QWORD *)&v24 = *a2;
        *((_QWORD *)&v24 + 1) = v18;
        sub_1800F4F20(v17, &v24);
      }
      ++v5;
      v10 += 88LL;
      v6 = *(_QWORD *)(a1 + 104);
      v19 = *(_QWORD *)(a1 + 112) - v6;
      result = (unsigned __int64)((unsigned __int128)(v19 * (__int128)0x2E8BA2E8BA2E8BA3LL) >> 64) >> 63;
      v9 = v19 / 88;
    }
    while ( v5 < v19 / 88 );
  }
  v20 = (volatile signed __int32 *)a2[1];
  if ( v20 )
  {
    result = (unsigned int)_InterlockedDecrement(v20 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v20)(v20, v9);
      result = (unsigned int)_InterlockedDecrement(v20 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  return result;
}
