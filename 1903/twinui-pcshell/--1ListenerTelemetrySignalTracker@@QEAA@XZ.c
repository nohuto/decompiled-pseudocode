/*
 * XREFs of ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x18007CC98
 * Callers:
 *     ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180067F60 (-OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4AppViewExecutionState@23456@PEAUIApplicationView@@@Z @ 0x180098388 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor$1 @ 0x1800989B8 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--TryCreateAppExecu_ea_1800989B8.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::ReportTitleChange_::_1_::dtor$0 @ 0x1800C36E5 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewTitleChangeListener--ReportTitleChange_-.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::OnApplicationViewChanged_::_1_::dtor$6 @ 0x1800C6209 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--OnApplicationView_ea_1800C6209.c)
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x1801F9F8C (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateSnapSignalData_::_1_::dtor$1 @ 0x1801FA0A9 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--TryCreateSnapSign_ea_1801FA0A9.c)
 *     ?WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1801FA0F0 (-WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIAp.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::WindowSnapStateChanged_::_1_::dtor$4 @ 0x1801FA271 (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--WindowSnapStateCh_ea_1801FA271.c)
 *     ?OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z @ 0x1801FAD60 (-OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::OnIdleStateChanged_::_1_::dtor$0 @ 0x1801FAEA4 (_Windows--Internal--Shell--TaskFlow--DataEngine--UserPresenceListener--OnIdleStateChanged_--_1_-.c)
 * Callees:
 *     <none>
 */

void __fastcall ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker(ListenerTelemetrySignalTracker *this)
{
  if ( !*(_BYTE *)this )
  {
    if ( *((_BYTE *)this + 1) )
      _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_knownFailureCounter);
    else
      _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_unknownFailureCounter);
  }
}
