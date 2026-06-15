/*
 * XREFs of ??1CUnknown@@UEAA@XZ @ 0x180049A10
 * Callers:
 *     _CAudioStream::CAudioStream_::_1_::dtor$0 @ 0x180071580 (_CAudioStream--CAudioStream_--_1_--dtor$0.c)
 *     _EndpointCollection::EndpointCollection_::_1_::dtor$0 @ 0x180071C12 (_EndpointCollection--EndpointCollection_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$0 @ 0x180071E5A (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$0.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$0 @ 0x180071F66 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$0.c)
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$0 @ 0x180072002 (_PhoneTopology--PhoneTopology_--_1_--dtor$0.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$0 @ 0x1800724D5 (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CUnknown::~CUnknown(CUnknown *this)
{
  *(_QWORD *)this = &CUnknown::`vftable';
}
