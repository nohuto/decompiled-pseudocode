/*
 * XREFs of PiCMHandleIoctl @ 0x1405BB780
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x1405BB710 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     PiCMGetObjectProperty @ 0x1405BCB40 (PiCMGetObjectProperty.c)
 *     PiCMGetDeviceInterfaceList @ 0x140623438 (PiCMGetDeviceInterfaceList.c)
 *     PiCMOpenClassKey @ 0x1406CE0E0 (PiCMOpenClassKey.c)
 *     PiCMOpenObjectKey @ 0x1406CE29C (PiCMOpenObjectKey.c)
 *     PiCMGetDeviceStatus @ 0x1406CFFBC (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x1406D00D0 (PiCMGetObjectList.c)
 *     PiCMGetRegistryProperty @ 0x1406D3B4C (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceIdList @ 0x1406DF488 (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406F5BC0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140717AD8 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMOpenDeviceKey @ 0x140717D8C (PiCMOpenDeviceKey.c)
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
 *     PiCMEnumerateSubKeys @ 0x140872748 (PiCMEnumerateSubKeys.c)
 *     PiCMGetDeviceDepth @ 0x140872CC0 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x140872DCC (PiCMGetObjectPropertyKeys.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14087303C (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMQueryRemove @ 0x140873214 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140873630 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x1408738DC (PiCMSetDeviceProblem.c)
 *     PiCMSetRegistryProperty @ 0x140873AD4 (PiCMSetRegistryProperty.c)
 *     PiCMUnregisterDeviceInterface @ 0x140873C94 (PiCMUnregisterDeviceInterface.c)
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
