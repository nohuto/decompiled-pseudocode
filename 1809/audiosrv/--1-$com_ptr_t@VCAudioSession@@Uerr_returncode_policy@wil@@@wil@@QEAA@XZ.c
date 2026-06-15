/*
 * XREFs of ??1?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B898
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002A450 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$1 @ 0x18006CAB0 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$1.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$2 @ 0x18006CAD0 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$2.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$4 @ 0x18006CB10 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$4.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800C9E80 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
