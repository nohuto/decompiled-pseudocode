/*
 * XREFs of MiFreeVadEventBitmap @ 0x14088AC28
 * Callers:
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14067F064 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x14089A0E0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x14089ABC0 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140057470 (MiGetVadWakeList.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140059100 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeVadEventBitmap(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 *VadWakeList; // rax
  __int64 *v5; // rbx

  VadWakeList = MiGetVadWakeList(a2, (__int64 *)(unsigned int)a3, a3);
  v5 = VadWakeList;
  if ( VadWakeList )
  {
    PsReturnProcessNonPagedPoolQuota(
      a1,
      8 * (((unsigned __int64)VadWakeList[1] >> 6) + ((VadWakeList[1] & 0x3F) != 0) + 9LL));
    ExFreePoolWithTag(v5, 0);
  }
}
