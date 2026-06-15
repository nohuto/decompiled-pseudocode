/*
 * XREFs of ??1CPropertyStoreHelper@@QEAA@XZ @ 0x18011C974
 * Callers:
 *     _GetEndpointFormFactor_::_1_::dtor$0 @ 0x18006D880 (_GetEndpointFormFactor_--_1_--dtor$0.c)
 *     _CSpatialProperties::GetSpatialFormatForAudioFormat_::_1_::dtor$1 @ 0x18006D8C4 (_CSpatialProperties--GetSpatialFormatForAudioFormat_--_1_--dtor$1.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$1 @ 0x18006DA60 (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$1.c)
 *     _CSpatialProperties::SetSpatialAudioSettings_::_1_::dtor$1 @ 0x180072C6C (_CSpatialProperties--SetSpatialAudioSettings_--_1_--dtor$1.c)
 *     _CSpatialProperties::GetAudioFormatForSpatialFormat_::_1_::dtor$1 @ 0x18012E748 (_CSpatialProperties--GetAudioFormatForSpatialFormat_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPropertyStoreHelper::~CPropertyStoreHelper(CPropertyStoreHelper *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)this = 0LL;
  }
}
