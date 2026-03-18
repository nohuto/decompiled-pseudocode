/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x1406FF7AC
 * Callers:
 *     PiCMValidateDeviceInstance @ 0x14059F414 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenClassKey @ 0x1406A6D40 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1406A6ED8 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406A7054 (PiCMOpenObjectKey.c)
 *     PiDqIrpPropertySet @ 0x1406D58FC (PiDqIrpPropertySet.c)
 *     PiSwDispatch @ 0x1406D7660 (PiSwDispatch.c)
 *     PiCMSetObjectProperty @ 0x14074E280 (PiCMSetObjectProperty.c)
 *     PiCMCreateDevice @ 0x1408367D4 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x140836F18 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408370BC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1408371A8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408374D0 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408375AC (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408377D0 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140837998 (PiCMDeviceAction.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14083849C (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMQueryRemove @ 0x140838654 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140838A50 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x140838CF4 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140838EC4 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x140839060 (PiCMUnregisterDeviceInterface.c)
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
