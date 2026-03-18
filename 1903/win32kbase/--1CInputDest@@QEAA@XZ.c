/*
 * XREFs of ??1CInputDest@@QEAA@XZ @ 0x1C015DA20
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0175FC8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall CInputDest::~CInputDest(CInputDest *this, __int64 a2, __int64 a3)
{
  CInputDest::SetEmpty(this, a2, a3);
}
