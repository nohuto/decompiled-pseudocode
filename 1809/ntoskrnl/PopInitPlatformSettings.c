/*
 * XREFs of PopInitPlatformSettings @ 0x1409DDD88
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     HvlIsPartitionCpuManager @ 0x140178400 (HvlIsPartitionCpuManager.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopLogSleepDisabled @ 0x14070BCD4 (PopLogSleepDisabled.c)
 */

__int64 PopInitPlatformSettings()
{
  _BYTE *v0; // rdi
  NTSTATUS v1; // ebx
  _DWORD *PoolWithTag; // rax
  int v3; // edx
  int v4; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp-38h] BYREF
  _DWORD SystemInformation[6]; // [rsp+38h] [rbp-30h] BYREF

  v0 = 0LL;
  SystemInformation[0] = 1094930505;
  SystemInformation[3] = 0;
  ReturnLength = 0;
  SystemInformation[1] = 1;
  SystemInformation[2] = 1346584902;
  v1 = ZwQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength);
  if ( v1 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x206D654Du);
    v0 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v1 = -1073741670;
      goto LABEL_30;
    }
    *PoolWithTag = 1094930505;
    PoolWithTag[1] = 1;
    PoolWithTag[2] = 1346584902;
    PoolWithTag[3] = ReturnLength - 16;
    v1 = ZwQuerySystemInformation(SystemFirmwareTableInformation, PoolWithTag, ReturnLength, &ReturnLength);
    if ( v1 >= 0 )
    {
      if ( v0[24] >= 3u )
        PopFirmwarePlatformRole = (unsigned __int8)v0[61];
      if ( (unsigned __int8)off_1403FF5A0[0]() )
        PopPlatformAoAc = 1;
      if ( PopPlatformRoleOverride != -1 )
        PopFirmwarePlatformRole = PopPlatformRoleOverride;
      if ( PopPlatformAoAcOverride != -1 )
        PopPlatformAoAc = PopPlatformAoAcOverride != 0;
      if ( (unsigned int)HvlIsPartitionCpuManager() )
      {
        v3 = (HvlpEnlightenments & 0x10000) != 0 ? 16 : 31;
        if ( (HvlpRootFlags & 0x400) != 0 )
          LOBYTE(v3) = 31;
        PopLogSleepDisabled(18, v3, 0LL, 0LL);
      }
      if ( !(unsigned int)HvlIsPartitionCpuManager() && VslVsmEnabled )
        PopLogSleepDisabled(18, 31, 0LL, 0LL);
      if ( PopPlatformAoAc )
      {
        if ( !InitSafeBootMode && !InitIsWinPEMode && PopCsEnabledReg )
          goto LABEL_27;
      }
      else
      {
        PopLogSleepDisabled(19, 32, 0LL, 0LL);
      }
      PopPlatformAoAc = 0;
LABEL_27:
      v4 = PopFirmwarePlatformRole;
      if ( (unsigned int)PopFirmwarePlatformRole > 8 )
      {
        v4 = 0;
        PopFirmwarePlatformRole = 0;
      }
      PopPlatformRole = v4;
      v1 = 0;
    }
  }
LABEL_30:
  if ( v1 < 0 )
    KeBugCheckEx(0xA0u, 0xEuLL, v1, 0LL, 0LL);
  if ( v0 )
    ExFreePoolWithTag(v0, 0x206D654Du);
  return (unsigned int)v1;
}
