/*
 * XREFs of ObFastReferenceObjectLocked @ 0x14007DFF4
 * Callers:
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14004B5A0 (MiMakeSystemCacheRangeValid.c)
 *     MiLogPageAccess @ 0x14006BDB0 (MiLogPageAccess.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14007DF98 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MiEmptyPageAccessLog @ 0x140088580 (MiEmptyPageAccessLog.c)
 *     MiFlushControlArea @ 0x1402A217C (MiFlushControlArea.c)
 *     MiPreventControlAreaDelete @ 0x1402A2844 (MiPreventControlAreaDelete.c)
 *     MiNoPagesLastChance @ 0x1402C0420 (MiNoPagesLastChance.c)
 *     PsReferencePrimaryToken @ 0x1405DD640 (PsReferencePrimaryToken.c)
 *     SeCaptureSubjectContextEx @ 0x1405E07F0 (SeCaptureSubjectContextEx.c)
 *     ObOpenObjectByNameEx @ 0x1405E2E30 (ObOpenObjectByNameEx.c)
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     PfQuerySuperfetchInformation @ 0x140629AD0 (PfQuerySuperfetchInformation.c)
 *     SeCaptureSubjectContext @ 0x140631A80 (SeCaptureSubjectContext.c)
 *     SeCreateClientSecurityEx @ 0x140631CE0 (SeCreateClientSecurityEx.c)
 *     PsImpersonateClient @ 0x140637B70 (PsImpersonateClient.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063EDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtOpenProcessTokenEx @ 0x140646F20 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x1406470E0 (ObOpenObjectByPointer.c)
 *     PsReferenceEffectiveToken @ 0x1406492D0 (PsReferenceEffectiveToken.c)
 *     PspReferenceSystemDll @ 0x140677B48 (PspReferenceSystemDll.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x14005B360 (ObpIncrPointerCount.c)
 *     ObpPushStackInfo @ 0x1402D2F68 (ObpPushStackInfo.c)
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
