/*
 * XREFs of UsbhCopyPnpString @ 0x1C00295C0
 * Callers:
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0029424 (UsbhFdoReturnDeviceConfigInfo.c)
 * Callees:
 *     memmove @ 0x1C002B4C0 (memmove.c)
 *     memset @ 0x1C002B800 (memset.c)
 */

__int64 __fastcall UsbhCopyPnpString(__int64 a1, __int64 a2)
{
  PVOID PoolWithTag; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !*(_QWORD *)(a2 + 8) || !*(_DWORD *)(a2 + 4) )
    return 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned int *)(a2 + 4), 0x42554855u);
  *(_QWORD *)(a1 + 8) = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, *(unsigned int *)(a2 + 4));
    if ( *(_QWORD *)(a1 + 8) )
    {
      memmove(*(void **)(a1 + 8), *(const void **)(a2 + 8), *(unsigned int *)(a2 + 4));
      return 0LL;
    }
  }
  return 3221225626LL;
}
