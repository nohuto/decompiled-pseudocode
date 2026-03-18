/*
 * XREFs of ProcessDivide @ 0x1C0067AF0
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0001FAC (HeapFree.c)
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 */

__int64 __fastcall ProcessDivide(struct _SLIST_ENTRY *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // esi
  int v7; // eax
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  _SLIST_ENTRY *Next; // rcx

  v4 = a3;
  if ( a3 )
    v7 = 2;
  else
    v7 = *(_DWORD *)(a2 + 16) & 0xF;
  v8 = *(_QWORD *)(a2 + 32);
  if ( v7 )
  {
    v9 = v7 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        return v4;
      goto LABEL_18;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    *(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL) = 1;
    v10 = *(_QWORD *)(v8 + 80);
    v11 = *(_QWORD *)(v10 + 56);
    if ( v11 )
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = *(_QWORD *)(v10 + 16) % v11;
    else
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
    v4 = WriteObject(a1, *(_QWORD *)(v8 + 80) + 80LL, *(_QWORD *)(a2 + 48), a4);
    if ( v4 == 32772 || (_SLIST_ENTRY *)a2 != a1[26].Next )
      return v4;
  }
  ++*(_DWORD *)(a2 + 16);
  *(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL) = 1;
  v12 = *(_QWORD *)(v8 + 80);
  v13 = *(_QWORD *)(v12 + 56);
  if ( v13 )
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = *(_QWORD *)(v12 + 16) / v13;
  else
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
  v4 = WriteObject(a1, *(_QWORD *)(v8 + 80) + 120LL, *(_QWORD *)(a2 + 48), a4);
  if ( v4 != 32772 && (_SLIST_ENTRY *)a2 == a1[26].Next )
  {
LABEL_18:
    Next = a1[26].Next;
    a1[26].Next = (_SLIST_ENTRY *)*((_QWORD *)&Next->Next + 1);
    HeapFree(Next);
  }
  return v4;
}
