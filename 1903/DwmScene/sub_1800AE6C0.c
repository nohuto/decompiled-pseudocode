/*
 * XREFs of sub_1800AE6C0 @ 0x1800AE6C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800656A8 @ 0x1800656A8 (sub_1800656A8.c)
 *     sub_18006CDB8 @ 0x18006CDB8 (sub_18006CDB8.c)
 *     sub_1800B0D54 @ 0x1800B0D54 (sub_1800B0D54.c)
 *     sub_1800B0F84 @ 0x1800B0F84 (sub_1800B0F84.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800AE6C0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rbx
  __int128 v7; // [rsp+30h] [rbp-48h] BYREF
  __int128 v8; // [rsp+40h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-28h]
  __int64 *v10; // [rsp+58h] [rbp-20h] BYREF

  v9 = -2LL;
  v10 = a2;
  if ( *(_DWORD *)(a1 + 128) )
  {
    v7 = 0LL;
    sub_1800B0F84(a1, &v7);
    v8 = 0LL;
    sub_1800B0D54(a1, &v8);
  }
  LODWORD(v10) = sub_18006CDB8(*a2);
  result = sub_1800656A8((__int64 *)(a1 + 448), (unsigned int *)&v10);
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v5 = (volatile signed __int32 *)a2[1];
  }
  if ( v5 )
  {
    result = (unsigned int)_InterlockedDecrement(v5 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedDecrement(v5 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    result = (unsigned int)_InterlockedDecrement(v6 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return result;
}
