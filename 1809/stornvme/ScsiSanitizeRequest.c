/*
 * XREFs of ScsiSanitizeRequest @ 0x1C0014018
 * Callers:
 *     ScsiToNVMe @ 0x1C0004140 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     GetNamespaceId @ 0x1C0005144 (GetNamespaceId.c)
 *     NVMeSetSenseData @ 0x1C000A840 (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiSanitizeRequest(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 SrbExtension; // r14
  __int64 v6; // rdx
  unsigned __int8 v7; // cl
  __int64 v8; // rbp
  char v9; // cl
  char v10; // cl
  unsigned __int8 v11; // r15
  int v12; // edi
  int NamespaceId; // eax
  __int16 v14; // dx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax

  SrbExtension = GetSrbExtension(a2);
  v6 = *(_QWORD *)(a1 + 1528);
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v7 = *(_BYTE *)(*(unsigned int *)(v4 + 52) + v4 + 10);
  else
    v7 = *(_BYTE *)(v4 + 7);
  v8 = v7;
  v9 = *(_BYTE *)(v3 + 1);
  if ( v9 < 0
    || (v10 = v9 & 0x1F, v3 = 1LL, (unsigned __int8)(v10 - 2) > 1u)
    || (*(_BYTE *)(v6 + 256) & 2) == 0
    || *(_DWORD *)(a1 + 172) > 1u && (*(_BYTE *)(v6 + 524) & 2) != 0
    || v10 == 3 && (*(_BYTE *)(v6 + 524) & 4) == 0 )
  {
    NVMeSetSenseData(v4, 6, v3, 36);
    return 3238002694LL;
  }
  else
  {
    v11 = *(_BYTE *)(*(_QWORD *)(a1 + 8 * v8 + 1640) + 64LL);
    if ( v10 == 3 )
      v12 = 2;
    else
      v12 = v10 == 2;
    *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, v4);
    NamespaceId = GetNamespaceId(a1, v8);
    v14 = *(_WORD *)(*(_QWORD *)(a1 + 8 * v8 + 1640) + 48LL);
    v15 = *(_QWORD *)(a1 + 1528);
    *(_BYTE *)(SrbExtension + 4096) = 0x80;
    if ( (*(_BYTE *)(v15 + 524) & 2) != 0 )
      NamespaceId = -1;
    *(_DWORD *)(SrbExtension + 4100) = NamespaceId;
    v16 = *(_DWORD *)(SrbExtension + 4136) ^ (*(_DWORD *)(SrbExtension + 4136) ^ v11) & 0xF;
    v17 = v16 | 0x10;
    v18 = v16 & 0xFFFFFFEF;
    if ( v14 )
      v17 = v18;
    *(_DWORD *)(SrbExtension + 4136) = (v12 << 9) | v17 & 0xFFFFF01F;
    return 0LL;
  }
}
