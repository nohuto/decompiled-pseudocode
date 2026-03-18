/*
 * XREFs of RtlFindNextForwardRunClear @ 0x14008A120
 * Callers:
 *     PnprMirrorMarkedPages @ 0x1405A9E1C (PnprMirrorMarkedPages.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x1405ACB74 (PopGetRemainingHibernateRangeDataSize.c)
 *     HvpCountSetRangesInVector @ 0x1406319E4 (HvpCountSetRangesInVector.c)
 *     HvpGenerateLogMetadata @ 0x140641324 (HvpGenerateLogMetadata.c)
 *     MiFindDriverNonPagedSections @ 0x1407106D0 (MiFindDriverNonPagedSections.c)
 *     MiPrepareToHotPatchImage @ 0x1408904FC (MiPrepareToHotPatchImage.c)
 *     ViThunkSnapSharedExports @ 0x1409601D4 (ViThunkSnapSharedExports.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  unsigned int SizeOfBitMap; // r10d
  ULONG v5; // r9d
  unsigned int *Buffer; // rdx
  unsigned int *v8; // rbx
  unsigned int *v9; // r8
  ULONG v10; // edx
  int v11; // edi
  unsigned int *v12; // r8
  unsigned int v13; // ecx
  unsigned int i; // eax

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = FromIndex;
  if ( BitMapHeader->SizeOfBitMap <= FromIndex )
  {
    *StartingRunIndex = FromIndex;
    return 0;
  }
  Buffer = BitMapHeader->Buffer;
  v8 = &Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
  v9 = &Buffer[(unsigned __int64)v5 >> 5];
  if ( v9 != v8 && (*v9 | dword_14037C900[v5 & 0x1F]) == 0xFFFFFFFF )
  {
    v5 = v5 - (v5 & 0x1F) + 32;
    for ( ++v9; v9 < v8 && *v9 == -1; ++v9 )
      v5 += 32;
  }
  for ( ; v5 < SizeOfBitMap; ++v5 )
  {
    if ( !_bittest((const signed __int32 *)BitMapHeader->Buffer, v5) )
      break;
  }
  v10 = 0;
  if ( v9 == v8 )
    goto LABEL_19;
  v11 = v5 & 0x1F;
  if ( (*v9 & ~dword_14037C900[v5 & 0x1F]) != 0 )
    goto LABEL_19;
  v10 = 32 - v11;
  if ( v11 != 33 )
  {
    v12 = v9 + 1;
    while ( v12 < v8 && !*v12 )
    {
      ++v12;
      v10 += 32;
      if ( v10 == -1 )
        goto LABEL_23;
    }
LABEL_19:
    v13 = BitMapHeader->SizeOfBitMap;
    for ( i = v10 + v5; i < v13; ++v10 )
    {
      if ( _bittest((const signed __int32 *)BitMapHeader->Buffer, i) )
        break;
      if ( v10 == -1 )
        break;
      ++i;
    }
  }
LABEL_23:
  *StartingRunIndex = v5;
  return v10;
}
