/*
 * XREFs of ?Resolve@?$weak_ref@$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C1ED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Atomic_compare_exchange_strong_4@std@@YAHPECKPEAKKW4memory_order@1@2@Z @ 0x1801EB75C (-_Atomic_compare_exchange_strong_4@std@@YAHPECKPEAKKW4memory_order@1@2@Z.c)
 */

__int64 __fastcall winrt::impl::weak_ref<1>::Resolve(__int64 a1, __int64 a2, _QWORD *a3)
{
  volatile signed __int32 *v6; // rbx
  __int64 result; // rax
  unsigned int i; // [rsp+50h] [rbp+8h] BYREF

  v6 = (volatile signed __int32 *)(a1 + 24);
  result = *(unsigned int *)(a1 + 24);
  for ( i = *(_DWORD *)(a1 + 24); ; result = i )
  {
    if ( !(_DWORD)result )
    {
      *a3 = 0LL;
      return result;
    }
    if ( (unsigned int)std::_Atomic_compare_exchange_strong_4(v6, &i, (unsigned int)(result + 1), 2LL, 0) )
      break;
  }
  result = (***(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD *))(a1 + 16))(*(_QWORD *)(a1 + 16), a2, a3);
  _InterlockedExchangeAdd(v6, 0xFFFFFFFF);
  return result;
}
