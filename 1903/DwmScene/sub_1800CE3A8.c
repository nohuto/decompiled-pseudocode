/*
 * XREFs of sub_1800CE3A8 @ 0x1800CE3A8
 * Callers:
 *     sub_180035FA0 @ 0x180035FA0 (sub_180035FA0.c)
 * Callees:
 *     sub_180033E08 @ 0x180033E08 (sub_180033E08.c)
 *     sub_180077BF4 @ 0x180077BF4 (sub_180077BF4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800CE3A8(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  volatile signed __int32 *v10; // rbx
  _QWORD *v12; // [rsp+28h] [rbp-30h] BYREF
  volatile signed __int32 *v13; // [rsp+30h] [rbp-28h]

  v12 = a2;
  v6 = a1 + 17;
  v7 = a1[17];
  v8 = *(_QWORD *)(v7 + 8);
  if ( *(_BYTE *)(v8 + 25) )
    goto LABEL_8;
  do
  {
    if ( *(_DWORD *)(v8 + 32) >= a3 )
    {
      v7 = v8;
      v8 = *(_QWORD *)v8;
    }
    else
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  while ( !*(_BYTE *)(v8 + 25) );
  if ( v7 == *v6 || a3 < *(_DWORD *)(v7 + 32) )
LABEL_8:
    v7 = *v6;
  if ( v7 == *v6 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 32))(a1);
    v12 = 0LL;
    v13 = 0LL;
    sub_180077BF4(v9, (__int64 *)&v12, a3);
    (*(void (__fastcall **)(__int64 *, _QWORD **))(*a1 + 16))(a1, &v12);
    v10 = v13;
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      }
    }
  }
  sub_180033E08(v6, a2, a3);
  return a2;
}
