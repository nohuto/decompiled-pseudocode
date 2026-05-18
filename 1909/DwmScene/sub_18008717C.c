/*
 * XREFs of sub_18008717C @ 0x18008717C
 * Callers:
 *     sub_180081594 @ 0x180081594 (sub_180081594.c)
 *     sub_180085C60 @ 0x180085C60 (sub_180085C60.c)
 * Callees:
 *     sub_180083804 @ 0x180083804 (sub_180083804.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008717C(__int64 a1)
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

  result = sub_180087524(a1);
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
        sub_180087450(v5);
        v6 = *(_QWORD **)(v5 + 384);
        for ( i = *(_QWORD **)(v5 + 376); i != v6; i += 2 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 120LL))(*i);
        *(_BYTE *)(v5 + 104) = 1;
        result = sub_180083804(a1, v5);
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
