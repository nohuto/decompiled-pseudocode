/*
 * XREFs of ProtocolCommandToNVMe @ 0x1C00124BC
 * Callers:
 *     NVMeHwBuildIo @ 0x1C0002F70 (NVMeHwBuildIo.c)
 * Callees:
 *     SetPrpFromSrb @ 0x1C0001854 (SetPrpFromSrb.c)
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     GetNamespaceId @ 0x1C0003844 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 *     GetControllerMaxTransferSize @ 0x1C0003AE0 (GetControllerMaxTransferSize.c)
 *     FillClippedSGL @ 0x1C000E004 (FillClippedSGL.c)
 *     NVMeValidateProtocolCommandRequest @ 0x1C0012158 (NVMeValidateProtocolCommandRequest.c)
 */

__int64 __fastcall ProtocolCommandToNVMe(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 SrbExtension; // r13
  __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  int NamespaceId; // r15d
  unsigned __int8 v12; // cl
  int v13; // ecx

  SrbExtension = GetSrbExtension(a2);
  v6 = 0LL;
  if ( *(_BYTE *)(v4 + 2) == 40 )
    v7 = *(_QWORD *)(v4 + 64);
  else
    v7 = *(_QWORD *)(v4 + 24);
  v8 = NVMeValidateProtocolCommandRequest((__int64)a1, v4);
  if ( v8 )
    goto LABEL_20;
  if ( *(_DWORD *)(v7 + 36) )
  {
    v9 = *(_DWORD *)(v7 + 52);
    goto LABEL_9;
  }
  if ( *(_DWORD *)(v7 + 32) )
  {
    v9 = *(_DWORD *)(v7 + 48);
LABEL_9:
    v6 = v7 + v9;
    if ( v6 )
    {
      if ( (a1[13] & 8) == 0 )
      {
        v10 = (((unsigned int)GetControllerMaxTransferSize(a1) - 1) >> 12) + 2;
        StorPortExtendedFunction(0LL, a1, 24 * v10 + 16);
        *(_DWORD *)(v7 + 16) = 7;
        v8 = -1056964607;
        *(_BYTE *)(a2 + 3) = 21;
        goto LABEL_20;
      }
      *(_DWORD *)(SrbExtension + 4216) = v9;
    }
  }
  if ( *(int *)(v7 + 12) >= 0 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v12 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v12 = *(_BYTE *)(a2 + 7);
    NamespaceId = GetNamespaceId((__int64)a1, v12);
  }
  else
  {
    NamespaceId = *(_DWORD *)(v7 + 84);
  }
  *(_BYTE *)(SrbExtension + 4253) = (v6 != 0 ? 2 : 0) | *(_BYTE *)(SrbExtension + 4253) & 0xFC | (*(_DWORD *)(v7 + 56) == 1);
  SrbAssignQueueId((__int64)a1, a2);
  *(_BYTE *)(SrbExtension + 4096) = *(_BYTE *)(v7 + 80);
  v13 = *(_DWORD *)(SrbExtension + 4096) ^ *(_DWORD *)(v7 + 80);
  *(_DWORD *)(SrbExtension + 4100) = NamespaceId;
  *(_DWORD *)(SrbExtension + 4096) ^= v13 & 0x300;
  *(_DWORD *)(SrbExtension + 4136) = *(_DWORD *)(v7 + 120);
  *(_DWORD *)(SrbExtension + 4140) = *(_DWORD *)(v7 + 124);
  *(_DWORD *)(SrbExtension + 4144) = *(_DWORD *)(v7 + 128);
  *(_DWORD *)(SrbExtension + 4148) = *(_DWORD *)(v7 + 132);
  *(_DWORD *)(SrbExtension + 4152) = *(_DWORD *)(v7 + 136);
  *(_DWORD *)(SrbExtension + 4156) = *(_DWORD *)(v7 + 140);
  *(_QWORD *)(SrbExtension + 4224) = ProtocolCommandCompletion;
LABEL_20:
  if ( !*(_BYTE *)(a2 + 3) )
  {
    v8 = SetPrpFromSrb((__int64)a1);
    if ( v8 )
    {
      *(_DWORD *)(v7 + 16) = 2;
      *(_BYTE *)(a2 + 3) = 4;
    }
    else
    {
      *(_DWORD *)(v7 + 16) = 0;
    }
  }
  return v8;
}
