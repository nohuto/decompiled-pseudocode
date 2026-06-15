/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18000D608
 * Callers:
 *     _CApplicationManager::ResetAllApplicationSpecificEndpoints_::_1_::dtor$1 @ 0x180035D81 (_CApplicationManager--ResetAllApplicationSpecificEndpoints_--_1_--dtor$1.c)
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$1 @ 0x180035ECE (_CDuckingManager--OnStateChanged_--_1_--dtor$1.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$1 @ 0x18003612A (_CProcess--RecalculateVolume_--_1_--dtor$1.c)
 *     _HHOSTEDAPPMANAGERCONTEXTRundown_::_1_::dtor$0 @ 0x180036179 (_HHOSTEDAPPMANAGERCONTEXTRundown_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$1 @ 0x180036484 (_CApplicationManager--ProcessTerminated_--_1_--dtor$1.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$0 @ 0x180036A2F (_CProcess--RecalculateVolume_--_1_--dtor$0.c)
 *     _PickerHostContextManager::OnHostedAppStateChanged_::_1_::dtor$0 @ 0x180036AA2 (_PickerHostContextManager--OnHostedAppStateChanged_--_1_--dtor$0.c)
 *     _CApplicationManager::ProcessTerminated_::_1_::dtor$5 @ 0x180036FF2 (_CApplicationManager--ProcessTerminated_--_1_--dtor$5.c)
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
