/*
 * XREFs of PiCMReturnBufferResultData @ 0x1405BCE40
 * Callers:
 *     PiCMGetObjectProperty @ 0x1405BCF20 (PiCMGetObjectProperty.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406272E8 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectList @ 0x1406CF340 (PiCMGetObjectList.c)
 *     PiCMGetRegistryProperty @ 0x1406D2E3C (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceIdList @ 0x1406E0798 (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406F7980 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1407198C8 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140871E48 (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408724CC (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140872914 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140872D30 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnBufferResultData(
        unsigned int a1,
        unsigned int a2,
        int a3,
        const void *a4,
        unsigned int Size,
        int a6,
        _DWORD *Address,
        unsigned int Length,
        _DWORD *a9)
{
  unsigned int v10; // ebx
  __int128 v12; // [rsp+20h] [rbp-38h]

  *a9 = 0;
  v10 = 0;
  if ( Length >= Size + 20 && a6 == 20 )
  {
    LODWORD(v12) = 20;
    *(_QWORD *)((char *)&v12 + 4) = __PAIR64__(a2, a1);
    HIDWORD(v12) = a3;
    ProbeForWrite(Address, Length, 4u);
    *(_OWORD *)Address = v12;
    Address[4] = 0;
    if ( Size )
      memmove(Address + 4, a4, Size);
    *a9 = Size + 20;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
