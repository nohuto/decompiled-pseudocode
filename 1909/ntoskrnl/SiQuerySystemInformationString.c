/*
 * XREFs of SiQuerySystemInformationString @ 0x140741680
 * Callers:
 *     SyspartGetFirmwarePartition @ 0x140741624 (SyspartGetFirmwarePartition.c)
 *     SyspartGetSystemPartition @ 0x14093263C (SyspartGetSystemPartition.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiQuerySystemInformationString(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        void *a2,
        unsigned int a3,
        unsigned int *a4)
{
  NTSTATUS SystemInformation; // eax
  NTSTATUS v9; // ebx
  const void **PoolWithTag; // rax
  const void **v11; // rdi
  unsigned int v12; // eax
  ULONG NumberOfBytes[10]; // [rsp+20h] [rbp-28h] BYREF

  SystemInformation = ZwQuerySystemInformation(SystemInformationClass, 0LL, 0, NumberOfBytes);
  v9 = SystemInformation;
  if ( SystemInformation == -1073741789 )
  {
    PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x4B505953u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = ZwQuerySystemInformation(SystemInformationClass, PoolWithTag, NumberOfBytes[0], NumberOfBytes);
      if ( v9 >= 0 )
      {
        v12 = *(unsigned __int16 *)v11 + 2;
        *a4 = v12;
        if ( v12 <= a3 )
          memmove(a2, v11[1], v12);
        else
          v9 = -1073741789;
      }
      ExFreePoolWithTag(v11, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( SystemInformation >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}
