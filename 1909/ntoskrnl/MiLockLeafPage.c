/*
 * XREFs of MiLockLeafPage @ 0x1400BC6F0
 * Callers:
 *     MiReservePageFileSpaceForPage @ 0x14002D250 (MiReservePageFileSpaceForPage.c)
 *     MmCopyToCachedPage @ 0x14006EAA0 (MmCopyToCachedPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 *     MiSectionCreated @ 0x1400C0450 (MiSectionCreated.c)
 *     MiTranslatePageForCopy @ 0x1400C7C68 (MiTranslatePageForCopy.c)
 *     MiGetWorkingSetInfoList @ 0x14011DB2C (MiGetWorkingSetInfoList.c)
 *     MiReplacePageOfProtoPool @ 0x14012858C (MiReplacePageOfProtoPool.c)
 *     MiMakeImageReadOnly @ 0x140129598 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x140138E9C (MiDeletePerSessionProtos.c)
 *     MiConvertPrivateToProto @ 0x140141C10 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x1401424B4 (MiResolveProtoCombine.c)
 *     MiPurgeImageSection @ 0x14015C7D8 (MiPurgeImageSection.c)
 *     MiIsSubsectionClean @ 0x1402B97A4 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1402B9D38 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x1402CB278 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x1402CB648 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1402CB72C (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402CC978 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiInvalidPteConforms @ 0x1400BD280 (MiInvalidPteConforms.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
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
      if ( qword_140465800 && (v5 & 0x10) == 0 )
        v6 = v5 & ~qword_140465800;
      goto LABEL_8;
    }
  }
}
