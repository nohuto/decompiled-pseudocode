/*
 * XREFs of RtlpCoalesceHeap @ 0x18008C1D4
 * Callers:
 *     RtlpExtendHeap @ 0x18001CBEC (RtlpExtendHeap.c)
 *     RtlCompactHeap @ 0x18008C0A0 (RtlCompactHeap.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x1800141C0 (RtlpHeapRemoveListEntry.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001B82C (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18001C380 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x180060934 (RtlpCommitBlock.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpCoalesceHeap(_QWORD *BaseAddress)
{
  __int64 *v1; // r14
  unsigned __int64 v2; // rbp
  __int64 *v3; // rsi
  __int64 v5; // rdi
  __int64 *v6; // r13
  int v7; // edx
  bool v8; // zf
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // r8d
  __int64 *v15; // r12
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 i; // rax
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v1 = BaseAddress + 42;
  v2 = 0LL;
  v3 = (__int64 *)BaseAddress[43];
  if ( BaseAddress + 42 == v3 )
    return v2;
  do
  {
    v5 = (__int64)(v3 - 2);
    v6 = v3;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v7 = *(_DWORD *)(v5 + 8) ^ *((_DWORD *)BaseAddress + 34);
      *(_DWORD *)(v5 + 8) = v7;
      if ( HIBYTE(v7) != ((unsigned __int8)v7 ^ (unsigned __int8)(BYTE1(v7) ^ BYTE2(v7))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v3 - 2);
    }
    v8 = (*(_BYTE *)(v5 + 10) & 8) == 0;
    v9 = *(unsigned __int16 *)(v5 + 8);
    v3 = (__int64 *)*v3;
    v22 = v9;
    if ( !v8 )
    {
      v15 = *(__int64 **)(v5 + 24);
      v16 = v3[1];
      v17 = *v15;
      if ( *v15 != v16 || (__int64 *)v17 != v6 )
      {
        RtlpLogHeapFailure(13, (_DWORD)BaseAddress, (_DWORD)v6, v16, v17, 0LL);
        goto LABEL_31;
      }
      BaseAddress[24] -= v9;
      v18 = BaseAddress[39];
      if ( v18 )
      {
        for ( i = *(unsigned int *)(v18 + 8); ; i = *(unsigned int *)(v20 + 8) )
        {
          if ( *(unsigned __int16 *)(v5 + 8) < i )
          {
            v21 = *(unsigned __int16 *)(v5 + 8);
            goto LABEL_26;
          }
          v20 = *(_QWORD *)v18;
          if ( !*(_QWORD *)v18 )
            break;
          v18 = *(_QWORD *)v18;
        }
        v21 = *(_DWORD *)(v18 + 8) - 1;
LABEL_26:
        RtlpHeapRemoveListEntry((__int64)BaseAddress, v18, 1, v6, v21, *(unsigned __int16 *)(v5 + 8));
      }
      *v15 = (__int64)v3;
      v3[1] = (__int64)v15;
      if ( (*(_BYTE *)(v5 + 10) & 8) != 0 )
        RtlpCommitBlock((char *)BaseAddress, v5);
      v11 = *(unsigned __int16 *)(v5 + 8);
      v12 = v5;
LABEL_30:
      RtlpDeCommitFreeBlock(BaseAddress, v12, v11, 1);
LABEL_31:
      v3 = (__int64 *)v1[1];
      continue;
    }
    v10 = RtlpCoalesceFreeBlocks(BaseAddress, v5, &v22, 1);
    v11 = v22;
    v12 = v10;
    if ( v22 != v9 )
    {
      if ( v10 != v5 && (*(_WORD *)(v10 + 8) < 0x100u || *((_WORD *)BaseAddress + 70) != *(_WORD *)(v10 + 12)) )
      {
        RtlpInsertFreeBlock((unsigned __int64)BaseAddress, v10, v22);
        goto LABEL_31;
      }
      goto LABEL_30;
    }
    if ( !v2 || *(_WORD *)(v2 + 8) < *(_WORD *)(v10 + 8) )
      v2 = v10;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
      *(_DWORD *)(v10 + 8) ^= *((_DWORD *)BaseAddress + 34);
    }
  }
  while ( v1 != v3 );
  if ( v2 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v13 = *(_DWORD *)(v2 + 8) ^ *((_DWORD *)BaseAddress + 34);
      *(_DWORD *)(v2 + 8) = v13;
      if ( HIBYTE(v13) != ((unsigned __int8)v13 ^ (unsigned __int8)(BYTE1(v13) ^ BYTE2(v13))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v2);
    }
  }
  return v2;
}
