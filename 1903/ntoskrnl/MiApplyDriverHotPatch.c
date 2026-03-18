/*
 * XREFs of MiApplyDriverHotPatch @ 0x14088D4B4
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x14088D86C (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     VslApplyHotPatch @ 0x14028F0C0 (VslApplyHotPatch.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiAllocateImportList @ 0x14070F718 (MiAllocateImportList.c)
 *     MiCompressImportList @ 0x14071090C (MiCompressImportList.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x140852248 (VslDetermineHotPatchUndoTableSize.c)
 *     VslObtainHotPatchUndoTable @ 0x140852B58 (VslObtainHotPatchUndoTable.c)
 *     MiPrepareDriverPatchState @ 0x140887E00 (MiPrepareDriverPatchState.c)
 *     MiUnlockDriverPages @ 0x140887E90 (MiUnlockDriverPages.c)
 *     MiPrepareDriverForHotPatch @ 0x140890BF0 (MiPrepareDriverForHotPatch.c)
 *     MiGetSectionStrongImageReference @ 0x140898E90 (MiGetSectionStrongImageReference.c)
 *     RtlFindHotPatchBase @ 0x1408D87E0 (RtlFindHotPatchBase.c)
 *     RtlFindHotPatchInformation @ 0x1408D880C (RtlFindHotPatchInformation.c)
 */

