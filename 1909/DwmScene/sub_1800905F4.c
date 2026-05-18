/*
 * XREFs of sub_1800905F4 @ 0x1800905F4
 * Callers:
 *     sub_18009123C @ 0x18009123C (sub_18009123C.c)
 *     sub_180110B70 @ 0x180110B70 (sub_180110B70.c)
 * Callees:
 *     sub_1800906CC @ 0x1800906CC (sub_1800906CC.c)
 *     sub_1800F2D88 @ 0x1800F2D88 (sub_1800F2D88.c)
 *     sub_1800F5904 @ 0x1800F5904 (sub_1800F5904.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800905F4(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  unsigned __int16 v5; // di
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  _BYTE v9[8]; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  volatile signed __int32 *v12; // [rsp+40h] [rbp-18h]

  v3 = (_QWORD *)sub_1800906CC(a1, &v11);
  v4 = (_QWORD *)sub_1800F5904(*v3, v9);
  v5 = sub_1800F2D88(*v4, a2);
  v6 = v10;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = v12;
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return v5;
}
