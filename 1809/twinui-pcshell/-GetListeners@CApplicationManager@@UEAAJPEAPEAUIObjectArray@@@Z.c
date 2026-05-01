/*
 * XREFs of ?GetListeners@CApplicationManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x18003D2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::GetListeners(CApplicationManager *this, struct IObjectArray **a2)
{
  return AgileRegistrationList::GetCallbackArray((CApplicationManager *)((char *)this + 208), a2);
}
