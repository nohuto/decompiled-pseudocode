/*
 * XREFs of MiPrepareToHotPatchImage @ 0x140890CDC
 * Callers:
 *     MiPerformImageHotPatch @ 0x1408905D8 (MiPerformImageHotPatch.c)
 * Callees:
 *     RtlFindNextForwardRunClear @ 0x140088E20 (RtlFindNextForwardRunClear.c)
 *     RtlClearAllBits @ 0x140098850 (RtlClearAllBits.c)
 *     RtlSetAllBits @ 0x1401075D0 (RtlSetAllBits.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiCommitHotPatchTable @ 0x1402CF880 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1402CFB90 (MiPrepareImagePagesForHotPatch.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlpCheckFunctionPatchApplied @ 0x1405AE388 (RtlpCheckFunctionPatchApplied.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x14089008C (MiMapHotPatchImageInSystemSpace.c)
 *     MiProcessHotPatchUndoTable @ 0x140891240 (MiProcessHotPatchUndoTable.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x1408D856C (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x1408D8758 (RtlEnumerateHotPatchPatches.c)
 *     RtlFindHotPatchBase @ 0x1408D87E0 (RtlFindHotPatchBase.c)
 *     RtlHotPatchSynchronizationRequired @ 0x1408D893C (RtlHotPatchSynchronizationRequired.c)
 */

__int64 __fastcall MiPrepareToHotPatchImage(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // r14
  __int64 v4; // rsi
  unsigned __int8 v6; // r12
  _RTL_BITMAP *PoolWithTag; // rax
  _RTL_BITMAP *v8; // rdx
  int v9; // esi
  unsigned int *v10; // r13
  _RTL_BITMAP *v11; // rdx
  int v12; // r9d
  int v13; // r9d
  __int64 v14; // r8
  unsigned int v15; // r15d
  unsigned int v16; // r9d
  _BYTE *v17; // rax
  const void *v18; // rdx
  void *v19; // rsi
  _RTL_BITMAP *v20; // rax
  _RTL_BITMAP *v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // r11d
  __int64 v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rax
  ULONG i; // edx
  int v28; // r15d
  ULONG NextForwardRunClear; // eax
  ULONG v30; // r14d
  __int64 v31; // rcx
  _DWORD v33[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h]
  __int64 v35; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-B0h]
  _BYTE *v37; // [rsp+60h] [rbp-A8h]
  _BYTE v38[152]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE *StartingRunIndex; // [rsp+120h] [rbp+18h] BYREF
  unsigned __int8 v41; // [rsp+128h] [rbp+20h]

  StartingRunIndex = a3;
  v3 = a3;
  v4 = a2;
  v35 = 0LL;
  v36 = 0LL;
  memset(v38, 0, 0x60uLL);
  if ( v3 )
  {
    v6 = 0;
  }
  else
  {
    v3 = v38;
    StartingRunIndex = v38;
    v6 = 1;
  }
  v41 = v6;
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
  v37 = v3 + 32;
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
    MiProcessHotPatchUndoTable(a1, v3);
    v12 = 0;
