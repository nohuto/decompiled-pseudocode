/*
 * XREFs of sub_1800355F0 @ 0x1800355F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002D45C @ 0x18002D45C (sub_18002D45C.c)
 *     sub_180033F18 @ 0x180033F18 (sub_180033F18.c)
 *     sub_18003E9DC @ 0x18003E9DC (sub_18003E9DC.c)
 *     sub_18003ECB4 @ 0x18003ECB4 (sub_18003ECB4.c)
 *     sub_1800D0D70 @ 0x1800D0D70 (sub_1800D0D70.c)
 *     sub_1800D0D88 @ 0x1800D0D88 (sub_1800D0D88.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800355F0(__int64 a1, __int64 *a2, unsigned int a3, __int128 *a4, unsigned __int8 a5)
{
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  __int64 v17; // rax
  __int64 v19; // [rsp+30h] [rbp-41h] BYREF
  volatile signed __int32 *v20; // [rsp+38h] [rbp-39h]
  __int64 v21; // [rsp+40h] [rbp-31h] BYREF
  __int64 v22; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-21h] BYREF
  __int128 v24; // [rsp+60h] [rbp-11h] BYREF

  v23[1] = -2LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = *a2;
  if ( *a2 )
  {
    v19 = 0LL;
    v20 = 0LL;
    sub_180033F18((__int64 *)(v11 + 128), &v19, *(_DWORD *)(a1 + 88));
    v12 = v19;
    v8 = *(_QWORD *)sub_18003ECB4(v19, &v21);
    v13 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v9 = *sub_18002D45C(v12, &v22);
    v14 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v10 = *(_QWORD *)sub_18003E9DC(v12, v23);
    v15 = v23[0];
    if ( v23[0] )
    {
      v23[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        v16 = v20;
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
  }
  v24 = *a4;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 344LL))(*(_QWORD *)(a1 + 144), v8);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 288LL))(*(_QWORD *)(a1 + 144), v9, a5);
  (*(void (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(**(_QWORD **)(a1 + 144) + 280LL))(
    *(_QWORD *)(a1 + 144),
    v10,
    &v24,
    a3);
  v17 = sub_1800D0D88();
  return sub_1800D0D70(v17, 4LL, 1LL, 1LL);
}
