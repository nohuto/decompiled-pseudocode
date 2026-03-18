/*
 * XREFs of ScsiSecurityProtocolOutRequest @ 0x1C0013510
 * Callers:
 *     ScsiToNVMe @ 0x1C0003070 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C00189CC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiSecurityProtocolOutRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 result; // rax
  unsigned int v11; // edi
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // [rsp+40h] [rbp+8h]
  unsigned __int16 v15; // [rsp+40h] [rbp+8h]

  SrbExtension = GetSrbExtension(a2);
  v8 = *(_QWORD *)(v7 + 1536);
  v9 = SrbExtension;
  if ( (*(_BYTE *)(v8 + 256) & 1) == 0 )
    goto LABEL_2;
  HIBYTE(v14) = a3[6];
  BYTE2(v14) = a3[7];
  BYTE1(v14) = a3[8];
  LOBYTE(v14) = a3[9];
  v11 = v14;
  if ( (char)a3[4] < 0 )
    v11 = v14 << 9;
  HIBYTE(v15) = a3[2];
  LOBYTE(v15) = a3[3];
  v12 = 60LL;
  if ( *(_BYTE *)(v5 + 2) != 40 )
    v12 = 16LL;
  if ( *(_DWORD *)(v12 + v5) >= v11 )
  {
    *(_BYTE *)(v9 + 4253) = (v11 != 0 ? 2 : 0) | *(_BYTE *)(v9 + 4253) & 0xFC | 1;
    SrbAssignQueueId(v7, v5);
    *(_BYTE *)(v9 + 4139) = a3[1];
    v13 = *(_DWORD *)(v9 + 4136) & 0xFF0000FF | (v15 << 8);
    *(_BYTE *)(v9 + 4096) = -127;
    *(_DWORD *)(v9 + 4136) = v13;
    result = 0LL;
    *(_DWORD *)(v9 + 4140) = v11;
  }
  else
  {
LABEL_2:
    LOBYTE(v8) = 36;
    LOBYTE(v5) = 6;
    NVMeSetSenseData(v6, v5, v6, v8);
    return 3238002694LL;
  }
  return result;
}
