/*
 * XREFs of sub_180085AE4 @ 0x180085AE4
 * Callers:
 *     sub_1800823D8 @ 0x1800823D8 (sub_1800823D8.c)
 *     sub_180084E84 @ 0x180084E84 (sub_180084E84.c)
 * Callees:
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180085AE4(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 result; // rax
  volatile signed __int32 *v6; // rcx

  sub_180087414(a1);
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    v4 = a2[1];
  }
  result = *a2;
  *(_QWORD *)(a1 + 128) = *a2;
  v6 = *(volatile signed __int32 **)(a1 + 136);
  *(_QWORD *)(a1 + 136) = v4;
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
