/*
 * XREFs of ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x1C00F0CA4
 * Callers:
 *     GreAddFontResourceWInternal @ 0x1C00F0AC4 (GreAddFontResourceWInternal.c)
 * Callees:
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C003ECAC (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 */

void __fastcall RegistryNotificaionEnumerationEnd(unsigned int *a1)
{
  struct _FONTHASH **v2; // [rsp+38h] [rbp+10h] BYREF

  if ( ghsemPublicPFT )
  {
    GreAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 14LL);
    v2 = gpPFTPublic;
    if ( gpPFTPublic )
      PUBLIC_PFTOBJ::bCleanupPFT((PFTOBJ *)&v2, 1, a1);
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
}
