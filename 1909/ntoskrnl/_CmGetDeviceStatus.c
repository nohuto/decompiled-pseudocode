/*
 * XREFs of _CmGetDeviceStatus @ 0x140629D58
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406283AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMGetDeviceStatus @ 0x1406CF22C (PiCMGetDeviceStatus.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14071ADB8 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiCMValidateDeviceInstance @ 0x140721BDC (PiCMValidateDeviceInstance.c)
 *     PpDevCfgProcessDevices @ 0x140755A2C (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDevice @ 0x1408712B4 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140871B20 (PiCMDeviceAction.c)
 *     PiCMGenerateDeviceInstance @ 0x140872074 (PiCMGenerateDeviceInstance.c)
 *     PiCMQueryRemove @ 0x140872914 (PiCMQueryRemove.c)
 *     PiCMSetProblem @ 0x1408730E8 (PiCMSetProblem.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     _CmGetDeviceRegProp @ 0x1405C2714 (_CmGetDeviceRegProp.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140629E68 (_NtPlugPlayGetDeviceStatus.c)
 */

__int64 __fastcall CmGetDeviceStatus(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        int *a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned int a7)
{
  _DWORD *v7; // r14
  char v8; // bl
  _DWORD *v9; // r15
  NTSTATUS inited; // esi
  int v14; // edx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+A8h] [rbp+58h] BYREF

  v7 = a5;
  v8 = 0;
  v9 = a6;
  *a4 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  *v7 = 0;
  *v9 = 0;
  DestinationString.Buffer = 0LL;
  v18 = 0;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited >= 0 )
  {
    inited = NtPlugPlayGetDeviceStatus(a1, (unsigned int)&DestinationString, (_DWORD)a4, (_DWORD)v7, (__int64)v9);
    if ( inited >= 0 )
    {
      a7 = 4;
      if ( !(unsigned int)CmGetDeviceRegProp(a1, (__int64)a2, a3, 11, (__int64)&a5, (__int64)&v18, (__int64)&a7, 0)
        && a7 >= 4
        && (_DWORD)a5 == 4 )
      {
        v8 = v18;
      }
      v14 = *a4;
      if ( (v8 & 4) != 0 )
      {
        v14 |= 0x10u;
        *a4 = v14;
      }
      if ( (v14 & 0x400) == 0 && (v8 & 0x40) != 0 )
      {
        *a4 = v14 | 0x400;
        *v7 = 28;
      }
    }
  }
  return (unsigned int)inited;
}
