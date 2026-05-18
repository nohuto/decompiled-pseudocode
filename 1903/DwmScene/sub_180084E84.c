/*
 * XREFs of sub_180084E84 @ 0x180084E84
 * Callers:
 *     sub_180085B50 @ 0x180085B50 (sub_180085B50.c)
 * Callees:
 *     sub_18006E3C8 @ 0x18006E3C8 (sub_18006E3C8.c)
 *     sub_180083688 @ 0x180083688 (sub_180083688.c)
 *     sub_180085AE4 @ 0x180085AE4 (sub_180085AE4.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180084E84(__int64 a1, __int64 *a2)
{
  _QWORD *i; // r8
  __int64 v5; // rbx
  __int64 v6; // rdx
  signed __int32 v7; // eax
  __int64 result; // rax
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rcx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  _OWORD v16[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v17; // [rsp+50h] [rbp-30h]
  __int64 v18; // [rsp+60h] [rbp-20h] BYREF
  volatile signed __int32 *v19; // [rsp+68h] [rbp-18h]

  sub_180087414(a1);
  for ( i = *(_QWORD **)(a1 + 32); i != *(_QWORD **)(a1 + 40); i += 2 )
  {
    if ( *i == *a2 )
      break;
  }
  sub_18006E3C8(a1 + 32, &v15, (__int64)i);
  v5 = *a2;
  sub_180087340(*a2);
  v17 = 0LL;
  v6 = *(_QWORD *)(v5 + 120);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v6 + 8);
      if ( !v7 )
        break;
      if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) )
      {
        v17 = *(_OWORD *)(v5 + 112);
        break;
      }
    }
  }
  v18 = 0LL;
  v19 = 0LL;
  result = (__int64)sub_180083688(*a2, &v18);
  if ( (_QWORD)v17 )
  {
    sub_180085AE4(v17, &v18);
    v16[1] = 0LL;
    v9 = *a2;
    result = sub_180087414(*a2);
    *(_QWORD *)(v9 + 112) = 0LL;
    v10 = *(volatile signed __int32 **)(v9 + 120);
    *(_QWORD *)(v9 + 120) = 0LL;
    if ( v10 )
    {
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = v18;
  if ( v18 )
  {
    sub_180087414(v18);
    if ( *((_QWORD *)&v17 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 12LL));
    *(_QWORD *)(v11 + 112) = v17;
    v12 = *(volatile signed __int32 **)(v11 + 120);
    *(_QWORD *)(v11 + 120) = *((_QWORD *)&v17 + 1);
    if ( v12 && _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    v16[0] = 0LL;
    result = sub_180085AE4(*a2, v16);
  }
  if ( v19 )
  {
    result = (unsigned int)_InterlockedDecrement(v19 + 2);
    if ( !(_DWORD)result )
    {
      v13 = v19;
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  if ( *((_QWORD *)&v17 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v14 = *((_QWORD *)&v17 + 1);
      (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
    }
  }
  return result;
}
