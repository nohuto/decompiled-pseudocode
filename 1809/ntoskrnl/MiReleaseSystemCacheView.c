/*
 * XREFs of MiReleaseSystemCacheView @ 0x1400795A0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 *     MmFreeSystemCacheReserveView @ 0x14085028C (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     InsertTailListPte @ 0x140079CF0 (InsertTailListPte.c)
 *     MiLockWorkingSetOptimal @ 0x140088334 (MiLockWorkingSetOptimal.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     MiGetPteLink @ 0x1400AD6E4 (MiGetPteLink.c)
 *     MiGetSystemCacheReverseMap @ 0x1400ADE90 (MiGetSystemCacheReverseMap.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiSetSystemCacheReverseMap @ 0x1400F6430 (MiSetSystemCacheReverseMap.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     RemoveListEntryPte @ 0x14012980C (RemoveListEntryPte.c)
 *     MiWaitForSystemCacheViewFlush @ 0x1401392BC (MiWaitForSystemCacheViewFlush.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseSystemCacheView(unsigned __int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // dl
  unsigned __int64 v7; // rax
  unsigned __int8 v9; // bl
  __int64 v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rbx
  void *SystemCacheReverseMap; // rsi
  __int64 v18; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v20; // rbx
  unsigned __int8 v21[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+30h] [rbp-98h]
  _QWORD v24[2]; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int8 v25; // [rsp+48h] [rbp-80h]
  _QWORD v26[8]; // [rsp+50h] [rbp-78h] BYREF

  LODWORD(v1) = 0;
  v3 = 0LL;
  v23 = 0LL;
  v4 = (__int64)(a1 << 25) >> 16;
  v5 = *(_QWORD *)(qword_14043B808 + 8LL * ((unsigned __int16)*(_DWORD *)(MiGetSystemCacheReverseMap(v4) + 32) >> 6));
  v24[1] = &qword_14043B618;
  v24[0] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v25 = CurrentIrql;
  KxAcquireQueuedSpinLock(v24);
  v22 = MI_READ_PTE_LOCK_FREE(((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFLL);
  if ( (*(_BYTE *)(v7 - 0x58000000000LL + 39))-- == 1 )
  {
    v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
    if ( v3 >= v3 + 4096 )
      goto LABEL_4;
    v11 = (_QWORD *)(v3 + 24);
    while ( 1 )
    {
      if ( v11 - 3 != (_QWORD *)a1 )
      {
        RemoveListEntryPte(v5 + 1720, v11 - 3);
        if ( MiGetPteLink(*v11) == 1 )
        {
          v18 = (unsigned int)v1;
          LODWORD(v1) = v1 + 1;
          v26[v18] = v11 - 3;
        }
        else
        {
          if ( MiPteInShadowRange((unsigned __int64)v11) )
          {
            if ( (unsigned int)MiPteHasShadow(v13, v12) )
            {
              if ( !HIBYTE(word_14043B26C) && (v12 & 1) != 0 )
                v12 |= 0x8000000000000000uLL;
              *v11 = v12;
              MiWritePteShadow(v11);
              goto LABEL_13;
            }
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
              && (v12 & 1) != 0 )
            {
              v12 |= 0x8000000000000000uLL;
            }
          }
          *v11 = v12;
        }
      }
LABEL_13:
      v11 += 64;
      if ( (unsigned __int64)(v11 - 3) >= (a1 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
        goto LABEL_4;
    }
  }
  InsertTailListPte(v5 + 1720, a1);
LABEL_4:
  KxReleaseQueuedSpinLock(v24);
  v9 = v25;
  v10 = v23;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v25 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v9);
  if ( v3 )
  {
    if ( (_DWORD)v1 )
    {
      v20 = v26;
      v1 = (unsigned int)v1;
      do
      {
        MiWaitForSystemCacheViewFlush(*v20++);
        --v1;
      }
      while ( v1 );
    }
    v14 = v3 << 25;
    v15 = v5 + 7424;
    v16 = MiLockWorkingSetOptimal(v15, a1, v21);
    SystemCacheReverseMap = (void *)MiGetSystemCacheReverseMap((__int64)(v14 - v10) >> 16);
    MiSetSystemCacheReverseMap((__int64)(v14 - v10) >> 16, 0LL);
    MiUnlockPageTableInternal(v15, v16);
    MiUnlockWorkingSetShared(v15, v21[0]);
    MiReturnSystemVa((__int64)(v14 - v10) >> 16, (__int64)(v14 - v10 + 0x2000000000LL) >> 16, 8);
    ExFreePoolWithTag(SystemCacheReverseMap, 0);
  }
}
