/*
 * XREFs of ACPIGetUsedDebuggingDevices @ 0x1C008E944
 * Callers:
 *     ACPIGlobalInitialize @ 0x1C00B80EC (ACPIGlobalInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 ACPIGetUsedDebuggingDevices()
{
  __int64 result; // rax
  unsigned int *PoolWithTag; // rax
  unsigned int *v2; // rdi
  unsigned int v3; // ebp
  const WCHAR *v4; // rbx
  unsigned int v5; // r14d
  unsigned int i; // esi
  __int64 v7; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+8h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(&gDebuggingDevicesInUse, 0, 0x20uLL);
  result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))HalDispatchTable->HalQuerySystemInformation)(
             33LL,
             0LL,
             0LL,
             &NumberOfBytes);
  if ( (_DWORD)result == -2147483643 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x42706341u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      result = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned int *, SIZE_T *))HalDispatchTable->HalQuerySystemInformation)(
                 33LL,
                 (unsigned int)NumberOfBytes,
                 PoolWithTag,
                 &NumberOfBytes);
      if ( (int)result >= 0 )
      {
        v3 = 0;
        v4 = (const WCHAR *)(v2 + 1);
        v5 = 0;
        for ( i = 0; i < *v2; ++i )
        {
          v4 = (const WCHAR *)((char *)v4 + v5);
          v5 = *((_DWORD *)v4 + 1);
          if ( *(_DWORD *)v4 == 1 )
          {
            if ( *((_DWORD *)v4 + 2) )
            {
              RtlInitUnicodeString(&DestinationString, v4 + 6);
              v7 = 2LL * v3++;
              *(struct _UNICODE_STRING *)((char *)&gDebuggingDevicesInUse + 8 * v7) = DestinationString;
            }
          }
        }
        return 0LL;
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
