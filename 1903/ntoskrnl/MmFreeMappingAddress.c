/*
 * XREFs of MmFreeMappingAddress @ 0x140735D70
 * Callers:
 *     SmFpCleanup @ 0x140106120 (SmFpCleanup.c)
 *     PnprFreeMappingReserve @ 0x14086F508 (PnprFreeMappingReserve.c)
 *     PnprInitializeMappingReserve @ 0x14086F980 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x140907A28 (EtwpSavePersistedLogger.c)
 * Callees:
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveMappingNode @ 0x14017552C (MiRemoveMappingNode.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiRemovePteTracker @ 0x1402E7F38 (MiRemovePteTracker.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall MmFreeMappingAddress(PVOID BaseAddress, ULONG PoolTag)
{
  ULONG_PTR v2; // rsi
  unsigned __int64 *v4; // rax
  unsigned __int64 *v5; // rbp
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 PteAddress; // r14
  unsigned __int64 v8; // r9
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax

  v2 = PoolTag;
  v4 = MiRemoveMappingNode((ULONG_PTR)BaseAddress, *(ULONG_PTR *)&PoolTag);
  v5 = v4;
  if ( *((_DWORD *)v4 + 10) != (_DWORD)v2 )
    KeBugCheckEx(0xDAu, 0x102uLL, (ULONG_PTR)BaseAddress, v2, 0LL);
  BugCheckParameter4 = v4[4];
  if ( !BugCheckParameter4 )
    KeBugCheckEx(0xDAu, 0x10DuLL, (ULONG_PTR)BaseAddress, (ULONG_PTR)v4, v2);
  PteAddress = MiGetPteAddress((unsigned __int64)BaseAddress);
  v8 = PteAddress;
  if ( PteAddress < PteAddress + 8 * BugCheckParameter4 )
  {
    do
    {
      if ( v8 == PteAddress || (v8 & 0xFFF) == 0 )
      {
        v11 = MiGetPteAddress(v8);
        if ( (MI_READ_PTE_LOCK_FREE(v11) & 0x80u) != 0LL )
          KeBugCheckEx(0xDAu, 0x109uLL, (ULONG_PTR)BaseAddress, v2, BugCheckParameter4);
      }
      if ( MI_READ_PTE_LOCK_FREE(v8) )
        KeBugCheckEx(0xDAu, 0x103uLL, (ULONG_PTR)BaseAddress, v2, BugCheckParameter4);
      v8 = v9 + 8;
    }
    while ( v8 < v10 );
  }
  if ( (dword_14057118C & 1) != 0 )
    MiRemovePteTracker(0LL, (unsigned __int64)BaseAddress, BugCheckParameter4);
  MiReleasePtes((__int64)&qword_1404669C0, PteAddress, BugCheckParameter4);
  ExFreePoolWithTag(v5, 0);
}
