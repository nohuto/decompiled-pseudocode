/*
 * XREFs of ??1?$CAtlList@PEAUIAudioAppVolumePolicyChange@@V?$CElementTraits@PEAUIAudioAppVolumePolicyChange@@@ATL@@@ATL@@QEAA@XZ @ 0x180018808
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$3 @ 0x18003892B (_CApplication--CApplication_--_1_--dtor$3.c)
 *     _CApplication::CApplication_::_1_::dtor$4 @ 0x180038941 (_CApplication--CApplication_--_1_--dtor$4.c)
 *     _GetNotificationDataSize_::_1_::dtor$0 @ 0x180039878 (_GetNotificationDataSize_--_1_--dtor$0.c)
 *     _SetNotificationData_::_1_::dtor$0 @ 0x18003988A (_SetNotificationData_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>(
        __int64 a1)
{
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(a1);
}
