/*
 * XREFs of PnpRecordBlackboxPnpEventWorkerInformation @ 0x14058D0D4
 * Callers:
 *     PnpRecordBlackbox @ 0x140005BB0 (PnpRecordBlackbox.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 */

void __fastcall PnpRecordBlackboxPnpEventWorkerInformation(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rbp
  _DWORD *PoolWithTag; // rax
  _QWORD InputBuffer[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v4 = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    v2 = 72LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x4B706E50u);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      *v1 = 1;
      v1[1] = 72;
      v1[4] = *(_DWORD *)(a1 + 16);
      *((_BYTE *)v1 + 8) = *(_BYTE *)(*(_QWORD *)(a1 + 104) + 137LL);
      v1[3] = (v4 - **(_QWORD **)(a1 + 104)) / 0x2710uLL;
      *((_QWORD *)v1 + 3) = *(_QWORD *)(a1 + 152);
      v1[8] = *(_DWORD *)(a1 + 128);
      *((_QWORD *)v1 + 6) = PnpDeviceEventThread;
      *((_QWORD *)v1 + 5) = a1;
      *((_QWORD *)v1 + 7) = PnpDeviceActionThread;
      *((_QWORD *)v1 + 8) = PnpDelayedRemoveWorkerThread;
    }
  }
  memset(InputBuffer, 0, 0x20uLL);
  LODWORD(InputBuffer[3]) = 9;
  InputBuffer[0] = v1;
  InputBuffer[1] = v2;
  NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x4B706E50u);
}
