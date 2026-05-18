/*
 * XREFs of sub_1800CEB18 @ 0x1800CEB18
 * Callers:
 *     sub_1800D2674 @ 0x1800D2674 (sub_1800D2674.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CEB18(
        void (__fastcall ****a1)(_QWORD, _QWORD),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  _QWORD *v8; // rax
  void (__fastcall ****v9)(_QWORD, __int64); // r8
  void (__fastcall ***v10)(_QWORD, __int64); // rdx
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  void (__fastcall ***v13)(_QWORD, __int64); // [rsp+50h] [rbp+8h] BYREF

  v8 = (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD))(*a1)[6])(a1, &v13);
  v9 = a1 + 12;
  if ( a1 + 12 != v8 )
  {
    v10 = (void (__fastcall ***)(_QWORD, __int64))*v8;
    *v8 = 0LL;
    v11 = *v9;
    *v9 = v10;
    if ( v11 )
      (**v11)(v11, 1LL);
  }
  if ( v13 )
    (**v13)(v13, 1LL);
  return ((__int64 (__fastcall *)(_QWORD, __int64))(*a1)[7])(a1, a2);
}
