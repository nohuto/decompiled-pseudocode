/*
 * XREFs of ??1CInputDest@@QEAA@XZ @ 0x1C015B820
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0173DD8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall CInputDest::~CInputDest(CInputDest *this, __int64 a2, __int64 a3)
{
  CInputDest::SetEmpty(this, a2, a3);
}
