/*
 * XREFs of sub_180037470 @ 0x180037470
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180038AB0 @ 0x180038AB0 (sub_180038AB0.c)
 *     sub_18003DC5C @ 0x18003DC5C (sub_18003DC5C.c)
 *     sub_180064338 @ 0x180064338 (sub_180064338.c)
 *     sub_180064438 @ 0x180064438 (sub_180064438.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_1800D0D70 @ 0x1800D0D70 (sub_1800D0D70.c)
 *     sub_1800D0D88 @ 0x1800D0D88 (sub_1800D0D88.c)
 *     sub_1800D289C @ 0x1800D289C (sub_1800D289C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180037470(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 result; // rax
  volatile signed __int32 *v16; // rbx
  signed __int32 v17; // eax
  bool v18; // zf
  unsigned int v19; // eax
  _QWORD v20[3]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v21[4]; // [rsp+48h] [rbp-81h] BYREF
  _QWORD v22[5]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v24; // [rsp+D0h] [rbp+7h] BYREF
  volatile signed __int32 *v25; // [rsp+D8h] [rbp+Fh]

  v20[1] = -2LL;
  v8 = sub_180064338(*a2);
  v10 = sub_1800D0D88(v9);
  sub_1800D0D70(v10, v8, 4LL, 1LL);
  v24 = 0LL;
  v25 = 0LL;
  sub_1800D289C(*a2, &v24, *(unsigned int *)(a1 + 88));
  v11 = sub_180064438(*a2);
  if ( v11 == 8 )
  {
    v12 = *(__int64 **)sub_18003DC5C(v24, v20);
    v14 = (__int64 *)v20[0];
    if ( v20[0] )
    {
      v20[0] = 0LL;
      v13 = *v14;
      goto LABEL_7;
    }
  }
  else
  {
    if ( v11 != 11 )
    {
      sub_18000E4E8(v22);
      v19 = (unsigned int)sub_18000E4E8(v21);
      sub_18006586C((unsigned int)pExceptionObject, v19, 417, (unsigned int)v22, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v12 = *(__int64 **)(v24 + 104);
    v20[2] = v12;
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64 *))(*v12 + 8))(v12);
      v13 = *v12;
      v14 = v12;
LABEL_7:
      (*(void (__fastcall **)(__int64 *))(v13 + 16))(v14);
    }
  }
  result = sub_180038AB0(a1, v12, a3, a4);
  v16 = v25;
  if ( v25 )
  {
    v17 = _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF);
    v18 = v17 == 1;
    result = (unsigned int)(v17 - 1);
    if ( v18 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      result = (unsigned int)_InterlockedDecrement(v16 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  return result;
}
