/*
 * XREFs of ScsiStartStopUnitRequest @ 0x1C00143D4
 * Callers:
 *     ScsiToNVMe @ 0x1C0004140 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiStartStopUnitRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 SrbExtension; // rdi
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // r11
  int v8; // eax
  unsigned __int8 v9; // bl
  __int64 v10; // rax
  int v11; // eax

  SrbExtension = GetSrbExtension(a2);
  if ( (*(_BYTE *)(v4 + 1) & 1) != 0 )
  {
    NVMeSetSenseData(v6, 6, v4, 36);
    return 3238002694LL;
  }
  if ( (*(_BYTE *)(v4 + 4) & 1) != 0 )
  {
    v8 = *(_DWORD *)(v5 + 20);
    if ( (v8 & 0x200) == 0 )
    {
      v9 = 0;
      *(_DWORD *)(v5 + 20) = v8 | 0x200;
      *(_DWORD *)(v5 + 188) = 0;
LABEL_9:
      *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
      SrbAssignQueueId(v5, v2);
      v11 = (*(_DWORD *)(SrbExtension + 4140) ^ v9) & 0x1F;
      *(_BYTE *)(SrbExtension + 4096) = 9;
      *(_DWORD *)(SrbExtension + 4140) ^= v11;
      *(_BYTE *)(SrbExtension + 4136) = 2;
      return 0LL;
    }
  }
  else if ( ++*(_DWORD *)(v5 + 188) >= *(_DWORD *)(v5 + 172) )
  {
    v10 = *(_QWORD *)(v5 + 1528);
    *(_DWORD *)(v5 + 20) &= ~0x200u;
    v9 = *(_BYTE *)(v10 + 263);
    goto LABEL_9;
  }
  *(_BYTE *)(v2 + 3) = 1;
  return 0LL;
}
