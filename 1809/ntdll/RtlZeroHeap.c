/*
 * XREFs of RtlZeroHeap @ 0x1800F5670
 * Callers:
 *     RtlDebugZeroHeap @ 0x180108CB4 (RtlDebugZeroHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlpHeapRemoveListEntry @ 0x1800141C0 (RtlpHeapRemoveListEntry.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpDeCommitFreeBlock @ 0x18001BD18 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindEntry @ 0x18001D898 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x18002070C (RtlpHeapAddListEntry.c)
 *     RtlpCommitBlock @ 0x180060934 (RtlpCommitBlock.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x180103934 (RtlpAnalyzeHeapFailure.c)
 *     RtlDebugZeroHeap @ 0x180108CB4 (RtlDebugZeroHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

NTSTATUS __cdecl RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v3; // r14
  ULONG v5; // edx
  char *v6; // rax
  char *v7; // r13
  unsigned __int64 v8; // r15
  int v9; // edx
  unsigned __int8 v10; // cl
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  __int64 *v13; // r12
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned __int64 v20; // r12
  __int64 **v21; // r14
  __int64 *Entry; // r8
  int v23; // ecx
  int v24; // eax
  __int64 **v25; // r14
  __int64 *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // rdx
  _DWORD *v32; // r8
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  char v35; // [rsp+30h] [rbp-98h]
  unsigned __int64 v36; // [rsp+40h] [rbp-88h]
  unsigned __int64 v37; // [rsp+60h] [rbp-68h]

  v3 = 0LL;
  v35 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  v5 = *((_DWORD *)HeapHandle + 29) | Flags;
  if ( (v5 & 0x61000000) != 0 && (v5 & 0x10000000) == 0 )
    return RtlDebugZeroHeap(HeapHandle);
  if ( (v5 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
    v35 = 1;
  }
  v6 = (char *)HeapHandle + 288;
  v7 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_8:
  if ( v7 != v6 )
  {
    v8 = *((_QWORD *)v7 + 5);
    v36 = v8;
    while ( 1 )
    {
      if ( v8 >= *((_QWORD *)v7 + 6) )
      {
        v7 = *(char **)v7;
        v6 = (char *)HeapHandle + 288;
        goto LABEL_8;
      }
      if ( !v3 )
        goto LABEL_14;
      if ( *((_DWORD *)HeapHandle + 31) )
        break;
LABEL_17:
      v3 = (_BYTE *)v8;
      v10 = *(_BYTE *)(v8 + 10);
      if ( (v10 & 1) != 0 )
        goto LABEL_72;
      v11 = v8;
      v37 = v8;
      if ( (v10 & 8) != 0 )
      {
        v12 = *(_QWORD *)(v8 + 16);
        v13 = *(__int64 **)(v8 + 24);
        v14 = *v13;
        v15 = *(_QWORD *)(v12 + 8);
        if ( *v13 == v15 && v14 == v8 + 16 )
        {
          *((_QWORD *)HeapHandle + 24) -= *(unsigned __int16 *)(v8 + 8);
          v16 = *((_QWORD *)HeapHandle + 39);
          if ( v16 )
          {
            v17 = *(unsigned __int16 *)(v8 + 8);
            while ( 1 )
            {
              v18 = *(unsigned int *)(v16 + 8);
              if ( v17 < v18 )
              {
                v19 = *(unsigned __int16 *)(v8 + 8);
                goto LABEL_27;
              }
              if ( !*(_QWORD *)v16 )
                break;
              v16 = *(_QWORD *)v16;
            }
            v19 = v18 - 1;
LABEL_27:
            RtlpHeapRemoveListEntry((__int64)HeapHandle, v16, 1, (__int64 *)(v8 + 16), v19, v17);
          }
          *v13 = v12;
          *(_QWORD *)(v12 + 8) = v13;
          if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || RtlpCommitBlock((char *)HeapHandle, v8) )
          {
            v20 = *(unsigned __int16 *)(v8 + 8);
            *(_BYTE *)(v8 + 10) = 0;
            *(_BYTE *)(v8 + 15) = 0;
            v21 = (__int64 **)((char *)HeapHandle + 336);
            if ( *((_QWORD *)HeapHandle + 39) )
              Entry = RtlpFindEntry((__int64)HeapHandle, (unsigned int)v20);
            else
              Entry = *v21;
            while ( v21 != (__int64 **)Entry )
            {
              if ( *((_DWORD *)HeapHandle + 31) )
              {
                v23 = *((_DWORD *)Entry - 2);
                if ( (v23 & *((_DWORD *)HeapHandle + 31)) != 0 )
                  v24 = v23 ^ *((_DWORD *)HeapHandle + 34);
                else
                  LOWORD(v24) = *((_DWORD *)Entry - 2);
                v8 = v36;
                v11 = v37;
              }
              else
              {
                LOWORD(v24) = *((_WORD *)Entry - 4);
              }
              if ( v20 <= (unsigned __int16)v24 )
                break;
              Entry = (__int64 *)*Entry;
            }
            v25 = (__int64 **)(v11 + 16);
            v26 = (__int64 *)Entry[1];
            if ( (__int64 *)*v26 == Entry )
            {
              *v25 = Entry;
              *(_QWORD *)(v11 + 24) = v26;
              *v26 = (__int64)v25;
              Entry[1] = (__int64)v25;
            }
            else
            {
              RtlpLogHeapFailure(13, 0LL, (__int64)Entry, 0LL, *v26, 0LL);
            }
            *((_QWORD *)HeapHandle + 24) += *(unsigned __int16 *)(v11 + 8);
            v27 = *((_QWORD *)HeapHandle + 39);
            if ( v27 )
            {
              v28 = *(unsigned __int16 *)(v11 + 8);
              while ( 1 )
              {
                v29 = *(unsigned int *)(v27 + 8);
                if ( v28 < v29 )
                {
                  v30 = *(unsigned __int16 *)(v11 + 8);
                  goto LABEL_53;
                }
                if ( !*(_QWORD *)v27 )
                  break;
                v27 = *(_QWORD *)v27;
              }
              v30 = v29 - 1;
LABEL_53:
              RtlpHeapAddListEntry((__int64)HeapHandle, v27, 1, v11 + 16, v30, v28);
            }
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
              *(_DWORD *)(v11 + 8) ^= *((_DWORD *)HeapHandle + 34);
            }
          }
          else
          {
            RtlpDeCommitFreeBlock(HeapHandle, v8, *(unsigned __int16 *)(v8 + 8), 1);
          }
        }
        else
        {
          RtlpLogHeapFailure(13, (__int64)HeapHandle, v8 + 16, v15, v14, 0LL);
        }
        v3 = 0LL;
      }
      else
      {
        v31 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
        v32 = (_DWORD *)(v8 + 32);
        if ( ((v10 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v33 = v31 >> 2;
          if ( !v33 )
            goto LABEL_72;
          if ( ((unsigned __int8)v32 & 4) != 0 )
          {
            *v32 = -17891602;
            if ( !--v33 )
              goto LABEL_72;
            v32 = (_DWORD *)(v8 + 36);
          }
          memset64(v32, 0xFEEEFEEEFEEEFEEEuLL, v33 >> 1);
          if ( (v33 & 1) != 0 )
            v32[v33 - 1] = -17891602;
        }
        else
        {
          v34 = v31 >> 2;
          if ( !v34 )
            goto LABEL_72;
          if ( ((unsigned __int8)v32 & 4) != 0 )
          {
            *v32 = 0;
            if ( !--v34 )
              goto LABEL_72;
            v32 = (_DWORD *)(v8 + 36);
          }
          memset(v32, 0, 8 * (v34 >> 1));
          if ( (v34 & 1) != 0 )
            v32[v34 - 1] = 0;
        }
LABEL_72:
        if ( *(_BYTE *)(v8 + 15) == 3 )
          v8 += *(_QWORD *)(v8 + 56) + 64LL;
        else
          v8 += 16LL * *(unsigned __int16 *)(v8 + 8);
        v36 = v8;
      }
    }
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
LABEL_14:
    if ( *((_DWORD *)HeapHandle + 31) )
    {
      v9 = *(_DWORD *)(v8 + 8) ^ *((_DWORD *)HeapHandle + 34);
      *(_DWORD *)(v8 + 8) = v9;
      if ( HIBYTE(v9) != ((unsigned __int8)v9 ^ (unsigned __int8)(BYTE1(v9) ^ BYTE2(v9))) )
        RtlpAnalyzeHeapFailure(HeapHandle, v8);
    }
    goto LABEL_17;
  }
  if ( v3 && *((_DWORD *)HeapHandle + 31) )
  {
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v35 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return 0;
}
