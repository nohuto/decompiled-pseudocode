/*
 * XREFs of ScsiSanitizeRequest @ 0x1C0013278
 * Callers:
 *     ScsiToNVMe @ 0x1C0003070 (ScsiToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C0003844 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 *     NVMeSetSenseData @ 0x1C00189CC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiSanitizeRequest(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 SrbExtension; // r14
  __int64 v7; // rdx
  unsigned __int8 v8; // cl
  __int64 v9; // rbp
  char v10; // cl
  char v11; // cl
  unsigned __int8 v12; // r15
  int v13; // edi
  int NamespaceId; // eax
  __int16 v15; // dx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax

  SrbExtension = GetSrbExtension(a2);
  v7 = *(_QWORD *)(a1 + 1536);
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v4 = *(unsigned int *)(v5 + 52);
    v8 = *(_BYTE *)(v4 + v5 + 10);
  }
  else
  {
    v8 = *(_BYTE *)(v5 + 7);
  }
  v9 = v8;
  v10 = *(_BYTE *)(v3 + 1);
  if ( v10 < 0
    || (v11 = v10 & 0x1F, v3 = 1LL, (unsigned __int8)(v11 - 2) > 1u)
    || (*(_BYTE *)(v7 + 256) & 2) == 0
    || *(_DWORD *)(a1 + 180) > 1u && (*(_BYTE *)(v7 + 524) & 2) != 0
    || v11 == 3 && (*(_BYTE *)(v7 + 524) & 4) == 0 )
  {
    LOBYTE(v4) = 36;
    LOBYTE(v7) = 6;
    NVMeSetSenseData(v5, v7, v3, v4);
    return 3238002694LL;
  }
  else
  {
    v12 = *(_BYTE *)(*(_QWORD *)(a1 + 8 * v9 + 1648) + 64LL);
    if ( v11 == 3 )
      v13 = 2;
    else
      v13 = v11 == 2;
    *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 1;
    SrbAssignQueueId(a1, v5);
    NamespaceId = GetNamespaceId(a1, v9);
    v15 = *(_WORD *)(*(_QWORD *)(a1 + 8 * v9 + 1648) + 48LL);
    v16 = *(_QWORD *)(a1 + 1536);
    *(_BYTE *)(SrbExtension + 4096) = 0x80;
    if ( (*(_BYTE *)(v16 + 524) & 2) != 0 )
      NamespaceId = -1;
    *(_DWORD *)(SrbExtension + 4100) = NamespaceId;
    v17 = *(_DWORD *)(SrbExtension + 4136) ^ (*(_DWORD *)(SrbExtension + 4136) ^ v12) & 0xF;
    v18 = v17 | 0x10;
    v19 = v17 & 0xFFFFFFEF;
    if ( v15 )
      v18 = v19;
    *(_DWORD *)(SrbExtension + 4136) = (v13 << 9) | v18 & 0xFFFFF01F;
    return 0LL;
  }
}
