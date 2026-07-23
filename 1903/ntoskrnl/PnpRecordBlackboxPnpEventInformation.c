/*
 * XREFs of PnpRecordBlackboxPnpEventInformation @ 0x14072E994
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PiGetTargetDeviceNode @ 0x14072EAEC (PiGetTargetDeviceNode.c)
 */

void __fastcall PnpRecordBlackboxPnpEventInformation(__int64 a1, int a2, __int64 a3, char a4)
{
  int v5; // r14d
  const void **v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r8
  char v9; // r9
  __int64 TargetDeviceNode; // r13
  unsigned int v11; // ebp
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rdi
  __int128 v14; // xmm0
  int v15; // ecx
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+48h] [rbp-40h]
  int v18; // [rsp+4Ch] [rbp-3Ch]

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
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    InputBuffer[2] = 0LL;
    v18 = 0;
    memset(PoolWithTag, 0, v5 + v11);
    v14 = *(_OWORD *)(a1 + 88);
    v13[2] = v7;
    *(_OWORD *)v13 = v14;
    v15 = *(_DWORD *)(a1 + 16);
    *((_DWORD *)v13 + 6) = a2;
    *((_DWORD *)v13 + 8) = v15;
    *((_BYTE *)v13 + 28) = a4;
    memmove((char *)v13 + 44, *(const void **)(TargetDeviceNode + 48), *(unsigned __int16 *)(TargetDeviceNode + 40));
    *((_WORD *)v13 + ((unsigned __int64)*(unsigned __int16 *)(TargetDeviceNode + 40) >> 1) + 22) = 0;
    if ( v5 )
    {
      *((_DWORD *)v13 + 9) = *(_DWORD *)a3;
      *((_DWORD *)v13 + 10) = v11;
      memmove((char *)v13 + v11, v6[1], *(unsigned __int16 *)v6);
      *(_WORD *)((char *)v13 + 2 * ((unsigned __int64)*(unsigned __int16 *)v6 >> 1) + v11) = 0;
    }
    v17 = 2;
    InputBuffer[0] = v13;
    InputBuffer[1] = v5 + v11;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
    ExFreePoolWithTag(v13, 0x4B706E50u);
  }
}
