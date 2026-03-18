/*
 * XREFs of ?HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800A91E0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800A91FC (-s_HitTestRequest@CGlobalInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 */

bool __fastcall CInputProxy::HitTestRequest(CInputProxy *this, struct tagDITCALLBACKSTRUCT *a2)
{
  return (unsigned int)CGlobalInputManager::s_HitTestRequest(a2) != 0;
}
