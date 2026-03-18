/*
 * XREFs of ScsiSecurityProtocolOutRequest @ 0x1C00142C0
 * Callers:
 *     ScsiToNVMe @ 0x1C0004140 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiSecurityProtocolOutRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 SrbExtension; // rsi
  __int64 v5; // r8
  __int64 v6; // r11
  __int64 result; // rax
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned __int16 v11; // [rsp+40h] [rbp+8h]
  unsigned int v12; // [rsp+58h] [rbp+20h]

  SrbExtension = GetSrbExtension(a2);
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 1528) + 256LL) & 1) == 0 )
    goto LABEL_2;
  HIBYTE(v12) = a3[6];
  BYTE2(v12) = a3[7];
  BYTE1(v12) = a3[8];
  LOBYTE(v12) = a3[9];
  v8 = v12;
  if ( (char)a3[4] < 0 )
    v8 = v12 << 9;
  HIBYTE(v11) = a3[2];
  LOBYTE(v11) = a3[3];
  v9 = 60LL;
  if ( *(_BYTE *)(v5 + 2) != 40 )
    v9 = 16LL;
  if ( *(_DWORD *)(v9 + v5) >= v8 )
  {
    *(_BYTE *)(SrbExtension + 4253) = (v8 != 0 ? 2 : 0) | *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
    SrbAssignQueueId(v6, v5);
    *(_BYTE *)(SrbExtension + 4139) = a3[1];
    v10 = *(_DWORD *)(SrbExtension + 4136) & 0xFF0000FF | (v11 << 8);
    *(_BYTE *)(SrbExtension + 4096) = -127;
    *(_DWORD *)(SrbExtension + 4136) = v10;
    result = 0LL;
    *(_DWORD *)(SrbExtension + 4140) = v8;
  }
  else
  {
LABEL_2:
    NVMeSetSenseData(v5, 6, v5, 36);
    return 3238002694LL;
  }
  return result;
}
