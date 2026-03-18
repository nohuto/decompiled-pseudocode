/*
 * XREFs of PiCMHandleIoctl @ 0x1405BBB60
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x1405BBAF0 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     PiCMGetObjectProperty @ 0x1405BCF20 (PiCMGetObjectProperty.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406272E8 (PiCMGetDeviceInterfaceList.c)
 *     PiCMOpenClassKey @ 0x1406CCE80 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x1406CD03C (PiCMOpenObjectKey.c)
 *     PiCMGetDeviceStatus @ 0x1406CF22C (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x1406CF340 (PiCMGetObjectList.c)
 *     PiCMGetRegistryProperty @ 0x1406D2E3C (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceIdList @ 0x1406E0798 (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406F7980 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407198C8 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMOpenDeviceKey @ 0x140719B7C (PiCMOpenDeviceKey.c)
 *     PiCMValidateDeviceInstance @ 0x140721BDC (PiCMValidateDeviceInstance.c)
 *     PiCMSetObjectProperty @ 0x14077CCD4 (PiCMSetObjectProperty.c)
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 *     PiCMCreateObject @ 0x140870FE0 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408711A4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x1408712B4 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140871608 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140871708 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140871950 (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x140871B20 (PiCMDeviceAction.c)
 *     PiCMEnumerateSubKeys @ 0x140871E48 (PiCMEnumerateSubKeys.c)
 *     PiCMGetDeviceDepth @ 0x1408723C0 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408724CC (PiCMGetObjectPropertyKeys.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14087273C (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMQueryRemove @ 0x140872914 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140872D30 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x140872FDC (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x1408731D4 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x140873394 (PiCMUnregisterDeviceInterface.c)
 */

__int64 __fastcall PiCMHandleIoctl(__int64 a1, int a2, int a3, int a4, _DWORD *Handle, unsigned int a6, int a7)
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
          return PiCMGetRegistryProperty(a1, a2, a3, a4, a7, (__int64)Handle);
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
