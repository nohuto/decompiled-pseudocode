/*
 * XREFs of sub_1800DA990 @ 0x1800DA990
 * Callers:
 *     sub_1800DB020 @ 0x1800DB020 (sub_1800DB020.c)
 * Callees:
 *     sub_1800DADBC @ 0x1800DADBC (sub_1800DADBC.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DA990(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 *v8; // r14
  volatile signed __int32 *v9; // rbx
  __int64 v10; // [rsp+38h] [rbp-40h] BYREF
  volatile signed __int32 *v11; // [rsp+40h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = a1;
  v6 = (a2 - a1) >> 4;
  v7 = (a2 - a1) >> 5;
  if ( v7 > 0 )
  {
    v8 = (__int64 *)(a1 + 16 * v7);
    do
    {
      --v7;
      v8 -= 2;
      v10 = *v8;
      v11 = (volatile signed __int32 *)v8[1];
      *v8 = 0LL;
      v8[1] = 0LL;
      result = sub_1800DADBC(v5, v7, v6, (unsigned int)&v10, a3);
      v9 = v11;
      if ( v11 )
      {
        result = (unsigned int)_InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
          result = (unsigned int)_InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        }
      }
    }
    while ( v7 > 0 );
  }
  return result;
}
