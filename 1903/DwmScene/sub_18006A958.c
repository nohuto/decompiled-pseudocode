/*
 * XREFs of sub_18006A958 @ 0x18006A958
 * Callers:
 *     sub_1800AF450 @ 0x1800AF450 (sub_1800AF450.c)
 *     sub_1800DB87C @ 0x1800DB87C (sub_1800DB87C.c)
 *     sub_1800DDA58 @ 0x1800DDA58 (sub_1800DDA58.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006A958(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  volatile signed __int32 *v5; // rdx
  volatile signed __int32 *v6; // rcx

  v2 = a2[1];
  result = *a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 128) = result;
  v5 = *(volatile signed __int32 **)(a1 + 136);
  *(_QWORD *)(a1 + 136) = v2;
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
