/*
 * XREFs of sub_1800851A8 @ 0x1800851A8
 * Callers:
 *     sub_1800133E4 @ 0x1800133E4 (sub_1800133E4.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_18006E4D8 @ 0x18006E4D8 (sub_18006E4D8.c)
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800851A8(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf
  __int64 *v10; // rax
  _QWORD v11[3]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v12[4]; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v13[5]; // [rsp+68h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+90h] [rbp-48h] BYREF

  v11[1] = -2LL;
  v11[2] = a2;
  sub_180087524(a1);
  v4 = *(_QWORD **)(a1 + 384);
  v5 = *(_QWORD **)(a1 + 376);
  if ( v5 == v4 )
    goto LABEL_12;
  do
  {
    if ( *v5 == *a2 )
      break;
    v5 += 2;
  }
  while ( v5 != v4 );
  if ( v5 == v4 )
  {
LABEL_12:
    sub_18000E4E8(v13);
    v10 = sub_18000E4E8(v12);
    sub_18006586C(pExceptionObject, v10, 379LL, (__int64)v13, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_18006E4D8(a1 + 376, v11, (__int64)v5);
  if ( *(_BYTE *)(a1 + 104) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2);
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 112LL))(*a2);
  v7 = (volatile signed __int32 *)a2[1];
  if ( v7 )
  {
    v8 = _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    v9 = v8 == 1;
    result = (unsigned int)(v8 - 1);
    if ( v9 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
