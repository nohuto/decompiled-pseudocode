/*
 * XREFs of ?Reset@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C00C4420
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C005A75C (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@Z @ 0x1C00C3D38 (-GetAllocationInfo@VIDMM_PROCESS_HEAP@@AEAAJPEAU_VIDMM_PROCESS_HEAP_ALLOC@@PEA_KPEAPEAXPEAKPEAH@.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Reset(
        VIDMM_PROCESS_HEAP *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_PROCESS_HEAP_ALLOC *a3,
        char a4)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  ULONG_PTR v12; // rcx
  __int64 v13; // rbx
  const GUID *v14; // r8
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // r15
  _QWORD *v22; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR NumberOfBytesToUnlock[2]; // [rsp+40h] [rbp-10h] BYREF
  int v27; // [rsp+80h] [rbp+30h] BYREF
  PVOID Protect; // [rsp+90h] [rbp+40h] BYREF

  v8 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this, a2) != v8 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
    v11[5] = 0LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    v11[3] = 270LL;
    v11[4] = 30LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10) + 24) = a3;
  LODWORD(v13) = VIDMM_PROCESS_HEAP::GetAllocationInfo(
                   this,
                   a3,
                   &RegionSize,
                   &BaseAddress,
                   (unsigned int *)&Protect,
                   &v27);
  if ( (int)v13 >= 0 )
  {
    v15 = ZwAllocateVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            &RegionSize,
            0x80000u,
            (ULONG)Protect);
    v13 = v15;
    if ( v15 >= 0 )
    {
      VidMmiSetPriorityForMemoryPages(a2, BaseAddress, RegionSize);
      if ( a4 )
      {
        if ( !v27 )
        {
          Protect = BaseAddress;
          NumberOfBytesToUnlock[0] = RegionSize;
          v20 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Protect, NumberOfBytesToUnlock, 1u);
          v12 = *(_QWORD *)&g_IsInternalReleaseOrDbg;
          v21 = v20;
          if ( g_IsInternalReleaseOrDbg )
          {
            v22 = (_QWORD *)WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg);
            v22[3] = Protect;
            v12 = NumberOfBytesToUnlock[0];
            v22[4] = NumberOfBytesToUnlock[0];
            v22[5] = v21;
          }
        }
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v17, v16, v18);
      *(_QWORD *)(v19 + 24) = v13;
      WdLogEvent5_WdError(v19);
    }
  }
  if ( (_DWORD)v13 == -1071775472 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0q(v12, &EventPerformanceWarning, v14, 18);
  if ( v27 )
    (*(void (__fastcall **)(VIDMM_PROCESS_HEAP *, struct _VIDMM_PROCESS_HEAP_ALLOC *))(*(_QWORD *)this + 64LL))(
      this,
      a3);
  return (unsigned int)v13;
}
