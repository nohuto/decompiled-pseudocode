/*
 * XREFs of sub_18008965C @ 0x18008965C
 * Callers:
 *     sub_180089824 @ 0x180089824 (sub_180089824.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_180089B4C @ 0x180089B4C (sub_180089B4C.c)
 *     sub_18008AA04 @ 0x18008AA04 (sub_18008AA04.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008965C(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 *v13; // rax
  __int128 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v16; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  _QWORD v18[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[4]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v21; // [rsp+E0h] [rbp-20h] BYREF

  v17 = -2LL;
  v16 = a5;
  v21 = 0uLL;
  v15 = 0LL;
  v8 = a5[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a5[1];
  }
  *(_QWORD *)&v15 = *a5;
  *((_QWORD *)&v15 + 1) = v8;
  sub_18008AA04(a1, &v21, &v15);
  if ( !(_QWORD)v21 )
  {
    sub_18000E498(v19);
    v13 = sub_18000E498(v18);
    sub_180027770(pExceptionObject, v13, 269, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v14 = 0LL;
  v9 = *((_QWORD *)&v21 + 1);
  if ( *((_QWORD *)&v21 + 1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL));
    v9 = *((_QWORD *)&v21 + 1);
  }
  v14 = v21;
  sub_180089B4C(a1, a2, a3, (unsigned int)&v14, (__int64)a5);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
    {
      v10 = *((_QWORD *)&v21 + 1);
      (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
    }
  }
  v11 = (volatile signed __int32 *)a5[1];
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
