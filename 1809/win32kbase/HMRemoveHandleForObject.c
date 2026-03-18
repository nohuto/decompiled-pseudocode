/*
 * XREFs of HMRemoveHandleForObject @ 0x1C00657F0
 * Callers:
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0065750 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C008D840 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0095780 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C006587C (HMRemoveHandleForObjectWorker.c)
 */

__int64 __fastcall HMRemoveHandleForObject(int *a1)
{
  int v1; // edx
  __int64 v2; // rbx
  char *v3; // rdi
  char v4; // cl
  void *v5; // rcx

  v1 = *a1;
  v2 = 0LL;
  v3 = (char *)qword_1C01CBA58 + dword_1C01CBA60 * (unsigned int)(unsigned __int16)*a1;
  v4 = v3[24];
  if ( v4 == 19 || v4 == 22 )
  {
    if ( v4 == 19 )
    {
      v5 = *(void **)(*((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)v1) + 32LL);
    }
    else
    {
      v2 = *(_QWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)v1) + 16LL);
      v5 = *(void **)(v2 + 32);
    }
    ObfDereferenceObject(v5);
  }
  HMRemoveHandleForObjectWorker(v3);
  if ( !gbInDestroyHandleTableObjects && v2 )
    HMUnlockObject(v2);
  return 1LL;
}
