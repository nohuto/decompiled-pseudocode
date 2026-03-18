/*
 * XREFs of IopFindSystemDevice @ 0x140822870
 * Callers:
 *     IoQuerySystemDeviceName @ 0x1406BD5B0 (IoQuerySystemDeviceName.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SiGetSystemDeviceName @ 0x1406BEFE4 (SiGetSystemDeviceName.c)
 */

__int64 __fastcall IopFindSystemDevice(SIZE_T a1, _QWORD *a2)
{
  int SystemDeviceName; // eax
  int v4; // ebx
  PVOID PoolWithTag; // rax
  void *v6; // rdi
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp+8h] BYREF

  NumberOfBytes = a1;
  SystemDeviceName = SiGetSystemDeviceName(
                       (__int64 (__fastcall *)(_QWORD, void **))SiGetSystemDisk,
                       0LL,
                       0,
                       (unsigned int *)&NumberOfBytes);
  v4 = SystemDeviceName;
  if ( SystemDeviceName == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x44536F49u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      v4 = SiGetSystemDeviceName(
             (__int64 (__fastcall *)(_QWORD, void **))SiGetSystemDisk,
             PoolWithTag,
             NumberOfBytes,
             (unsigned int *)&NumberOfBytes);
      if ( v4 >= 0 )
        *a2 = v6;
      else
        ExFreePoolWithTag(v6, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( SystemDeviceName >= 0 )
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v4;
}
