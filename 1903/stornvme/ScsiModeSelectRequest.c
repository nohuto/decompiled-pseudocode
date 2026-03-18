/*
 * XREFs of ScsiModeSelectRequest @ 0x1C0012FD4
 * Callers:
 *     ScsiToNVMe @ 0x1C0003070 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C00189CC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiModeSelectRequest(__int64 a1, __int64 a2, char *a3)
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
  bool v19; // di
  __int64 v20; // rbx
  unsigned int v21; // eax
  int v22; // eax
  unsigned __int16 v23; // [rsp+48h] [rbp+10h]

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
  v7 = *a3;
  v8 = 4;
  if ( *a3 != 21 )
    v8 = 8;
  if ( (a3[1] & 0x10) == 0 )
    goto LABEL_10;
  if ( !v5 )
  {
    v9 = -1056964605;
LABEL_11:
    LOBYTE(a1) = 36;
    LOBYTE(v5) = 6;
    NVMeSetSenseData(a2, v5, a3, a1);
    return v9;
  }
  a3 = (char *)*(unsigned int *)(a2 + v6);
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
  v5 = *(unsigned __int8 **)(a1 + 1536);
  v14 = a2;
  if ( (v5[525] & 1) == 0 )
  {
LABEL_27:
    LOBYTE(a1) = 36;
    LOBYTE(v5) = 6;
    NVMeSetSenseData(v14, v5, a3, a1);
    return 3238002694LL;
  }
  SrbExtension = GetSrbExtension(a2);
  v19 = 0;
  v20 = SrbExtension;
  if ( *(_WORD *)(v17 + 154) > 1u || *(_BYTE *)(v17 + 153) )
    v19 = (*(_BYTE *)(v16 + 520) & 0x10) != 0;
  *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
  SrbAssignQueueId(v17, v18);
  if ( v19 )
  {
    *(_BYTE *)(v20 + 4136) = 6;
    v21 = *(_DWORD *)(v20 + 4136) & 0xFFFFFBFF;
    *(_BYTE *)(v20 + 4096) = 10;
    *(_DWORD *)(v20 + 4136) = v21 | 0x300;
    *(_QWORD *)(v20 + 4224) = NVMeSetFeaturesCachePhase1Completion;
    *(_QWORD *)(v20 + 4232) = v13;
  }
  else
  {
    v22 = (*(_DWORD *)(v20 + 4140) ^ (v13[2] >> 2)) & 1;
    *(_BYTE *)(v20 + 4096) = 9;
    *(_DWORD *)(v20 + 4140) ^= v22;
    *(_BYTE *)(v20 + 4136) = 6;
  }
  return 0LL;
}
