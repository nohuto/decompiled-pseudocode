/*
 * XREFs of sub_18008FC50 @ 0x18008FC50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180090804 @ 0x180090804 (sub_180090804.c)
 *     sub_18012404C @ 0x18012404C (sub_18012404C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008FC50(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  volatile signed __int32 *v7; // rdi
  __int64 v8; // r10
  __int64 v9; // r8
  signed __int32 v10; // eax
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int128 v14; // [rsp+20h] [rbp-50h] BYREF
  _QWORD *v15; // [rsp+30h] [rbp-40h]
  __int64 v16; // [rsp+38h] [rbp-38h]
  volatile signed __int32 *v17; // [rsp+40h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-28h]
  __int128 v19; // [rsp+50h] [rbp-20h]

  v18 = -2LL;
  v5 = a1;
  v15 = a3;
  v16 = 0LL;
  v17 = 0LL;
  v6 = *a3;
  v7 = (volatile signed __int32 *)a3[1];
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = (volatile signed __int32 *)a3[1];
  }
  v16 = v6;
  v17 = v7;
  if ( v6 )
    v8 = *(_QWORD *)(v6 + 152);
  else
    v8 = *(_QWORD *)(a1 + 32);
  if ( *(_WORD *)(a1 + 24) != 511 )
  {
    v19 = 0LL;
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 + 8);
        if ( !v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
        {
          v19 = *(_OWORD *)(a1 + 8);
          break;
        }
      }
    }
    if ( (_QWORD)v19 )
    {
      v14 = 0LL;
      if ( v7 )
        _InterlockedIncrement(v7 + 2);
      sub_180090804(v19, &v14, *(unsigned __int16 *)(a1 + 24), v8, v6, v7, v15, v16, v17, v18);
    }
    if ( *((_QWORD *)&v19 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL)) )
      {
        v11 = *((_QWORD *)&v19 + 1);
        (***((void (__fastcall ****)(_QWORD, __int64))&v19 + 1))(*((_QWORD *)&v19 + 1), v5);
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v11 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
      }
    }
  }
  sub_18012404C(a2, v5);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v12 = (volatile signed __int32 *)a3[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return a2;
}
