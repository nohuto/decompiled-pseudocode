/*
 * XREFs of sub_1800F964C @ 0x1800F964C
 * Callers:
 *     sub_1800AEF3C @ 0x1800AEF3C (sub_1800AEF3C.c)
 *     sub_1800AF450 @ 0x1800AF450 (sub_1800AF450.c)
 *     sub_1800DDA58 @ 0x1800DDA58 (sub_1800DDA58.c)
 *     ?do_while@details@Concurrency@@YA?AV?$task@_N@2@V?$function@$$A6A?AV?$task@_N@Concurrency@@XZ@std@@@Z @ 0x1800DE270 (-do_while@details@Concurrency@@YA-AV-$task@_N@2@V-$function@$$A6A-AV-$task@_N@Concurrency@@XZ@st.c)
 *     sub_18010AF60 @ 0x18010AF60 (sub_18010AF60.c)
 * Callees:
 *     sub_18006A4A4 @ 0x18006A4A4 (sub_18006A4A4.c)
 *     sub_1800D55F0 @ 0x1800D55F0 (sub_1800D55F0.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_1800F964C(__int64 *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v6; // r8
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h]
  __int128 v20; // [rsp+58h] [rbp-18h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v6 = sub_18006A4A4((_QWORD *)*a2, &v16);
  v20 = 0LL;
  v7 = v6[1];
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v20 = *(_OWORD *)v6;
        break;
      }
    }
  }
  v9 = v17;
  if ( v17 && _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v9 + 8LL))(v9, v7, v6);
  if ( (_QWORD)v20 )
  {
    v10 = sub_1800D55F0(v20, &v18, a3, a2);
    v11 = *v10;
    v7 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    *a1 = v11;
    v12 = (volatile signed __int32 *)a1[1];
    a1[1] = v7;
    if ( v12 && _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = v19;
    if ( v19 && _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  if ( *((_QWORD *)&v20 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v20 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v14 = *((_QWORD *)&v20 + 1);
      (***((void (__fastcall ****)(_QWORD, __int64, _QWORD *))&v20 + 1))(*((_QWORD *)&v20 + 1), v7, v6);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v20 + 1) + 8LL))(*((_QWORD *)&v20 + 1));
    }
  }
  return a1;
}
