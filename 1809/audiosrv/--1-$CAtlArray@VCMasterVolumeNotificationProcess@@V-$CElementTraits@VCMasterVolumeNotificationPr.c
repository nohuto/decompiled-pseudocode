/*
 * XREFs of ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800B6BB0
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001F658 (--1CAudioSession@@MEAA@XZ.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180059D9C (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$8 @ 0x18006FBA7 (_CConstraintModel--Initialize_--_1_--dtor$8.c)
 *     _CVolumeControlBase::CVolumeControlBase_::_1_::dtor$3 @ 0x18006FE2D (_CVolumeControlBase--CVolumeControlBase_--_1_--dtor$3.c)
 *     ??1?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800BA4C4 (--1-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x1800BA71C (--1CVolumeStrip@@MEAA@XZ.c)
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800BAEBC (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     _CLockedList_CMasterVolumeNotificationProcess_1_0_::ForEachEntry_::_1_::dtor$0 @ 0x1800BAFDB (_CLockedList_CMasterVolumeNotificationProcess_1_0_--ForEachEntry_--_1_--dtor$0.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800BF2DC (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     _CAudioSession::DisconnectStreamList_::_1_::dtor$0 @ 0x1800BF4E6 (_CAudioSession--DisconnectStreamList_--_1_--dtor$0.c)
 *     ??1?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800C6FC4 (--1-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CAudioSessionManager@@EEAA@XZ @ 0x1800C7178 (--1CAudioSessionManager@@EEAA@XZ.c)
 *     ?CheckEndpointsAreExclusive@CConstraintModelResourceManager@@UEAAJPEBG0PEAH@Z @ 0x1800F3B80 (-CheckEndpointsAreExclusive@CConstraintModelResourceManager@@UEAAJPEBG0PEAH@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1800F46E0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1800F46E0.c)
 *     _CConstraintModelResourceManager::InternalEnforceEndpointExclusivity_::_1_::dtor$0 @ 0x1800F4B0C (_CConstraintModelResourceManager--InternalEnforceEndpointExclusivity_--_1_--dtor$0.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x18013DEBC (--1CConstraintModel@@UEAA@XZ.c)
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
