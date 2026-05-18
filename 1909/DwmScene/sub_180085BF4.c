/*
 * XREFs of sub_180085BF4 @ 0x180085BF4
 * Callers:
 *     sub_1800824E8 @ 0x1800824E8 (sub_1800824E8.c)
 *     sub_180084F94 @ 0x180084F94 (sub_180084F94.c)
 * Callees:
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180085BF4(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 result; // rax
  volatile signed __int32 *v6; // rcx

  sub_180087524(a1);
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
