/*
 * XREFs of MiDeleteEnclavePages @ 0x140894018
 * Callers:
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 * Callees:
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KeRemoveEnclavePage @ 0x1402A6650 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePage @ 0x1402D44E8 (MiDeleteEnclavePage.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiReturnReservedEnclavePages @ 0x140894D28 (MiReturnReservedEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x140894E2C (MiTerminateHardwareEnclave.c)
 *     PsDeleteVsmEnclave @ 0x1408CC68C (PsDeleteVsmEnclave.c)
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
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 1296) + 296LL));
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
    MiReleasePtes((__int64)&qword_1404669C0, v4, 1u);
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
