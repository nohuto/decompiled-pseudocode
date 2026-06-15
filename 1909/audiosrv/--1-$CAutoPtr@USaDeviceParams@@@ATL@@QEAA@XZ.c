/*
 * XREFs of ??1?$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ @ 0x1800ED1AC
 * Callers:
 *     _CSaDeviceProxy::RuntimeClassInitialize_::_1_::dtor$4 @ 0x180073200 (_CSaDeviceProxy--RuntimeClassInitialize_--_1_--dtor$4.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$7 @ 0x180073670 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$7.c)
 *     _DeriveSaDeviceParametersForStream_::_1_::dtor$0 @ 0x180073B70 (_DeriveSaDeviceParametersForStream_--_1_--dtor$0.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$1 @ 0x180073F20 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$1.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$8 @ 0x1800F88F6 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$8.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$1 @ 0x1800F95E6 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$1.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$2 @ 0x1800F95F2 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$2.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800EDBCC (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(SaDeviceParams **a1, unsigned int a2)
{
  SaDeviceParams *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = SaDeviceParams::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
