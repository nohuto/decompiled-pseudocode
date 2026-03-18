/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x14071FFE0
 * Callers:
 *     PiCMOpenClassKey @ 0x1406CE0E0 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x1406CE29C (PiCMOpenObjectKey.c)
 *     PiDqIrpPropertySet @ 0x1406F3670 (PiDqIrpPropertySet.c)
 *     PiCMOpenDeviceKey @ 0x140717D8C (PiCMOpenDeviceKey.c)
 *     PiSwDispatch @ 0x14071FC00 (PiSwDispatch.c)
 *     PiCMValidateDeviceInstance @ 0x14071FD3C (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x1407796F4 (PiCMSetObjectProperty.c)
 *     PiCMCreateDevice @ 0x140871190 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x1408718E0 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140871AA4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140871BB4 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140871F08 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140872008 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140872250 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140872420 (PiCMDeviceAction.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14087303C (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMQueryRemove @ 0x140873214 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140873630 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1408738DC (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140873AD4 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x140873C94 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x1405BADE4 (PiAuVerifyAccessToObject.c)
 */

char __fastcall PiAuDoesClientHaveAccess(ACCESS_MASK a1)
{
  char v1; // bl
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  LOBYTE(v3) = 0;
  if ( (int)PiAuVerifyAccessToObject(
              a1,
              PiAuSecurityObject,
              (PGENERIC_MAPPING)&PiAuSecurityObjectMapping,
              0LL,
              (BOOLEAN *)&v3) >= 0 )
    return v3;
  return v1;
}
