/*
 * XREFs of ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800C4DE0
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x1800616B8 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     _CVolumeControlBase::CVolumeControlBase_::_1_::dtor$3 @ 0x180073166 (_CVolumeControlBase--CVolumeControlBase_--_1_--dtor$3.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$8 @ 0x1800745F6 (_CConstraintModel--Initialize_--_1_--dtor$8.c)
 *     ??1?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800C8834 (--1-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x1800C8A38 (--1CVolumeStrip@@MEAA@XZ.c)
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800C916C (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     _CLockedList_CMasterVolumeNotificationProcess_1_0_::ForEachEntry_::_1_::dtor$0 @ 0x1800C928B (_CLockedList_CMasterVolumeNotificationProcess_1_0_--ForEachEntry_--_1_--dtor$0.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800CD65C (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     _CAudioSession::DisconnectStreamList_::_1_::dtor$0 @ 0x1800CD866 (_CAudioSession--DisconnectStreamList_--_1_--dtor$0.c)
 *     ??1?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800D54B0 (--1-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CAudioSessionManager@@EEAA@XZ @ 0x1800D5708 (--1CAudioSessionManager@@EEAA@XZ.c)
 *     ?CheckEndpointsAreExclusive@CConstraintModelResourceManager@@UEAAJPEBG0PEAH@Z @ 0x1800FF5A0 (-CheckEndpointsAreExclusive@CConstraintModelResourceManager@@UEAAJPEBG0PEAH@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x180100104 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_180100104.c)
 *     _CConstraintModelResourceManager::InternalEnforceEndpointExclusivity_::_1_::dtor$0 @ 0x180100534 (_CConstraintModelResourceManager--InternalEnforceEndpointExclusivity_--_1_--dtor$0.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x180141A98 (--1CConstraintModel@@UEAA@XZ.c)
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
