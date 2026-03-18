/*
 * XREFs of FindNSObj @ 0x1C0014240
 * Callers:
 *     FindNSObjMainNoLock @ 0x1C0008600 (FindNSObjMainNoLock.c)
 *     FindNSObj @ 0x1C0014240 (FindNSObj.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     GetObjectPathNoLock @ 0x1C0004750 (GetObjectPathNoLock.c)
 *     FindNSObj @ 0x1C0014240 (FindNSObj.c)
 *     HeapInsertFreeList @ 0x1C0014540 (HeapInsertFreeList.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall FindNSObj(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v6; // r10d
  int v7; // eax
  int v8; // ecx
  unsigned int v10; // ebp
  unsigned int v11; // ecx
  unsigned int v12; // ebp
  void *v13; // r12
  _QWORD *ObjectPathNoLock; // rax
  size_t v15; // rbx
  _BYTE *v16; // rdi
  __int64 v17; // rcx
  unsigned int v18; // r13d
  char *v19; // r15
  unsigned int v20; // eax
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  _QWORD *i; // rbx
  unsigned int NSObj; // eax
  unsigned int v30; // [rsp+30h] [rbp-48h]
  int v32; // [rsp+90h] [rbp+18h]
  int v33; // [rsp+98h] [rbp+20h]

  v33 = a4;
  v32 = a3;
  v6 = a1;
  v7 = a4;
  v8 = a6;
  v10 = -1073741772;
  if ( (a6 & 1) != 0 && (!a2 || a4 && a2 != a4 && *(_QWORD *)(a2 + 16) != a3) || !a2 )
    return v10;
  if ( v6 != *(_DWORD *)(a2 + 40) && (a6 & 2) == 0 )
  {
LABEL_28:
    for ( i = *(_QWORD **)(a2 + 24); (_QWORD *)(a2 + 24) != i; v6 = a1 )
    {
      NSObj = FindNSObj(v6, (_DWORD)i, a3, v7, a5, v8);
      v10 = NSObj;
      if ( NSObj != -1073741772 && NSObj )
        break;
      i = (_QWORD *)*i;
      v7 = v33;
      v8 = a6;
      LODWORD(a3) = v32;
    }
    return v10;
  }
  v11 = *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL);
  v12 = v11 + 1;
  v30 = v11 + 1;
  if ( v11 + 1 < v11 )
    return 3221225621LL;
  v13 = (void *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v12);
  ObjectPathNoLock = GetObjectPathNoLock(a2);
  v15 = -1LL;
  v16 = ObjectPathNoLock;
  v17 = -1LL;
  do
    ++v17;
  while ( *((_BYTE *)ObjectPathNoLock + v17) );
  v18 = v17 + *(_DWORD *)(a5 + 24) + 1;
  v19 = (char *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, v18);
  if ( v19 && v13 )
  {
    memset(v13, 0, v12);
    memset(v19, 0, v18);
    v20 = *(_DWORD *)(a5 + 24);
    if ( v20 )
      memmove(v19, *(const void **)(a5 + 32), v20);
    v21 = *(_QWORD *)(a5 + 8);
    v22 = *(_DWORD *)(v21 + 24);
    if ( v22 )
      memmove(v13, *(const void **)(v21 + 32), v22);
    do
      ++v15;
    while ( v16[v15] );
    memmove(&v19[*(unsigned int *)(a5 + 24)], v16, v15);
    v23 = *(unsigned int *)(*(_QWORD *)(a5 + 8) + 24LL);
    if ( *(_QWORD *)(a2 + 24) == a2 + 24 )
      *((_BYTE *)v13 + v23) = 48;
    else
      *((_BYTE *)v13 + v23) = 49;
    v10 = 0;
    if ( *(_DWORD *)(a5 + 24) )
    {
      v24 = *(_QWORD *)(a5 + 32);
      *(_DWORD *)(v24 - 16) = 0;
      byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v24 - 8), v24 - 16);
      KeReleaseSpinLock(&gmutHeap, byte_1C0082B28);
    }
    v25 = *(_QWORD *)(a5 + 8);
    if ( *(_DWORD *)(v25 + 24) )
    {
      v26 = *(_QWORD *)(v25 + 32);
      *(_DWORD *)(v26 - 16) = 0;
      byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v26 - 8), v26 - 16);
      KeReleaseSpinLock(&gmutHeap, byte_1C0082B28);
      v25 = *(_QWORD *)(a5 + 8);
    }
    ++*(_QWORD *)(a5 + 16);
    *(_QWORD *)(a5 + 32) = v19;
    *(_DWORD *)(a5 + 24) = v18;
    *(_QWORD *)(v25 + 32) = v13;
    *(_DWORD *)(*(_QWORD *)(a5 + 8) + 24LL) = v30;
    ++*(_QWORD *)(*(_QWORD *)(a5 + 8) + 16LL);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    v6 = a1;
    LODWORD(a3) = v32;
    v8 = a6;
    v7 = v33;
    goto LABEL_28;
  }
  return 3221225626LL;
}
