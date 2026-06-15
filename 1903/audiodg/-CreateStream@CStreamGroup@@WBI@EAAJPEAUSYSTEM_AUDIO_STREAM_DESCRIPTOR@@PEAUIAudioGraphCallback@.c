/*
 * XREFs of ?CreateStream@CStreamGroup@@WBI@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140017F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CStreamGroup::CreateStream(
        __int64 a1,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  return CStreamGroup::CreateStream((CStreamGroup *)(a1 - 24), a2, a3, a4);
}
