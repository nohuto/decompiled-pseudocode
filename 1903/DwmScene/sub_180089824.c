/*
 * XREFs of sub_180089824 @ 0x180089824
 * Callers:
 *     sub_180013C00 @ 0x180013C00 (sub_180013C00.c)
 *     sub_180018150 @ 0x180018150 (sub_180018150.c)
 *     sub_180082838 @ 0x180082838 (sub_180082838.c)
 *     sub_180089A38 @ 0x180089A38 (sub_180089A38.c)
 *     sub_1800C1340 @ 0x1800C1340 (sub_1800C1340.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_18008965C @ 0x18008965C (sub_18008965C.c)
 *     sub_18008AF1C @ 0x18008AF1C (sub_18008AF1C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180089824(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v5; // r15d
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int128 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  _QWORD v20[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v21[4]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v22[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v23[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v24[8]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD pExceptionObject[14]; // [rsp+130h] [rbp+30h] BYREF

  v19 = -2LL;
  v5 = a3;
  v18 = a4;
  if ( !a3 )
  {
    sub_18000E498(v21);
    v14 = sub_18000E498(v20);
    sub_180027770(v24, v14, 246, (__int64)v21, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v24;
  }
  if ( !*a4 )
  {
    sub_18000E498(v23);
    v13 = sub_18000E498(v22);
    sub_180027770(pExceptionObject, v13, 251, (__int64)v23, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v16 = 0uLL;
  v17 = 0LL;
  v8 = a4[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a4[1];
  }
  *(_QWORD *)&v17 = *a4;
  *((_QWORD *)&v17 + 1) = v8;
  sub_18008AF1C(a1, &v16, &v17);
  v15 = 0LL;
  v9 = *((_QWORD *)&v16 + 1);
  if ( *((_QWORD *)&v16 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL));
    v9 = *((_QWORD *)&v16 + 1);
  }
  v15 = v16;
  sub_18008965C(a1, a2, v5, *(_QWORD *)(*a4 + 368LL), &v15);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
    {
      v10 = *((_QWORD *)&v16 + 1);
      (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
    }
  }
  v11 = (volatile signed __int32 *)a4[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return a2;
}
