/*
 * XREFs of ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x140030414
 * Callers:
 *     _CSubmixImpl::CreateStream_::_1_::dtor$2 @ 0x14001AD93 (_CSubmixImpl--CreateStream_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceSharedBase::SetGraphState_::_1_::dtor$0 @ 0x14001B642 (_CSystemAudioDeviceSharedBase--SetGraphState_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceExclusive::Cleanup_::_1_::dtor$0 @ 0x14003061C (_CSystemAudioDeviceExclusive--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::Cleanup_::_1_::dtor$0 @ 0x140031976 (_CSystemAudioDeviceSharedBase--Cleanup_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceSharedBase::DumpDeviceGraph_::_1_::dtor$0 @ 0x140031A20 (_CSystemAudioDeviceSharedBase--DumpDeviceGraph_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceOffloadGraph::Cleanup_::_1_::dtor$0 @ 0x1400336D1 (_CSystemAudioDeviceOffloadGraph--Cleanup_--_1_--dtor$0.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$0 @ 0x14003C953 (_CStreamGroup--CreateStream_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter(
        TraceLoggingThreadActivityIdSetter *this)
{
  EtwEventActivityIdControl(4LL, (char *)this + 16);
}
