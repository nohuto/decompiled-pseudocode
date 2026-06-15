/*
 * XREFs of ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800C5290
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18005E478 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$8 @ 0x18007210B (_CConstraintModel--Initialize_--_1_--dtor$8.c)
 *     _CVolumeControlBase::CVolumeControlBase_::_1_::dtor$3 @ 0x180073640 (_CVolumeControlBase--CVolumeControlBase_--_1_--dtor$3.c)
 *     ??1?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800C8CE4 (--1-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x1800C8EE8 (--1CVolumeStrip@@MEAA@XZ.c)
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800C961C (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     _CLockedList_CMasterVolumeNotificationProcess_1_0_::ForEachEntry_::_1_::dtor$0 @ 0x1800C973B (_CLockedList_CMasterVolumeNotificationProcess_1_0_--ForEachEntry_--_1_--dtor$0.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800CDACC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     _CAudioSession::DisconnectStreamList_::_1_::dtor$0 @ 0x1800CDCD6 (_CAudioSession--DisconnectStreamList_--_1_--dtor$0.c)
 *     ??1?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800D5900 (--1-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CAudioSessionManager@@EEAA@XZ @ 0x1800D5B58 (--1CAudioSessionManager@@EEAA@XZ.c)
 *     ?CheckEndpointsAreExclusive@CConstraintModelResourceManager@@UEAAJPEBG0PEAH@Z @ 0x1800FFA40 (-CheckEndpointsAreExclusive@CConstraintModelResourceManager@@UEAAJPEBG0PEAH@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1801005A4 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1801005A4.c)
 *     _CConstraintModelResourceManager::InternalEnforceEndpointExclusivity_::_1_::dtor$0 @ 0x1801009D4 (_CConstraintModelResourceManager--InternalEnforceEndpointExclusivity_--_1_--dtor$0.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x180141F48 (--1CConstraintModel@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    free(v1);
}
