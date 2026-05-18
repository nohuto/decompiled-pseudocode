/*
 * XREFs of sub_180090F64 @ 0x180090F64
 * Callers:
 *     sub_180110D20 @ 0x180110D20 (sub_180110D20.c)
 * Callees:
 *     sub_1800F2D88 @ 0x1800F2D88 (sub_1800F2D88.c)
 *     sub_1800F5904 @ 0x1800F5904 (sub_1800F5904.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180090F64(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rax
  unsigned __int16 v9; // r14
  volatile signed __int32 *v10; // rbx
  __int64 v12; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v13; // [rsp+30h] [rbp-18h]

  v8 = (_QWORD *)sub_1800F5904(*(_QWORD *)(a1 + 120), &v12);
  v9 = sub_1800F2D88(*v8, a2);
  v10 = v13;
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return sub_180091020(a1, v9, a3, a4);
}
