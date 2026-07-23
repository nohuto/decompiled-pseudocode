/*
 * XREFs of ?SmFirstTimeInit@@YAJKK@Z @ 0x1400D7BA8
 * Callers:
 *     SmProcessCreateRequest @ 0x140672858 (SmProcessCreateRequest.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140013D00 (KeStackAttachProcess.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeUnstackDetachProcess @ 0x1400437D0 (KeUnstackDetachProcess.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     SmFpCleanup @ 0x14011B304 (SmFpCleanup.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x14017D794 (MmStoreChargeResidentAvailableForRead.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14019916C (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     ?SmStorePrepare@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1401991E0 (-SmStorePrepare@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmFpPreAllocate @ 0x140199274 (SmFpPreAllocate.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ?SmReInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14031FDF8 (-SmReInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x1407580C4 (PsCreateMinimalProcess.c)
 *     ExAllocatePrivateWorkerPool @ 0x1407730C8 (ExAllocatePrivateWorkerPool.c)
 *     MmStoreRegister @ 0x140773968 (MmStoreRegister.c)
 *     MmStoreCheckPagefiles @ 0x140774C1C (MmStoreCheckPagefiles.c)
 *     SmRegistrationCtxStart @ 0x14078A208 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmFirstTimeInit(int a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  HANDLE v5; // rdx
  __int64 v6; // rcx
  char v7; // al
  NTSTATUS MinimalProcess; // ebx
  struct _KTHREAD *v9; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v11; // r14
  unsigned int v12; // r8d
  bool v13; // zf
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v22; // edi
  unsigned int v23; // [rsp+50h] [rbp-98h]
  _DWORD v24[3]; // [rsp+54h] [rbp-94h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-88h] BYREF
  PVOID Object; // [rsp+68h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-78h] BYREF
  int v28; // [rsp+A0h] [rbp-48h]
  int v29; // [rsp+A4h] [rbp-44h]
  int v30; // [rsp+A8h] [rbp-40h]

  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  v28 = 1048581;
  v29 = 1048578;
  --CurrentThread->KernelApcDisable;
  v30 = 1048596;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14058C160, 0LL);
  if ( dword_14058C148 )
  {
    if ( dword_14058C148 != a2 )
    {
      MinimalProcess = -1073741217;
      goto LABEL_12;
    }
  }
  else
  {
    dword_14058C148 = a2;
  }
  if ( (dword_14058C140 & 8) == 0 )
  {
    MinimalProcess = SmRegistrationCtxStart(&qword_14058C3F0);
    if ( MinimalProcess < 0 )
      goto LABEL_12;
    dword_14058C140 |= 8u;
  }
  v5 = ::Handle;
  if ( !::Handle )
  {
    if ( !(unsigned int)MmStoreCheckPagefiles() )
    {
      MinimalProcess = -1073741637;
      goto LABEL_12;
    }
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    MinimalProcess = PsCreateMinimalProcess(PsInitialSystemProcess, 0LL, 0, 0, 0LL, 0LL, (__int64)&Handle);
    KeUnstackDetachProcess(&ApcState);
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
    qword_14058C158 = Object;
  }
  v6 = (unsigned int)dword_14058C140;
  if ( (dword_14058C140 & 2) == 0 )
  {
    v22 = dword_14058C148;
    qword_14058C100 = (__int64)v5;
    MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmStorePrepare(&SmGlobals);
    if ( MinimalProcess >= 0 )
    {
      if ( (dword_14058C0F0 & 0x20) == 0
        || (MinimalProcess = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxStart(&unk_14058BEB0, &SmGlobals, v22),
            MinimalProcess >= 0) )
      {
        MinimalProcess = 0;
      }
    }
    if ( MinimalProcess < 0 )
    {
      SMKM_STORE_MGR<SM_TRAITS>::SmReInitialize(&SmGlobals);
      ObfDereferenceObject(qword_14058C158);
      ZwClose(::Handle);
      qword_14058C158 = 0LL;
      ::Handle = 0LL;
      goto LABEL_12;
    }
    v6 = dword_14058C140 | 2u;
    dword_14058C140 |= 2u;
  }
  if ( (v6 & 0x10) != 0
    || (v6 = ((unsigned __int8)dword_14058C140 ^ (unsigned __int8)(16 * MmStoreChargeResidentAvailableForRead(1LL))) & 0x10 ^ (unsigned int)dword_14058C140,
        dword_14058C140 = v6,
        (v6 & 0x10) != 0) )
  {
    if ( dword_14058C144 )
    {
      if ( a1 != dword_14058C144 )
      {
        MinimalProcess = -1073741800;
        goto LABEL_12;
      }
    }
    else
    {
      v23 = (a1 & 0xFFFF000 | 0x10000300u) >> 8;
      v29 = v23 & 0xFFFF0 | 0x100002;
      v28 = v23 & 0xFFFF0 | 0x100005;
      MinimalProcess = SmFpPreAllocate(&dword_14058C410);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      MinimalProcess = SmFpPreAllocate(&dword_14058C480);
      if ( MinimalProcess < 0 )
      {
        SmFpCleanup(&dword_14058C410);
        memset(&dword_14058C410, 0, 0x70uLL);
        word_14058C418 = 1;
        qword_14058C428 = (__int64)&qword_14058C420;
        qword_14058C420 = (__int64)&qword_14058C420;
        byte_14058C41A = 6;
        dword_14058C41C = 0;
        goto LABEL_12;
      }
      dword_14058C144 = a1;
    }
    v7 = dword_14058C140;
    if ( (dword_14058C140 & 0x20) == 0 )
    {
      MinimalProcess = ExAllocatePrivateWorkerPool(&qword_14058C170);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      v7 = dword_14058C140 | 0x20;
      dword_14058C140 |= 0x20u;
    }
    if ( (v7 & 1) == 0 )
    {
      MinimalProcess = MmStoreRegister(v6, v5, qword_14058C158, ((unsigned int)dword_14058C180 >> 7) & 1);
      if ( MinimalProcess < 0 )
        goto LABEL_12;
      dword_14058C140 |= 1u;
    }
    MinimalProcess = 0;
  }
  else
  {
    MinimalProcess = -1073741670;
  }
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14058C160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14058C160);
  v24[0] = 0;
  v9 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&qword_14058C160) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
  else
    SessionId = -1;
  --v9->SpecialApcDisable;
  v11 = ++v9->AbAllocationRegionCount;
  v12 = ((char)v9->AbEntrySummary | (char)v9->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v13 = !_BitScanReverse((unsigned int *)&v14, v12);
    v24[1] = v14;
    if ( v13 )
      break;
    v15 = 1 << v14;
    v16 = v14;
    v17 = &v9->LockEntries[v16];
    v12 &= ~v15;
    if ( (v17->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v17->LockState.0 & 1) == 0
      && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&qword_14058C160 & 0x7FFFFFFFFFFFFFFCLL)
      && v17->LockState.SessionId == SessionId )
    {
      v17->AcquiredByte &= ~1u;
      if ( v17->LockState.0 )
      {
        if ( v17 )
        {
          v17->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v17->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v9->LockEntries[v16].TreeNode);
          v24[0] = v17->BoostBitmap.AllFields & 0x1FFFF;
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
    KeBugCheckEx(0x162u, (ULONG_PTR)v9, (ULONG_PTR)&qword_14058C160, SessionId, 0LL);
LABEL_28:
  --v9->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v9, (__int64)&qword_14058C160, v24);
  v13 = v9->SpecialApcDisable++ == -1;
  if ( v13 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
    KiCheckForKernelApcDelivery(v20, v19);
  KeLeaveCriticalRegion();
  return (unsigned int)MinimalProcess;
}
