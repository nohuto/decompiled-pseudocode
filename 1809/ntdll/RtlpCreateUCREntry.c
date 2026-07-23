/*
 * XREFs of RtlpCreateUCREntry @ 0x18001D2C4
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x18001CED8 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x1800617A8 (RtlpInitializeHeapSegment.c)
 * Callees:
 *     RtlpFindUCREntry @ 0x18001D4F8 (RtlpFindUCREntry.c)
 *     RtlpHeapAddListEntry @ 0x18002070C (RtlpHeapAddListEntry.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlpHeapHandleError @ 0x180103D1C (RtlpHeapHandleError.c)
 */

__int64 *__fastcall RtlpCreateUCREntry(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 *a6)
{
  unsigned __int64 v6; // rbx
  __int64 v9; // rdx
  char v11; // bp
  bool v12; // cc
  bool v13; // zf
  __int64 v14; // rdx
  __int64 UCREntry; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rdx
  unsigned __int8 v18; // al
  unsigned __int64 v19; // rcx
  _QWORD *v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // r9
  unsigned __int64 v24; // rax
  __int64 *result; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 *v28; // rax

  a3[5] = a4;
  a3[4] = (__int64)(a3 + 6);
  v6 = (unsigned __int64)(a3 - 2);
  *(_DWORD *)(v6 + 8) = 65540;
  *(_BYTE *)(v6 + 15) = 3;
  v9 = *(_QWORD *)(a2 + 40);
  if ( v9 == a2 )
  {
    v11 = 0;
  }
  else
  {
    v11 = ((unsigned int)(v6 - a2) >> 16) + 1;
    if ( ((v6 - a2) >> 16) + 1 >= 0xFE )
      RtlpLogHeapFailure(3, v9, (_DWORD)a3 - 16, a2, 0LL, 0LL);
  }
  v12 = RtlpHeapErrorHandlerThreshold < 1;
  *(_BYTE *)(v6 + 14) = v11;
  if ( v12 )
    goto LABEL_4;
  v13 = a5 == v6;
  if ( a5 > v6 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("((PHEAP_ENTRY)LastKnownEntry <= Entry)");
    RtlpHeapHandleError(1LL);
LABEL_4:
    v13 = a5 == v6;
  }
  if ( !v13 )
    *(_WORD *)(v6 + 12) = *(_WORD *)(a1 + 140);
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(v6 + 11) = *(_BYTE *)(v6 + 8) ^ *(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10);
    *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  v14 = a3[5];
  if ( v14 )
  {
    UCREntry = RtlpFindUCREntry(a1, v14);
    v16 = *(__int64 **)(UCREntry + 8);
    if ( *v16 == UCREntry )
    {
      *a3 = UCREntry;
      a3[1] = (__int64)v16;
      *v16 = (__int64)a3;
      *(_QWORD *)(UCREntry + 8) = a3;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, UCREntry, 0, *v16, 0LL);
    }
    v17 = *(__int64 **)(a1 + 320);
    if ( v17 )
    {
      v26 = *((unsigned int *)v17 + 2);
      v27 = (unsigned __int64)a3[5] >> 12;
      while ( v27 >= v26 )
      {
        v28 = (__int64 *)*v17;
        if ( !*v17 )
        {
          LODWORD(v27) = *((_DWORD *)v17 + 2) - 1;
          break;
        }
        v17 = (__int64 *)*v17;
        v26 = *((unsigned int *)v28 + 2);
      }
      RtlpHeapAddListEntry(a1, (_DWORD)v17, 0, (_DWORD)a3, v27, a3[5]);
    }
  }
  v18 = *(_BYTE *)(v6 + 14);
  if ( v18 )
    v19 = (v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v18 << 16) + 0x10000;
  else
    v19 = a1;
  v20 = (_QWORD *)(v19 + 96);
  v21 = *(_QWORD *)(v19 + 96);
  v22 = a3 + 2;
  v23 = *(_QWORD **)(v21 + 8);
  if ( v23 == v20 )
  {
    *v22 = v21;
    a3[3] = (__int64)v20;
    *(_QWORD *)(v21 + 8) = v22;
    *v20 = v22;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, (_DWORD)v20, (_DWORD)v23, 0LL, 0LL);
  }
  ++*(_DWORD *)(a2 + 84);
  *(_DWORD *)(a2 + 80) += (unsigned __int64)a3[5] >> 12;
  *(_QWORD *)(a1 + 576) -= a3[5];
  if ( ++*(_DWORD *)(a1 + 604) > 0xAu
    && !*(_QWORD *)(a1 + 320)
    && (*(_DWORD *)(a1 + 112) & 3) == 2
    && (RtlpDisableHeapLookaside & 1) == 0 )
  {
    *(_DWORD *)(a1 + 120) |= 0x10000000u;
  }
  v24 = a3[5];
  if ( v24 >= 0xFF000 )
    *(_QWORD *)(a1 + 584) += v24;
  result = a6;
  *a6 = (__int64)(v6 - a5) >> 4;
  return result;
}
