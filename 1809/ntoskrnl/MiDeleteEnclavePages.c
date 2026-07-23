/*
 * XREFs of MiDeleteEnclavePages @ 0x14085B328
 * Callers:
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeRemoveEnclavePage @ 0x14028FE20 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePage @ 0x1402BDD44 (MiDeleteEnclavePage.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiReturnReservedEnclavePages @ 0x14085B920 (MiReturnReservedEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x14085BA24 (MiTerminateHardwareEnclave.c)
 *     PsDeleteVsmEnclave @ 0x14088F298 (PsDeleteVsmEnclave.c)
 */

__int64 __fastcall MiDeleteEnclavePages(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9
  int v5; // eax
  void *v6; // rcx

  result = *(unsigned int *)(a2 + 64);
  if ( (result & 4) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 1296) + 232LL));
    result = *(unsigned int *)(a2 + 64);
  }
  if ( (result & 1) != 0 )
  {
    if ( (result & 8) == 0 )
      MiTerminateHardwareEnclave();
    if ( (MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a2 + 80)) & 1) != 0 )
    {
      v5 = KeRemoveEnclavePage();
      if ( v5 < 0 )
        KeBugCheckEx(0x1Au, 0x18011544uLL, *(_QWORD *)(a2 + 80), v5, 0LL);
      MiDeleteEnclavePage(*(_QWORD *)(a2 + 80), 0);
      v4 = *(_QWORD *)(a2 + 80);
    }
    MiReleasePtes((__int64)&qword_14043C060, v4, 1u);
    v6 = *(void **)(a2 + 88);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    return MiReturnReservedEnclavePages(a2, -1LL);
  }
  else if ( *(_QWORD *)(a2 + 72) )
  {
    return PsDeleteVsmEnclave();
  }
  return result;
}
