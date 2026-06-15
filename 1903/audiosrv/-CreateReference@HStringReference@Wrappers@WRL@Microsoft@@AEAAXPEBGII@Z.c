/*
 * XREFs of ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800FBC8C
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18001F130 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800FAF4C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InitHolographicDisplay@CHMDManager@@QEAAJXZ @ 0x180103A44 (-InitHolographicDisplay@CHMDManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x180126BF0 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        UINT32 a3,
        UINT32 a4)
{
  UINT32 v4; // eax
  HRESULT StringReference; // eax

  v4 = a4;
  if ( a4 >= a3 )
    v4 = a3 - 1;
  StringReference = WindowsCreateStringReference(sourceString, v4, hstringHeader, (HSTRING *)&hstringHeader[1]);
  if ( StringReference < 0 )
  {
    RaiseException(StringReference, 1u, 0, 0LL);
    __debugbreak();
  }
}
