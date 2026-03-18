/*
 * XREFs of HMRemoveHandleForObject @ 0x1C0073480
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0062340 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00732C0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00A8AC0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     _HMPheFromObject @ 0x1C0024340 (_HMPheFromObject.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C0028C7C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMUnlockObjectWorker @ 0x1C002FFA0 (HMUnlockObjectWorker.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0092BB0 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     _HMPkheFromObject @ 0x1C0099E00 (_HMPkheFromObject.c)
 *     EtwTraceUserDestroyHandle @ 0x1C00A870C (EtwTraceUserDestroyHandle.c)
 *     HMCleanupGrantedHandle @ 0x1C0102D98 (HMCleanupGrantedHandle.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C0102F08 (HMRemoveHandleForObjectWorker.c)
 */

__int64 __fastcall HMRemoveHandleForObject(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 *v5; // rdi
  unsigned __int8 v6; // al
  void ***v7; // rsi
  unsigned int EtwUserHandleType; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int8 v11; // al
  CompositionObject *v12; // rcx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v14,
    a2,
    a3);
  v5 = (unsigned __int8 *)HMPheFromObject(a1);
  v6 = v5[24];
  if ( v6 == 19 || v6 == 22 )
  {
    v7 = (void ***)HMPkheFromObject(a1);
    EtwUserHandleType = GetEtwUserHandleType(v5[24]);
    EtwTraceUserDestroyHandle(**v7, EtwUserHandleType, 0);
    if ( (v5[25] & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(**v7, v9, v10);
      v5[25] &= ~0x20u;
    }
    v11 = v5[24];
    if ( v11 == 19 )
    {
      v12 = (CompositionObject *)(*v7)[4];
LABEL_9:
      CompositionObject::Release(v12);
      goto LABEL_10;
    }
    if ( v11 == 22 )
    {
      v4 = (__int64)(*v7)[2];
      v12 = *(CompositionObject **)(v4 + 32);
      goto LABEL_9;
    }
  }
LABEL_10:
  HMRemoveHandleForObjectWorker(v5);
  if ( !gbInDestroyHandleTableObjects && v4 )
    HMUnlockObjectWorker(v4);
  return 1LL;
}
