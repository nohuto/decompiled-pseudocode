/*
 * XREFs of MiApplyDriverHotPatch @ 0x1408552E0
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140855628 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     VslApplyHotPatch @ 0x14027AEE8 (VslApplyHotPatch.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiCompressImportList @ 0x1406C9A38 (MiCompressImportList.c)
 *     MiAllocateImportList @ 0x1406C9B44 (MiAllocateImportList.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x14081976C (VslDetermineHotPatchUndoTableSize.c)
 *     VslObtainHotPatchUndoTable @ 0x140819D74 (VslObtainHotPatchUndoTable.c)
 *     MiAllocateHotPatchPageBitMap @ 0x1408551CC (MiAllocateHotPatchPageBitMap.c)
 *     MiPrepareDriverForHotPatch @ 0x1408584BC (MiPrepareDriverForHotPatch.c)
 *     MiUnlockHotPatchPages @ 0x1408595FC (MiUnlockHotPatchPages.c)
 *     MiGetSectionStrongImageReference @ 0x14085D558 (MiGetSectionStrongImageReference.c)
 *     RtlFindHotPatchBase @ 0x14089AEF0 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x14089AF1C (RtlFindHotPatchInformation.c)
 */

NTSTATUS __fastcall MiApplyDriverHotPatch(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rsi
  NTSTATUS result; // eax
  __int64 HotPatchInformation; // r13
  __int64 HotPatchBase; // rax
  void *v8; // r12
  unsigned int v9; // ebx
  PVOID PoolWithTag; // rax
  int HotPatchPageBitMap; // ebx
  __int64 *v12; // r15
  __int64 v13; // rbx
  unsigned __int64 *ImportList; // rax
  unsigned __int64 *v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  NTSTATUS v20; // eax
  int v21; // eax
  _QWORD v22[4]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v23[4]; // [rsp+50h] [rbp-20h] BYREF
  SIZE_T NumberOfBytes; // [rsp+A8h] [rbp+38h] BYREF

  v2 = 0LL;
  if ( (*(_DWORD *)(a2 + 196) & 0x20) != 0 )
    return -1073741800;
  HotPatchInformation = RtlFindHotPatchInformation(*(PVOID *)(a1 + 48));
  HotPatchBase = RtlFindHotPatchBase(HotPatchInformation);
  if ( !HotPatchBase )
    return -1073741701;
  v22[3] = 0LL;
  v8 = 0LL;
  v23[3] = 0LL;
  v22[1] = HotPatchBase;
  v22[0] = a2;
  v23[0] = a1;
  if ( !*(_QWORD *)(a2 + 280) )
    goto LABEL_11;
  result = VslDetermineHotPatchUndoTableSize(*(_QWORD *)(a2 + 48), &NumberOfBytes);
  if ( result < 0 )
    return result;
  v9 = NumberOfBytes;
  if ( !(_DWORD)NumberOfBytes )
    goto LABEL_11;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x54555048u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  HotPatchPageBitMap = VslObtainHotPatchUndoTable(*(void **)(a2 + 48), (__int64)PoolWithTag, v9);
  if ( HotPatchPageBitMap >= 0 )
  {
LABEL_11:
    v12 = *(__int64 **)(a2 + 136);
    if ( (*(_DWORD *)(a1 + 196) & 0x20) == 0 && v12 != (__int64 *)1 )
    {
      if ( v12 == (__int64 *)-2LL )
      {
        v13 = 0LL;
      }
      else
      {
        v13 = 1LL;
        if ( ((unsigned __int8)v12 & 1) == 0 )
          v13 = *v12;
      }
      ImportList = MiAllocateImportList(v13 + 1);
      v2 = ImportList;
      if ( !ImportList )
      {
        HotPatchPageBitMap = -1073741670;
        goto LABEL_38;
      }
      if ( v13 )
      {
        v15 = ImportList + 1;
        if ( ((unsigned __int8)v12 & 1) != 0 )
          *v15 = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFEuLL;
        else
          memmove(v15, v12 + 1, 8 * v13);
      }
      v2[v13 + 1] = a1;
      v2 = MiCompressImportList(v2);
    }
    HotPatchPageBitMap = MiAllocateHotPatchPageBitMap(v22);
    if ( HotPatchPageBitMap >= 0 )
    {
      HotPatchPageBitMap = MiAllocateHotPatchPageBitMap(v23);
      if ( HotPatchPageBitMap >= 0 )
      {
        HotPatchPageBitMap = MiPrepareDriverForHotPatch(v22, v23, HotPatchInformation, v8);
        if ( HotPatchPageBitMap >= 0 )
        {
          v16 = *(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 96);
          HotPatchPageBitMap = MiGetSectionStrongImageReference(v16, v17, v18, v19);
          if ( HotPatchPageBitMap >= 0 )
          {
            v20 = VslApplyHotPatch(
                    *(_QWORD *)(v16 + 48),
                    *(_QWORD *)(a1 + 112),
                    *(_QWORD *)(a2 + 48),
                    *(_QWORD *)(a1 + 48),
                    *(_QWORD *)(a1 + 112));
            HotPatchPageBitMap = v20;
            if ( v20 >= 0 )
            {
              if ( v2 )
              {
                *(_QWORD *)(a2 + 136) = v2;
                if ( v12 != (__int64 *)-2LL && ((unsigned __int8)v12 & 1) == 0 )
                  ExFreePoolWithTag(v12, 0);
                v2 = 0LL;
              }
              *(_QWORD *)(a2 + 280) = a1;
              v21 = *(_DWORD *)(a1 + 196);
              if ( (v21 & 0x20) == 0 )
              {
                *(_QWORD *)(a1 + 280) = a2;
                *(_DWORD *)(a1 + 196) = v21 | 0x20;
              }
            }
            else if ( v20 == -1073740628 )
            {
              KeBugCheckEx(0x1Au, 0x485018uLL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 48), 0LL);
            }
          }
        }
      }
    }
  }
LABEL_38:
  MiUnlockHotPatchPages(v22);
  MiUnlockHotPatchPages(v23);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return HotPatchPageBitMap;
}
