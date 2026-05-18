/*
 * XREFs of sub_1800680C0 @ 0x1800680C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800680C0(_QWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  signed __int32 v4; // eax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 *v8; // rax
  _BYTE v9[8]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v10; // [rsp+40h] [rbp-61h]
  __int64 v11; // [rsp+48h] [rbp-59h]
  _QWORD v12[4]; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v13[5]; // [rsp+70h] [rbp-31h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+98h] [rbp-9h] BYREF
  __int128 v15; // [rsp+D8h] [rbp+37h]

  v11 = -2LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 376LL))(a1, v9);
  v15 = 0LL;
  v3 = *(_QWORD *)(v2 + 8);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(v3 + 8);
      if ( !v4 )
        break;
      if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v4 + 1, v4) )
      {
        v15 = *(_OWORD *)v2;
        break;
      }
    }
  }
  v5 = v10;
  if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, v3, v2);
  if ( !(_QWORD)v15 )
  {
    sub_18000E4E8(v13);
    v8 = sub_18000E4E8(v12);
    sub_18006586C(pExceptionObject, v8, 72LL, (__int64)v13, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  result = sub_1800DC36C(a1[26], v15, v2);
  if ( *((_QWORD *)&v15 + 1) )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v7 = *((_QWORD *)&v15 + 1);
      (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
    }
  }
  return result;
}
