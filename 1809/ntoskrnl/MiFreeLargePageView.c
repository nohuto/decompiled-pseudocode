/*
 * XREFs of MiFreeLargePageView @ 0x14085E5D4
 * Callers:
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MiDeletePartialCloneVads @ 0x14085F728 (MiDeletePartialCloneVads.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetVadWakeList @ 0x140068260 (MiGetVadWakeList.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140075450 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiReturnFullProcessCommitment @ 0x1405F3998 (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiFreeLargePageView(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // bp
  __int64 *VadWakeList; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  int v10; // ebp

  v5 = a3;
  VadWakeList = MiGetVadWakeList(a2, (__int64 *)0x10, a3);
  if ( VadWakeList )
  {
    v7 = *(unsigned int *)(a2 + 52);
    LODWORD(v7) = v7 & 0x7FFFFFFF;
    v8 = v7 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31);
    if ( v8 )
    {
      CurrentThread = KeGetCurrentThread();
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1600), -(__int64)v8);
      v10 = v5 & 1;
      if ( !v10 )
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      MiReturnFullProcessCommitment(a1, v8);
      if ( !v10 )
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    }
    ExFreePoolWithTag(VadWakeList, 0);
  }
}
