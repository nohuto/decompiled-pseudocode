/*
 * XREFs of sub_18006DD70 @ 0x18006DD70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180063288 @ 0x180063288 (sub_180063288.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18006CF04 @ 0x18006CF04 (sub_18006CF04.c)
 *     sub_18006CF84 @ 0x18006CF84 (sub_18006CF84.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006DD70(__int64 a1, __int64 a2)
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
    result = sub_18006CF84(a1);
    v5 = result;
    for ( i = 0; i < v5; ++i )
    {
      v9 = 0LL;
      v10 = 0LL;
      sub_18006CF04(a1, &v9, i);
      v7 = v9;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 368LL))(v9);
      if ( result == a2 )
      {
        v12 = 0LL;
        v13 = 0LL;
        sub_180063288(v7 + 8, &v12);
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
        if ( (_BYTE)v13 )
          result = sub_180063778(v12);
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
