/*
 * XREFs of sub_180028600 @ 0x180028600
 * Callers:
 *     sub_18000E9A0 @ 0x18000E9A0 (sub_18000E9A0.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     sub_180026770 @ 0x180026770 (sub_180026770.c)
 *     sub_180029B04 @ 0x180029B04 (sub_180029B04.c)
 *     sub_18003A940 @ 0x18003A940 (sub_18003A940.c)
 *     sub_1800687E8 @ 0x1800687E8 (sub_1800687E8.c)
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     sub_1800D06B8 @ 0x1800D06B8 (sub_1800D06B8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180028600(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx
  int v4; // r8d
  _QWORD *v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int128 v9; // [rsp+38h] [rbp-39h] BYREF
  __int128 v10; // [rsp+48h] [rbp-29h] BYREF
  __int64 v11[6]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v12; // [rsp+88h] [rbp+17h] BYREF
  __int64 v13; // [rsp+98h] [rbp+27h] BYREF
  volatile signed __int32 *v14; // [rsp+A0h] [rbp+2Fh]
  __int128 v15; // [rsp+A8h] [rbp+37h] BYREF

  v11[4] = -2LL;
  v13 = 0LL;
  v14 = 0LL;
  result = sub_180029B04(a1, &v13);
  if ( v13 )
  {
    v15 = 0uLL;
    *(_QWORD *)&v9 = v11;
    v11[2] = 0LL;
    v11[3] = 15LL;
    LOBYTE(v11[0]) = 0;
    sub_18000E118(v11, 0x18uLL, 0LL, "RenderOutput DepthBuffer");
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    sub_18003A940((unsigned int)&v15, (unsigned int)&v13, v4, v3, (__int64)v11);
    v5 = (_QWORD *)sub_18006CD84(v13);
    v12 = 0uLL;
    sub_180026770(v5, &v12, 1u);
    v10 = 0LL;
    if ( *((_QWORD *)&v15 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL));
    v10 = v15;
    sub_1800D06B8(v12, &v10, 0LL);
    v9 = v12;
    v12 = 0uLL;
    result = sub_1800687E8(a1, &v9);
    v6 = (volatile signed __int32 *)*((_QWORD *)&v12 + 1);
    if ( *((_QWORD *)&v12 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v12 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        result = (unsigned int)_InterlockedDecrement(v6 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
    v7 = (volatile signed __int32 *)*((_QWORD *)&v15 + 1);
    if ( *((_QWORD *)&v15 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        result = (unsigned int)_InterlockedDecrement(v7 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  v8 = v14;
  if ( v14 )
  {
    result = (unsigned int)_InterlockedDecrement(v14 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
