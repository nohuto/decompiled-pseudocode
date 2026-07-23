/*
 * XREFs of ExEnumerateSystemFirmwareTables @ 0x1408CC510
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406B92A0 (ExpGetSystemFirmwareTableInformation.c)
 */

__int64 __fastcall ExEnumerateSystemFirmwareTables(int a1, void *a2, int a3, _DWORD *a4)
{
  unsigned int v9; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // rbx
  int SystemFirmwareTableInformation; // edi
  int v13; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 && a3 )
    return 3221225485LL;
  v9 = a3 + 16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(a3 + 16), 0x54465241u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = 0;
    PoolWithTag[2] = 0;
    PoolWithTag[3] = a3;
    *PoolWithTag = a1;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation((char *)PoolWithTag, 0, v9, &v13);
    if ( ((int)(SystemFirmwareTableInformation + 0x80000000) < 0 || SystemFirmwareTableInformation == -1073741789) && a4 )
      *a4 = v11[3];
    if ( SystemFirmwareTableInformation >= 0 )
    {
      if ( a2 )
        memmove(a2, v11 + 4, (unsigned int)(v13 - 16));
    }
    ExFreePoolWithTag(v11, 0x54465241u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)SystemFirmwareTableInformation;
}
