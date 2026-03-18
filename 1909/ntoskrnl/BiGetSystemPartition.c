/*
 * XREFs of BiGetSystemPartition @ 0x14074159C
 * Callers:
 *     BcdGetSystemStorePath @ 0x14073DAE8 (BcdGetSystemStorePath.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SyspartGetFirmwarePartition @ 0x140741624 (SyspartGetFirmwarePartition.c)
 */

__int64 __fastcall BiGetSystemPartition(_QWORD *a1)
{
  int FirmwarePartition; // eax
  int v3; // ebx
  PVOID PoolWithTag; // rax
  void *v5; // rdi
  unsigned int NumberOfBytes; // [rsp+38h] [rbp+10h]

  FirmwarePartition = SyspartGetFirmwarePartition(0LL);
  v3 = FirmwarePartition;
  if ( FirmwarePartition == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B444342u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      v3 = SyspartGetFirmwarePartition(PoolWithTag);
      if ( v3 < 0 )
        ExFreePoolWithTag(v5, 0x4B444342u);
      else
        *a1 = v5;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( FirmwarePartition >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v3;
}
