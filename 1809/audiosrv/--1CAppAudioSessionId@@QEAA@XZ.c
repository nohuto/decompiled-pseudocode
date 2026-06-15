/*
 * XREFs of ??1CAppAudioSessionId@@QEAA@XZ @ 0x1800201D4
 * Callers:
 *     _CAudioSessionManager::OnStateChanged_::_1_::dtor$6 @ 0x18006BB90 (_CAudioSessionManager--OnStateChanged_--_1_--dtor$6.c)
 *     _ATL::CAtlMap_CAudioSessionInstanceId_CAudioSession_____ptr64_CAudioSessionInstanceIdTraits_ATL::CElementTraits_CAudioSession_____ptr64___::NewNode_::_1_::dtor$3 @ 0x18006BD10 (_ATL--CAtlMap_CAudioSessionInstanceId_CAudioSession_____ptr64_CAudioSessionInstance_ea_18006BD10.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAppAudioSessionId::~CAppAudioSessionId(CAppAudioSessionId *this)
{
  volatile signed __int32 *v2; // rdx
  volatile signed __int32 *v3; // rdx
  volatile signed __int32 *v4; // rdx

  v2 = (volatile signed __int32 *)(*((_QWORD *)this + 4) - 24LL);
  if ( _InterlockedExchangeAdd(v2 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v2 + 8LL))(*(_QWORD *)v2);
  v3 = (volatile signed __int32 *)(*((_QWORD *)this + 1) - 24LL);
  if ( _InterlockedExchangeAdd(v3 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 8LL))(*(_QWORD *)v3);
  v4 = (volatile signed __int32 *)(*(_QWORD *)this - 24LL);
  if ( _InterlockedExchangeAdd(v4 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
}
