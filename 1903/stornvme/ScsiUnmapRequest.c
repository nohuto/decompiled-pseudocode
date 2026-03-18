/*
 * XREFs of ScsiUnmapRequest @ 0x1C0001A10
 * Callers:
 *     ScsiToNVMe @ 0x1C0003070 (ScsiToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C0003844 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 *     IsDeallocateSupported @ 0x1C0003AB8 (IsDeallocateSupported.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     NVMeSetSenseData @ 0x1C00189CC (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiUnmapRequest(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rbp
  unsigned __int16 v10; // si
  _BYTE *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 v16; // cl
  int NamespaceId; // eax
  __int64 PhysicalAddress; // rax
  unsigned int v20; // edi
  unsigned __int16 v21; // [rsp+58h] [rbp+10h] BYREF

  SrbExtension = GetSrbExtension(a2);
  if ( !(unsigned __int8)IsDeallocateSupported(a1) || (*(_BYTE *)(v8 + 1) & 1) != 0 )
  {
    LOBYTE(v7) = 36;
    LOBYTE(v5) = 6;
    NVMeSetSenseData(a2, v5, v6, v7);
    return 3238002694LL;
  }
  if ( *(_DWORD *)(v7 + a2) < 0x18u )
  {
    v20 = -1056964604;
LABEL_14:
    LOBYTE(v7) = 36;
    LOBYTE(v5) = 21;
    NVMeSetSenseData(a2, v5, v6, v7);
    return v20;
  }
  v9 = v6 + 8;
  HIBYTE(v21) = *(_BYTE *)(v6 + 2);
  LOBYTE(v21) = *(_BYTE *)(v6 + 3);
  v10 = v21 >> 4;
  if ( (unsigned __int16)(v21 >> 4) > 0x100u )
  {
    v20 = -1056964602;
    goto LABEL_14;
  }
  memset((void *)SrbExtension, 0, 0x1000uLL);
  if ( v10 )
  {
    v11 = (_BYTE *)(SrbExtension + 14);
    v12 = v10;
    v13 = v9 - SrbExtension;
    do
    {
      v11[1] = v11[v13 - 14];
      *v11 = v11[v13 - 13];
      *(v11 - 1) = v11[v13 - 12];
      *(v11 - 2) = v11[v13 - 11];
      *(v11 - 3) = v11[v13 - 10];
      *(v11 - 4) = v11[v13 - 9];
      *(v11 - 5) = v11[v13 - 8];
      *(v11 - 6) = v11[v13 - 7];
      *(v11 - 7) = v11[v13 - 6];
      *(v11 - 8) = v11[v13 - 5];
      *(v11 - 9) = v11[v13 - 4];
      *(v11 - 10) = v11[v13 - 3];
      v11 += 16;
      --v12;
    }
    while ( v12 );
  }
  *(_BYTE *)(SrbExtension + 4253) = *(_BYTE *)(SrbExtension + 4253) & 0xFC | 2;
  SrbAssignQueueId(a1, a2);
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v16 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v16 = *(_BYTE *)(a2 + 7);
  NamespaceId = GetNamespaceId(a1, v16, v14, v15);
  *(_DWORD *)(SrbExtension + 4140) |= 4u;
  *(_BYTE *)(SrbExtension + 4096) = 9;
  *(_BYTE *)(SrbExtension + 4136) = v10 - 1;
  *(_DWORD *)(SrbExtension + 4100) = NamespaceId;
  PhysicalAddress = StorPortGetPhysicalAddress(a1, a2, SrbExtension, &v21);
  *(_BYTE *)(SrbExtension + 4253) |= 4u;
  *(_QWORD *)(SrbExtension + 4120) = PhysicalAddress;
  return 0LL;
}
