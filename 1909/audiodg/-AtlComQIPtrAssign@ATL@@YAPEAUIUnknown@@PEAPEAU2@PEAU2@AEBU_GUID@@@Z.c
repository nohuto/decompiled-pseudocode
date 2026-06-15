/*
 * XREFs of ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x14002F15C
 * Callers:
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14002ECEC (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400308E0 (-CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

struct IUnknown *__fastcall ATL::AtlComQIPtrAssign(struct IUnknown **a1, struct IUnknown *a2, const struct _GUID *a3)
{
  struct IUnknown *v3; // r9
  __int64 v6; // rdi

  v3 = a2;
  if ( !a1 )
    return 0LL;
  v6 = (__int64)*a1;
  *a1 = 0LL;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *, const struct _GUID *, struct IUnknown **))a2->lpVtbl->QueryInterface)(
      a2,
      a3,
      a1);
  if ( v6 )
    (*(void (__fastcall **)(__int64, struct IUnknown *, const struct _GUID *, struct IUnknown *))(*(_QWORD *)v6 + 16LL))(
      v6,
      a2,
      a3,
      v3);
  return *a1;
}
