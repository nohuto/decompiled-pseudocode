/*
 * XREFs of ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C007802C
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0006B40 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00124F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C0077848 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C005029C (-FreeRequest@FxRequest@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgIo::VerifierFreeRequestToTestForwardProgess(FxPkgIo *this, FxRequest *Request)
{
  unsigned int FxEnhancedVerifierOptions; // r8d
  unsigned int v3; // r8d

  FxEnhancedVerifierOptions = this->m_Globals->FxEnhancedVerifierOptions;
  if ( (FxEnhancedVerifierOptions & 0x10000) == 0 )
  {
    if ( (FxEnhancedVerifierOptions & 0x20000) == 0 )
      return 0LL;
    v3 = 1103515245 * this->m_RandomSeed + 12345;
    this->m_RandomSeed = v3;
    if ( (HIWORD(v3) & 0x7FFF) != 17 * ((HIWORD(v3) & 0x7FFF) / 0x11u) )
      return 0LL;
  }
  FxRequest::FreeRequest(Request);
  return 3221225626LL;
}
