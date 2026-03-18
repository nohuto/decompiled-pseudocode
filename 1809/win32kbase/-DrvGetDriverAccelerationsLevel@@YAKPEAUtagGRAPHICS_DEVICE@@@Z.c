/*
 * XREFs of ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00568A8
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00548D8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJG@Z @ 0x1C001BD10 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall DrvGetDriverAccelerationsLevel(struct tagGRAPHICS_DEVICE *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  int v4; // eax
  HANDLE RegistryHandleFromDeviceMap; // rsi
  __int64 v7; // rcx
  ULONG Length; // [rsp+40h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-51h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+60h] [rbp-39h] BYREF
  WCHAR SourceString[20]; // [rsp+B0h] [rbp+17h] BYREF

  v1 = -1;
  v2 = 0;
  Length = 66;
  wcscpy(SourceString, L"Acceleration.Level");
  if ( a1 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    v4 = *((_DWORD *)a1 + 40);
    if ( (v4 & 0x800000) == 0
      && ((v4 & 0x4000000) == 0
       || (unsigned __int16)(gProtocolType - 1) > 0xFFFDu
       || !Object
       || (PVOID)PsGetCurrentProcess(65533LL) == gpepCSRSS
       || UserIsCurrentProcessDwm(v7)) )
    {
      RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap(
                                      (unsigned __int16 *)a1,
                                      0,
                                      0LL,
                                      0LL,
                                      0,
                                      0LL,
                                      gProtocolType);
      if ( RegistryHandleFromDeviceMap )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        if ( ZwQueryValueKey(
               RegistryHandleFromDeviceMap,
               &DestinationString,
               KeyValueFullInformation,
               KeyValueInformation,
               Length,
               &Length) >= 0 )
          v1 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
        ZwClose(RegistryHandleFromDeviceMap);
        if ( v1 != -1 )
        {
          if ( v1 > 5 )
            return 5;
          return v1;
        }
      }
    }
  }
  return v2;
}
