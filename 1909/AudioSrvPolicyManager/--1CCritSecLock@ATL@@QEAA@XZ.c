/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18000D5D8
 * Callers:
 *     _CApplicationManager::ResetAllApplicationSpecificEndpoints_::_1_::dtor$1 @ 0x180035C81 (_CApplicationManager--ResetAllApplicationSpecificEndpoints_--_1_--dtor$1.c)
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$1 @ 0x180035DCE (_CDuckingManager--OnStateChanged_--_1_--dtor$1.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$1 @ 0x18003602A (_CProcess--RecalculateVolume_--_1_--dtor$1.c)
 *     _HHOSTEDAPPMANAGERCONTEXTRundown_::_1_::dtor$0 @ 0x180036079 (_HHOSTEDAPPMANAGERCONTEXTRundown_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$1 @ 0x180036384 (_CApplicationManager--ProcessTerminated_--_1_--dtor$1.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$0 @ 0x18003692F (_CProcess--RecalculateVolume_--_1_--dtor$0.c)
 *     _PickerHostContextManager::OnHostedAppStateChanged_::_1_::dtor$0 @ 0x1800369A2 (_PickerHostContextManager--OnHostedAppStateChanged_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$5 @ 0x180036EF2 (_CApplicationManager--ProcessTerminated_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CCritSecLock::~CCritSecLock(LPCRITICAL_SECTION *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    LeaveCriticalSection(*this);
    *((_BYTE *)this + 8) = 0;
  }
}
