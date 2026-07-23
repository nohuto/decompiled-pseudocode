/*
 * XREFs of CmpQueryFileSecurityDescriptor @ 0x1405B5B70
 * Callers:
 *     CmpInitHiveFromFile @ 0x1405B4D68 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 *     CmpInitCmRM @ 0x1406804A8 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x14070F5B4 (CmpStartRMLog.c)
 * Callees:
 *     ZwQuerySecurityObject @ 0x1401BAD70 (ZwQuerySecurityObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpQueryFileSecurityDescriptor(HANDLE Handle, _QWORD *a2)
{
  PVOID PoolWithTag; // rdi
  NTSTATUS SecurityObject; // ebx
  __int64 result; // rax
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  SecurityObject = ZwQuerySecurityObject(Handle, 4u, 0LL, 0, (PULONG)&NumberOfBytes);
  if ( SecurityObject == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64734D43u);
    if ( PoolWithTag )
    {
      SecurityObject = ZwQuerySecurityObject(Handle, 4u, PoolWithTag, NumberOfBytes, (PULONG)&NumberOfBytes);
      if ( SecurityObject < 0 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
    }
    else
    {
      SecurityObject = -1073741670;
    }
  }
  else if ( !SecurityObject )
  {
    SecurityObject = -1073741823;
  }
  result = (unsigned int)SecurityObject;
  *a2 = PoolWithTag;
  return result;
}
