/*
 * XREFs of PiCMReturnBufferResultData @ 0x1405BCA60
 * Callers:
 *     PiCMGetObjectProperty @ 0x1405BCB40 (PiCMGetObjectProperty.c)
 *     PiCMGetDeviceInterfaceList @ 0x140623438 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetObjectList @ 0x1406D00D0 (PiCMGetObjectList.c)
 *     PiCMGetRegistryProperty @ 0x1406D3B4C (PiCMGetRegistryProperty.c)
 *     PiCMGetDeviceIdList @ 0x1406DF488 (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406F5BC0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140717AD8 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateDevice @ 0x140871190 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140872748 (PiCMEnumerateSubKeys.c)
 *     PiCMGetObjectPropertyKeys @ 0x140872DCC (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140873214 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140873630 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
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
