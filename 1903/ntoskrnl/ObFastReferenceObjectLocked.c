/*
 * XREFs of ObFastReferenceObjectLocked @ 0x14007F850
 * Callers:
 *     MiReferenceControlAreaFile @ 0x140009B60 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x14001C930 (MiEmptyPageAccessLog.c)
 *     MiLogPageAccess @ 0x14004DA40 (MiLogPageAccess.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14007F7F4 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400D8290 (MiMakeSystemCacheRangeValid.c)
 *     MiFlushControlArea @ 0x1402B96B0 (MiFlushControlArea.c)
 *     MiPreventControlAreaDelete @ 0x1402B9CF4 (MiPreventControlAreaDelete.c)
 *     MiNoPagesLastChance @ 0x1402D9E6C (MiNoPagesLastChance.c)
 *     PfQuerySuperfetchInformation @ 0x1405CE500 (PfQuerySuperfetchInformation.c)
 *     NtOpenProcessTokenEx @ 0x1405CFA00 (NtOpenProcessTokenEx.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0200 (SeCaptureSubjectContextEx.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeCreateClientSecurityEx @ 0x1405DDE10 (SeCreateClientSecurityEx.c)
 *     PsImpersonateClient @ 0x1405DE340 (PsImpersonateClient.c)
 *     PsReferenceEffectiveToken @ 0x1405DEBD0 (PsReferenceEffectiveToken.c)
 *     SeCreateClientSecurity @ 0x1405E4A70 (SeCreateClientSecurity.c)
 *     ObOpenObjectByNameEx @ 0x1405F48D0 (ObOpenObjectByNameEx.c)
 *     ExpGetProcessInformation @ 0x1405F8B60 (ExpGetProcessInformation.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405FE180 (CmKeyBodyRemapToVirtualForEnum.c)
 *     PspReferenceSystemDll @ 0x140678EE4 (PspReferenceSystemDll.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x1400476A0 (ObpIncrPointerCount.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1)
{
  unsigned __int64 v1; // rbx

  v1 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v1 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(v1 - 48);
    ObpIncrPointerCount((volatile signed __int64 *)(v1 - 48));
  }
  return v1;
}
