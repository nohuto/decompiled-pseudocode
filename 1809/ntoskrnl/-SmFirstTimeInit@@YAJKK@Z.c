/*
 * XREFs of ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3F08
 * Callers:
 *     SmProcessCreateRequest @ 0x14066BFB4 (SmProcessCreateRequest.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     SmFpCleanup @ 0x14011D710 (SmFpCleanup.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x140175F1C (MmStoreChargeResidentAvailableForRead.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14018E640 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14018E6B4 (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmFpPreAllocate @ 0x14018E748 (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ?SmReInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140302804 (-SmReInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     MmStoreRegister @ 0x14074CF1C (MmStoreRegister.c)
 *     MmStoreCheckPagefiles @ 0x14074E14C (MmStoreCheckPagefiles.c)
 *     ExAllocatePrivateWorkerPool @ 0x140755B10 (ExAllocatePrivateWorkerPool.c)
 *     PsCreateMinimalProcess @ 0x14075871C (PsCreateMinimalProcess.c)
 *     SmRegistrationCtxStart @ 0x14076231C (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmFirstTimeInit(int a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  HANDLE v5; // rdx
  __int64 v6; // rcx
  char v7; // al
  NTSTATUS MinimalProcess; // ebx
  struct _KTHREAD *v9; // rdi
  __int64 SessionId; // rdx
  unsigned __int8 v11; // r14
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v21; // r9d
  unsigned int v22; // esi
  int v23; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v24; // [rsp+54h] [rbp-94h]
  int v25; // [rsp+58h] [rbp-90h]
  HANDLE Handle; // [rsp+60h] [rbp-88h] BYREF
  PVOID Object; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v28[48]; // [rsp+70h] [rbp-78h] BYREF
  int v29; // [rsp+A0h] [rbp-48h]
  int v30; // [rsp+A4h] [rbp-44h]
  int v31; // [rsp+A8h] [rbp-40h]

  CurrentThread = KeGetCurrentThread();
  v24 = 1048579;
  v29 = 1048581;
  v30 = 1048578;
  --CurrentThread->KernelApcDisable;
  v31 = 1048596;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14055C160, 0LL);
  if ( dword_14055C148 )
  {
    if ( dword_14055C148 != a2 )
    {
      MinimalProcess = -1073741217;
      goto LABEL_12;
    }
  }
  else
  {
    dword_14055C148 = a2;
  }
  if ( (dword_14055C140 & 8) == 0 )
  {
    MinimalProcess = SmRegistrationCtxStart(&qword_14055C3F0);
    if ( MinimalProcess < 0 )
      goto LABEL_12;
    dword_14055C140 |= 8u;
  }
  v5 = ::Handle;
  if ( !::Handle )
  {
    if ( !(unsigned int)MmStoreCheckPagefiles() )
    {
      MinimalProcess = -1073741637;
      goto LABEL_12;
    }
    KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v28);
    LOBYTE(v21) = BYTE2(PsInitialSystemProcess[2].ActiveProcessors.Bitmap[0]);
    MinimalProcess = PsCreateMinimalProcess(
                       (int)PsInitialSystemProcess,
                       (int)&dword_1404009C8,
                       0,
                       v21,
                       0LL,
                       0,
                       0,
                       0LL,
                       0LL,
                       (__int64)&Handle);
    KiUnstackDetachProcess((__int64)v28, 0LL);
    if ( MinimalProcess < 0 )
      goto LABEL_12;
    MinimalProcess = ObReferenceObjectByHandle(Handle, 0, 0LL, 0, &Object, 0LL);
    if ( MinimalProcess < 0 )
    {
      ZwClose(Handle);
      goto LABEL_12;
    }
    v5 = Handle;
    ::Handle = Handle;
    qword_14055C158 = Object;
  }
  v6 = (unsigned int)dword_14055C140;
  if ( (dword_14055C140 & 2) == 0 )
  {
    v22 = dword_14055C148;
    qword_14055C100 = (__int64)v5;
    MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare(&SmGlobals);
    if ( MinimalProcess >= 0 )
    {
      if ( (dword_14055C0F0 & 0x20) == 0
        || (MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxStart(&unk_14055BEB0, &SmGlobals, v22),
            MinimalProcess >= 0) )
      {
        MinimalProcess = 0;
      }
    }
    if ( MinimalProcess < 0 )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmReInitialize(&SmGlobals);
      ObfDereferenceObjectWithTag(qword_14055C158, 0x746C6644u);
      ZwClose(::Handle);
      qword_14055C158 = 0LL;
      ::Handle = 0LL;
      goto LABEL_12;
    }
    v6 = dword_14055C140 | 2u;
    dword_14055C140 |= 2u;
  }
  if ( (v6 & 0x10) != 0
    || (v6 = ((unsigned __int8)dword_14055C140 ^ (unsigned __int8)(16 * MmStoreChargeResidentAvailableForRead(1LL))) & 0x10 ^ (unsigned int)dword_14055C140,
        dword_14055C140 = v6,
        (v6 & 0x10) != 0) )
  {
    if ( dword_14055C144 )
    {
      if ( a1 != dword_14055C144 )
      {
        MinimalProcess = -1073741800;
        goto LABEL_12;
      }
    }
    else
    {
      v24 = (a1 & 0xFFFF000 | 0x10000300u) >> 8;
      v30 = v24 & 0xFFFF0 | 0x100002;
      v29 = v24 & 0xFFFF0 | 0x100005;
      MinimalProcess = SmFpPreAllocate(&dword_14055C410);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      MinimalProcess = SmFpPreAllocate(&dword_14055C480);
      if ( MinimalProcess < 0 )
      {
        SmFpCleanup(&dword_14055C410);
        memset(&dword_14055C410, 0, 0x70uLL);
        word_14055C418 = 1;
        qword_14055C428 = (__int64)&qword_14055C420;
        qword_14055C420 = (__int64)&qword_14055C420;
        byte_14055C41A = 6;
        dword_14055C41C = 0;
        goto LABEL_12;
      }
      dword_14055C144 = a1;
    }
    v7 = dword_14055C140;
    if ( (dword_14055C140 & 0x20) == 0 )
    {
      MinimalProcess = ExAllocatePrivateWorkerPool(&qword_14055C170);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      v7 = dword_14055C140 | 0x20;
      dword_14055C140 |= 0x20u;
    }
    if ( (v7 & 1) == 0 )
    {
      MinimalProcess = MmStoreRegister(v6, v5, qword_14055C158, ((unsigned int)dword_14055C180 >> 7) & 1);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      dword_14055C140 |= 1u;
    }
    MinimalProcess = 0;
  }
  else
  {
    MinimalProcess = -1073741670;
  }
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14055C160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14055C160);
  v23 = 0;
  v9 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_14055C160) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v9->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v9->SpecialApcDisable;
  v11 = ++v9->AbAllocationRegionCount;
  v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    v25 = v14;
    if ( v13 )
      break;
    v15 = 1 << v14;
    v16 = v14;
    v17 = &v9->LockEntries[v16];
    v12 &= ~v15;
    if ( (v17->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v17->LockState.0 & 1) == 0
      && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14055C160 & 0x7FFFFFFFFFFFFFFCLL)
      && v17->LockState.SessionId == (_DWORD)SessionId )
    {
      v17->AcquiredByte &= ~1u;
      if ( v17->LockState.0 )
      {
        if ( v17 )
        {
          v17->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v17->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v9->LockEntries[v16].TreeNode, SessionId);
          v23 = 0;
          v23 = v17->BoostBitmap.AllFields & 0x1FFFF;
          v17->BoostBitmap.AllFields &= 0xFFFE0000;
          v17->ThreadLocalFlags &= ~1u;
          v17->LockState.0 = 0LL;
          v18 = ((char *)v17 - (char *)v9 - 800) / 96;
          if ( v11 == 1 )
            v9->AbEntrySummary |= 1 << v18;
          else
            _InterlockedOr8((volatile signed __int8 *)&v9->AbOrphanedEntrySummary, 1 << v18);
          goto LABEL_28;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v9->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&qword_14055C160, (unsigned int)SessionId, 0LL);
LABEL_28:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v9, (__int64)&qword_14055C160, (__int64)&v23);
  v13 = v9->SpecialApcDisable++ == -1;
  if ( v13 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery(v19);
  KeLeaveCriticalRegion();
  return (unsigned int)MinimalProcess;
}
