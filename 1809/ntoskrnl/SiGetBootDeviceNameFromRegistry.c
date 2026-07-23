/*
 * XREFs of SiGetBootDeviceNameFromRegistry @ 0x1406AFCE8
 * Callers:
 *     SiGetBootDeviceName @ 0x1406AFB44 (SiGetBootDeviceName.c)
 *     SiGetBiosSystemDisk @ 0x1407056C8 (SiGetBiosSystemDisk.c)
 * Callees:
 *     _wcslwr @ 0x140195AD0 (_wcslwr.c)
 *     SiGetRegistryValue @ 0x1406AFD58 (SiGetRegistryValue.c)
 */

__int64 __fastcall SiGetBootDeviceNameFromRegistry(int a1, wchar_t **a2, __int64 a3, int a4)
{
  int RegistryValue; // edi
  wchar_t *v6; // rbx
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *String; // [rsp+58h] [rbp+20h] BYREF

  RegistryValue = SiGetRegistryValue(
                    a1,
                    a1,
                    (unsigned int)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
                    a4,
                    (__int64)&String,
                    (__int64)&v8);
  if ( RegistryValue >= 0 )
  {
    if ( v8 < 4 )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v6 = String;
      wcslwr(String);
      *a2 = v6;
    }
  }
  return (unsigned int)RegistryValue;
}
