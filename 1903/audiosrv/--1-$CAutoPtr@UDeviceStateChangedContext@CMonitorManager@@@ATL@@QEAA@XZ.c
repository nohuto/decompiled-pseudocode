/*
 * XREFs of ??1?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@QEAA@XZ @ 0x18010781C
 * Callers:
 *     _CMonitorManager::ProcessDeviceStateChanged_::_1_::dtor$2 @ 0x18010C28A (_CMonitorManager--ProcessDeviceStateChanged_--_1_--dtor$2.c)
 *     _CMonitorManager::QueueDeviceStateChanged_::_1_::dtor$1 @ 0x18010C693 (_CMonitorManager--QueueDeviceStateChanged_--_1_--dtor$1.c)
 * Callees:
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x180107E08 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>::~CAutoPtr<CMonitorManager::DeviceStateChangedContext>(
        CMonitorManager::DeviceStateChangedContext **a1,
        unsigned int a2)
{
  CMonitorManager::DeviceStateChangedContext *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
