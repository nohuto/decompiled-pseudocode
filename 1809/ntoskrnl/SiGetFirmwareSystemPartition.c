/*
 * XREFs of SiGetFirmwareSystemPartition @ 0x1406AE7A0
 * Callers:
 *     SiGetSystemPartition @ 0x1406AE750 (SiGetSystemPartition.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SiIsWinPEBoot @ 0x1406AE858 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1406AE8C4 (SiGetBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x1406AEDB8 (SiTranslateSymbolicLink.c)
 *     SiGetBiosSystemPartition @ 0x140704110 (SiGetBiosSystemPartition.c)
 *     SiGetEfiSystemDevice @ 0x1408F52D8 (SiGetEfiSystemDevice.c)
 */

__int64 __fastcall SiGetFirmwareSystemPartition(int a1, PCWSTR *a2)
{
  __int64 v4; // rdx
  char IsWinPEBoot; // bp
  int v6; // r8d
  int BootDeviceName; // ebx
  int BiosSystemPartition; // eax
  const WCHAR *v10; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v10) = 1;
  IsWinPEBoot = SiIsWinPEBoot();
  if ( IsWinPEBoot
    || (LOBYTE(v6) = 1,
        BootDeviceName = SiGetBootDeviceName(1, (unsigned int)L"FirmwareBootDevice", v6, 0, 0, (__int64)a2),
        BootDeviceName < 0) )
  {
    if ( a1 == 1 )
    {
      BiosSystemPartition = SiGetBiosSystemPartition(a2);
    }
    else
    {
      if ( a1 != 2 )
      {
        BootDeviceName = -1073741637;
LABEL_7:
        if ( BootDeviceName < 0 )
        {
          if ( BootDeviceName != -1073740719 )
            return (unsigned int)BootDeviceName;
          if ( !IsWinPEBoot )
            return (unsigned int)BootDeviceName;
          if ( a1 != 2 )
            return (unsigned int)BootDeviceName;
          LOBYTE(v6) = 1;
          if ( (int)SiGetBootDeviceName(1, (unsigned int)L"FirmwareBootDevice", v6, (unsigned int)&v10, 1, (__int64)a2) < 0 )
            return (unsigned int)BootDeviceName;
        }
        else
        {
          BootDeviceName = SiTranslateSymbolicLink(*a2);
          if ( BootDeviceName >= 0 )
          {
            ExFreePoolWithTag((PVOID)*a2, 0);
            *a2 = v10;
            return (unsigned int)BootDeviceName;
          }
        }
        return 0;
      }
      BiosSystemPartition = SiGetEfiSystemDevice(1LL, v4, a2);
    }
    BootDeviceName = BiosSystemPartition;
    goto LABEL_7;
  }
  return (unsigned int)BootDeviceName;
}
