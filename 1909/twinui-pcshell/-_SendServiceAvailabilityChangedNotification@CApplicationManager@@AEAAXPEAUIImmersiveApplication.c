/*
 * XREFs of ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x18013F1A0
 * Callers:
 *     _lambda_c784fe341da5436104ad3e4e13eefb9b_::operator() @ 0x18012E1AC (_lambda_c784fe341da5436104ad3e4e13eefb9b_--operator().c)
 * Callees:
 *     ??0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x18002FA58 (--0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEBU_GU.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180032690 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f4d0df6276ef292ef95f7b637041a733___ @ 0x18012B094 (Windows--Internal--ComTaskPool--QueueTask__lambda_f4d0df6276ef292ef95f7b637041a733___.c)
 *     ??0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@$$QEAU0@@Z @ 0x18012CEF0 (--0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@$$QEAU0@@Z.c)
 *     ??1SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@XZ @ 0x18012DB84 (--1SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_SendServiceAvailabilityChangedNotification(
        RTL_SRWLOCK *a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        int a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  const struct std::nothrow_t *v11; // rdx
  const struct std::nothrow_t *v12; // rdx
  _BYTE v14[40]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v15[48]; // [rsp+60h] [rbp-38h] BYREF
  struct IObjectArray *v16; // [rsp+A0h] [rbp+8h] BYREF

  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  if ( (int)AgileRegistrationList::GetCallbackArray(a1 + 55, &v16) >= 0 )
  {
    SERVICE_AVAILABILITY_CHANGED_DATA::SERVICE_AVAILABILITY_CHANGED_DATA((__int64)v15, a2, (__int64)v16, a3, a4, a5);
    SERVICE_AVAILABILITY_CHANGED_DATA::SERVICE_AVAILABILITY_CHANGED_DATA((__int64)v14, (__int64)v15);
    Windows::Internal::ComTaskPool::QueueTask__lambda_f4d0df6276ef292ef95f7b637041a733___(
      v10,
      v9,
      (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr,
      (__int64)v14);
    SERVICE_AVAILABILITY_CHANGED_DATA::~SERVICE_AVAILABILITY_CHANGED_DATA((SERVICE_AVAILABILITY_CHANGED_DATA *)v14, v11);
    SERVICE_AVAILABILITY_CHANGED_DATA::~SERVICE_AVAILABILITY_CHANGED_DATA((SERVICE_AVAILABILITY_CHANGED_DATA *)v15, v12);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
}
