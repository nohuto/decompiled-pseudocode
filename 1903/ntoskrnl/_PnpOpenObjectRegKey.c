/*
 * XREFs of _PnpOpenObjectRegKey @ 0x1405BBEC0
 * Callers:
 *     _PnpGetObjectPropertyWorker @ 0x1405BC4EC (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1405BF280 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDqOpenObjectRegKey @ 0x140666F54 (PiDqOpenObjectRegKey.c)
 *     PiCMOpenObjectKey @ 0x1406CE29C (PiCMOpenObjectKey.c)
 *     PiDevCfgGetDriverPackageId @ 0x1406FB814 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryDriverNode @ 0x1406FC2A0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FCD34 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDevice @ 0x140704004 (PiDevCfgConfigureDevice.c)
 *     _PnpSetObjectPropertyWorker @ 0x14070676C (_PnpSetObjectPropertyWorker.c)
 *     PiDevCfgCopyObjectProperties @ 0x140715C44 (PiDevCfgCopyObjectProperties.c)
 *     PiCMValidateDeviceInstance @ 0x14071FD3C (PiCMValidateDeviceInstance.c)
 *     PiSwPropertySet @ 0x14074231C (PiSwPropertySet.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140865D60 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x140867A00 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140868888 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140869208 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceClass @ 0x14086C08C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14086CB44 (PpDevCfgProcessDeviceReset.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140936C50 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x140937F30 (_PnpGetObjectPropertyKeysWorker.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x140938204 (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x1405BBFB4 (_PnpOpenObjectRegKeyDispatch.c)
 */

__int64 __fastcall PnpOpenObjectRegKey(__int64 a1, __int64 a2, unsigned int a3, int a4, char a5, __int64 a6)
{
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, __int64, int, __int64 *); // rdi
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ebx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  __int64 v18[10]; // [rsp+48h] [rbp-29h] BYREF

  memset(v18, 0, sizeof(v18));
  v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, __int64 *))(a1 + 488);
  HIDWORD(v18[4]) = 0;
  BYTE4(v18[2]) = a5;
  v18[3] = a6;
  LODWORD(v18[2]) = a4;
  if ( v10 )
  {
    v11 = v10(a1, a2, a3, 2LL, 1, v18);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        return LODWORD(v18[0]);
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  v12 = PnpOpenObjectRegKeyDispatch(a1, a2, a3, v18[2], SBYTE4(v18[2]), v18[3], (__int64)&v18[4], HIDWORD(v18[4]));
  v13 = v12;
  if ( !v10 )
    return v13;
  LODWORD(v18[0]) = v12;
  v15 = v10(a1, a2, a3, 2LL, 2, v18);
  v16 = v15;
  if ( v15 == -1073741822 )
    return v13;
  if ( v15 == -1073741536 )
    return LODWORD(v18[0]);
  v17 = v13;
  if ( v16 )
    return (unsigned int)-1073741595;
  return v17;
}
