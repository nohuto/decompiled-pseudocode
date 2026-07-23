/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x14014B8A4
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140135BA0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140307884 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmSetThreadPagePriority @ 0x14011EC7C (SmSetThreadPagePriority.c)
 *     SmKmUnlockMdl @ 0x14014B234 (SmKmUnlockMdl.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x14014B298 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     SmFpAllocate @ 0x14014BB74 (SmFpAllocate.c)
 *     SmFpFree @ 0x14014CB3C (SmFpFree.c)
 *     ZwUnlockVirtualMemory @ 0x1401BBB70 (ZwUnlockVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140307FAC (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1403080CC (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406E1E30 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x1406E1FB8 (MmStoreFreeVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  struct _MDL *v8; // r14
  int v9; // r12d
  int v10; // ebx
  ULONG_PTR v11; // rcx
  PVOID VirtualMemory; // rax
  ULONG_PTR v13; // rcx
  int v14; // edx
  ULONG_PTR v15; // rax
  ULONG_PTR v16; // rcx
  __int64 v17; // r13
  struct _KTHREAD *v18[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+88h] [rbp+48h] BYREF

  v5 = a2 - 2;
  if ( !v5 )
  {
    v11 = *(_QWORD *)(a3 + 8);
    BaseAddress = *(PVOID *)a3;
    NumberOfBytesToUnlock = v11;
    VirtualMemory = (PVOID)MmStoreAllocateVirtualMemory();
    BaseAddress = VirtualMemory;
    if ( VirtualMemory )
    {
      v13 = *(_QWORD *)(a1 + 104);
      if ( v13 )
      {
        v10 = SmKmVirtualLockCtxLockMemory(v13);
        if ( v10 < 0 )
        {
          MmStoreFreeVirtualMemory(BaseAddress);
          goto LABEL_12;
        }
        VirtualMemory = BaseAddress;
      }
      *(_QWORD *)(a3 + 24) = VirtualMemory;
      goto LABEL_11;
    }
LABEL_23:
    v10 = -1073741670;
    goto LABEL_12;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v14 = v7 - 1;
      if ( !v14 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))a3)(a1, *(_QWORD *)(a3 + 8), 0LL);
        goto LABEL_12;
      }
      if ( v14 != 1 )
      {
        v10 = -1073741811;
        goto LABEL_12;
      }
      BaseAddress = *(PVOID *)a3;
      NumberOfBytesToUnlock = *(_QWORD *)(a3 + 8);
      ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &NumberOfBytesToUnlock, 1u);
      goto LABEL_11;
    }
    BaseAddress = *(PVOID *)a3;
    NumberOfBytesToUnlock = *(_QWORD *)(a3 + 8);
    v8 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 112), *(_DWORD *)(a3 + 20) & 1);
    if ( v8 )
    {
      v18[0] = KeGetCurrentThread();
      v9 = SmSetThreadPagePriority(v18);
      v10 = SmKmProbeAndLockAddress((unsigned __int64)BaseAddress, NumberOfBytesToUnlock, v8);
      if ( v10 == -1073741395 && (*(_DWORD *)(a3 + 20) & 1) != 0 )
      {
        v17 = SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 112), 1);
        v10 = SmKmProbeAndLockAddress((unsigned __int64)BaseAddress, NumberOfBytesToUnlock, v8);
        if ( v10 >= 0 )
          v8->Next = (struct _MDL *)v17;
        else
          SmFpFree(*(_QWORD *)(a1 + 112), 4LL, a1, v17);
      }
      if ( v9 != *(_DWORD *)(a3 + 16) )
        SmSetThreadPagePriority(v18);
      if ( v10 >= 0 )
      {
        BaseAddress = (PVOID)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 112), *(_DWORD *)(a3 + 20) & 1);
        if ( BaseAddress )
        {
          *(_QWORD *)(a3 + 24) = v8;
LABEL_11:
          v10 = 0;
          goto LABEL_12;
        }
        v10 = -1073741670;
        SmKmUnlockMdl(v8, *(_QWORD *)(a1 + 112), a1);
      }
      SmFpFree(*(_QWORD *)(a1 + 112), 2LL, a1, v8);
      goto LABEL_12;
    }
    goto LABEL_23;
  }
  v15 = *(_QWORD *)(a3 + 8);
  BaseAddress = *(PVOID *)a3;
  NumberOfBytesToUnlock = v15;
  MmStoreFreeVirtualMemory(BaseAddress);
  v16 = *(_QWORD *)(a1 + 104);
  v10 = 0;
  if ( v16 )
    SmKmVirtualLockCtxMemoryUnlocked(v16);
LABEL_12:
  *(_DWORD *)(a3 + 32) = v10;
}
