/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x1406FF78C
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x14059F414 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenClassKey @ 0x1406A6D20 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1406A6EB8 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406A7034 (PiCMOpenObjectKey.c)
 *     PiDqIrpPropertySet @ 0x1406D58DC (PiDqIrpPropertySet.c)
 *     PiSwDispatch @ 0x1406D7640 (PiSwDispatch.c)
 *     PiCMSetObjectProperty @ 0x14074E260 (PiCMSetObjectProperty.c)
 *     PiCMCreateDevice @ 0x1408367B4 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x140836EF8 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x14083709C (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140837188 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408374B0 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x14083758C (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408377B0 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140837978 (PiCMDeviceAction.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14083847C (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMQueryRemove @ 0x140838634 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140838A30 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x140838CD4 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140838EA4 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x140839040 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiAuVerifyAccessToObject @ 0x140595360 (PiAuVerifyAccessToObject.c)
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
