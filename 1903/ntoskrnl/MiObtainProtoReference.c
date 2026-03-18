/*
 * XREFs of MiObtainProtoReference @ 0x1400A6590
 * Callers:
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     MiFinishMdlForMappedFileFault @ 0x1400A6290 (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 *     MiTranslatePageForCopy @ 0x1400F4DC8 (MiTranslatePageForCopy.c)
 *     MiHandleCollidedFault @ 0x140100C88 (MiHandleCollidedFault.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CAE80 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x1402CB23C (MiCopyImageExtentContents.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiAreChargesNeededToLockPage @ 0x140054C70 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1400A74D0 (MiChargeForLockedPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011CE00 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiObtainProtoReference(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (a2 & 1) != 0 )
  {
    MiLockNestedPageAtDpcInline(a1);
  }
  else
  {
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v5);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(a1) || (unsigned int)MiChargeForLockedPage(v3, 1LL) )
    ++*(_WORD *)(a1 + 32);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
