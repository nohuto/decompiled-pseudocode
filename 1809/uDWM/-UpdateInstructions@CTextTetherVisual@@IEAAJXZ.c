/*
 * XREFs of ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x180096A64
 * Callers:
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180093BB8 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ?OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z @ 0x180096868 (-OnTetherAnchorChange@CTextTetherVisual@@QEAAJAEBUtagPOINT@@W4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x1800968A4 (-SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?UpdateTransition@CTextTetherVisual@@MEAAJXZ @ 0x180096AC0 (-UpdateTransition@CTextTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ @ 0x180096B2C (-_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CTextTetherVisual::UpdateInstructions(CTextTetherVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int updated; // eax

  v2 = CRenderDataVisual::ClearInstructions(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    updated = CTextTetherVisual::_UpdateHandleInstructions(this);
    v3 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xACu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xABu);
  }
  return v3;
}
