/*
 * XREFs of ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800108E8
 * Callers:
 *     _CApplicationManager::ResetAllApplicationSpecificEndpoints_::_1_::dtor$1 @ 0x180038397 (_CApplicationManager--ResetAllApplicationSpecificEndpoints_--_1_--dtor$1.c)
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$1 @ 0x18003848A (_CDuckingManager--OnStateChanged_--_1_--dtor$1.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$1 @ 0x1800386E6 (_CProcess--RecalculateVolume_--_1_--dtor$1.c)
 *     _HHOSTEDAPPMANAGERCONTEXTRundown_::_1_::dtor$0 @ 0x180038735 (_HHOSTEDAPPMANAGERCONTEXTRundown_--_1_--dtor$0.c)
 *     _CApplication::LinkProcess_::_1_::dtor$0 @ 0x180038A40 (_CApplication--LinkProcess_--_1_--dtor$0.c)
 *     _PickerHostContextManager::OnHostedAppStateChanged_::_1_::dtor$0 @ 0x180038FF1 (_PickerHostContextManager--OnHostedAppStateChanged_--_1_--dtor$0.c)
 *     _CProcess::RegisterProcessNotification_::_1_::dtor$1 @ 0x180039064 (_CProcess--RegisterProcessNotification_--_1_--dtor$1.c)
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
