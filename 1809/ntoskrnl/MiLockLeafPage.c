/*
 * XREFs of MiLockLeafPage @ 0x140080ED0
 * Callers:
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 *     MiResolveProtoCombine @ 0x14007BF74 (MiResolveProtoCombine.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080940 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x140081800 (MiReservePageFileSpaceForPage.c)
 *     MiConvertPrivateToProto @ 0x140082EB0 (MiConvertPrivateToProto.c)
 *     MiActOnPte @ 0x14009410C (MiActOnPte.c)
 *     MiTranslatePageForCopy @ 0x1400E9C30 (MiTranslatePageForCopy.c)
 *     MiReplacePageOfProtoPool @ 0x140124D9C (MiReplacePageOfProtoPool.c)
 *     MiMakeImageReadOnly @ 0x140129318 (MiMakeImageReadOnly.c)
 *     MiDeletePerSessionProtos @ 0x140136FA4 (MiDeletePerSessionProtos.c)
 *     MiPurgeImageSection @ 0x140176620 (MiPurgeImageSection.c)
 *     MiIsSubsectionClean @ 0x1402A2694 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1402A2C28 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x1402B5814 (MiDecrementLargeSubsections.c)
 *     MiEliminateStaleExtents @ 0x1402B5BF0 (MiEliminateStaleExtents.c)
 *     MiEnableLargeSubsection @ 0x1402B5CC4 (MiEnableLargeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402B69A8 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiInvalidPteConforms @ 0x140039720 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120F04 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiLockLeafPage(__int64 *a1, int a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  int v10; // [rsp+50h] [rbp+8h] BYREF

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
      v7 = 6 * ((v6 >> 12) & 0xFFFFFFFFFLL);
      if ( (*(_QWORD *)(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
      {
        v8 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( a2 )
        {
          MiLockNestedPageAtDpcInline(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        }
        else
        {
          v10 = 0;
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
            goto LABEL_11;
          do
          {
            do
              KeYieldProcessorEx(&v10, v7, v4);
            while ( *(__int64 *)(v8 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
        }
        v4 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_11:
        if ( *a1 == v5 )
          return v8;
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), v4);
      }
    }
    if ( (*a1 & 0xC00) != 0x800 )
      return 0LL;
    if ( MiInvalidPteConforms(*a1) )
    {
      v6 = v5;
      if ( qword_14043A0C0 && (v5 & 0x10) == 0 )
        v6 = v5 & ~qword_14043A0C0;
      goto LABEL_8;
    }
  }
}
