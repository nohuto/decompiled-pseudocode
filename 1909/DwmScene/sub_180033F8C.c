/*
 * XREFs of sub_180033F8C @ 0x180033F8C
 * Callers:
 *     sub_180033B10 @ 0x180033B10 (sub_180033B10.c)
 * Callees:
 *     sub_18002328C @ 0x18002328C (sub_18002328C.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_180032E24 @ 0x180032E24 (sub_180032E24.c)
 *     sub_18006A584 @ 0x18006A584 (sub_18006A584.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _Thrd_yield @ 0x1801275D6 (_Thrd_yield.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_180033F8C(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rcx
  bool v7; // bl
  __int64 v8; // rcx
  int v9; // eax
  signed __int32 v10; // eax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h] BYREF
  volatile signed __int32 *v15; // [rsp+48h] [rbp-38h]
  _QWORD v16[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h] BYREF
  int v18; // [rsp+68h] [rbp-18h] BYREF
  _DWORD v19[2]; // [rsp+70h] [rbp-10h] BYREF

  v16[1] = -2LL;
  v19[0] = 0;
  v19[1] = 0;
  v17 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v2 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v10 + 1, v10) )
      {
        *(_QWORD *)&v13 = *(_QWORD *)(a1 + 72);
        v3 = *(_QWORD *)(a1 + 80);
        *((_QWORD *)&v13 + 1) = v3;
        goto LABEL_3;
      }
    }
  }
  v3 = *((_QWORD *)&v13 + 1);
LABEL_3:
  sub_180032E24(&v14, &v13);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 )
    {
      v4 = *((_QWORD *)&v13 + 1);
      (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
    }
  }
  v5 = *sub_18002328C(v14, v16);
  v6 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (*(int (__fastcall **)(__int64, _DWORD *, __int64 *))(*(_QWORD *)v5 + 192LL))(v5, v19, &v17) >= 0;
  v8 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v7 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 224LL))(*(_QWORD *)(a1 + 144), v17);
    sub_18006A584(a1, 0LL);
    v18 = 0;
    do
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *, __int64, _DWORD))(**(_QWORD **)(a1 + 144) + 232LL))(
             *(_QWORD *)(a1 + 144),
             v17,
             &v18,
             4LL,
             0);
      if ( v9 )
      {
        if ( v9 != 1 )
        {
          sub_1800254C0(v14, v9);
          break;
        }
        Thrd_yield();
      }
    }
    while ( !v18 );
  }
  if ( v15 )
  {
    if ( !_InterlockedDecrement(v15 + 2) )
    {
      v11 = v15;
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( !_InterlockedDecrement(v11 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
}
