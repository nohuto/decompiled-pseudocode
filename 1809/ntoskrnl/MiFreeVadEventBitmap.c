/*
 * XREFs of MiFreeVadEventBitmap @ 0x14084F474
 * Callers:
 *     MiReserveUserMemory @ 0x1405F1600 (MiReserveUserMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140695EA0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateChildVads @ 0x14085D9F8 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x14085E4C8 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140068270 (MiGetVadWakeList.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140068570 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