LABEL_34:
    if ( !v6 )
    {
      v22 = 0LL;
      v23 = *v10;
      if ( *v10 )
      {
        v24 = *((_QWORD *)v3 + 5);
        do
        {
          v25 = *(unsigned int *)(v24 + 6 * v22);
          if ( (_DWORD)v25 )
          {
            v26 = RtlpCheckFunctionPatchApplied((_BYTE *)(*(_QWORD *)(a1 + 8) + v25), 0LL);
            if ( v26 != *(_QWORD *)(a1 + 24) + 8 * v22 )
              return (unsigned int)-1073740628;
          }
          v22 = (unsigned int)(v22 + 1);
        }
        while ( (unsigned int)v22 < v23 );
      }
      LOBYTE(StartingRunIndex) = 0;
      RtlHotPatchSynchronizationRequired(
        *(_QWORD *)(a1 + 8),
        v4,
        v12,
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
    for ( i = 0; ; i = v30 + v28 )
    {
      NextForwardRunClear = RtlFindNextForwardRunClear(*(PRTL_BITMAP *)(a1 + 48), i, (PULONG)&StartingRunIndex);
      v30 = NextForwardRunClear;
      if ( !NextForwardRunClear )
        break;
      v28 = (int)StartingRunIndex;
      v9 = MiPrepareImagePagesForHotPatch(
             (__int64 *)a1,
             *(_QWORD *)(a1 + 8) + (unsigned int)((_DWORD)StartingRunIndex << 12),
             NextForwardRunClear);
      if ( v9 < 0 )
        return (unsigned int)v9;
      LODWORD(StartingRunIndex) = v30 + v28;
    }
    v9 = MiMapHotPatchImageInSystemSpace((_QWORD *)a1);
    if ( v9 >= 0 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL);
      *(_QWORD *)(a1 + 72) = v31;
      *(_QWORD *)(a1 + 80) = v31 + *(unsigned int *)(a1 + 32);
      return 0;
    }
    return (unsigned int)v9;
  }
  v34 = v4 + *(unsigned int *)(RtlFindHotPatchBase(v4) + 24);
  v33[0] = 0;
  v9 = RtlCountRequiredHotPatchAddressTableEntries(
         *(_QWORD *)(a1 + 8),
         *(_DWORD *)(a1 + 32),
         *(_DWORD *)(a1 + 32) + v13,
         v4,
         v34,
         v6,
         (__int64)v33);
  v33[1] = v9;
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( v33[0] )
  {
    v15 = *v10 + v33[0];
    *(_DWORD *)(a1 + 36) = 8 * v15;
    v14 = ((8 * v15) >> 12) + (((8 * v15) & 0xFFF) != 0);
    LODWORD(StartingRunIndex) = v14;
    v16 = *((_DWORD *)v3 + 9);
    if ( (unsigned int)v14 > v16 )
    {
      if ( 8 * v15 + *(_DWORD *)(a1 + 32) > ((*(unsigned int *)(*(_QWORD *)a1 + 28LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)a1 + 33LL) << 32))
                                           - (*(unsigned int *)(*(_QWORD *)a1 + 24LL) | ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)a1 + 32LL) << 32))
                                           + 1) << 12 )
        return (unsigned int)-1073741671;
      v9 = MiCommitHotPatchTable(*(_QWORD *)a1, *(_QWORD *)(a1 + 24) + (v16 << 12), (unsigned int)v14 - v16);
      if ( v9 < 0 )
        return (unsigned int)v9;
      *((_DWORD *)v3 + 9) = (_DWORD)StartingRunIndex;
    }
  }
  else
  {
    v15 = *((_DWORD *)v3 + 8);
  }
  if ( !v6 )
  {
    if ( v15 > *v10 )
    {
      v17 = ExAllocatePoolWithTag(PagedPool, 6 * v15, 0x48555048u);
      StartingRunIndex = v17;
      if ( !v17 )
        return (unsigned int)v9;
      memset(v17, 0, 6 * v15);
      v18 = (const void *)*((_QWORD *)v3 + 5);
      v19 = StartingRunIndex;
      if ( v18 )
      {
        memmove(StartingRunIndex, v18, 6 * *v10);
        ExFreePoolWithTag(*((PVOID *)v3 + 5), 0);
      }
      *((_QWORD *)v3 + 5) = v19;
    }
    v20 = (_RTL_BITMAP *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * ((v15 >> 6) + ((v15 & 0x3F) != 0) + 2), 0x20206D4Du);
    v21 = v20;
    *(_QWORD *)(a1 + 40) = v20;
    if ( v20 )
    {
      v20->SizeOfBitMap = v15;
      v20->Buffer = &v20[1].SizeOfBitMap;
      v21 = *(_RTL_BITMAP **)(a1 + 40);
    }
    if ( !v21 )
      return (unsigned int)-1073741670;
    RtlClearAllBits(v21);
    MiProcessHotPatchUndoTable(a1, v3);
  }
  if ( !*(_DWORD *)(a1 + 36)
    || (v9 = MiPrepareImagePagesForHotPatch(
               (__int64 *)a1,
               *(_QWORD *)(a1 + 24),
               (*(_DWORD *)(a1 + 36) >> 12) + (unsigned int)((*(_DWORD *)(a1 + 36) & 0xFFF) != 0)),
        v9 >= 0) )
  {
    v35 = a1;
    v36 = v6;
    LODWORD(v4) = a2;
    RtlEnumerateHotPatchPatches(a2, v34, v14, &v35);
    v12 = v34;
    goto LABEL_34;
  }
  return (unsigned int)v9;
}
