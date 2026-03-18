/*
 * XREFs of ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0048344
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0046570 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C001497C (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     UserIsCurrentProcessDwm @ 0x1C0037DC0 (UserIsCurrentProcessDwm.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall DrvGetDriverAccelerationsLevel(struct tagGRAPHICS_DEVICE *a1)
{
  __int64 v2; // rdx
  unsigned int v3; // edi
  unsigned int v4; // ebx
  int v5; // eax
  HANDLE RegistryHandleFromDeviceMap; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  ULONG Length; // [rsp+30h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-51h] BYREF
  _DWORD KeyValueInformation[20]; // [rsp+50h] [rbp-39h] BYREF
  WCHAR SourceString[20]; // [rsp+A0h] [rbp+17h] BYREF

  memset(KeyValueInformation, 0, 0x48uLL);
  v3 = -1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v4 = 0;
  DestinationString.Buffer = 0LL;
  Length = 66;
  wcscpy(SourceString, L"Acceleration.Level");
  if ( a1 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    v5 = *((_DWORD *)a1 + 40);
    if ( (v5 & 0x800000) == 0
      && ((v5 & 0x4000000) == 0
       || (unsigned __int16)(gProtocolType - 1) > 0xFFFDu
       || !Object
       || (PVOID)PsGetCurrentProcess(65533LL, v2) == gpepCSRSS
       || UserIsCurrentProcessDwm(v9, v8)) )
    {
      RegistryHandleFromDeviceMap = DrvGetRegistryHandleFromDeviceMap((unsigned __int16 *)a1, 0, 0LL, 0LL, 0, 0LL);
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
          v3 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
        ZwClose(RegistryHandleFromDeviceMap);
        if ( v3 != -1 )
        {
          if ( v3 > 5 )
            return 5;
          return v3;
        }
      }
    }
  }
  return v4;
}
