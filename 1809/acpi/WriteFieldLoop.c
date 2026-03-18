/*
 * XREFs of WriteFieldLoop @ 0x1C0026A60
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // ecx
  _SLIST_ENTRY *Next; // r14
  _SLIST_ENTRY *v26; // rbx
  __int64 v27; // r8
  _SLIST_ENTRY *v28; // rax
  _SLIST_ENTRY *i; // rdx
  _SLIST_ENTRY **v30; // rcx
  _SLIST_ENTRY *v31; // r9
  __int64 v32; // rcx
  _SLIST_ENTRY *v33; // rax
  _SLIST_ENTRY *v34; // r9
  _SLIST_ENTRY *v35; // rbx
  _SLIST_ENTRY *v36; // rdx
  _SLIST_ENTRY **v37; // rax
  __int64 v38; // rcx
  __int64 Next_high; // r10
  _SLIST_ENTRY *v40; // rcx
  _SLIST_ENTRY **v41; // rax
  _SLIST_ENTRY *v42; // rcx
  _SLIST_ENTRY **v43; // rax

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
    v26 = Next - 1;
    a1[26].Next = (_SLIST_ENTRY *)*((_QWORD *)&Next->Next + 1);
    LODWORD(Next[-1].Next) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v27 = *((_QWORD *)&Next[-1].Next + 1);
    v28 = *(_SLIST_ENTRY **)(v27 + 40);
    for ( i = (_SLIST_ENTRY *)(v27 + 40); v28 != i; v28 = v28->Next )
    {
      if ( Next < v28 )
        break;
    }
    v30 = (_SLIST_ENTRY **)*((_QWORD *)&v28->Next + 1);
    if ( *v30 == v28 )
    {
      *((_QWORD *)&Next->Next + 1) = v30;
      Next->Next = v28;
      *v30 = Next;
      *((_QWORD *)&v28->Next + 1) = Next;
      v31 = Next->Next;
      v32 = (__int64)&Next->Next[-1];
      if ( Next->Next != i )
      {
        Next_high = HIDWORD(v26->Next);
        if ( (_SLIST_ENTRY *)v32 == (_SLIST_ENTRY *)((char *)v26 + Next_high) )
        {
          HIDWORD(v26->Next) = Next_high + *(_DWORD *)(v32 + 4);
          v40 = v31->Next;
          if ( *(&v31->Next->Next + 1) != v31 )
            goto LABEL_39;
          v41 = (_SLIST_ENTRY **)*((_QWORD *)&v31->Next + 1);
          if ( *v41 != v31 )
            goto LABEL_39;
          *v41 = v40;
          *((_QWORD *)&v40->Next + 1) = v41;
        }
      }
      v33 = (_SLIST_ENTRY *)*((_QWORD *)&v26[1].Next + 1);
      v34 = v33 - 1;
      if ( v33 != i )
      {
        v38 = HIDWORD(v34->Next);
        if ( v26 == (_SLIST_ENTRY *)((char *)v34 + v38) )
        {
          HIDWORD(v34->Next) = HIDWORD(v26->Next) + v38;
          v42 = Next->Next;
          if ( *(&Next->Next->Next + 1) != Next )
            goto LABEL_39;
          v43 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1);
          if ( *v43 != Next )
            goto LABEL_39;
          *v43 = v42;
          v26 = v34;
          *((_QWORD *)&v42->Next + 1) = v43;
        }
      }
      if ( *(_QWORD *)(v27 + 32) > (unsigned __int64)v26 + HIDWORD(v26->Next) )
      {
LABEL_28:
        KeReleaseSpinLock(&gmutHeap, NewIrql);
        return v3;
      }
      *(_QWORD *)(v27 + 32) = v26;
      v35 = v26 + 1;
      v36 = v35->Next;
      if ( *(&v35->Next->Next + 1) == v35 )
      {
        v37 = (_SLIST_ENTRY **)*((_QWORD *)&v35->Next + 1);
        if ( *v37 == v35 )
        {
          *v37 = v36;
          *((_QWORD *)&v36->Next + 1) = v37;
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
  v17 = v14;
  if ( v14 )
  {
    *(_QWORD *)(v14 + 8) = a1[26].Next;
    a1[26].Next = (_SLIST_ENTRY *)v14;
    *(_DWORD *)v14 = 1330004801;
    *(_QWORD *)(v14 + 24) = WriteFieldObj;
    *(_QWORD *)(v14 + 32) = v11;
    *(_QWORD *)(v14 + 40) = v10;
    *(_QWORD *)(v14 + 48) = v12 + v10;
    v18 = (unsigned int)v12;
    v19 = 1 << ((*(_BYTE *)(v8 + 12) & 0xF) - 1);
    if ( (*(_DWORD *)(v8 + 12) & 0xFu) - 1 > 3 )
      v19 = 1;
    *(_DWORD *)(v17 + 56) = v19;
    v20 = 8 * v19;
    v21 = 8 * v19 + *(_DWORD *)(v8 + 8) + *(_DWORD *)(v8 + 4) - 1;
    if ( v20 == 8 )
      v22 = v21 >> 3;
    else
      v22 = v21 / v20;
    *(_DWORD *)(v17 + 60) = v22;
    v23 = 8 * *(_DWORD *)(v17 + 56);
    if ( v23 < 0x40 )
      v13 = 1LL << v23;
    *(_QWORD *)(v17 + 64) = v13 - 1;
    *(_DWORD *)(v17 + 72) = 8 * *(_DWORD *)(v17 + 56) - *(_DWORD *)(v8 + 4);
    *(_DWORD *)(v17 + 76) = *(_DWORD *)(v8 + 4);
    memmove((void *)(v17 + 96), (const void *)v8, (unsigned int)(*(_DWORD *)(v8 + 28) + 32));
  }
  else
  {
    v3 = -1072431102;
    LogError(3222536194LL, v15, v16, 0LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    v18 = (unsigned int)v12;
  }
  *(_DWORD *)(a2 + 56) -= v12;
  *(_QWORD *)(a2 + 48) += v18;
  return v3;
}
