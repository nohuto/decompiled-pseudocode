/*
 * XREFs of MiReleaseSystemCacheView @ 0x1400700C0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 *     MmFreeSystemCacheReserveView @ 0x14088A900 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockWorkingSetOptimal @ 0x14005D668 (MiLockWorkingSetOptimal.c)
 *     MiGetSystemCacheReverseMap @ 0x140075F40 (MiGetSystemCacheReverseMap.c)
 *     InsertTailListPte @ 0x140076480 (InsertTailListPte.c)
 *     MiGetPteLink @ 0x140076E80 (MiGetPteLink.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiReturnSystemVa @ 0x1400E6D50 (MiReturnSystemVa.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     RemoveListEntryPte @ 0x14012B0A0 (RemoveListEntryPte.c)
 *     MiSetSystemCacheReverseMap @ 0x14012C144 (MiSetSystemCacheReverseMap.c)
 *     MiWaitForSystemCacheViewFlush @ 0x14013C980 (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseSystemCacheView(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r14
  __int64 v5; // r12
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int8 OldIrql; // bl
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // r8
  int v16; // r9d
  unsigned __int64 v17; // r14
  __int64 v18; // rdx
  void *SystemCacheReverseMap; // rdi
  __int64 v20; // rdx
  bool v21; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v23; // rbx
  _BYTE v24[8]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v25; // [rsp+30h] [rbp-41h] BYREF
  __int64 v26; // [rsp+38h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v28[8]; // [rsp+58h] [rbp-19h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v26 = 0LL;
  v6 = (__int64)(a1 << 25) >> 16;
  v7 = *(_QWORD *)(qword_140465E88 + 8LL * ((*(_DWORD *)(MiGetSystemCacheReverseMap(v6, a2) + 32) >> 6) & 0x3FF));
  KeAcquireInStackQueuedSpinLock(&qword_140465C20, &LockHandle);
  v25 = MI_READ_PTE_LOCK_FREE(((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v8 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v25) >> 12) & 0xFFFFFFFFFLL);
  v21 = (*(_BYTE *)(v8 - 0x58000000000LL + 39))-- == 1;
  if ( v21 )
  {
    v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v10 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v11 = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) >= v11 )
      goto LABEL_3;
    while ( 1 )
    {
      if ( v10 != a1 )
      {
        RemoveListEntryPte(v7 + 1720, v10);
        if ( MiGetPteLink(*(_QWORD *)(v10 + 24)) != 1 )
        {
          if ( !MiPteInShadowRange(v12) )
            goto LABEL_10;
          if ( (unsigned int)MiPteHasShadow(v14) )
          {
            v16 = 1;
            if ( !HIBYTE(word_1404658EC) )
            {
              v21 = (v13 & 1) == 0;
              goto LABEL_22;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            v21 = (v13 & 1) == 0;
LABEL_22:
            if ( !v21 )
              v13 |= 0x8000000000000000uLL;
          }
LABEL_10:
          *v15 = v13;
          if ( v16 )
            MiWritePteShadow(v15, v13);
          goto LABEL_12;
        }
        v28[v3] = v10;
        v3 = (unsigned int)(v3 + 1);
      }
LABEL_12:
      v10 += 512LL;
      if ( v10 >= v11 )
      {
        v5 = v26;
        goto LABEL_3;
      }
    }
  }
  InsertTailListPte(v7 + 1720, a1);
LABEL_3:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( v4 )
  {
    if ( (_DWORD)v3 )
    {
      v23 = v28;
      do
      {
        MiWaitForSystemCacheViewFlush(*v23++);
        --v3;
      }
      while ( v3 );
    }
    v17 = v4 << 25;
    MiLockWorkingSetOptimal(v7 + 0x2000, a1, v24);
    SystemCacheReverseMap = (void *)MiGetSystemCacheReverseMap((__int64)(v17 - v5) >> 16, v18);
    MiSetSystemCacheReverseMap((__int64)(v17 - v5) >> 16, 0LL);
    MiUnlockPageTableInternal(v7 + 0x2000);
    LOBYTE(v20) = v24[0];
    MiUnlockWorkingSetShared(v7 + 0x2000, v20);
    MiReturnSystemVa((__int64)(v17 - v5) >> 16, (__int64)(v17 - v5 + 0x2000000000LL) >> 16, 8LL);
    ExFreePoolWithTag(SystemCacheReverseMap, 0);
  }
}
