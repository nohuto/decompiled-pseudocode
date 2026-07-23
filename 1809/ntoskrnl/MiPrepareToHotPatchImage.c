/*
 * XREFs of MiPrepareToHotPatchImage @ 0x1408585A8
 * Callers:
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 * Callees:
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 *     RtlFindNextForwardRunClear @ 0x140028C00 (RtlFindNextForwardRunClear.c)
 *     RtlSetAllBits @ 0x14002BDF0 (RtlSetAllBits.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiCommitHotPatchTable @ 0x1402B9590 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402B9B84 (MiPrepareImagePagesForHotPatch.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlpCheckFunctionPatchApplied @ 0x14057F480 (RtlpCheckFunctionPatchApplied.c)
 *     MiProcessHotPatchUndoTable @ 0x1405832E8 (MiProcessHotPatchUndoTable.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x1408579C8 (MiMapHotPatchImageInSystemSpace.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x14089AC7C (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x14089AE68 (RtlEnumerateHotPatchPatches.c)
 *     RtlFindHotPatchBase @ 0x14089AEF0 (RtlFindHotPatchBase.c)
 *     RtlHotPatchSynchronizationRequired @ 0x14089B04C (RtlHotPatchSynchronizationRequired.c)
 */

__int64 __fastcall MiPrepareToHotPatchImage(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // rsi
  __int64 v4; // rdi
  unsigned __int8 v6; // r15
  _RTL_BITMAP *PoolWithTag; // rax
  _RTL_BITMAP *v8; // rdx
  int v9; // edi
  unsigned int *v10; // r12
  _RTL_BITMAP *v11; // rdx
  int v12; // r9d
  __int64 v13; // r13
  int v14; // r9d
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // r14d
  unsigned int v18; // r9d
  _BYTE *v19; // rax
  const void *v20; // rdx
  void *v21; // rdi
  _RTL_BITMAP *v22; // rax
  _RTL_BITMAP *v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // r10d
  __int64 v26; // r11
  __int64 v27; // rcx
  __int64 v28; // rax
  ULONG i; // edx
  int v30; // r14d
  ULONG NextForwardRunClear; // eax
  ULONG v32; // esi
  __int64 v33; // rcx
  _DWORD v35[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v36[5]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v37[152]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE *StartingRunIndex; // [rsp+120h] [rbp+18h] BYREF
  unsigned __int8 v40; // [rsp+128h] [rbp+20h]

  StartingRunIndex = a3;
  v3 = a3;
  v4 = a2;
  if ( a3 )
  {
    v6 = 0;
  }
  else
  {
    memset(v37, 0, 0x60uLL);
    v3 = v37;
    StartingRunIndex = v37;
    v6 = 1;
  }
  v40 = v6;
  PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                 PagedPool,
                                 8
                               * ((unsigned int)((*(_DWORD *)(a1 + 32) & 0x3F000) != 0)
                                + 2
                                + (*(_DWORD *)(a1 + 32) >> 18)),
                                 0x20206D4Du);
  v8 = PoolWithTag;
  *(_QWORD *)(a1 + 48) = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->SizeOfBitMap = *(_DWORD *)(a1 + 32) >> 12;
    PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
    v8 = *(_RTL_BITMAP **)(a1 + 48);
  }
  if ( !v8 )
    return (unsigned int)-1073741670;
  RtlSetAllBits(v8);
  v10 = (unsigned int *)(v3 + 32);
  v36[3] = v3 + 32;
  *(_DWORD *)(a1 + 36) = 8 * *((_DWORD *)v3 + 8);
  if ( !v4 )
  {
    v11 = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                           NonPagedPoolNx,
                           8 * (((*v10 & 0x3F) != 0) + 2 + (*v10 >> 6)),
                           0x20206D4Du);
    *(_QWORD *)(a1 + 40) = v11;
    if ( v11 )
    {
      v11->SizeOfBitMap = *v10;
      v11->Buffer = &v11[1].SizeOfBitMap;
      v11 = *(_RTL_BITMAP **)(a1 + 40);
    }
    if ( !v11 )
      return (unsigned int)-1073741670;
    RtlClearAllBits(v11);
    MiProcessHotPatchUndoTable(a1, (__int64)v3);
    LODWORD(v13) = 0;
