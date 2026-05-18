/*
 * XREFs of sub_180098790 @ 0x180098790
 * Callers:
 *     <none>
 * Callees:
 *     sub_180097F90 @ 0x180097F90 (sub_180097F90.c)
 *     sub_18009B98C @ 0x18009B98C (sub_18009B98C.c)
 *     sub_1800A8EF0 @ 0x1800A8EF0 (sub_1800A8EF0.c)
 *     sub_180123F3C @ 0x180123F3C (sub_180123F3C.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180098790(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // xmm6_8
  volatile signed __int32 *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  __int128 v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+50h] [rbp-30h]
  volatile signed __int32 *v17; // [rsp+58h] [rbp-28h]
  _BYTE v18[8]; // [rsp+60h] [rbp-20h] BYREF
  volatile signed __int32 *v19; // [rsp+68h] [rbp-18h]

  v14 = 0uLL;
  sub_180097F90((__int64 *)&v14, a3);
  v15 = 0LL;
  if ( *((_QWORD *)&v14 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
  v6 = v14;
  v15 = v14;
  sub_18009B98C(*(_QWORD *)(a1 + 8), &v15);
  v7 = *(volatile signed __int32 **)(v6 + 144);
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = *(volatile signed __int32 **)(v6 + 144);
  }
  v16 = *(_QWORD *)(v6 + 136);
  v17 = v7;
  v8 = (_QWORD *)sub_1800A8EF0(v16, v18);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v8 + 72LL))(
    *v8,
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 16));
  v10 = v19;
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  sub_180123F3C(a2, v9);
  if ( *((_QWORD *)&v14 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v11 = *((_QWORD *)&v14 + 1);
      (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
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
