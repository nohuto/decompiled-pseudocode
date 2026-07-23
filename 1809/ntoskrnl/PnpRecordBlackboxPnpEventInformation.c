/*
 * XREFs of PnpRecordBlackboxPnpEventInformation @ 0x1406F1218
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PiGetTargetDeviceNode @ 0x1406F1374 (PiGetTargetDeviceNode.c)
 */

void __fastcall PnpRecordBlackboxPnpEventInformation(__int64 a1, int a2, __int64 a3, char a4)
{
  int v5; // r14d
  const void **v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r8
  char v9; // r9
  __int64 TargetDeviceNode; // r15
  unsigned int v11; // ebp
  _OWORD *PoolWithTag; // rdi
  __int128 v13; // xmm0
  _QWORD InputBuffer[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = 0;
  v6 = 0LL;
  v7 = MEMORY[0xFFFFF78000000014];
  TargetDeviceNode = PiGetTargetDeviceNode(a1);
  v11 = *(unsigned __int16 *)(TargetDeviceNode + 40) + 50;
  if ( a3 )
  {
    v6 = (const void **)(a3 + 8);
    if ( !v9 && a3 != -8 && *(_WORD *)v6 && *(_QWORD *)(a3 + 16) != v8 )
      v5 = *(unsigned __int16 *)v6 + 2;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5 + v11, 0x4B706E50u);
  if ( PoolWithTag )
  {
    memset(InputBuffer, 0, 0x20uLL);
    memset(PoolWithTag, 0, v5 + v11);
    v13 = *(_OWORD *)(a1 + 88);
    *((_QWORD *)PoolWithTag + 2) = v7;
    *PoolWithTag = v13;
    *((_DWORD *)PoolWithTag + 8) = *(_DWORD *)(a1 + 16);
    *((_DWORD *)PoolWithTag + 6) = a2;
    *((_BYTE *)PoolWithTag + 28) = a4;
    memmove(
      (char *)PoolWithTag + 44,
      *(const void **)(TargetDeviceNode + 48),
      *(unsigned __int16 *)(TargetDeviceNode + 40));
    *((_WORD *)PoolWithTag + ((unsigned __int64)*(unsigned __int16 *)(TargetDeviceNode + 40) >> 1) + 22) = 0;
    if ( v5 )
    {
      *((_DWORD *)PoolWithTag + 9) = *(_DWORD *)a3;
      *((_DWORD *)PoolWithTag + 10) = v11;
      memmove((char *)PoolWithTag + v11, v6[1], *(unsigned __int16 *)v6);
      *(_WORD *)((char *)PoolWithTag + 2 * ((unsigned __int64)*(unsigned __int16 *)v6 >> 1) + v11) = 0;
    }
    LODWORD(InputBuffer[3]) = 2;
    InputBuffer[0] = PoolWithTag;
    InputBuffer[1] = v5 + v11;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
    ExFreePoolWithTag(PoolWithTag, 0x4B706E50u);
  }
}
