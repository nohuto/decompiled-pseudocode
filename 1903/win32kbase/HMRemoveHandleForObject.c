/*
 * XREFs of HMRemoveHandleForObject @ 0x1C006F8C0
 * Callers:
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006F1D0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006F4E0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00A99D0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMUnlockObjectWorker @ 0x1C0030DB0 (HMUnlockObjectWorker.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C006F964 (HMRemoveHandleForObjectWorker.c)
 *     _HMPkheFromObject @ 0x1C006FA80 (_HMPkheFromObject.c)
 */

__int64 __fastcall HMRemoveHandleForObject(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  char *v7; // rdi
  char v8; // al
  __int64 v9; // rax
  char v10; // cl
  void *v11; // rcx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v13,
    a2,
    a3);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v13,
    v5,
    v6);
  v7 = (char *)qword_1C0213758 + dword_1C0213760 * (unsigned int)(unsigned __int16)*a1;
  v8 = v7[24];
  if ( v8 == 19 || v8 == 22 )
  {
    v9 = HMPkheFromObject(a1);
    v10 = v7[24];
    if ( v10 == 19 )
    {
      v11 = *(void **)(*(_QWORD *)v9 + 32LL);
    }
    else
    {
      if ( v10 != 22 )
        goto LABEL_5;
      v4 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
      v11 = *(void **)(v4 + 32);
    }
    ObfDereferenceObject(v11);
  }
LABEL_5:
  HMRemoveHandleForObjectWorker(v7);
  if ( !gbInDestroyHandleTableObjects && v4 )
    HMUnlockObjectWorker(v4);
  return 1LL;
}
