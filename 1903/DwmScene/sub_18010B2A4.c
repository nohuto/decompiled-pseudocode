/*
 * XREFs of sub_18010B2A4 @ 0x18010B2A4
 * Callers:
 *     sub_1800DD034 @ 0x1800DD034 (sub_1800DD034.c)
 *     sub_180112680 @ 0x180112680 (sub_180112680.c)
 *     sub_180112BB0 @ 0x180112BB0 (sub_180112BB0.c)
 * Callees:
 *     sub_18006A614 @ 0x18006A614 (sub_18006A614.c)
 *     sub_1800AE8E0 @ 0x1800AE8E0 (sub_1800AE8E0.c)
 *     sub_1800B0F84 @ 0x1800B0F84 (sub_1800B0F84.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18010B2A4(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rdx
  __int64 result; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  _QWORD *v15; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  volatile signed __int32 *v18; // [rsp+50h] [rbp-10h]

  v14 = -2LL;
  v15 = a3;
  v16 = a4;
  v17 = 0LL;
  v18 = 0LL;
  sub_1800AE8E0(a1, &v17, a2);
  sub_18006A614(v17, (__int64)a3, a4, a5);
  v13 = 0LL;
  v8 = a3[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a3[1];
  }
  *(_QWORD *)&v13 = *a3;
  *((_QWORD *)&v13 + 1) = v8;
  result = sub_1800B0F84(a1, (__int64 *)&v13);
  v10 = v18;
  if ( v18 )
  {
    result = (unsigned int)_InterlockedDecrement(v18 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v10 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v11 = (volatile signed __int32 *)a3[1];
  if ( v11 )
  {
    result = (unsigned int)_InterlockedDecrement(v11 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = *(volatile signed __int32 **)(a4 + 8);
  if ( v12 )
  {
    result = (unsigned int)_InterlockedDecrement(v12 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      result = (unsigned int)_InterlockedDecrement(v12 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return result;
}
