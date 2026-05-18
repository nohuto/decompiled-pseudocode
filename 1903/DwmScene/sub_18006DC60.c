/*
 * XREFs of sub_18006DC60 @ 0x18006DC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180063178 @ 0x180063178 (sub_180063178.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18006CDF4 @ 0x18006CDF4 (sub_18006CDF4.c)
 *     sub_18006CE74 @ 0x18006CE74 (sub_18006CE74.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006DC60(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // esi
  unsigned int i; // edi
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // [rsp+38h] [rbp-39h] BYREF
  volatile signed __int32 *v10; // [rsp+40h] [rbp-31h]
  __int64 v11; // [rsp+48h] [rbp-29h]
  __int64 v12; // [rsp+50h] [rbp-21h] BYREF
  __int64 v13; // [rsp+58h] [rbp-19h]

  v11 = -2LL;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( (_BYTE)result )
  {
    result = sub_18006CE74(a1);
    v5 = result;
    for ( i = 0; i < v5; ++i )
    {
      v9 = 0LL;
      v10 = 0LL;
      sub_18006CDF4(a1, &v9, i);
      v7 = v9;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 368LL))(v9);
      if ( result == a2 )
      {
        v12 = 0LL;
        v13 = 0LL;
        sub_180063178(v7 + 8, &v12);
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
        if ( (_BYTE)v13 )
          result = sub_180063668(v12);
      }
      if ( v10 )
      {
        result = (unsigned int)_InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
        {
          v8 = v10;
          (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
          result = (unsigned int)_InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
        }
      }
    }
  }
  return result;
}
