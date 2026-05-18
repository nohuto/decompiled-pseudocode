/*
 * XREFs of sub_180094A78 @ 0x180094A78
 * Callers:
 *     sub_18009637C @ 0x18009637C (sub_18009637C.c)
 *     sub_1800963AC @ 0x1800963AC (sub_1800963AC.c)
 *     sub_1800963DC @ 0x1800963DC (sub_1800963DC.c)
 *     sub_18009640C @ 0x18009640C (sub_18009640C.c)
 * Callees:
 *     sub_1800D288C @ 0x1800D288C (sub_1800D288C.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180094A78(__int64 a1, _QWORD *a2, int a3)
{
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rdx
  char v8; // di
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int64 v14; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+38h] [rbp-20h] BYREF
  volatile signed __int32 *v17; // [rsp+40h] [rbp-18h]

  if ( !a3 || *(_QWORD *)(a1 + 136) )
  {
    v6 = *(_QWORD *)(a1 + 144);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v6 = *(_QWORD *)(a1 + 144);
    }
    v9 = *(_QWORD *)(a1 + 136);
    v7 = &v14;
    v14 = v9;
    v8 = 6;
    v15 = v6;
  }
  else
  {
    v5 = (__int64 *)sub_1800D288C(a1, &v16);
    v6 = v15;
    v7 = v5;
    v8 = 5;
    v9 = *v5;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v10 = v7[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v6 = v15;
  }
  *a2 = v9;
  a2[1] = v7[1];
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
      {
        v11 = v15;
        (**(void (__fastcall ***)(__int64))v15)(v15);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  if ( (v8 & 1) != 0 )
  {
    v12 = v17;
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
  }
  return a2;
}
