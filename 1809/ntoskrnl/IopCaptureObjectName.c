/*
 * XREFs of IopCaptureObjectName @ 0x14056D484
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x14056CE10 (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ObQueryNameString @ 0x14065F680 (ObQueryNameString.c)
 */

_WORD *__fastcall IopCaptureObjectName(void *a1)
{
  _WORD *v1; // rbx
  _WORD *PoolWithTag; // rax
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-228h] BYREF
  struct _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+30h] [rbp-218h] BYREF

  v1 = 0LL;
  if ( ObQueryNameString(a1, &ObjectNameInfo, 0x200u, ReturnLength) >= 0 )
  {
    if ( ObjectNameInfo.Name.Buffer )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ObjectNameInfo.Name.Length + 2LL, 0x72775044u);
      v1 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, ObjectNameInfo.Name.Buffer, ObjectNameInfo.Name.Length);
        v1[(unsigned __int64)ObjectNameInfo.Name.Length >> 1] = 0;
      }
    }
  }
  return v1;
}
