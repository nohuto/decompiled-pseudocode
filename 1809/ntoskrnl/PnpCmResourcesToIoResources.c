/*
 * XREFs of PnpCmResourcesToIoResources @ 0x1407310C4
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140180BB8 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopQueryDeviceResources @ 0x1406FC794 (IopQueryDeviceResources.c)
 *     IopAllocateBootResourcesInternal @ 0x14072F7B0 (IopAllocateBootResourcesInternal.c)
 *     PnpFilterResourceRequirementsList @ 0x140740D10 (PnpFilterResourceRequirementsList.c)
 *     IoReportResourceUsageInternal @ 0x1408276B8 (IoReportResourceUsageInternal.c)
 *     PnpRestoreResourcesInternal @ 0x14083C784 (PnpRestoreResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x1408432B4 (IopQueryConflictListInternal.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x140139500 (RtlCmDecodeMemIoResource.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

char *__fastcall PnpCmResourcesToIoResources(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r9d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v4; // r14
  ULONG LowPart; // r13d
  int v8; // ebx
  _DWORD *v9; // rcx
  __int64 v10; // r10
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rdi
  char *PoolWithTag; // rax
  char *v17; // rsi
  char *v18; // rbx
  int v19; // ebp
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v20; // rdi
  ULONG v21; // r15d
  LONG HighPart; // eax
  char *result; // rax
  ULONGLONG v24; // rax
  unsigned __int64 v25; // rcx
  KAFFINITY Affinity; // rax
  int v27; // eax
  int MessageCount; // eax
  unsigned __int64 Start; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(a2 + 1);
  LowPart = 0;
  v8 = 0;
  v9 = a2 + 1;
  if ( !*a2 )
    return 0LL;
  v10 = v3;
  do
  {
    v11 = v9[3];
    v9 += 4;
    v8 += v11;
    if ( v11 )
    {
      v12 = v11;
      do
      {
        v13 = 0LL;
        if ( *(_BYTE *)v9 == 5 )
        {
          v13 = (unsigned int)v9[1];
          --v8;
        }
        v9 = (_DWORD *)((char *)v9 + v13 + 20);
        --v12;
      }
      while ( v12 );
    }
    --v10;
  }
  while ( v10 );
  if ( !v8 )
    return 0LL;
  v14 = v3 + v8;
  v15 = 32LL * v14;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v15 + 72, 0x75737050u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, v15 + 72);
  *((_DWORD *)v17 + 1) = *(_DWORD *)&v4->Type;
  *((_DWORD *)v17 + 2) = a2[2];
  *(_QWORD *)(v17 + 12) = 0LL;
  *(_QWORD *)(v17 + 20) = 0LL;
  *((_DWORD *)v17 + 7) = 1;
  *((_DWORD *)v17 + 9) = v14;
  v18 = v17 + 72;
  *((_DWORD *)v17 + 8) = 65537;
  *((_DWORD *)v17 + 12) = a3;
  v19 = 0;
  *((_WORD *)v17 + 20) = -32767;
  *(_DWORD *)(v17 + 42) = 3;
  *((_WORD *)v17 + 23) = 0;
  if ( *a2 )
  {
    while ( 1 )
    {
      if ( v19 )
      {
        *(_DWORD *)(v18 + 2) = 0;
        *(_WORD *)v18 = -4095;
        *((_WORD *)v18 + 3) = 0;
        v27 = *(_DWORD *)&v4->Type;
        if ( *(_DWORD *)&v4->Type == -1 )
          v27 = 1;
        *((_DWORD *)v18 + 2) = v27;
        *(_QWORD *)(v18 + 12) = v4->u.Generic.Start.LowPart;
        v18 += 32;
      }
      v20 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v4->u.Memory48 + 1);
      v21 = 0;
      if ( v4->u.Generic.Length )
        break;
LABEL_21:
      v4 = v20;
      if ( (unsigned int)++v19 >= *a2 )
        goto LABEL_22;
    }
    while ( 1 )
    {
      *v18 = 1;
      v18[1] = v20->Type;
      v18[2] = v20->ShareDisposition;
      *((_WORD *)v18 + 2) = v20->Flags;
      v18[3] = 0;
      *((_WORD *)v18 + 3) = 0;
      switch ( v20->Type )
      {
        case 1u:
          goto LABEL_24;
        case 2u:
          if ( (v20->Flags & 2) != 0 )
          {
            *((_DWORD *)v18 + 3) = -2;
            MessageCount = v20->u.MessageInterrupt.Raw.MessageCount;
            *((_DWORD *)v18 + 5) = 0;
            *((_DWORD *)v18 + 2) = ~MessageCount;
            *((_WORD *)v18 + 8) = 4;
            *((_WORD *)v18 + 9) = v20->u.MessageInterrupt.Raw.Reserved;
            Affinity = v20->u.Interrupt.Affinity;
            goto LABEL_25;
          }
          HighPart = v20->u.Generic.Start.HighPart;
          *((_DWORD *)v18 + 3) = HighPart;
          break;
        case 3u:
          goto LABEL_24;
        case 4u:
          if ( SLOBYTE(v20->Flags) < 0 )
          {
            *((_DWORD *)v18 + 2) = v20->u.Generic.Start.HighPart;
            *((_DWORD *)v18 + 3) = v20->u.Generic.Start.HighPart;
            *((_DWORD *)v18 + 4) = v20->u.Generic.Start.LowPart;
            *((_DWORD *)v18 + 5) = v20->u.DmaV3.TransferWidth;
          }
          else
          {
            *((_DWORD *)v18 + 2) = v20->u.Generic.Start.LowPart;
            *((_DWORD *)v18 + 3) = v20->u.Generic.Start.LowPart;
          }
          goto LABEL_19;
        case 5u:
          LowPart = v20->u.Generic.Start.LowPart;
          goto LABEL_20;
        case 6u:
          *((_DWORD *)v18 + 3) = v20->u.Generic.Start.LowPart;
          *((_DWORD *)v18 + 4) = v20->u.Generic.Start.HighPart - 1 + v20->u.Generic.Start.LowPart;
          HighPart = v20->u.Generic.Start.HighPart;
          break;
        case 7u:
LABEL_24:
          v24 = RtlCmDecodeMemIoResource(v20, &Start);
          *((_DWORD *)v18 + 2) = v20->u.Generic.Length;
          v25 = Start;
          *((_QWORD *)v18 + 2) = Start;
          Affinity = v25 + v24 - 1;
          *((_DWORD *)v18 + 3) = 1;
LABEL_25:
          *((_QWORD *)v18 + 3) = Affinity;
          goto LABEL_19;
        default:
          *((_DWORD *)v18 + 2) = v20->u.Generic.Start.LowPart;
          *((_DWORD *)v18 + 3) = v20->u.Generic.Start.HighPart;
          *((_DWORD *)v18 + 4) = v20->u.Generic.Length;
          goto LABEL_19;
      }
      *((_DWORD *)v18 + 2) = HighPart;
LABEL_19:
      v18 += 32;
LABEL_20:
      v20 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)v20 + LowPart + 20);
      ++v21;
      LowPart = 0;
      if ( v21 >= v4->u.Generic.Length )
        goto LABEL_21;
    }
  }
LABEL_22:
  result = v17;
  *(_DWORD *)v17 = (_DWORD)v18 - (_DWORD)v17;
  return result;
}
