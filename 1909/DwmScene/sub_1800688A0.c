/*
 * XREFs of sub_1800688A0 @ 0x1800688A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800688A0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
    v2 = a2[1];
  }
  result = *a2;
  *(_QWORD *)(a1 + 488) = *a2;
  v5 = *(volatile signed __int32 **)(a1 + 496);
  *(_QWORD *)(a1 + 496) = v2;
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return result;
}
