/*
 * XREFs of RtlZeroHeap @ 0x140897190
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     RtlpHeapExceptionFilter @ 0x1402FB914 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402FBA7C (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x1402FC158 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x1402FC27C (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1402FC548 (RtlpHeapRemoveListEntry.c)
 */

BOOLEAN __stdcall RtlZeroHeap(PVOID HeapHandle, ULONG Flags)
{
  _BYTE *v3; // r14
  char *v5; // rax
  char *v6; // r13
  ULONG_PTR v7; // r15
  int v8; // edx
  unsigned __int8 v9; // cl
  ULONG_PTR v10; // rdi
  __int64 v11; // r14
  __int64 *v12; // r12
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned __int64 v19; // r12
  _QWORD **v20; // r14
  _QWORD *Entry; // r8
  int v22; // ecx
  int v23; // eax
  _QWORD *v24; // r14
  __int64 *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // rdx
  _DWORD *v31; // r8
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  char v34; // [rsp+30h] [rbp-98h]
  ULONG_PTR v35; // [rsp+40h] [rbp-88h]
  ULONG_PTR v36; // [rsp+60h] [rbp-68h]

  v3 = 0LL;
  v34 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0;
  if ( ((*((_BYTE *)HeapHandle + 116) | (unsigned __int8)Flags) & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)HeapHandle + 44), 1u);
    v34 = 1;
  }
  v5 = (char *)HeapHandle + 288;
  v6 = (char *)*((_QWORD *)HeapHandle + 36);