NTSTATUS __fastcall MiApplyDriverHotPatch(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  unsigned __int64 *v6; // rdi
  NTSTATUS result; // eax
  __int64 HotPatchInformation; // r13
  __int64 HotPatchBase; // r9
  unsigned int v10; // ecx
  void *v11; // r12
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  PVOID PoolWithTag; // rax
  int SectionStrongImageReference; // ebx
  __int64 *v17; // r15
  unsigned __int64 *ImportList; // rax
  unsigned __int64 *v19; // rcx
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // r8
  NTSTATUS v23; // eax
  int v24; // eax
  __int64 v25[2]; // [rsp+38h] [rbp-29h] BYREF
  int v26; // [rsp+48h] [rbp-19h]
  __int64 v27; // [rsp+4Ch] [rbp-15h]
  int v28; // [rsp+54h] [rbp-Dh]
  __int64 v29; // [rsp+58h] [rbp-9h]
  __int64 v30; // [rsp+60h] [rbp-1h]
  __int64 v31[2]; // [rsp+68h] [rbp+7h] BYREF
  int v32; // [rsp+78h] [rbp+17h]
  __int64 v33; // [rsp+7Ch] [rbp+1Bh]
  int v34; // [rsp+84h] [rbp+23h]
  __int64 v35; // [rsp+88h] [rbp+27h]
  __int64 v36; // [rsp+90h] [rbp+2Fh]
  SIZE_T NumberOfBytes; // [rsp+D0h] [rbp+6Fh] BYREF

  v2 = *(_DWORD *)(a2 + 196);
  v3 = 0LL;
  v27 = 0LL;
  v28 = 0;
  v30 = 0LL;
  v6 = 0LL;
  v33 = 0LL;
  v34 = 0;
  v36 = 0LL;
  if ( (v2 & 0x20) != 0 )
    return -1073741800;
  HotPatchInformation = RtlFindHotPatchInformation(*(PVOID *)(a1 + 48));
  HotPatchBase = RtlFindHotPatchBase(HotPatchInformation);
  if ( !HotPatchBase )
    return -1073741701;
  v10 = *(_DWORD *)(a2 + 64);
  v25[0] = a2;
  v29 = 0LL;
  v25[1] = HotPatchBase;
  v11 = 0LL;
  v12 = (v10 >> 12) + ((v10 & 0xFFF) != 0);
  v31[0] = a1;
  v13 = *(_DWORD *)(a1 + 64);
  v26 = v12;
  v31[1] = 0LL;
  v35 = 0LL;
  v32 = (v13 >> 12) + ((v13 & 0xFFF) != 0);
  if ( !*(_QWORD *)(a2 + 280) )
  {
LABEL_12:
    v17 = *(__int64 **)(a2 + 136);
    if ( (*(_DWORD *)(a1 + 196) & 0x20) == 0 && v17 != (__int64 *)1 )
    {
      if ( v17 != (__int64 *)-2LL )
      {
        v3 = 1LL;
        if ( ((unsigned __int8)v17 & 1) == 0 )
          v3 = *v17;
      }
      ImportList = MiAllocateImportList(v3 + 1);
      v6 = ImportList;
      if ( !ImportList )
      {
        SectionStrongImageReference = -1073741670;
        goto LABEL_38;
      }
      if ( v3 )
      {
        v19 = ImportList + 1;
        if ( ((unsigned __int8)v17 & 1) != 0 )
          *v19 = (unsigned __int64)v17 & 0xFFFFFFFFFFFFFFFEuLL;
        else
          memmove(v19, v17 + 1, 8 * v3);
      }
      v6[v3 + 1] = a1;
      v6 = MiCompressImportList(v6);
    }
    SectionStrongImageReference = MiPrepareDriverPatchState((__int64)v25);
    if ( SectionStrongImageReference >= 0 )
    {
      SectionStrongImageReference = MiPrepareDriverPatchState((__int64)v31);
      if ( SectionStrongImageReference >= 0 )
      {
        SectionStrongImageReference = MiPrepareDriverForHotPatch(v25, v31, HotPatchInformation, v11);
        if ( SectionStrongImageReference >= 0 )
        {
          v20 = *(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 96);
          SectionStrongImageReference = MiGetSectionStrongImageReference(v20, v21, v22);
          if ( SectionStrongImageReference >= 0 )
          {
            v23 = VslApplyHotPatch(
                    *(_QWORD *)(v20 + 56),
                    *(_QWORD *)(a1 + 112),
                    *(_QWORD *)(a2 + 48),
                    *(_QWORD *)(a1 + 48),
                    *(_QWORD *)(a1 + 112),
                    0LL);
            SectionStrongImageReference = v23;
            if ( v23 >= 0 )
            {
              if ( v6 )
              {
                *(_QWORD *)(a2 + 136) = v6;
                if ( v17 != (__int64 *)-2LL && ((unsigned __int8)v17 & 1) == 0 )
                  ExFreePoolWithTag(v17, 0);
                v6 = 0LL;
              }
              *(_QWORD *)(a2 + 280) = a1;
              v24 = *(_DWORD *)(a1 + 196);
              if ( (v24 & 0x20) == 0 )
              {
                *(_QWORD *)(a1 + 280) = a2;
                *(_DWORD *)(a1 + 196) = v24 | 0x20;
              }
            }
            else if ( v23 == -1073740628 )
            {
              KeBugCheckEx(0x1Au, 0x485018uLL, *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 48), 0LL);
            }
          }
        }
      }
    }
    goto LABEL_38;
  }
  result = VslDetermineHotPatchUndoTableSize(*(_QWORD *)(a2 + 48), &NumberOfBytes);
  if ( result < 0 )
    return result;
  v14 = NumberOfBytes;
  if ( !(_DWORD)NumberOfBytes )
    goto LABEL_11;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x54555048u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  SectionStrongImageReference = VslObtainHotPatchUndoTable(*(PVOID *)(a2 + 48), (__int64)PoolWithTag, v14);
  if ( SectionStrongImageReference >= 0 )
  {
LABEL_11:
    v3 = 0LL;
    goto LABEL_12;
  }
LABEL_38:
  MiUnlockDriverPages(v25);
  MiUnlockDriverPages(v31);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v6 )
  {
    if ( ((unsigned __int8)v6 & 1) == 0 )
      ExFreePoolWithTag(v6, 0);
  }
  return SectionStrongImageReference;
}
