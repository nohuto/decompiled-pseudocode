/*
 * XREFs of sub_1801000A0 @ 0x1801000A0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180011714 @ 0x180011714 (sub_180011714.c)
 *     sub_1800ADBF0 @ 0x1800ADBF0 (sub_1800ADBF0.c)
 *     sub_1800BC7E0 @ 0x1800BC7E0 (sub_1800BC7E0.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1801000A0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int32 *v10; // [rsp+30h] [rbp-20h]
  __int128 v11; // [rsp+38h] [rbp-18h] BYREF

  v11 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v11 = *a2;
  *((_QWORD *)&v11 + 1) = v4;
  sub_1800ADBF0(a1, &v11);
  v9 = 0LL;
  v10 = 0LL;
  sub_1800BC7E0(&v9, a2);
  v5 = v9;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v9 + 1896), (_QWORD *)(a1 + 1896));
  *(_DWORD *)(v5 + 1940) = *(_DWORD *)(a1 + 1940);
  *(_DWORD *)(v5 + 1944) = *(_DWORD *)(a1 + 1944);
  *(_BYTE *)(v5 + 1952) = *(_BYTE *)(a1 + 1952);
  *(_DWORD *)(v5 + 1948) = *(_DWORD *)(a1 + 1948);
  *(_DWORD *)(v5 + 1956) = *(_DWORD *)(a1 + 1956);
  *(_DWORD *)(v5 + 1964) = *(_DWORD *)(a1 + 1964);
  *(_DWORD *)(v5 + 1960) = *(_DWORD *)(a1 + 1960);
  *(_DWORD *)(v5 + 1968) = *(_DWORD *)(a1 + 1968);
  sub_180011714((__int64 *)(v5 + 1768), (__int64 *)(a1 + 1768));
  result = (__int64)sub_180011714((__int64 *)(v5 + 1848), (__int64 *)(a1 + 1848));
  if ( v10 )
  {
    result = (unsigned int)_InterlockedDecrement(v10 + 2);
    if ( !(_DWORD)result )
    {
      v7 = v10;
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  v8 = (volatile signed __int32 *)a2[1];
  if ( v8 )
  {
    result = (unsigned int)_InterlockedDecrement(v8 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
