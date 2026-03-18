/*
 * XREFs of ?RegistryNotificaionEnumerationEnd@@YAXPEAK@Z @ 0x1C0108B34
 * Callers:
 *     GreAddFontResourceWInternal @ 0x1C0125E14 (GreAddFontResourceWInternal.c)
 * Callees:
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x1C0108BE4 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 */

void __fastcall RegistryNotificaionEnumerationEnd(unsigned int *a1)
{
  struct _FONTHASH **v2; // [rsp+38h] [rbp+10h] BYREF

  if ( ghsemPublicPFT )
  {
    GreAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
    v2 = gpPFTPublic;
    if ( gpPFTPublic )
      PUBLIC_PFTOBJ::bCleanupPFT(&v2, 1LL, a1);
    EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
    GreReleaseSemaphoreInternal(ghsemPublicPFT);
  }
}
