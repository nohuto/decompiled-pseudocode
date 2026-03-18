/*
 * XREFs of ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C007E170
 * Callers:
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0069598 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C0069610 (-ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00145E8 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0064ED8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0069D3C (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     FastZeroMemory @ 0x1C007E250 (FastZeroMemory.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00BBAA4 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(VIDMM_RECYCLE_MULTIRANGE *this)
{
  void *v1; // rdi
  __int64 v2; // rdx
  unsigned __int8 v3; // r14
  char *v4; // r15
  __int64 v6; // rbp
  unsigned __int64 v7; // rbp
  int v8; // ecx
  struct VIDMM_RECYCLE_RANGE *i; // rsi
  __int64 v10; // rcx
  size_t v11; // rdx
  char *v12; // rcx
  __int64 v13; // r8
  unsigned int *v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  _QWORD *v20; // rax
  VIDMM_RECYCLE_HEAP_MGR *CurrentProcess; // rcx
  void *v22; // rcx
  unsigned __int8 v23; // [rsp+70h] [rbp+8h] BYREF
  void *v24; // [rsp+78h] [rbp+10h] BYREF
  void *v25; // [rsp+80h] [rbp+18h] BYREF

  v24 = 0LL;
  v1 = 0LL;
  v2 = *((_QWORD *)this + 10);
  v3 = 0;
  v4 = (char *)*((_QWORD *)this + 4);
  v6 = *((_QWORD *)this + 5);
  v25 = 0LL;
  v7 = v6 - (_QWORD)v4;
  v23 = 0;
  v8 = **(_DWORD **)(v2 + 32);
  if ( (unsigned int)(v8 - 3) <= 3 && (unsigned int)(v8 - 5) > 1 )
  {
    v16 = VidMmRecycleHeapMapSection(
            *(PVOID *)(v2 + 56),
            (unsigned __int64)v4,
            v7,
            ((v8 - 4) & 0xFFFFFFFD) == 0,
            &v24,
            &v25,
            0,
            &v23);
    v19 = v16;
    if ( v16 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17);
      v20[3] = v7;
      v20[4] = *((_QWORD *)this + 4);
      v20[5] = *((_QWORD *)this + 10);
      v20[6] = v19;
      v20[7] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v20);
      return;
    }
    v4 = (char *)v24;
    v1 = v25;
    v3 = v23;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 20) == 3 )
    {
      v10 = *((_QWORD *)i + 4);
      v11 = *((_QWORD *)i + 5) - v10;
      v12 = &v4[v10 - *((_QWORD *)this + 4)];
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      *(_QWORD *)(v13 + 200) += v11;
      FastZeroMemory(v12, v11);
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)this + 9) )
      break;
  }
  v14 = *(unsigned int **)(*((_QWORD *)this + 10) + 32LL);
  v15 = *v14;
  if ( (unsigned int)(v15 - 3) <= 3 && (unsigned int)(v15 - 5) > 1 )
  {
    if ( v3 )
      CurrentProcess = 0LL;
    else
      CurrentProcess = (VIDMM_RECYCLE_HEAP_MGR *)PsGetCurrentProcess(v14, v15);
    if ( v7 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(CurrentProcess, 0) )
    {
      if ( v22 )
        MmUnmapViewOfSection(v22, v1);
      else
        MmUnmapViewInSystemSpace(v1);
    }
    else
    {
      VidMmUnmapViewAsync(v22, *(PVOID *)(*((_QWORD *)this + 10) + 56LL), v1);
    }
  }
}
