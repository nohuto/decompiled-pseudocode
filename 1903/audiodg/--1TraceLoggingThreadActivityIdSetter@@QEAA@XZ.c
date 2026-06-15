/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x140030494
 * Callers:
 *     _CSubmixImpl::CreateStream_::_1_::dtor$2 @ 0x14001A9A3 (_CSubmixImpl--CreateStream_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceSharedBase::SetGraphState_::_1_::dtor$0 @ 0x14001B252 (_CSystemAudioDeviceSharedBase--SetGraphState_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::Cleanup_::_1_::dtor$0 @ 0x14003069C (_CSystemAudioDeviceExclusive--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::Cleanup_::_1_::dtor$0 @ 0x1400319C6 (_CSystemAudioDeviceSharedBase--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::DumpDeviceGraph_::_1_::dtor$0 @ 0x140031A70 (_CSystemAudioDeviceSharedBase--DumpDeviceGraph_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::Cleanup_::_1_::dtor$0 @ 0x140033711 (_CSystemAudioDeviceOffloadGraph--Cleanup_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$0 @ 0x14003C9B3 (_CStreamGroup--CreateStream_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
