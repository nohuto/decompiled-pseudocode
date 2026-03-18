/*
 * XREFs of _PnpOpenObjectRegKey @ 0x1405BC2A0
 * Callers:
 *     _PnpGetObjectPropertyWorker @ 0x1405BC8CC (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1405BF750 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDqOpenObjectRegKey @ 0x140694374 (PiDqOpenObjectRegKey.c)
 *     PiCMOpenObjectKey @ 0x1406CD03C (PiCMOpenObjectKey.c)
 *     PiDevCfgGetDriverPackageId @ 0x1406FD5F4 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryDriverNode @ 0x1406FE080 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FEB14 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDevice @ 0x140705DE4 (PiDevCfgConfigureDevice.c)
 *     _PnpSetObjectPropertyWorker @ 0x14070854C (_PnpSetObjectPropertyWorker.c)
 *     PiDevCfgCopyObjectProperties @ 0x140717F04 (PiDevCfgCopyObjectProperties.c)
 *     PiCMValidateDeviceInstance @ 0x140721BDC (PiCMValidateDeviceInstance.c)
 *     PiSwPropertySet @ 0x14074421C (PiSwPropertySet.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140865460 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x140867100 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140867F88 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140868908 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceClass @ 0x14086B78C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14086C244 (PpDevCfgProcessDeviceReset.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1409366C0 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _PnpGetObjectPropertyKeysWorker @ 0x1409379A0 (_PnpGetObjectPropertyKeysWorker.c)
 *     _PnpGetObjectPropertyLocalesWorker @ 0x140937C74 (_PnpGetObjectPropertyLocalesWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x1405BC394 (_PnpOpenObjectRegKeyDispatch.c)
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
