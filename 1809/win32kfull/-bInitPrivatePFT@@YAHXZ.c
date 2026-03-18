/*
 * XREFs of ?bInitPrivatePFT@@YAHXZ @ 0x1C0256AC0
 * Callers:
 *     GreAddFontResourceWInternal @ 0x1C010C2D0 (GreAddFontResourceWInternal.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C01158EC (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     GreAddFontMemResourceEx @ 0x1C026E8CC (GreAddFontMemResourceEx.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x1C012D8A0 (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z @ 0x1C012D95C (-pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 bInitPrivatePFT(void)
{
  BOOL v0; // ebx
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  if ( gpPFTPrivate )
  {
    v0 = 1;
  }
  else
  {
    gpPFTPrivate = (struct PFT **const)pAllocateAndInitializePFT(20);
    v0 = gpPFTPrivate != 0LL;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v2);
  return v0;
}
