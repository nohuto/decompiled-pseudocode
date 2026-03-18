/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x14014884C
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140135680 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x14032510C (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmSetThreadPagePriority @ 0x1401052F8 (SmSetThreadPagePriority.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x140147EAC (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     SmKmUnlockMdl @ 0x1401487E8 (SmKmUnlockMdl.c)
 *     SmFpAllocate @ 0x140148B24 (SmFpAllocate.c)
 *     SmFpFree @ 0x140149E64 (SmFpFree.c)
 *     ZwUnlockVirtualMemory @ 0x1401C3970 (ZwUnlockVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140325818 (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140325938 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     MmStoreAllocateVirtualMemory @ 0x140718E68 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x140727EB4 (MmStoreFreeVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  struct _MDL *v8; // r14
  int v9; // r12d
  int v10; // ebx
  PVOID VirtualMemory; // rax
  ULONG_PTR v12; // rcx
  ULONG_PTR v13; // rax
  ULONG_PTR v14; // rcx
  int v15; // edx
  __int64 v16; // r13
  struct _KTHREAD *v17[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR NumberOfBytesToUnlock; // [rsp+88h] [rbp+48h] BYREF

  v5 = a2 - 2;
  if ( !v5 )
  {
    NumberOfBytesToUnlock = *(_QWORD *)(a3 + 8);
    VirtualMemory = (PVOID)MmStoreAllocateVirtualMemory();
    BaseAddress = VirtualMemory;
    if ( VirtualMemory )
    {
      v12 = *(_QWORD *)(a1 + 104);
      if ( v12 )
      {
        v10 = SmKmVirtualLockCtxLockMemory(v12);
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
      v15 = v7 - 1;
      if ( !v15 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))a3)(a1, *(_QWORD *)(a3 + 8), 0LL);
        goto LABEL_12;
      }
      if ( v15 != 1 )
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
      v17[0] = KeGetCurrentThread();
      v9 = SmSetThreadPagePriority(v17);
      v10 = SmKmProbeAndLockAddress((unsigned __int64)BaseAddress, NumberOfBytesToUnlock, v8);
      if ( v10 == -1073741395 && (*(_DWORD *)(a3 + 20) & 1) != 0 )
      {
        v16 = SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 112), 1);
        v10 = SmKmProbeAndLockAddress((unsigned __int64)BaseAddress, NumberOfBytesToUnlock, v8);
        if ( v10 >= 0 )
          v8->Next = (struct _MDL *)v16;
        else
          SmFpFree(*(_QWORD *)(a1 + 112), 4LL, a1, v16);
      }
      if ( v9 != *(_DWORD *)(a3 + 16) )
        SmSetThreadPagePriority(v17);
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
  v13 = *(_QWORD *)(a3 + 8);
  BaseAddress = *(PVOID *)a3;
  NumberOfBytesToUnlock = v13;
  MmStoreFreeVirtualMemory(BaseAddress);
  v14 = *(_QWORD *)(a1 + 104);
  v10 = 0;
  if ( v14 )
    SmKmVirtualLockCtxMemoryUnlocked(v14);
LABEL_12:
  *(_DWORD *)(a3 + 32) = v10;
}
