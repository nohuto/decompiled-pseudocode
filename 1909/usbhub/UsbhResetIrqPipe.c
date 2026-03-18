/*
 * XREFs of UsbhResetIrqPipe @ 0x1C0049AAC
 * Callers:
 *     UsbhHubResetIrqPipeWorker @ 0x1C0049480 (UsbhHubResetIrqPipeWorker.c)
 * Callees:
 *     UsbhSyncSendInternalIoctl @ 0x1C000ECA0 (UsbhSyncSendInternalIoctl.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 */

__int64 __fastcall UsbhResetIrqPipe(__int64 a1)
{
  _DWORD *v2; // rdi
  _QWORD *PoolWithTag; // rbx
  NTSTATUS v4; // edi

  v2 = FdoExt(a1);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x28uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 1966120LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[3] = *((_QWORD *)v2 + 330);
    v4 = UsbhSyncSendInternalIoctl(a1, 0x220003u, (unsigned __int64)PoolWithTag, 0LL);
    Log(a1, 4, 1937331029, v4, *((int *)PoolWithTag + 1));
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
