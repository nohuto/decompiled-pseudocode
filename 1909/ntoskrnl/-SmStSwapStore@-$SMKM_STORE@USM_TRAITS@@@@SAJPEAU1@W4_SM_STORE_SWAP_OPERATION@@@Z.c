/*
 * XREFs of ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14013E614
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14013E590 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1401439E4 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmPerformStoreSwapOperation @ 0x140143D98 (SmPerformStoreSwapOperation.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1401448AC (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStSwapStore(__int64 a1, int a2)
{
  int v4; // ebx
  _QWORD *v5; // rsi
  unsigned int v6; // ebx
  unsigned int v8; // eax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 *v10; // rdi
  _BYTE v11[48]; // [rsp+28h] [rbp-50h] BYREF

  memset(v11, 0, sizeof(v11));
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 6568), 0, (__int64)v11);
  if ( !a2 )
  {
    v8 = SMKM_STORE<SM_TRAITS>::SmStOutSwapPrepareStore(a1);
    goto LABEL_8;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v8 = SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(a1);
LABEL_8:
    v6 = v8;
    goto LABEL_6;
  }
  if ( v4 == 1 )
  {
    v5 = *(_QWORD **)(a1 + 6552);
    if ( (unsigned __int64)v5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( v5 == (_QWORD *)_InterlockedCompareExchange64(
                             (volatile signed __int64 *)(a1 + 6552),
                             -1LL,
                             (signed __int64)v5) )
      {
        if ( *v5 )
          v6 = SmPerformStoreSwapOperation(2LL);
        else
          v6 = -1073741661;
        _InterlockedExchange64((volatile __int64 *)(a1 + 6552), 0LL);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v10 = (signed __int64 *)(a1 + 6024);
        ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
        if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v10);
        KeAbPostRelease((ULONG_PTR)v10);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        ExFreePoolWithTag(v5, 0);
      }
      else
      {
        v6 = -1073740682;
      }
    }
    else
    {
      v6 = -1073741661;
    }
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_6:
  KiUnstackDetachProcess((struct _KTHREAD *)v11, 0);
  return v6;
}
