/*
 * XREFs of sub_1800F541C @ 0x1800F541C
 * Callers:
 *     sub_1800A3BA4 @ 0x1800A3BA4 (sub_1800A3BA4.c)
 * Callees:
 *     sub_1800F3030 @ 0x1800F3030 (sub_1800F3030.c)
 *     sub_1800F306C @ 0x1800F306C (sub_1800F306C.c)
 *     sub_1800F5904 @ 0x1800F5904 (sub_1800F5904.c)
 *     sub_1800F5E90 @ 0x1800F5E90 (sub_1800F5E90.c)
 *     sub_1800F610C @ 0x1800F610C (sub_1800F610C.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F541C(__int64 a1)
{
  unsigned __int16 v2; // bx
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // [rsp+28h] [rbp-38h] BYREF
  volatile signed __int32 *v8; // [rsp+30h] [rbp-30h]
  __int128 v9; // [rsp+38h] [rbp-28h] BYREF
  __int128 v10; // [rsp+48h] [rbp-18h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  sub_1800F5904(a1, &v7);
  v2 = 0;
  result = sub_1800F3030(v7);
  if ( (_DWORD)result )
  {
    do
    {
      v4 = sub_1800F306C(v7, v2);
      v5 = v4;
      if ( *(_DWORD *)(v4 + 36) == 8 )
      {
        v9 = 0LL;
        sub_1800F5E90(a1, v4, &v9);
        v10 = 0LL;
        sub_1800F610C(a1, v5, &v10);
      }
      ++v2;
      result = sub_1800F3030(v7);
    }
    while ( v2 < (unsigned int)result );
  }
  if ( v8 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v6 = v8;
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
