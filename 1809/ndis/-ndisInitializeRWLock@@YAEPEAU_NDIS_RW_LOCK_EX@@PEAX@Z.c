/*
 * XREFs of ?ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x1C007ED88
 * Callers:
 *     ?ndisVerifyNdisAllocateRWLock@@YAPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x1C007EEE0 (-ndisVerifyNdisAllocateRWLock@@YAPEAU_NDIS_RW_LOCK_EX@@PEAX@Z.c)
 * Callees:
 *     ndisAllocatePerProcessorSlot @ 0x1C001C520 (ndisAllocatePerProcessorSlot.c)
 */

unsigned __int8 __fastcall ndisInitializeRWLock(struct _NDIS_RW_LOCK_EX *a1, void *a2)
{
  __int64 PerProcessorSlot; // rax

  PerProcessorSlot = ndisAllocatePerProcessorSlot(0x7772444Eu);
  *((_QWORD *)a1 + 4) = PerProcessorSlot;
  if ( PerProcessorSlot )
  {
    *((_QWORD *)a1 + 1) = a2;
    KeInitializeSpinLock((PKSPIN_LOCK)a1 + 2);
    LOBYTE(PerProcessorSlot) = 1;
  }
  return PerProcessorSlot;
}