LABEL_34:
    if ( !v6 )
    {
      v24 = 0LL;
      v25 = *v10;
      if ( *v10 )
      {
        v26 = *((_QWORD *)v3 + 5);
        do
        {
          v27 = *(unsigned int *)(v26 + 6 * v24);
          if ( (_DWORD)v27 )
          {
            v28 = RtlpCheckFunctionPatchApplied((_BYTE *)(*(_QWORD *)(a1 + 8) + v27), 0LL);
            if ( v28 != *(_QWORD *)(a1 + 24) + 8 * v24 )
              return (unsigned int)-1073740628;
          }
          v24 = (unsigned int)(v24 + 1);
        }
        while ( (unsigned int)v24 < v25 );
      }
      LOBYTE(StartingRunIndex) = 0;
      RtlHotPatchSynchronizationRequired(
        *(_QWORD *)(a1 + 8),
        v4,
        v13,
        v12,
        *(_QWORD *)(a1 + 24),
        *((_QWORD *)v3 + 5),
        *(PRTL_BITMAP *)(a1 + 40),
        (__int64)&StartingRunIndex);
      RtlClearAllBits(*(PRTL_BITMAP *)(a1 + 40));
      if ( (_BYTE)StartingRunIndex )
        *(_DWORD *)(a1 + 136) |= 1u;
    }
    LODWORD(StartingRunIndex) = 0;
    for ( i = 0; ; i = v32 + v30 )
    {
      NextForwardRunClear = RtlFindNextForwardRunClear(*(PRTL_BITMAP *)(a1 + 48), i, (PULONG)&StartingRunIndex);
      v32 = NextForwardRunClear;
      if ( !NextForwardRunClear )
        break;
      v30 = (int)StartingRunIndex;
      v9 = MiPrepareImagePagesForHotPatch(
             (__int64 *)a1,
             *(_QWORD *)(a1 + 8) + (unsigned int)((_DWORD)StartingRunIndex << 12),
             NextForwardRunClear);
      if ( v9 < 0 )
        return (unsigned int)v9;
      LODWORD(StartingRunIndex) = v32 + v30;
    }
    v9 = MiMapHotPatchImageInSystemSpace((_QWORD *)a1);
    if ( v9 >= 0 )
    {
      v33 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL);
      *(_QWORD *)(a1 + 72) = v33;
      *(_QWORD *)(a1 + 80) = v33 + *(unsigned int *)(a1 + 32);
      return 0;
    }
    return (unsigned int)v9;
  }
  v13 = v4 + *(unsigned int *)(RtlFindHotPatchBase(v4) + 24);
  v36[2] = v13;
  v35[0] = 0;
  v9 = RtlCountRequiredHotPatchAddressTableEntries(
         *(_QWORD *)(a1 + 8),
         *(_DWORD *)(a1 + 32),
         *(_DWORD *)(a1 + 32) + v14,
         v4,
         v13,
         v6,
         (__int64)v35);
  v35[1] = v9;
  if ( v9 < 0 )
    return (unsigned int)v9;
  v16 = *v10;
  if ( v35[0] )
  {
    v17 = v16 + v35[0];
    *(_DWORD *)(a1 + 36) = 8 * (v16 + v35[0]);
    v15 = ((8 * v17) >> 12) + (((8 * v17) & 0xFFF) != 0);
    LODWORD(StartingRunIndex) = v15;
    v18 = *((_DWORD *)v3 + 9);
    if ( (unsigned int)v15 > v18 )
    {
      if ( 8 * v17 + *(_DWORD *)(a1 + 32) > ((*(unsigned int *)(*(_QWORD *)a1 + 28LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)a1 + 33LL) << 32))
                                           - (*(unsigned int *)(*(_QWORD *)a1 + 24LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)a1 + 32LL) << 32))
                                           + 1) << 12 )
        return (unsigned int)-1073741671;
      v9 = MiCommitHotPatchTable(*(_QWORD *)a1, *(_QWORD *)(a1 + 24) + (v18 << 12), (unsigned int)v15 - v18);
      if ( v9 < 0 )
        return (unsigned int)v9;
      *((_DWORD *)v3 + 9) = (_DWORD)StartingRunIndex;
    }
  }
  else
  {
    v17 = *v10;
  }
  if ( !v6 )
  {
    if ( v17 > *v10 )
    {
      v19 = ExAllocatePoolWithTag(PagedPool, 6 * v17, 0x48555048u);
      StartingRunIndex = v19;
      if ( !v19 )
        return (unsigned int)v9;
      memset(v19, 0, 6 * v17);
      v20 = (const void *)*((_QWORD *)v3 + 5);
      v21 = StartingRunIndex;
      if ( v20 )
      {
        memmove(StartingRunIndex, v20, 6 * *v10);
        ExFreePoolWithTag(*((PVOID *)v3 + 5), 0);
      }
      *((_QWORD *)v3 + 5) = v21;
    }
    v22 = (_RTL_BITMAP *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((v17 >> 6) + ((v17 & 0x3F) != 0) + 2), 0x20206D4Du);
    v23 = v22;
    *(_QWORD *)(a1 + 40) = v22;
    if ( v22 )
    {
      v22->SizeOfBitMap = v17;
      v22->Buffer = &v22[1].SizeOfBitMap;
      v23 = *(_RTL_BITMAP **)(a1 + 40);
    }
    if ( !v23 )
      return (unsigned int)-1073741670;
    RtlClearAllBits(v23);
    MiProcessHotPatchUndoTable(a1, (__int64)v3);
  }
  if ( !*(_DWORD *)(a1 + 36)
    || (v9 = MiPrepareImagePagesForHotPatch(
               (__int64 *)a1,
               *(_QWORD *)(a1 + 24),
               (*(_DWORD *)(a1 + 36) >> 12) + (unsigned int)((*(_DWORD *)(a1 + 36) & 0xFFF) != 0)),
        v9 >= 0) )
  {
    v36[0] = a1;
    v36[1] = v6;
    LODWORD(v4) = a2;
    RtlEnumerateHotPatchPatches(a2, v13, v15, v36);
    goto LABEL_34;
  }
  return (unsigned int)v9;
}
