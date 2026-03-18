/*
 * XREFs of ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DD70
 * Callers:
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C005A230 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C005BD7C (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0001548 (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0059828 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005A33C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005AFAC (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CDA8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B8198 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

__int64 __fastcall VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(__int64 *a1, __int64 a2)
{
  VIDMM_RECYCLE_HEAP_MGR *v4; // rcx
  __int64 v5; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v6; // r12
  unsigned __int64 SmallAllocationBlockSize; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  void *v10; // rsi
  unsigned __int64 v11; // rcx
  bool v12; // r14
  bool v13; // al
  struct VIDMM_RECYCLE_RANGE *v15; // r10
  struct VIDMM_RECYCLE_RANGE *v16; // r11
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  char v18; // r9
  void *v19; // rax
  char v20; // si
  NTSTATUS v21; // eax
  __int64 v22; // r15
  _QWORD *v23; // rax
  unsigned int v24; // r14d
  VIDMM_RECYCLE_RANGE *v25; // rbp
  VIDMM_RECYCLE_RANGE *v26; // r15
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  char v29; // di
  struct VIDMM_RECYCLE_RANGE *v30; // rax
  const GUID *v31; // r8
  struct VIDMM_RECYCLE_RANGE *v32; // rbx
  unsigned int v33; // ebx
  _QWORD *v34; // rax
  const GUID *v35; // r8
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  v4 = (VIDMM_RECYCLE_HEAP_MGR *)a1[4];
  if ( (unsigned int)(*(_DWORD *)v4 - 1) > 1 )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 136);
  v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v4 + 1);
  SmallAllocationBlockSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(
                               v4,
                               (unsigned int)(*(_DWORD *)v4 - 5) <= 1);
  v9 = a1[6];
  v10 = (void *)a1[5];
  v11 = v9 - (_QWORD)v10;
  v12 = v5 && v11 > SmallAllocationBlockSize && *(_QWORD *)(v5 + 40) == v9;
  v13 = !v5 && *(_QWORD *)(a2 + 40) == v9 && v11 > SmallAllocationBlockSize;
  if ( !v12 && !v13 )
    return 0LL;
  BaseAddress = 0LL;
  if ( v12 )
  {
    v15 = *(struct VIDMM_RECYCLE_RANGE **)(v5 + 64);
    v16 = *(struct VIDMM_RECYCLE_RANGE **)(v5 + 72);
    NextRange = v15;
    while ( !*((_DWORD *)NextRange + 16) )
    {
      if ( NextRange == v16 )
        v18 = 1;
      else
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      if ( v18 )
      {
        v19 = (void *)*((_QWORD *)v15 + 4);
        goto LABEL_24;
      }
    }
    return 0LL;
  }
  v19 = *(void **)(a2 + 32);
LABEL_24:
  BaseAddress = v19;
  RegionSize = v9 - (_QWORD)v19;
  if ( v19 == v10 )
  {
    v20 = 1;
  }
  else
  {
    v20 = 0;
    v21 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    v22 = v21;
    if ( v21 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v8);
      v23[3] = BaseAddress;
      v23[4] = a1;
      v23[5] = v22;
      v23[6] = **(_QWORD **)(*(_QWORD *)(a1[4] + 8) + 8LL);
      WdLogEvent5_WdWarning(v23);
      return 0LL;
    }
    a1[6] = (__int64)BaseAddress;
  }
  if ( v12 )
  {
    v24 = *(_DWORD *)(v5 + 88);
    v25 = *(VIDMM_RECYCLE_RANGE **)(v5 + 64);
    v26 = *(VIDMM_RECYCLE_RANGE **)(v5 + 72);
    if ( v24 == 3 && g_IsInternalRelease )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v8);
      v27[5] = 0LL;
      v27[6] = 0LL;
      v27[7] = 0LL;
      v27[3] = 270LL;
      v27[4] = 9LL;
      WdLogEvent5_WdCriticalError(v27);
    }
    VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(a1[4], v24, v5);
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(v6, (struct _SLIST_ENTRY *)v5);
    v28 = (_QWORD *)*((_QWORD *)v25 + 16);
    *v28 = a1 + 9;
    a1[10] = (__int64)v28;
    v29 = 0;
    do
    {
      v30 = VIDMM_RECYCLE_RANGE::GetNextRange(v25);
      if ( v25 == v26 )
        v29 = 1;
      v32 = v30;
      VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v6, (struct _SLIST_ENTRY *)v25, v31);
      if ( v29 )
        v32 = v25;
      v25 = v32;
    }
    while ( !v29 );
  }
  else
  {
    v33 = *(_DWORD *)(a2 + 88);
    if ( v33 == 3 && g_IsInternalRelease )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v8);
      v34[5] = 0LL;
      v34[6] = 0LL;
      v34[7] = 0LL;
      v34[3] = 270LL;
      v34[4] = 9LL;
      WdLogEvent5_WdCriticalError(v34);
    }
    VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(a1[4], v33, a2);
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(v6, (struct _SLIST_ENTRY *)a2, v35);
  }
  return (unsigned int)(v20 != 0) + 1;
}
