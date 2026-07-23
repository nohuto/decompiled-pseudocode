/*
 * XREFs of MiIncrementCombinedPte @ 0x1402CC1DC
 * Callers:
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 * Callees:
 *     MiGetCrossPartitionCombineCharges @ 0x1402CC104 (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x1402CC2E0 (MiReturnCrossPartitionCombineCharges.c)
 */

__int64 __fastcall MiIncrementCombinedPte(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  __int64 result; // rax

  v2 = a2 - 48;
  v3 = *(_QWORD **)(((a2 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174)) != *v3 )
  {
    result = MiGetCrossPartitionCombineCharges(*v3, 1);
    if ( !(_DWORD)result )
      return result;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 56)) != 1 )
      MiReturnCrossPartitionCombineCharges(*v3, 1LL);
  }
  _InterlockedAdd64((volatile signed __int64 *)(v2 + 32), 1uLL);
  _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 96, 1u);
  return 1LL;
}
