/*
 * XREFs of MiGetSlabAllocatorStandbyList @ 0x1402DC400
 * Callers:
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 * Callees:
 *     MiEnumerateSlabAllocators @ 0x1402DB8DC (MiEnumerateSlabAllocators.c)
 */

__int64 __fastcall MiGetSlabAllocatorStandbyList(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v4; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 )
  {
    v5 = a1;
    v7 = 0LL;
    v4 = *(_QWORD *)(a1 + 40) >> 40;
    v6 = (a1 + 0x58000000000LL) / 48;
    MiEnumerateSlabAllocators(
      *(_QWORD *)(qword_140466188 + 8 * (v4 & 0x3FF)),
      (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiGetSlabStandbyListWorker,
      (__int64)&v5);
    return v7;
  }
  else
  {
    v2 = ((*(_QWORD *)a1 & 0xFFFFFFF000000000uLL | ((unsigned __int64)*(unsigned __int8 *)(a1 + 39) << 28)) << 8) | *(unsigned __int16 *)(a1 + 36) | (*(_QWORD *)(a1 + 24) >> 20) & 0xFFFFF0000LL;
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 136));
    return *(_QWORD *)(v2 + 40) + 64LL;
  }
}
