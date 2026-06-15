/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800CC868
 * Callers:
 *     _CAudioSession::PruneTerminatedOwningProcesses_::_1_::dtor$0 @ 0x180070330 (_CAudioSession--PruneTerminatedOwningProcesses_--_1_--dtor$0.c)
 *     _CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor$1 @ 0x1800D7C8D (_CAudioSessionManager--RevokeSessionsWithoutDataFlowAccess_--_1_--dtor$1.c)
 *     _CAudioResourceManager::RetryGetSaDeviceForPackagedApp_::_1_::dtor$1 @ 0x1800F9058 (_CAudioResourceManager--RetryGetSaDeviceForPackagedApp_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
        __int64 a1)
{
  std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Tidy(a1);
}
