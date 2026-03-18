/*
 * XREFs of ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0069A60
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00667FC (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001710 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002900 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00145E8 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C0069BDC (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0069C20 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0069D3C (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00BBAA4 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4,
        _BYTE *a5,
        _BYTE *a6)
{
  _BYTE *v6; // rdi
  char *v7; // r10
  void *v8; // rsi
  char *v9; // r8
  unsigned __int64 v10; // r15
  char v12; // bp
  int v13; // ecx
  struct VIDMM_MDL_RANGE *v14; // r12
  struct VIDMM_MDL_RANGE *v15; // r13
  _QWORD *v16; // rax
  __int64 v17; // rcx
  enum _LOCK_OPERATION v18; // r8d
  void *v19; // rbx
  __int64 v20; // rdx
  void *v21; // rdi
  int v22; // ecx
  int v23; // esi
  int v24; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  VIDMM_RECYCLE_HEAP_MGR *CurrentProcess; // rcx
  void *v33; // rcx
  enum _LOCK_OPERATION v35; // [rsp+90h] [rbp+18h] BYREF
  struct VIDMM_SEGMENT *v36; // [rsp+98h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v6 = a6;
  v7 = (char *)this + 8;
  v8 = a5;
  v9 = (char *)*((_QWORD *)this + 1);
  v10 = a6 - a5;
  v12 = 0;
  v13 = -1;
  v14 = 0LL;
  v15 = 0LL;
  while ( v9 != v7 && v13 < 0 )
  {
    if ( *((_QWORD *)v9 - 1) > (unsigned __int64)a5 )
    {
      if ( *((_QWORD *)v9 - 2) < (unsigned __int64)a6 )
      {
        v13 = 0;
      }
      else
      {
        v13 = 1;
        v15 = (struct VIDMM_MDL_RANGE *)(v9 - 24);
      }
    }
    else
    {
      v13 = -1;
      v14 = (struct VIDMM_MDL_RANGE *)(v9 - 24);
    }
    v9 = *(char **)v9;
  }
  v16 = operator new[](0x30uLL, 0x32316956u, PagedPool);
  v19 = v16;
  if ( v16 )
  {
    *v16 = 0LL;
    v16[1] = v8;
    v16[2] = v6;
    v16[5] = this;
    v16[3] = 0LL;
    v16[4] = 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v19 )
  {
    _InterlockedIncrement(&dword_1C004E6A4);
    v26 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v26 + 24) = 6144LL;
    WdLogEvent5_WdLowResource(v26);
    return 3221225495LL;
  }
  v20 = *(_QWORD *)this;
  v21 = 0LL;
  a6 = 0LL;
  a5 = 0LL;
  LOBYTE(v35) = 0;
  v22 = **(_DWORD **)(v20 + 32);
  if ( (unsigned int)(v22 - 3) <= 3 && (unsigned int)(v22 - 5) > 1 )
  {
    v27 = VidMmRecycleHeapMapSection(
            *(PVOID *)(v20 + 56),
            (unsigned __int64)v8,
            v10,
            ((v22 - 4) & 0xFFFFFFFD) == 0,
            (void **)&a6,
            (void **)&a5,
            0,
            (unsigned __int8 *)&v35);
    v28 = v27;
    if ( v27 < 0 )
    {
      operator delete(v19);
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29);
      v31[3] = v10;
      v31[4] = v8;
      v31[5] = *(_QWORD *)this;
      v31[6] = v28;
      v31[7] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v31);
      return (unsigned int)v28;
    }
    v8 = a6;
    v21 = a5;
    v12 = v35;
  }
  v23 = VIDMM_MDL_RANGE::Lock((VIDMM_MDL_RANGE *)v19, v8, v18, v36, a2);
  v24 = **(_DWORD **)(*(_QWORD *)this + 32LL);
  if ( (unsigned int)(v24 - 3) <= 3 && (unsigned int)(v24 - 5) > 1 )
  {
    if ( v12 )
      CurrentProcess = 0LL;
    else
      CurrentProcess = (VIDMM_RECYCLE_HEAP_MGR *)PsGetCurrentProcess();
    if ( v10 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(CurrentProcess, 0) )
    {
      if ( v33 )
        MmUnmapViewOfSection(v33, v21);
      else
        MmUnmapViewInSystemSpace(v21);
    }
    else
    {
      VidMmUnmapViewAsync(v33, *(PVOID *)(*(_QWORD *)this + 56LL), v21);
    }
  }
  if ( v23 < 0 )
    operator delete(v19);
  else
    VIDMM_MDL_RANGE::InsertBetween((VIDMM_MDL_RANGE *)v19, v14, v15);
  return (unsigned int)v23;
}