LABEL_6:
  if ( v6 != v5 )
  {
    v7 = *((_QWORD *)v6 + 5);
    v35 = v7;
    while ( 1 )
    {
      if ( v7 >= *((_QWORD *)v6 + 6) )
      {
        v6 = *(char **)v6;
        v5 = (char *)HeapHandle + 288;
        goto LABEL_6;
      }
      if ( !v3 )
        goto LABEL_12;
      if ( *((_DWORD *)HeapHandle + 31) )
        break;
LABEL_15:
      v3 = (_BYTE *)v7;
      v9 = *(_BYTE *)(v7 + 10);
      if ( (v9 & 1) != 0 )
        goto LABEL_67;
      v10 = v7;
      v36 = v7;
      if ( (v9 & 8) != 0 )
      {
        v11 = *(_QWORD *)(v7 + 16);
        v12 = *(__int64 **)(v7 + 24);
        v13 = *v12;
        v14 = *(_QWORD *)(v11 + 8);
        if ( *v12 == v14 && v13 == v7 + 16 )
        {
          *((_QWORD *)HeapHandle + 24) -= *(unsigned __int16 *)(v7 + 8);
          v15 = *((_QWORD *)HeapHandle + 39);
          if ( v15 )
          {
            v16 = *(unsigned __int16 *)(v7 + 8);
            while ( 1 )
            {
              v17 = *(unsigned int *)(v15 + 8);
              if ( v16 < v17 )
              {
                v18 = *(unsigned __int16 *)(v7 + 8);
                goto LABEL_25;
              }
              if ( !*(_QWORD *)v15 )
                break;
              v15 = *(_QWORD *)v15;
            }
            v18 = v17 - 1;
LABEL_25:
            RtlpHeapRemoveListEntry((ULONG_PTR)HeapHandle, v15, v16, (__int64 *)(v7 + 16), v18, v16);
          }
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          v19 = *(unsigned __int16 *)(v7 + 8);
          *(_BYTE *)(v7 + 10) = 0;
          *(_BYTE *)(v7 + 15) = 0;
          v20 = (_QWORD **)((char *)HeapHandle + 336);
          if ( *((_QWORD *)HeapHandle + 39) )
            Entry = (_QWORD *)RtlpFindEntry((__int64)HeapHandle, (unsigned int)v19);
          else
            Entry = *v20;
          while ( v20 != Entry )
          {
            if ( *((_DWORD *)HeapHandle + 31) )
            {
              v22 = *((_DWORD *)Entry - 2);
              if ( (v22 & *((_DWORD *)HeapHandle + 31)) != 0 )
                v23 = v22 ^ *((_DWORD *)HeapHandle + 34);
              else
                LOWORD(v23) = *((_DWORD *)Entry - 2);
              v7 = v35;
              v10 = v36;
            }
            else
            {
              LOWORD(v23) = *((_WORD *)Entry - 4);
            }
            if ( v19 <= (unsigned __int16)v23 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          v24 = (_QWORD *)(v10 + 16);
          v25 = (__int64 *)Entry[1];
          if ( (_QWORD *)*v25 == Entry )
          {
            *v24 = Entry;
            *(_QWORD *)(v10 + 24) = v25;
            *v25 = (__int64)v24;
            Entry[1] = v24;
          }
          else
          {
            RtlpLogHeapFailure(13, 0LL, (ULONG_PTR)Entry, 0LL, *v25, 0LL);
          }
          *((_QWORD *)HeapHandle + 24) += *(unsigned __int16 *)(v10 + 8);
          v26 = *((_QWORD *)HeapHandle + 39);
          if ( v26 )
          {
            v27 = *(unsigned __int16 *)(v10 + 8);
            while ( 1 )
            {
              v28 = *(unsigned int *)(v26 + 8);
              if ( v27 < v28 )
              {
                v29 = *(unsigned __int16 *)(v10 + 8);
                goto LABEL_48;
              }
              if ( !*(_QWORD *)v26 )
                break;
              v26 = *(_QWORD *)v26;
            }
            v29 = v28 - 1;
LABEL_48:
            RtlpHeapAddListEntry((__int64)HeapHandle, v26, v27, v10 + 16, v29, v27);
          }
          if ( *((_DWORD *)HeapHandle + 31) )
          {
            *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
            *(_DWORD *)(v10 + 8) ^= *((_DWORD *)HeapHandle + 34);
          }
        }
        else
        {
          RtlpLogHeapFailure(13, (ULONG_PTR)HeapHandle, v7 + 16, v14, v13, 0LL);
        }
        v3 = 0LL;
      }
      else
      {
        v30 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
        v31 = (_DWORD *)(v7 + 32);
        if ( ((v9 >> 2) & ((*((_BYTE *)HeapHandle + 112) & 0x40) != 0)) != 0 )
        {
          v32 = v30 >> 2;
          if ( !v32 )
            goto LABEL_67;
          if ( ((unsigned __int8)v31 & 4) != 0 )
          {
            *v31 = -17891602;
            if ( !--v32 )
              goto LABEL_67;
            v31 = (_DWORD *)(v7 + 36);
          }
          memset64(v31, 0xFEEEFEEEFEEEFEEEuLL, v32 >> 1);
          if ( (v32 & 1) != 0 )
            v31[v32 - 1] = -17891602;
        }
        else
        {
          v33 = v30 >> 2;
          if ( !v33 )
            goto LABEL_67;
          if ( ((unsigned __int8)v31 & 4) != 0 )
          {
            *v31 = 0;
            if ( !--v33 )
              goto LABEL_67;
            v31 = (_DWORD *)(v7 + 36);
          }
          memset(v31, 0, 8 * (v33 >> 1));
          if ( (v33 & 1) != 0 )
            v31[v33 - 1] = 0;
        }
LABEL_67:
        if ( *(_BYTE *)(v7 + 15) == 3 )
          v7 += *(_QWORD *)(v7 + 56) + 64LL;
        else
          v7 += 16LL * *(unsigned __int16 *)(v7 + 8);
        v35 = v7;
      }
    }
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
LABEL_12:
    if ( *((_DWORD *)HeapHandle + 31) )
    {
      v8 = *(_DWORD *)(v7 + 8) ^ *((_DWORD *)HeapHandle + 34);
      *(_DWORD *)(v7 + 8) = v8;
      if ( HIBYTE(v8) != ((unsigned __int8)v8 ^ (unsigned __int8)(BYTE1(v8) ^ BYTE2(v8))) )
        RtlpAnalyzeHeapFailure((ULONG_PTR)HeapHandle, v7);
    }
    goto LABEL_15;
  }
  if ( v3 && *((_DWORD *)HeapHandle + 31) )
  {
    v3[11] = v3[8] ^ v3[9] ^ v3[10];
    *((_DWORD *)v3 + 2) ^= *((_DWORD *)HeapHandle + 34);
  }
  if ( v34 )
    ExReleaseResourceLite(*((PERESOURCE *)HeapHandle + 44));
  return 0;
}
