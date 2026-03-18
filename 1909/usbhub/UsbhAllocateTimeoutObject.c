/*
 * XREFs of UsbhAllocateTimeoutObject @ 0x1C000D44C
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0001D70 (UsbhDriverResetPort.c)
 *     UsbhReset1Complete @ 0x1C000FD00 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x1C0012CC0 (UsbhReset2Complete.c)
 *     UsbhPortConnect @ 0x1C001FB60 (UsbhPortConnect.c)
 *     UsbhReset1Timeout @ 0x1C0058060 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C0058650 (UsbhReset2Timeout.c)
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
 */

__int64 __fastcall UsbhAllocateTimeoutObject(int a1, __int64 a2, _QWORD *a3)
{
  char *PoolWithTag; // rax
  unsigned int v7; // r10d

  PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x14uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *(_QWORD *)(PoolWithTag + 4) = 0LL;
    v7 = 0;
    *(_QWORD *)(PoolWithTag + 12) = 0LL;
    *(_DWORD *)PoolWithTag = 1867468116;
    *((_DWORD *)PoolWithTag + 4) = *(_DWORD *)(a2 + 400);
    *a3 = PoolWithTag;
  }
  else
  {
    *a3 = 0LL;
    Log(a1, 1024, 1635020577, a2, 0LL);
  }
  return v7;
}
