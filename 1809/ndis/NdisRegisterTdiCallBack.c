/*
 * XREFs of NdisRegisterTdiCallBack @ 0x1C00D2020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 */

void __stdcall NdisRegisterTdiCallBack(TDI_REGISTER_CALLBACK RegisterCallback, TDI_PNP_HANDLER PnPHandler)
{
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_(0x2Du, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
  if ( !ndisTdiRegisterCallback )
    ndisTdiRegisterCallback = RegisterCallback;
  if ( !ndisTdiPnPHandler )
    ndisTdiPnPHandler = PnPHandler;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_(0x2Eu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
}
