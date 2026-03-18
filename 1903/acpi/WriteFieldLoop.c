/*
 * XREFs of WriteFieldLoop @ 0x1C0025230
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 */

__int64 __fastcall WriteFieldLoop(struct _SLIST_ENTRY *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // r14
  unsigned int v9; // r8d
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rsi
  int v17; // eax
  unsigned int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  _SLIST_ENTRY *Next; // r14
  _SLIST_ENTRY *v24; // rbx
  __int64 v25; // r8
  _SLIST_ENTRY *v26; // rax
  _SLIST_ENTRY *i; // rdx
  _SLIST_ENTRY **v28; // rcx
  _SLIST_ENTRY *v29; // r9
  __int64 v30; // rcx
  _SLIST_ENTRY *v31; // rax
  _SLIST_ENTRY *v32; // r9
  _SLIST_ENTRY *v33; // rbx
  _SLIST_ENTRY *v34; // rdx
  _SLIST_ENTRY **v35; // rax
  __int64 v36; // rcx
  __int64 Next_high; // r10
  _SLIST_ENTRY *v38; // rcx
  _SLIST_ENTRY **v39; // rax
  _SLIST_ENTRY *v40; // rcx
  _SLIST_ENTRY **v41; // rax

  v3 = a3;
  v6 = 1;
  if ( !a3 )
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  if ( v6 )
  {
    if ( v6 != 1 )
      return v3;
LABEL_20:
    Next = a1[26].Next;
    v24 = Next - 1;
    a1[26].Next = (_SLIST_ENTRY *)*((_QWORD *)&Next->Next + 1);
    LODWORD(Next[-1].Next) = 0;
    byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v25 = *((_QWORD *)&Next[-1].Next + 1);
    v26 = *(_SLIST_ENTRY **)(v25 + 40);
    for ( i = (_SLIST_ENTRY *)(v25 + 40); v26 != i; v26 = v26->Next )
    {
      if ( Next < v26 )
        break;
    }
    v28 = (_SLIST_ENTRY **)*((_QWORD *)&v26->Next + 1);
    if ( *v28 == v26 )
    {
      *((_QWORD *)&Next->Next + 1) = v28;
      Next->Next = v26;
      *v28 = Next;
      *((_QWORD *)&v26->Next + 1) = Next;
      v29 = Next->Next;
      v30 = (__int64)&Next->Next[-1];
      if ( Next->Next != i )
      {
        Next_high = HIDWORD(v24->Next);
        if ( (_SLIST_ENTRY *)v30 == (_SLIST_ENTRY *)((char *)v24 + Next_high) )
        {
          HIDWORD(v24->Next) = Next_high + *(_DWORD *)(v30 + 4);
          v38 = v29->Next;
          if ( *(&v29->Next->Next + 1) != v29 )
            goto LABEL_39;
          v39 = (_SLIST_ENTRY **)*((_QWORD *)&v29->Next + 1);
          if ( *v39 != v29 )
            goto LABEL_39;
          *v39 = v38;
          *((_QWORD *)&v38->Next + 1) = v39;
        }
      }
      v31 = (_SLIST_ENTRY *)*((_QWORD *)&v24[1].Next + 1);
      v32 = v31 - 1;
      if ( v31 != i )
      {
        v36 = HIDWORD(v32->Next);
        if ( v24 == (_SLIST_ENTRY *)((char *)v32 + v36) )
        {
          HIDWORD(v32->Next) = HIDWORD(v24->Next) + v36;
          v40 = Next->Next;
          if ( *(&Next->Next->Next + 1) != Next )
            goto LABEL_39;
          v41 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1);
          if ( *v41 != Next )
            goto LABEL_39;
          *v41 = v40;
          v24 = v32;
          *((_QWORD *)&v40->Next + 1) = v41;
        }
      }
      if ( *(_QWORD *)(v25 + 32) > (unsigned __int64)v24 + HIDWORD(v24->Next) )
      {
LABEL_28:
        KeReleaseSpinLock(&gmutHeap, byte_1C0082B28);
        return v3;
      }
      *(_QWORD *)(v25 + 32) = v24;
      v33 = v24 + 1;
      v34 = v33->Next;
      if ( *(&v33->Next->Next + 1) == v33 )
      {
        v35 = (_SLIST_ENTRY **)*((_QWORD *)&v33->Next + 1);
        if ( *v35 == v33 )
        {
          *v35 = v34;
          *((_QWORD *)&v34->Next + 1) = v35;
          goto LABEL_28;
        }
      }
    }
LABEL_39:
    __fastfail(3u);
  }
  v7 = *(_DWORD *)(a2 + 56);
  if ( !v7 )
  {
    ++*(_DWORD *)(a2 + 16);
    goto LABEL_20;
  }
  v8 = *(_QWORD *)(a2 + 40);
  v9 = 128;
  v10 = *(_QWORD *)(a2 + 48);
  v11 = *(_QWORD *)(a2 + 32);
  v12 = *(unsigned int *)(a2 + 60);
  if ( (unsigned int)v12 > v7 )
    v12 = v7;
  if ( *(_DWORD *)(v8 + 20) )
    v9 = *(_DWORD *)(v8 + 28) + 128;
  v13 = 0LL;
  v3 = 0;
  v14 = HeapAlloc(a1 + 30, 1297237576, v9);
  v15 = v14;
  if ( v14 )
  {
    *(_QWORD *)(v14 + 8) = a1[26].Next;
    a1[26].Next = (_SLIST_ENTRY *)v14;
    *(_DWORD *)v14 = 1330004801;
    *(_QWORD *)(v14 + 24) = WriteFieldObj;
    *(_QWORD *)(v14 + 32) = v11;
    *(_QWORD *)(v14 + 40) = v10;
    *(_QWORD *)(v14 + 48) = v12 + v10;
    v16 = (unsigned int)v12;
    v17 = 1 << ((*(_BYTE *)(v8 + 12) & 0xF) - 1);
    if ( (*(_DWORD *)(v8 + 12) & 0xFu) - 1 > 3 )
      v17 = 1;
    *(_DWORD *)(v15 + 56) = v17;
    v18 = 8 * v17;
    v19 = 8 * v17 + *(_DWORD *)(v8 + 8) + *(_DWORD *)(v8 + 4) - 1;
    if ( v18 == 8 )
      v20 = v19 >> 3;
    else
      v20 = v19 / v18;
    *(_DWORD *)(v15 + 60) = v20;
    v21 = 8 * *(_DWORD *)(v15 + 56);
    if ( v21 < 0x40 )
      v13 = 1LL << v21;
    *(_QWORD *)(v15 + 64) = v13 - 1;
    *(_DWORD *)(v15 + 72) = 8 * *(_DWORD *)(v15 + 56) - *(_DWORD *)(v8 + 4);
    *(_DWORD *)(v15 + 76) = *(_DWORD *)(v8 + 4);
    memmove((void *)(v15 + 96), (const void *)v8, (unsigned int)(*(_DWORD *)(v8 + 28) + 32));
  }
  else
  {
    v3 = -1072431102;
    LogError(-1072431102);
    AcpiDiagTraceAmlError((__int64)a1, -1072431102);
    PrintDebugMessage(153, 0LL, 0LL, 0LL, 0LL);
    v16 = (unsigned int)v12;
  }
  *(_DWORD *)(a2 + 56) -= v12;
  *(_QWORD *)(a2 + 48) += v16;
  return v3;
}
