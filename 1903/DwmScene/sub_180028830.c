/*
 * XREFs of sub_180028830 @ 0x180028830
 * Callers:
 *     sub_180028A70 @ 0x180028A70 (sub_180028A70.c)
 * Callees:
 *     sub_18000DC70 @ 0x18000DC70 (sub_18000DC70.c)
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     sub_180029B04 @ 0x180029B04 (sub_180029B04.c)
 *     sub_18002CA10 @ 0x18002CA10 (sub_18002CA10.c)
 *     sub_180064AEC @ 0x180064AEC (sub_180064AEC.c)
 *     sub_180068920 @ 0x180068920 (sub_180068920.c)
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180028830(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  int v5; // ebx
  int v6; // r8d
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  __int128 v12; // [rsp+38h] [rbp-39h] BYREF
  __int64 v13[6]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v14; // [rsp+78h] [rbp+7h] BYREF
  __int64 v15; // [rsp+88h] [rbp+17h] BYREF
  volatile signed __int32 *v16; // [rsp+90h] [rbp+1Fh]
  __int64 v17; // [rsp+98h] [rbp+27h] BYREF
  volatile signed __int32 *v18; // [rsp+A0h] [rbp+2Fh]

  v13[4] = -2LL;
  v13[5] = (__int64)a2;
  v15 = 0LL;
  v16 = 0LL;
  result = sub_180029B04(a1, &v15);
  if ( v15 )
  {
    v17 = 0LL;
    v18 = 0LL;
    *(_QWORD *)&v12 = v13;
    v13[2] = 0LL;
    v13[3] = 15LL;
    LOBYTE(v13[0]) = 0;
    sub_18000E118(v13, 0x18uLL, 0LL, "RenderOutput ColorBuffer");
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    sub_18002CA10((unsigned int)&v17, (unsigned int)&v15, v6, v5, (__int64)a2, (__int64)v13);
    v7 = sub_18006CD84(v15);
    v14 = 0uLL;
    sub_18000DC70(v7, &v14, 0);
    sub_180064AEC(v14, &v17);
    v12 = v14;
    v14 = 0uLL;
    result = sub_180068920(a1, &v12);
    v8 = (volatile signed __int32 *)*((_QWORD *)&v14 + 1);
    if ( *((_QWORD *)&v14 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        result = (unsigned int)_InterlockedDecrement(v8 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    v9 = v18;
    if ( v18 )
    {
      result = (unsigned int)_InterlockedDecrement(v18 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        result = (unsigned int)_InterlockedDecrement(v9 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
  }
  v10 = v16;
  if ( v16 )
  {
    result = (unsigned int)_InterlockedDecrement(v16 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return result;
}
