/*
 * XREFs of SiGetSystemDisk @ 0x14072C940
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SiIsWinPEBoot @ 0x1406D26E8 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1406D2754 (SiGetBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x1406D2C00 (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x14072CA18 (SiGetBiosSystemDisk.c)
 *     SiGetEfiSystemDevice @ 0x1409329A0 (SiGetEfiSystemDevice.c)
 */

__int64 __fastcall SiGetSystemDisk(int a1, PCWSTR *a2, __int64 a3, int a4)
{
  bool IsWinPEBoot; // bp
  __int64 v7; // rdx
  int BootDeviceName; // ebx
  int BiosSystemDisk; // eax
  wchar_t *v11; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v11) = 1;
  IsWinPEBoot = SiIsWinPEBoot(a1, (__int64)a2, a3, a4);
  BootDeviceName = SiGetBootDeviceName(0, (__int64)L"WindowsSysPartDevice", 0, 0LL, 0, a2);
  if ( BootDeviceName >= 0 )
    return (unsigned int)BootDeviceName;
  if ( !IsWinPEBoot )
  {
    BootDeviceName = SiGetBootDeviceName(0, (__int64)L"FirmwareBootDevice", 1, 0LL, 0, a2);
    if ( BootDeviceName >= 0 )
      return (unsigned int)BootDeviceName;
  }
  if ( a1 == 1 )
  {
    BiosSystemDisk = SiGetBiosSystemDisk(a2);
  }
  else
  {
    if ( a1 != 2 )
    {
      BootDeviceName = -1073741637;
      goto LABEL_7;
    }
    BiosSystemDisk = SiGetEfiSystemDevice(0LL, v7, a2);
  }
  BootDeviceName = BiosSystemDisk;
LABEL_7:
  if ( BootDeviceName >= 0 )
  {
    BootDeviceName = SiTranslateSymbolicLink(*a2, &v11);
    if ( BootDeviceName >= 0 )
    {
      ExFreePoolWithTag((PVOID)*a2, 0);
      *a2 = v11;
      return (unsigned int)BootDeviceName;
    }
    return 0;
  }
  if ( BootDeviceName == -1073740719
    && IsWinPEBoot
    && a1 == 2
    && (int)SiGetBootDeviceName(0, (__int64)L"FirmwareBootDevice", 1, &v11, 1, a2) >= 0 )
  {
    return 0;
  }
  return (unsigned int)BootDeviceName;
}
