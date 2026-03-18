/*
 * XREFs of MiFreeLargePageView @ 0x140899728
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MiDeletePartialCloneVads @ 0x14089ABC0 (MiDeletePartialCloneVads.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FA20 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140053970 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetVadWakeList @ 0x140057470 (MiGetVadWakeList.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiReturnFullProcessCommitment @ 0x1405ECF80 (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiFreeLargePageView(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // r14
  __int64 *VadWakeList; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  int v10; // r14d
  void *v11; // rcx

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
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1648), -(__int64)v8);
      v10 = v5 & 1;
      if ( !v10 )
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      MiReturnFullProcessCommitment(a1, v8);
      if ( !v10 )
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    }
    v11 = (void *)VadWakeList[3];
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x746C6644u);
    ExFreePoolWithTag(VadWakeList, 0);
  }
}
