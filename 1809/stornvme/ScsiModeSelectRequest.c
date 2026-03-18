/*
 * XREFs of ScsiModeSelectRequest @ 0x1C0013D6C
 * Callers:
 *     ScsiToNVMe @ 0x1C0004140 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiModeSelectRequest(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v5; // rdx
  __int64 v6; // r11
  char v7; // bl
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  int v11; // eax
  unsigned int v12; // eax
  unsigned __int8 *v13; // rsi
  __int64 v14; // rcx
  __int64 SrbExtension; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // rbx
  bool v20; // di
  unsigned int v21; // eax
  int v22; // eax
  unsigned __int16 v23; // [rsp+58h] [rbp+10h]

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(unsigned __int8 **)(a2 + 64);
    v6 = 60LL;
  }
  else
  {
    v5 = *(unsigned __int8 **)(a2 + 24);
    v6 = 16LL;
  }
  v7 = *(_BYTE *)a3;
  v8 = 4;
  if ( *(_BYTE *)a3 != 21 )
    v8 = 8;
  if ( (*(_BYTE *)(a3 + 1) & 0x10) == 0 )
    goto LABEL_10;
  if ( !v5 )
  {
    v9 = -1056964605;
LABEL_11:
    NVMeSetSenseData(a2, 6, a3, 36);
    return v9;
  }
  a3 = *(unsigned int *)(a2 + v6);
  if ( (unsigned int)a3 < v8 )
  {
LABEL_10:
    v9 = -1056964601;
    goto LABEL_11;
  }
  if ( v7 == 21 )
  {
    v11 = v5[3];
  }
  else
  {
    HIBYTE(v23) = v5[6];
    LOBYTE(v23) = v5[7];
    v11 = v23;
  }
  v12 = v8 + v11;
  v13 = &v5[v12];
  if ( (v12 < (unsigned int)a3 ? (unsigned int)a3 - v12 : 0) < 0xC || (*v13 & 0x3F) != 8 || v13[1] != 10 )
  {
    v14 = a2;
    goto LABEL_27;
  }
  v14 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1528) + 525LL) & 1) == 0 )
  {
LABEL_27:
    NVMeSetSenseData(v14, 6, a3, 36);
    return 3238002694LL;
  }
  SrbExtension = GetSrbExtension(a2);
  v19 = SrbExtension;
  v20 = 0;
  if ( *(_WORD *)(v17 + 146) > 1u || *(_BYTE *)(v17 + 145) )
    v20 = (*(_BYTE *)(v16 + 520) & 0x10) != 0;
  *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
  SrbAssignQueueId(v17, v18);
  if ( v20 )
  {
    *(_BYTE *)(v19 + 4136) = 6;
    v21 = *(_DWORD *)(v19 + 4136) & 0xFFFFFBFF;
    *(_BYTE *)(v19 + 4096) = 10;
    *(_DWORD *)(v19 + 4136) = v21 | 0x300;
    *(_QWORD *)(v19 + 4224) = NVMeSetFeaturesCachePhase1Completion;
    *(_QWORD *)(v19 + 4232) = v13;
  }
  else
  {
    v22 = (*(_DWORD *)(v19 + 4140) ^ (v13[2] >> 2)) & 1;
    *(_BYTE *)(v19 + 4096) = 9;
    *(_DWORD *)(v19 + 4140) ^= v22;
    *(_BYTE *)(v19 + 4136) = 6;
  }
  return 0LL;
}
