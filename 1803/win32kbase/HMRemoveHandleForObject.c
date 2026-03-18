/*
 * XREFs of HMRemoveHandleForObject @ 0x1C00B1190
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0123FD0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0124070 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0127700 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C00B1224 (HMRemoveHandleForObjectWorker.c)
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
  v3 = (char *)qword_1C01A0E28 + dword_1C01A0E30 * (unsigned int)(unsigned __int16)*a1;
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
