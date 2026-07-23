/*
 * XREFs of PiCMHandleIoctl @ 0x1405984F0
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x140598480 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     PiCMGetRegistryProperty @ 0x140595FA0 (PiCMGetRegistryProperty.c)
 *     PiCMGetObjectProperty @ 0x140598750 (PiCMGetObjectProperty.c)
 *     PiCMGetObjectList @ 0x14059E4EC (PiCMGetObjectList.c)
 *     PiCMGetDeviceStatus @ 0x14059F358 (PiCMGetDeviceStatus.c)
 *     PiCMValidateDeviceInstance @ 0x1405A0414 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceInterfaceList @ 0x1405A068C (PiCMGetDeviceInterfaceList.c)
 *     PiCMOpenClassKey @ 0x1406A7FC0 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x1406A8158 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1406A82D4 (PiCMOpenObjectKey.c)
 *     PiCMGetDeviceIdList @ 0x1406BC914 (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406D6384 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1406EA444 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14074F450 (PiCMSetObjectProperty.c)
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x140838158 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408382FC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1408383E8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140838710 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408387EC (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140838A10 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140838BD8 (PiCMDeviceAction.c)
 *     PiCMEnumerateSubKeys @ 0x140838EDC (PiCMEnumerateSubKeys.c)
 *     PiCMGetDeviceDepth @ 0x1408393A8 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x140839484 (PiCMGetObjectPropertyKeys.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x1408396DC (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMQueryRemove @ 0x140839894 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140839C90 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x140839F34 (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x14083A104 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x14083A2A0 (PiCMUnregisterDeviceInterface.c)
 */

__int64 __fastcall PiCMHandleIoctl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *Handle,
        unsigned int a6,
        int a7)
{
  *Handle = 0;
  if ( a6 <= 0x47083F )
  {
    if ( a6 == 4655167 )
      return PiCMGetDeviceInterfaceAlias(a1, a2, a3, a4, a7, (__int64)Handle);
    if ( a6 > 0x47081F )
    {
      switch ( a6 )
      {
        case 0x470823u:
          return PiCMGetRelatedDeviceInstance(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x470827u:
          return PiCMGetDeviceStatus(a1);
        case 0x47082Bu:
          return PiCMGetDeviceDepth(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x47082Fu:
          return PiCMSetDeviceProblem(a1, a2, a3, a4);
        case 0x470833u:
          return PiCMQueryRemove(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x470837u:
          return PiCMRegisterDeviceInterface(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x47083Bu:
          return PiCMUnregisterDeviceInterface(a1, a2, a3, a4, a7, (__int64)Handle);
      }
    }
    else
    {
      switch ( a6 )
      {
        case 0x47081Fu:
          return PiCMSetRegistryProperty(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x470803u:
          return PiCMGetDeviceIdList(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x470807u:
          return PiCMGetDeviceInterfaceList(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x47080Bu:
          return PiCMEnumerateSubKeys(a1, a2, a3, a4);
        case 0x47080Fu:
          return PiCMGetObjectPropertyKeys(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x470813u:
          return PiCMGetObjectProperty(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x470817u:
          return PiCMSetObjectProperty(a1, a2, a3, a4, a7, (__int64)Handle);
        case 0x47081Bu:
          return PiCMGetRegistryProperty(a1, a2, a3, a4, a7, Handle);
      }
    }
    return 3221225659LL;
  }
  if ( a6 <= 0x47085F )
  {
    switch ( a6 )
    {
      case 0x47085Fu:
        return PiCMDeleteDeviceKey(a1, a2, a3, a4, a7, (__int64)Handle);
      case 0x470843u:
        return PiCMValidateDeviceInstance(a1, a2, a3, a4, a7, (__int64)Handle);
      case 0x470847u:
        return PiCMCreateDevice(a1, a2, a3, a4, a7, (__int64)Handle);
      case 0x47084Bu:
        return PiCMDeleteDevice(a1, a2, a3, a4, a7, (__int64)Handle);
      case 0x47084Fu:
        return PiCMDeviceAction(a1, a2, a3, a4, a7, (__int64)Handle);
      case 0x470853u:
        return PiCMOpenDeviceInterfaceKey(a1, a2, a3, a4, a7, Handle);
      case 0x470857u:
        return PiCMDeleteDeviceInterfaceKey(a1, a2, a3, a4, a7, (__int64)Handle);
      case 0x47085Bu:
        return PiCMOpenDeviceKey(a1, a2, a3, a4, a7, (__int64)Handle);
    }
    return 3221225659LL;
  }
  switch ( a6 )
  {
    case 0x470863u:
      return PiCMOpenClassKey(a1, a2, a3, a4, a7, Handle);
    case 0x470867u:
      return PiCMDeleteClassKey(a1, a2, a3, a4, a7, (__int64)Handle);
    case 0x47086Bu:
      return PiCMOpenObjectKey(a1, a2, a3, a4, a7, (__int64)Handle);
    case 0x47086Fu:
      return PiCMCreateObject(a1, a2, a3, a4, a7, (__int64)Handle);
  }
  if ( a6 != 4655219 )
  {
    if ( a6 == 4655223 )
      return PiCMGetObjectList(a1, a2, a3, a4, a7, (__int64)Handle);
    return 3221225659LL;
  }
  return PiCMDeleteObject(a1, a2, a3, a4, a7, (__int64)Handle);
}
