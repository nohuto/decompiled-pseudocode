/*
 * XREFs of sub_18008BE6C @ 0x18008BE6C
 * Callers:
 *     sub_180085C60 @ 0x180085C60 (sub_180085C60.c)
 *     sub_18008A168 @ 0x18008A168 (sub_18008A168.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_180088668 @ 0x180088668 (sub_180088668.c)
 *     sub_1800887E4 @ 0x1800887E4 (sub_1800887E4.c)
 *     sub_18008DEA0 @ 0x18008DEA0 (sub_18008DEA0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18008BE6C(__int64 a1, _QWORD *a2)
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
    sub_18000E4E8(v19);
    v9 = sub_18000E4E8(v18);
    sub_180027880(v22, v9, 920, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v22;
  }
  if ( *(_QWORD *)(*a2 + 368LL) )
  {
    v11 = *(_QWORD *)(*a2 + 368LL);
    sub_18008DEA0(a1 + 120, &v10, &v11);
    if ( v10 != *(_QWORD *)(a1 + 128) )
    {
      sub_18000E4E8(v21);
      v8 = sub_18000E4E8(v20);
      sub_180027880(pExceptionObject, v8, 926, (__int64)v21, 0);
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
  sub_1800887E4(a1 + 128, **(_QWORD **)(a1 + 128), v12);
  result = sub_180088668(
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
