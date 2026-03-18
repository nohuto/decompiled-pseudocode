/*
 * XREFs of QueryProtocolInfoLogPageData @ 0x1C0001094
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x1C0001008 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001D18 (BuildGetLogPageCommand.c)
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     GetNamespaceId @ 0x1C0003844 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00039B0 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0003A14 (NVMeAllocateDmaBuffer.c)
 *     memmove @ 0x1C00050C0 (memmove.c)
 */

__int64 __fastcall QueryProtocolInfoLogPageData(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 SrbExtension; // rax
  __int64 v6; // rdx
  char v7; // dl
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  _DWORD *v11; // r14
  unsigned int v12; // ecx
  char v13; // r8
  int NamespaceId; // ebp
  unsigned int v15; // edi
  int v16; // eax
  unsigned __int8 v17; // cl
  int v18; // r8d
  const void *v20; // rdx
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF
  __int64 v22; // [rsp+88h] [rbp+10h] BYREF
  __int64 v23; // [rsp+90h] [rbp+18h]

  v3 = 0;
  v21 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v7 = *(_BYTE *)(v6 + 2);
  v8 = SrbExtension;
  v9 = *(_QWORD *)(a1 + 1536);
  v23 = v9;
  v10 = 0LL;
  v22 = 0LL;
  if ( v7 == 40 )
    v11 = *(_DWORD **)(a2 + 64);
  else
    v11 = *(_DWORD **)(a2 + 24);
  v12 = v11[11];
  v13 = 6;
  if ( v12 > 6 )
  {
    if ( v12 != 7 )
    {
      if ( v12 == 9 )
      {
        NamespaceId = -1;
        goto LABEL_7;
      }
      v15 = 64;
      if ( v12 == 128 )
      {
LABEL_35:
        NamespaceId = 0;
        goto LABEL_8;
      }
      if ( v12 != 192 )
      {
LABEL_34:
        v15 = v11[14];
        goto LABEL_35;
      }
    }
LABEL_37:
    v15 = v11[14];
    goto LABEL_38;
  }
  if ( v12 == 6 )
  {
    v15 = 564;
    goto LABEL_38;
  }
  if ( v12 != 2 )
  {
    if ( v12 != 1 )
    {
      if ( v12 == 3 )
      {
        v15 = 512;
        goto LABEL_38;
      }
      if ( v12 - 4 <= 1 )
      {
        v15 = 4096;
LABEL_38:
        NamespaceId = -1;
        goto LABEL_8;
      }
      goto LABEL_34;
    }
    goto LABEL_37;
  }
  NamespaceId = -((*(_BYTE *)(v9 + 261) & 1) == 0);
LABEL_7:
  v15 = 512;
LABEL_8:
  if ( v11[14] >= v15 && v15 )
  {
    if ( v12 == 5 )
    {
      v20 = *(const void **)(a1 + 3688);
      if ( v20 )
      {
        memmove((char *)v11 + (unsigned int)v11[13] + 36, v20, v15);
        v13 = 1;
      }
      else
      {
        v3 = -1056964602;
      }
      *(_BYTE *)(a2 + 3) = v13;
      return v3;
    }
    if ( NamespaceId != -1 )
    {
      if ( v7 == 40 )
        v16 = *(_DWORD *)(a2 + 24);
      else
        v16 = *(_DWORD *)(a2 + 12);
      if ( (v16 & 1) != 0 )
      {
        NamespaceId = -1;
      }
      else
      {
        if ( v7 == 40 )
          v17 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
        else
          v17 = *(_BYTE *)(a2 + 7);
        NamespaceId = GetNamespaceId(a1, v17, 6LL, 0xFFFFFFFFLL);
      }
    }
    NVMeAllocateDmaBuffer(a1, v15, &v21, &v22);
    if ( v21 )
    {
      NVMeZeroMemory(v21, v15);
      *(_BYTE *)(v8 + 4253) |= 3u;
      SrbAssignQueueId(a1, a2);
      if ( (*(_BYTE *)(v23 + 261) & 4) != 0 )
        v10 = (unsigned int)v11[12] | ((unsigned __int64)(unsigned int)v11[16] << 32);
      LOBYTE(v18) = *((_BYTE *)v11 + 44);
      BuildGetLogPageCommand(a1, v8, v18, v15, v22, NamespaceId, v10, v11[17]);
      *(_BYTE *)(v8 + 4253) |= 4u;
      *(_QWORD *)(v8 + 4224) = QueryProtocolInfoCompletion;
      *(_QWORD *)(v8 + 4200) = v21;
      *(_QWORD *)(v8 + 4208) = v22;
      *(_DWORD *)(v8 + 4240) = v15;
      return v3;
    }
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return 3238002694LL;
  }
}
