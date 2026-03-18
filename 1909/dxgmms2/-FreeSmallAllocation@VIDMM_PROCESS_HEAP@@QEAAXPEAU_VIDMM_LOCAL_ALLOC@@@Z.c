/*
 * XREFs of ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00C67D4
 * Callers:
 *     ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00C6400 (-Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ExFreeToPagedLookasideList @ 0x1C0027840 (ExFreeToPagedLookasideList.c)
 *     McTemplateK0qpxp @ 0x1C0028DCC (McTemplateK0qpxp.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C007F7F0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C00C6654 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::FreeSmallAllocation(VIDMM_PROCESS_HEAP *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  __int64 v3; // rbx
  VIDMM_PROCESS_HEAP *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r9
  void *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a2 + 3);
  v4 = this;
  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v5[3] = *(_QWORD *)(v3 + 56);
    v5[4] = *(_QWORD *)(v3 + 16);
    this = *(VIDMM_PROCESS_HEAP **)(v3 + 8);
    v5[5] = this;
  }
  if ( *(_BYTE *)(v3 + 72) )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v6[7] = 0LL;
    v6[3] = 270LL;
    v6[4] = 21LL;
    v6[5] = v4;
    v6[6] = v3;
    WdLogEvent5_WdCriticalError(v6);
  }
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v4 + 2));
  v8 = *(void **)(v3 + 32);
  if ( v8 )
  {
    MmUnsecureVirtualMemory(v8);
    *(_QWORD *)(v3 + 32) = 0LL;
  }
  v9 = *(_QWORD *)(v3 + 8);
  if ( *(_DWORD *)(v9 + 24) != 1 )
  {
    if ( *(_QWORD *)(v9 + 56) || *(_QWORD *)(v9 + 88) )
    {
      LOBYTE(v7) = 1;
      (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, _QWORD, __int64, __int64))(*(_QWORD *)v4 + 120LL))(
        v4,
        *(_QWORD *)a2,
        v3,
        v7);
    }
    else
    {
      BaseAddress = (PVOID)(*(_QWORD *)(v3 + 16) + *(_QWORD *)(v9 + 32));
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, (PSIZE_T)(v3 + 56), 0x4000u);
    }
  }
  VIDMM_LINEAR_POOL::Free(*(VIDMM_LINEAR_POOL **)(*(_QWORD *)(v3 + 8) + 72LL), *(struct _VIDMM_POOL_BLOCK **)(v3 + 24));
  *(_QWORD *)(*((_QWORD *)v4 + 1) + 128LL) -= *(_QWORD *)(v3 + 56);
  v10 = (_QWORD *)*((_QWORD *)v4 + 1);
  v11 = *(_DWORD *)(*(_QWORD *)(v3 + 8) + 80LL);
  v12 = *(_QWORD *)(v3 + 56);
  if ( v11 == 1 )
  {
    v10[19] -= v12;
  }
  else if ( v11 == 2 )
  {
    v10[21] -= v12;
  }
  else
  {
    v10[23] -= v12;
  }
  --*(_DWORD *)(*(_QWORD *)(v3 + 8) + 24LL);
  if ( bTracingEnabled )
  {
    v13 = *(_QWORD *)(v3 + 8);
    v14 = (unsigned int)(*(_DWORD *)(v13 + 80) - 3) > 3 ? *(_QWORD *)(v13 + 32) : *(_QWORD *)(v13 + 88);
    v10 = *(_QWORD **)(*((_QWORD *)v4 + 1) + 8LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      McTemplateK0qpxp(
        (__int64)v10,
        &EventDestroyProcessAllocationDetails,
        *(const GUID **)(v3 + 56),
        (int)v10,
        v3,
        *(_QWORD *)(v3 + 56),
        v14);
  }
  v15 = *(_QWORD *)(v3 + 8);
  if ( !*(_DWORD *)(v15 + 24) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10) + 24) = *(_QWORD *)(v3 + 8);
      v15 = *(_QWORD *)(v3 + 8);
    }
    VIDMM_PROCESS_HEAP::FreeBlock(v4, (struct _VIDMM_PROCESS_HEAP_BLOCK *)v15);
  }
  ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)v4 + 64), (PVOID)v3);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v4 + 2));
}
