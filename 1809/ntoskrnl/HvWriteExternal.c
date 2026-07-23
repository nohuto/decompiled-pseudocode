/*
 * XREFs of HvWriteExternal @ 0x1407FBF74
 * Callers:
 *     CmSaveKey @ 0x140803130 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1408034FC (CmSaveMergedKeys.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x1405A74F0 (HvpHeaderCheckSum.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 *     CmpFileFlush @ 0x1406B9BB8 (CmpFileFlush.c)
 *     CmpDoFileSetSizeEx @ 0x1406B9BE0 (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvWriteExternal(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // edi
  unsigned int v4; // ebp
  int v5; // r11d
  unsigned int v6; // r10d
  __int64 CellMap; // rax
  unsigned int v8; // r10d
  int v9; // ecx
  int v10; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // r13
  __int64 (__fastcall *v14)(ULONG_PTR, __int64, int *, __int64, _DWORD); // rax
  int v15; // ebx
  unsigned int v16; // ebx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  int v19; // r12d
  int (__fastcall *v20)(ULONG_PTR, __int64, int *); // rax
  int v21; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v22; // [rsp+38h] [rbp-30h]
  int v23; // [rsp+40h] [rbp-28h]

  v1 = 0;
  if ( !*(_QWORD *)(BugCheckParameter2 + 1552) )
    return 3221225485LL;
  v4 = *(_DWORD *)(BugCheckParameter2 + 272);
  v5 = CmpDoFileSetSizeEx(BugCheckParameter2, 2u, v4 + 4096, 0);
  if ( v5 >= 0 )
  {
    v6 = 0;
    if ( v4 )
    {
      while ( 1 )
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, v6);
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v8, 0x99CuLL);
        v9 = *(_DWORD *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        v6 = v9 + v8;
        if ( v6 > *(_DWORD *)(BugCheckParameter2 + 272) || (v9 & 0xFFF) != 0 )
          break;
        if ( v6 >= v4 )
          goto LABEL_9;
      }
      return (unsigned int)-1073741492;
    }
LABEL_9:
    if ( v6 >= *(_DWORD *)(BugCheckParameter2 + 272) )
    {
      v10 = 4096;
      PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, 0x1000uLL, 0x20204D43u);
      v12 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      memmove(PoolWithTag, *(const void **)(BugCheckParameter2 + 64), 0x1000uLL);
      v12[10] = v4;
      v12[11] = 1;
      v12[127] = HvpHeaderCheckSum(v12);
      v14 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, int *, __int64, _DWORD))(BugCheckParameter2 + 40);
      v21 = 0;
      v22 = v12;
      v23 = 4096;
      v15 = v14(BugCheckParameter2, 2LL, &v21, 1LL, 0);
      ExFreePoolWithTag(v12, 0);
      if ( v15 < 0 )
        return 3221225805LL;
      v16 = 0;
      if ( v4 )
      {
        while ( 1 )
        {
          v17 = HvpGetCellMap(BugCheckParameter2, v16);
          if ( !v17 )
            KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v16, 0x9F1uLL);
          v18 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
          v19 = *(_DWORD *)(v18 + 8);
          v22 = (_DWORD *)v18;
          v20 = *(int (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 40);
          v21 = v10;
          v23 = v19;
          if ( v20(BugCheckParameter2, 2LL, &v21) < 0 )
            break;
          v10 += v19;
          v16 += v19;
          if ( v16 >= v4 )
            goto LABEL_20;
        }
        return (unsigned int)-1073741491;
      }
      else
      {
LABEL_20:
        if ( CmpFileFlush(BugCheckParameter2, 2u) < 0 )
          return (unsigned int)-1073741491;
        return v1;
      }
    }
  }
  return (unsigned int)v5;
}
