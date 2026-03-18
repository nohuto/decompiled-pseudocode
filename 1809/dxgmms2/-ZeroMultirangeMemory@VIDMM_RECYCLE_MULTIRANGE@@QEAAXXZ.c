/*
 * XREFs of ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005A3CC
 * Callers:
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005DEC4 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C005DF30 (-ZeroIfNeeded@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0001304 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0059484 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005A33C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     FastZeroMemory @ 0x1C005A4B0 (FastZeroMemory.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C00B8964 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(VIDMM_RECYCLE_MULTIRANGE *this)
{
  GUID *v1; // rdi
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
  int v14; // edx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  _QWORD *v19; // rax
  VIDMM_RECYCLE_HEAP_MGR *CurrentProcess; // rcx
  void *v21; // rcx
  unsigned __int8 v22; // [rsp+70h] [rbp+8h] BYREF
  void *v23; // [rsp+78h] [rbp+10h] BYREF
  void *v24; // [rsp+80h] [rbp+18h] BYREF

  v23 = 0LL;
  v1 = 0LL;
  v2 = *((_QWORD *)this + 10);
  v3 = 0;
  v4 = (char *)*((_QWORD *)this + 4);
  v6 = *((_QWORD *)this + 5);
  v24 = 0LL;
  v7 = v6 - (_QWORD)v4;
  v22 = 0;
  v8 = **(_DWORD **)(v2 + 32);
  if ( (unsigned int)(v8 - 3) <= 3 && (unsigned int)(v8 - 5) > 1 )
  {
    v15 = VidMmRecycleHeapMapSection(
            *(PVOID *)(v2 + 56),
            (unsigned __int64)v4,
            v7,
            ((v8 - 4) & 0xFFFFFFFD) == 0,
            &v23,
            &v24,
            0,
            &v22);
    v18 = v15;
    if ( v15 < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16);
      v19[3] = v7;
      v19[4] = *((_QWORD *)this + 4);
      v19[5] = *((_QWORD *)this + 10);
      v19[6] = v18;
      v19[7] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
      WdLogEvent5_WdWarning(v19);
      return;
    }
    v4 = (char *)v23;
    v1 = (GUID *)v24;
    v3 = v22;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)this + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 21) == 3 )
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
  v14 = **(_DWORD **)(*((_QWORD *)this + 10) + 32LL);
  if ( (unsigned int)(v14 - 3) <= 3 && (unsigned int)(v14 - 5) > 1 )
  {
    if ( v3 )
      CurrentProcess = 0LL;
    else
      CurrentProcess = (VIDMM_RECYCLE_HEAP_MGR *)PsGetCurrentProcess();
    if ( v7 <= VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(CurrentProcess, 0) )
    {
      if ( v21 )
        MmUnmapViewOfSection(v21, v1);
      else
        MmUnmapViewInSystemSpace(v1);
    }
    else
    {
      VidMmUnmapViewAsync(v21, *(PVOID *)(*((_QWORD *)this + 10) + 56LL), v1);
    }
  }
}
