/*
 * XREFs of ??1?$unique_ptr@$$BY0A@UAUDIO_METER_DATA@@U?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800CB424
 * Callers:
 *     _CAudioStream::GetChannelPeakValues_::_1_::dtor$1 @ 0x1800CB9AB (_CAudioStream--GetChannelPeakValues_--_1_--dtor$1.c)
 *     _CAudioStream::GetPeakValue_::_1_::dtor$1 @ 0x1800CBC73 (_CAudioStream--GetPeakValue_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<AUDIO_METER_DATA [0],wil::function_deleter<void (*)(void *),&void _freea(void *)>>::~unique_ptr<AUDIO_METER_DATA [0],wil::function_deleter<void (*)(void *),&void _freea(void *)>>(
        void **a1)
{
  freea(*a1);
}
