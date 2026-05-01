/*
 * XREFs of ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z @ 0x18025C4E8
 * Callers:
 *     ?s_LoadResources@XamlExplorerHost@@CAJXZ @ 0x18025DBBC (-s_LoadResources@XamlExplorerHost@@CAJXZ.c)
 *     _lambda_e8537fd42700b698b39adf2393712a09_::operator() @ 0x18025F024 (_lambda_e8537fd42700b698b39adf2393712a09_--operator().c)
 *     ??$?0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z @ 0x1802DC960 (--$-0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z.c)
 *     ?EnsurePropertySet@PropertySetAssembler@@AEAAXXZ @ 0x1802DCDBC (-EnsurePropertySet@PropertySetAssembler@@AEAAXXZ.c)
 *     ?EnsureValueFactory@PropertySetAssembler@@AEAAXXZ @ 0x1802DCE58 (-EnsureValueFactory@PropertySetAssembler@@AEAAXXZ.c)
 *     ?GetLogo@TrayInfoTipDisplayInfo@SystemTray@@UEAAJUSize@Foundation@Windows@@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x1802DD440 (-GetLogo@TrayInfoTipDisplayInfo@SystemTray@@UEAAJUSize@Foundation@Windows@@PEAPEAUIRandomAccessS.c)
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
