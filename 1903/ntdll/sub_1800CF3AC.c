/*
 * XREFs of sub_1800CF3AC @ 0x1800CF3AC
 * Callers:
 *     sub_1800CF288 @ 0x1800CF288 (sub_1800CF288.c)
 * Callees:
 *     sub_18001B784 @ 0x18001B784 (sub_18001B784.c)
 *     sub_18007F53C @ 0x18007F53C (sub_18007F53C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800D89D0 @ 0x1800D89D0 (sub_1800D89D0.c)
 */

__int64 __fastcall sub_1800CF3AC(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(__int64 *, _QWORD *, __int64, __int64, _QWORD),
        int *a6)
{
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rbx
  int v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h] BYREF

  v13 = 0LL;
  sub_18007F53C(a1, a3, a4, &v15, &v12);
  v8 = sub_18001B784(a2, v15, v12, 0, &v13);
  *a6 = v8;
  if ( v8 < 0 )
    return v13;
  if ( byte_18017A298 )
    sub_1800D89D0(*(_QWORD *)(a1 + 48), a2[6], v13, 1, (__int64)&v13);
  if ( !a5 )
    return v13;
  v9 = *(_QWORD *)(a1 + 48);
  v10 = v13;
  v14 = 0LL;
  a5(&v14, a2, v13, v9, 0LL);
  if ( v14 )
    return v14;
  return v10;
}
