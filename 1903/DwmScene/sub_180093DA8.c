/*
 * XREFs of sub_180093DA8 @ 0x180093DA8
 * Callers:
 *     sub_1800EF3D0 @ 0x1800EF3D0 (sub_1800EF3D0.c)
 *     sub_1800F0160 @ 0x1800F0160 (sub_1800F0160.c)
 * Callees:
 *     sub_1800A3AA0 @ 0x1800A3AA0 (sub_1800A3AA0.c)
 *     sub_1800A9AD4 @ 0x1800A9AD4 (sub_1800A9AD4.c)
 *     sub_1800F1E34 @ 0x1800F1E34 (sub_1800F1E34.c)
 *     sub_1800F2AC4 @ 0x1800F2AC4 (sub_1800F2AC4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180093DA8(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  __int128 v6; // [rsp+20h] [rbp-40h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h]
  _QWORD *v8; // [rsp+38h] [rbp-28h]
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF

  v7 = -2LL;
  v8 = a2;
  v9 = 0uLL;
  sub_1800A3AA0(a1, &v9, 8LL);
  sub_1800F1E34(v9, &qword_18025C578, 7LL, 256LL);
  sub_1800F2AC4(v9);
  v6 = 0LL;
  if ( *((_QWORD *)&v9 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL));
  v6 = v9;
  result = sub_1800A9AD4(*a2, &v6);
  v4 = (volatile signed __int32 *)*((_QWORD *)&v9 + 1);
  if ( *((_QWORD *)&v9 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    result = (unsigned int)_InterlockedDecrement(v5 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedDecrement(v5 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return result;
}
