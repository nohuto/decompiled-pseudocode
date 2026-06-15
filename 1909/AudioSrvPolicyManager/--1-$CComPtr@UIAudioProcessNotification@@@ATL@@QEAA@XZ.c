/*
 * XREFs of ??1?$CComPtr@UIAudioProcessNotification@@@ATL@@QEAA@XZ @ 0x18000B9D8
 * Callers:
 *     _CApplicationManager::UpdateEndpointVolume_::_1_::dtor$1 @ 0x1800363E2 (_CApplicationManager--UpdateEndpointVolume_--_1_--dtor$1.c)
 *     _CProcess::CProcess_::_1_::dtor$11 @ 0x18003674E (_CProcess--CProcess_--_1_--dtor$11.c)
 *     _CProcess::CProcess_::_1_::dtor$12 @ 0x180036767 (_CProcess--CProcess_--_1_--dtor$12.c)
 *     _CProcess::RecalculateVolume_::_1_::dtor$2 @ 0x180036941 (_CProcess--RecalculateVolume_--_1_--dtor$2.c)
 *     _CProcess::RegisterProcessNotification_::_1_::dtor$0 @ 0x180036990 (_CProcess--RegisterProcessNotification_--_1_--dtor$0.c)
 *     _CDriverListener::HandleShellWarningAccepted_::_1_::dtor$0 @ 0x180037490 (_CDriverListener--HandleShellWarningAccepted_--_1_--dtor$0.c)
 *     _CDriverListener::HandleShellWarningAccepted_::_1_::dtor$1 @ 0x1800374A2 (_CDriverListener--HandleShellWarningAccepted_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtr<IAudioProcessNotification>::~CComPtr<IAudioProcessNotification>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
