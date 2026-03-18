/*
 * XREFs of ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A584
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C005A810 (-Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005A33C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C005A75C (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C005A9F8 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DCEC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DE1C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C00B7A84 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00B87AC (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Reset(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  int v3; // r14d
  ULONG_PTR v4; // r9
  __int64 v6; // rsi
  __int64 v7; // rax
  int *v8; // rcx
  const GUID *v9; // r8
  char v10; // r15
  struct VIDMM_RECYCLE_RANGE *NextRange; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v12; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v13; // r13
  ULONG Protect; // ebx
  int v15; // edx
  int v16; // eax
  NTSTATUS v17; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  PVOID v28; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR NumberOfBytesToUnlock[2]; // [rsp+38h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+48h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v31; // [rsp+98h] [rbp+50h]
  char v32; // [rsp+A0h] [rbp+58h]
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+60h] BYREF

  v32 = a3;
  v31 = a2;
  v3 = 0;
  v4 = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
  BaseAddress = 0LL;
  RegionSize = v4;
  LODWORD(v6) = 0;
  v7 = WdLogNewEntry5_WdEvent(this, a2);
  *(_QWORD *)(v7 + 24) = this;
  WdLogEvent5_WdEvent(v7);
  if ( *((_BYTE *)this + 153) )
  {
    LODWORD(v6) = -1071775472;
LABEL_24:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((__int64)v8, &EventPerformanceWarning, v9, 18);
    goto LABEL_15;
  }
  v10 = 0;
  NextRange = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8);
  v12 = *(VIDMM_RECYCLE_HEAP_MGR **)(*((_QWORD *)this + 10) + 32LL);
  v13 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v12 + 1);
  do
  {
    if ( *((_DWORD *)NextRange + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v12, NextRange);
      v19 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(NextRange);
      v21 = v19;
      if ( v19 < 0 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v20);
        v26[3] = NextRange;
        v26[4] = v21;
        v26[5] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
        WdLogEvent5_WdWarning(v26);
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(v13, NextRange);
        v10 = 1;
      }
    }
    if ( NextRange == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      v10 = 1;
    else
      NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
  }
  while ( !v10 );
  Protect = 1028;
  v8 = *(int **)(*((_QWORD *)this + 10) + 32LL);
  v15 = *v8;
  if ( (unsigned int)(*v8 - 3) <= 3 )
  {
    if ( v15 != 3 )
      Protect = 4;
    VIDMM_RECYCLE_MULTIRANGE::Map(this, 0LL, RegionSize, 1);
    if ( *((_BYTE *)this + 152) && (v8 = (int *)*((_QWORD *)this + 20)) != 0LL )
    {
      v8 = (int *)((char *)v8 + *((_QWORD *)this + 21));
      v3 = 1;
      BaseAddress = v8;
    }
    else
    {
      LODWORD(v6) = -1071775472;
    }
  }
  else
  {
    BaseAddress = (PVOID)*((_QWORD *)this + 6);
    v16 = 4;
    if ( v15 != 2 )
      v16 = 1028;
    Protect = v16;
  }
  if ( (int)v6 >= 0 )
  {
    v17 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x80000u, Protect);
    v6 = v17;
    if ( v17 < 0 )
    {
      v27 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v27 + 24) = v6;
      WdLogEvent5_WdError(v27);
    }
    else
    {
      VidMmiSetPriorityForMemoryPages(v31, BaseAddress, RegionSize);
      if ( v32 && !v3 )
      {
        v28 = BaseAddress;
        NumberOfBytesToUnlock[0] = RegionSize;
        v22 = ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v28, NumberOfBytesToUnlock, 1u);
        v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v24, v23);
        v25[3] = v28;
        v25[4] = NumberOfBytesToUnlock[0];
        v25[5] = v22;
        WdLogEvent5_WdEvent(v25);
      }
    }
  }
  if ( (_DWORD)v6 == -1071775472 )
    goto LABEL_24;
LABEL_15:
  if ( v3 )
    VIDMM_RECYCLE_MULTIRANGE::Unmap(this);
  return (unsigned int)v6;
}
