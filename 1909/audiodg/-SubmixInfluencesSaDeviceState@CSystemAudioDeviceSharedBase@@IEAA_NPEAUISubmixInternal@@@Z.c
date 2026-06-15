/*
 * XREFs of ?SubmixInfluencesSaDeviceState@CSystemAudioDeviceSharedBase@@IEAA_NPEAUISubmixInternal@@@Z @ 0x140012EA8
 * Callers:
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012B70 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012C80 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSystemAudioDeviceSharedBase::SubmixInfluencesSaDeviceState(
        CSystemAudioDeviceSharedBase *this,
        struct ISubmixInternal *a2)
{
  char v3; // al
  char v4; // dl

  v3 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 128LL))(a2);
  v4 = 0;
  if ( !v3 || *((_DWORD *)this + 88) )
    return 1;
  return v4;
}
