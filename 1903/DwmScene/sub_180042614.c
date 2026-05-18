/*
 * XREFs of sub_180042614 @ 0x180042614
 * Callers:
 *     sub_180043040 @ 0x180043040 (sub_180043040.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18002317C @ 0x18002317C (sub_18002317C.c)
 *     sub_1800253B0 @ 0x1800253B0 (sub_1800253B0.c)
 *     sub_180042784 @ 0x180042784 (sub_180042784.c)
 *     sub_180065810 @ 0x180065810 (sub_180065810.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180042614(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // ebx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // [rsp+28h] [rbp-A9h]
  _QWORD v17[2]; // [rsp+40h] [rbp-91h] BYREF
  _QWORD v18[4]; // [rsp+50h] [rbp-81h] BYREF
  _QWORD v19[4]; // [rsp+70h] [rbp-61h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+90h] [rbp-41h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-1h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+7h] BYREF

  v17[1] = -2LL;
  v22 = 0LL;
  sub_18002317C(a2, &v22);
  v21 = 0LL;
  v9 = *a5;
  if ( *a5 == a5[1] )
    v10 = (unsigned int)(*((_DWORD *)a5 + 8) - *((_DWORD *)a5 + 6));
  else
    v10 = a5[1] - v9;
  if ( v9 == a5[1] )
    v9 = a5[3];
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64 *))(*(_QWORD *)v22 + 88LL))(
          v22,
          a3,
          a4,
          v9,
          v10,
          &v21);
  sub_1800253B0(a2, v11);
  if ( v11 < 0 )
  {
    sub_18000E498(v19);
    v15 = (unsigned int)sub_18000E498(v18);
    LOBYTE(v16) = 0;
    sub_180065810((unsigned int)pExceptionObject, v15, 251, v11, (__int64)v19, v16);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v17[0] = v21;
  v21 = 0LL;
  result = sub_180042784(a1, v17);
  v13 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return result;
}
