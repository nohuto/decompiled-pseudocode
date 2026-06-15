/*
 * XREFs of ?CreateStream@CProcessSubmix@@WBA@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140018790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::CreateStream(
        __int64 a1,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct _RTL_CRITICAL_SECTION *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  return CProcessSubmix::CreateStream((CProcessSubmix *)(a1 - 16), a2, a3, a4);
}
