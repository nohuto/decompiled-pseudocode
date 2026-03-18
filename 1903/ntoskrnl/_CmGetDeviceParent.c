/*
 * XREFs of _CmGetDeviceParent @ 0x1406F1670
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406244FC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmUpdateDevicePanel @ 0x1406FF59C (_CmUpdateDevicePanel.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140717AD8 (PiCMGetRelatedDeviceInstance.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140718FC8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceSiblings @ 0x14093C448 (_CmGetDeviceSiblings.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x14013DE38 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _PnpGetObjectProperty @ 0x1405BC368 (_PnpGetObjectProperty.c)
 *     _CmIsRootDevice @ 0x1406F17E4 (_CmIsRootDevice.c)
 *     _NtPlugPlayGetDeviceRelatedDevice @ 0x1406F1828 (_NtPlugPlayGetDeviceRelatedDevice.c)
 */

int __fastcall CmGetDeviceParent(__int64 a1, const WCHAR *a2, wchar_t *a3, unsigned int *a4)
{
  size_t v4; // rdi
  int result; // eax
  unsigned int v10; // ecx
  wchar_t *v11; // r8
  unsigned int v12; // [rsp+60h] [rbp-A0h] BYREF
  int v13; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  wchar_t pszSrc[200]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *a4;
  v13 = 0;
  *a4 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (unsigned __int8)CmIsRootDevice(a2) )
    return -1073741810;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
  {
    result = NtPlugPlayGetDeviceRelatedDevice(a1, (unsigned int)&DestinationString, 1, (unsigned int)pszSrc);
    if ( result == -1073741810 )
    {
      result = PnpGetObjectProperty(
                 a1,
                 (__int64)a2,
                 1LL,
                 0LL,
                 0LL,
                 (__int64)&DEVPKEY_Device_LastKnownParent,
                 (__int64)&v13,
                 (__int64)pszSrc,
                 400,
                 (__int64)&v12,
                 0);
      v10 = v12;
      if ( result < 0 )
      {
        result = -1073741810;
      }
      else
      {
        v10 = v12 >> 1;
        v12 >>= 1;
      }
      if ( result == -1073741810 )
      {
        *a4 = 13;
        if ( (unsigned int)v4 >= 0xD )
        {
          v11 = (wchar_t *)L"HTREE\\ROOT\\0";
          return RtlStringCchCopyExW(a3, v4, v11, 0LL, 0LL, 0x900u);
        }
        return -1073741789;
      }
    }
    else
    {
      v10 = v12;
    }
    if ( result < 0 )
      return result;
    *a4 = v10;
    if ( (unsigned int)v4 >= v10 )
    {
      v11 = pszSrc;
      return RtlStringCchCopyExW(a3, v4, v11, 0LL, 0LL, 0x900u);
    }
    return -1073741789;
  }
  return result;
}
