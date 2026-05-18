/*
 * XREFs of sub_180017C24 @ 0x180017C24
 * Callers:
 *     sub_1800180F0 @ 0x1800180F0 (sub_1800180F0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000D790 (_guard_check_icall_nop.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180017C24(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(volatile signed __int32 **)(a1 + 24);
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
