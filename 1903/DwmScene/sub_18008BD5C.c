/*
 * XREFs of sub_18008BD5C @ 0x18008BD5C
 * Callers:
 *     sub_180085B50 @ 0x180085B50 (sub_180085B50.c)
 *     sub_18008A058 @ 0x18008A058 (sub_18008A058.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_180088558 @ 0x180088558 (sub_180088558.c)
 *     sub_1800886D4 @ 0x1800886D4 (sub_1800886D4.c)
 *     sub_18008DD90 @ 0x18008DD90 (sub_18008DD90.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18008BD5C(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v12[2]; // [rsp+48h] [rbp-C0h] BYREF
  volatile signed __int32 *v13; // [rsp+58h] [rbp-B0h]
  __int64 v14; // [rsp+60h] [rbp-A8h]
  _QWORD *v15; // [rsp+68h] [rbp-A0h]
  __int128 v16; // [rsp+70h] [rbp-98h]
  __int64 v17; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v18[4]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v19[4]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v20[4]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v21[5]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v22[8]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD pExceptionObject[10]; // [rsp+158h] [rbp+50h] BYREF

  v14 = -2LL;
  v15 = a2;
  if ( !*a2 )
  {
    sub_18000E498(v19);
    v9 = sub_18000E498(v18);
    sub_180027770(v22, v9, 920, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v22;
  }
  if ( *(_QWORD *)(*a2 + 368LL) )
  {
    v11 = *(_QWORD *)(*a2 + 368LL);
    sub_18008DD90(a1 + 120, &v10, &v11);
    if ( v10 != *(_QWORD *)(a1 + 128) )
    {
      sub_18000E498(v21);
      v8 = sub_18000E498(v20);
      sub_180027770(pExceptionObject, v8, 926, (__int64)v21, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
  }
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 3);
    v4 = (volatile signed __int32 *)a2[1];
  }
  v5 = *a2;
  v12[0] = *(_QWORD *)(*a2 + 368LL);
  v12[1] = v5;
  v13 = v4;
  v16 = 0LL;
  sub_1800886D4(a1 + 128, **(_QWORD **)(a1 + 128), v12);
  result = sub_180088558(
             (_QWORD *)(a1 + 120),
             (__int64)&v17,
             (unsigned __int8 *)(**(_QWORD **)(a1 + 128) + 16LL),
             **(__int64 ***)(a1 + 128));
  if ( v13 )
  {
    result = (unsigned int)_InterlockedDecrement(v13 + 3);
    if ( !(_DWORD)result )
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  v7 = (volatile signed __int32 *)a2[1];
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
