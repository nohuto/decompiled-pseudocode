/*
 * XREFs of QueryProtocolInfoFeatureData @ 0x1C0012788
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x1C0001008 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     GetNamespaceId @ 0x1C0003DA4 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0003DCC (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0003F74 (NVMeAllocateDmaBuffer.c)
 */

__int64 __fastcall QueryProtocolInfoFeatureData(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  char v6; // dl
  __int64 v7; // r14
  _DWORD *v8; // rbp
  unsigned int v9; // eax
  unsigned int v10; // ebx
  int NamespaceId; // esi
  int v12; // eax
  unsigned __int8 v13; // cl
  __int64 result; // rax
  int v15; // ecx
  int v16; // edx

  SrbExtension = GetSrbExtension(a2);
  v6 = *(_BYTE *)(v5 + 2);
  v7 = SrbExtension;
  if ( v6 == 40 )
    v8 = *(_DWORD **)(a2 + 64);
  else
    v8 = *(_DWORD **)(a2 + 24);
  v9 = v8[11];
  if ( v9 >= 0x800
    || (_BYTE)v9
    && ((unsigned __int8)v9 <= 3u
     || (unsigned __int8)v9 > 4u
     && ((unsigned __int8)v9 <= 0xEu || (unsigned __int8)v9 == 16 || (unsigned int)(unsigned __int8)v9 - 128 <= 3))
    && v8[12] )
  {
    goto LABEL_48;
  }
  if ( (unsigned __int8)v9 > 0xDu )
  {
    switch ( (unsigned __int8)v9 )
    {
      case 0xEu:
        goto LABEL_30;
      case 0x10u:
      case 0x80u:
        goto LABEL_29;
      case 0x81u:
LABEL_30:
        v10 = 8;
        goto LABEL_31;
    }
    if ( (unsigned int)(unsigned __int8)v9 - 130 <= 1 )
    {
      v10 = 0;
      NamespaceId = 0;
      goto LABEL_33;
    }
    goto LABEL_21;
  }
  if ( (unsigned __int8)v9 == 13 )
  {
    v10 = 4096;
    goto LABEL_31;
  }
  if ( !(_BYTE)v9 )
    goto LABEL_21;
  if ( (unsigned __int8)v9 <= 2u )
  {
LABEL_29:
    v10 = 0;
    NamespaceId = -1;
    goto LABEL_33;
  }
  if ( (unsigned __int8)v9 <= 3u )
  {
LABEL_21:
    v10 = 4096;
    NamespaceId = 0;
    goto LABEL_32;
  }
  if ( (unsigned __int8)v9 <= 6u )
    goto LABEL_29;
  if ( (unsigned __int8)v9 == 7 )
  {
LABEL_48:
    *(_BYTE *)(a2 + 3) = 6;
    return 3238002694LL;
  }
  if ( (unsigned __int8)v9 <= 0xBu )
    goto LABEL_29;
  v10 = 256;
LABEL_31:
  NamespaceId = -1;
LABEL_32:
  if ( v8[13] < 0x28u )
  {
LABEL_47:
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
LABEL_33:
  if ( v8[14] < v10 )
    goto LABEL_47;
  if ( NamespaceId != -1 )
  {
    if ( v6 == 40 )
      v12 = *(_DWORD *)(a2 + 24);
    else
      v12 = *(_DWORD *)(a2 + 12);
    if ( (v12 & 1) != 0 )
    {
      NamespaceId = -1;
    }
    else
    {
      if ( v6 == 40 )
        v13 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v13 = *(_BYTE *)(a2 + 7);
      NamespaceId = GetNamespaceId(a1, v13);
    }
  }
  if ( v10 )
  {
    NVMeAllocateDmaBuffer(a1, v10);
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(v7 + 4253) = *(_BYTE *)(v7 + 4253) & 0xFD | (v10 != 0 ? 2 : 0) | 1;
    SrbAssignQueueId(a1, a2);
    v15 = v8[11];
    v16 = v8[12];
    *(_QWORD *)(v7 + 4120) = 0LL;
    *(_DWORD *)(v7 + 4136) = v15;
    *(_BYTE *)(v7 + 4096) = 10;
    *(_DWORD *)(v7 + 4100) = NamespaceId;
    *(_DWORD *)(v7 + 4140) = v16;
    LOBYTE(v15) = *(_BYTE *)(v7 + 4253) & 0xFB | (v10 != 0 ? 4 : 0);
    *(_QWORD *)(v7 + 4224) = QueryProtocolInfoCompletion;
    *(_BYTE *)(v7 + 4253) = v15;
    *(_QWORD *)(v7 + 4200) = 0LL;
    *(_QWORD *)(v7 + 4208) = 0LL;
    result = 0LL;
    *(_DWORD *)(v7 + 4240) = v10;
  }
  return result;
}
