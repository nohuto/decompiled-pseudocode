/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800BD428
 * Callers:
 *     _AudioServerInitialize_Internal_::_1_::dtor$0 @ 0x18006D3B0 (_AudioServerInitialize_Internal_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::Init_::_1_::dtor$0 @ 0x1800BD96C (_AudioEffectsWatcher--Init_--_1_--dtor$0.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$0 @ 0x1800BDD4D (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$0.c)
 *     AudioServerGetStreamVpoContext$dtor$0 @ 0x1800DDC8A (AudioServerGetStreamVpoContext$dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
