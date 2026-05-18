/*
 * XREFs of sub_18008706C @ 0x18008706C
 * Callers:
 *     sub_180081484 @ 0x180081484 (sub_180081484.c)
 *     sub_180085B50 @ 0x180085B50 (sub_180085B50.c)
 * Callees:
 *     sub_1800836F4 @ 0x1800836F4 (sub_1800836F4.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008706C(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rdi
  _QWORD *v6; // rbp
  _QWORD *i; // r14
  signed __int32 v8; // eax
  bool v9; // zf
  __int128 v10; // [rsp+28h] [rbp-30h]

  result = sub_180087414(a1);
  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(v3 + 8);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), result + 1, result) )
      {
        result = *(_QWORD *)(a1 + 72);
        *(_QWORD *)&v10 = result;
        v4 = *(_QWORD *)(a1 + 80);
        *((_QWORD *)&v10 + 1) = v4;
        goto LABEL_3;
      }
    }
  }
  v4 = 0LL;
LABEL_3:
  if ( (_QWORD)v10 )
  {
    v5 = a1;
    if ( a1 )
    {
      do
      {
        sub_180087340(v5);
        v6 = *(_QWORD **)(v5 + 384);
        for ( i = *(_QWORD **)(v5 + 376); i != v6; i += 2 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 120LL))(*i);
        *(_BYTE *)(v5 + 104) = 1;
        result = sub_1800836F4(a1, v5);
        v5 = result;
      }
      while ( result );
    }
  }
  if ( v4 )
  {
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF);
    v9 = v8 == 1;
    result = (unsigned int)(v8 - 1);
    if ( v9 )
    {
      (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 12LL));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
    }
  }
  return result;
}
