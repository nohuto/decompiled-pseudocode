/*
 * XREFs of ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800F7988
 * Callers:
 *     ?IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ @ 0x180016934 (-IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ.c)
 *     ?InitHolographicDisplay@CHMDManager@@QEAAJXZ @ 0x1800F7BC4 (-InitHolographicDisplay@CHMDManager@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x18011A1B8 (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
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
