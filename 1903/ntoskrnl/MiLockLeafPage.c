/*
 * XREFs of MiLockLeafPage @ 0x1400DC870
 * Callers:
 *     MiReservePageFileSpaceForPage @ 0x14002CE60 (MiReservePageFileSpaceForPage.c)
 *     MmCopyToCachedPage @ 0x14006E830 (MmCopyToCachedPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400DC230 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiActOnPte @ 0x1400DE740 (MiActOnPte.c)
 *     MiSectionCreated @ 0x1400E05D0 (MiSectionCreated.c)
 *     MiTranslatePageForCopy @ 0x1400F4DC8 (MiTranslatePageForCopy.c)
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 *     MiReplacePageOfProtoPool @ 0x140127B6C (MiReplacePageOfProtoPool.c)
 *     MiMakeImageReadOnly @ 0x140128B78 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x140138800 (MiDeletePerSessionProtos.c)
 *     MiConvertPrivateToProto @ 0x1401416D0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x140141F74 (MiResolveProtoCombine.c)
 *     MiPurgeImageSection @ 0x14015C138 (MiPurgeImageSection.c)
 *     MiIsSubsectionClean @ 0x1402B9A44 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1402B9FD8 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x1402CB518 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x1402CB8E8 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1402CB9CC (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402CCC18 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiInvalidPteConforms @ 0x1400DD400 (MiInvalidPteConforms.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011CE00 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiLockLeafPage(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0x7FFFFFFFFFFFFFFFLL;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *a1;
      v6 = *a1;
      if ( (*a1 & 1) == 0 )
        break;
LABEL_8:
      if ( (*(_QWORD *)(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
      {
        v7 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( a2 )
        {
          MiLockNestedPageAtDpcInline(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        }
        else
        {
          v9 = 0;
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
            goto LABEL_11;
          do
          {
            do
              KeYieldProcessorEx(&v9);
            while ( *(__int64 *)(v7 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) );
        }
        v4 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_11:
        if ( *a1 == v5 )
          return v7;
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), v4);
      }
    }
    if ( (*a1 & 0xC00) != 0x800 )
      return 0LL;
    if ( (unsigned int)MiInvalidPteConforms(*a1) )
    {
      v6 = v5;
      if ( qword_140465B00 && (v5 & 0x10) == 0 )
        v6 = v5 & ~qword_140465B00;
      goto LABEL_8;
    }
  }
}
