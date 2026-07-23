/*
 * XREFs of PipAddRequestToEdge @ 0x140824D7C
 * Callers:
 *     PipAddDependencyEdgeBetweenNodes @ 0x140287AB4 (PipAddDependencyEdgeBetweenNodes.c)
 *     PipCreateNewDependencyEdge @ 0x140287B54 (PipCreateNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x14082518C (PipMergeDependencyEdgeList.c)
 * Callees:
 *     PipMergeDependencyTypes @ 0x140287DE4 (PipMergeDependencyTypes.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1406D4EA0 (RtlDuplicateUnicodeString.c)
 *     PipFreeBindingRequestEntry @ 0x1408250E8 (PipFreeBindingRequestEntry.c)
 */

__int64 __fastcall PipAddRequestToEdge(__int64 a1, PCUNICODE_STRING *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // r14
  _QWORD *v4; // r15
  __int64 v5; // rbx
  unsigned __int64 v8; // r12
  _QWORD *v9; // rcx
  int v10; // edx
  _QWORD *PoolWithTag; // rax
  int v12; // eax
  UNICODE_STRING *v13; // rax
  _QWORD *v14; // rax

  v2 = 0LL;
  v3 = (_QWORD *)(a1 + 56);
  v4 = *(_QWORD **)(a1 + 56);
  v5 = 0LL;
  while ( v4 != v3 )
  {
    v8 = (unsigned __int64)v4;
    if ( v5 )
      goto LABEL_11;
    v9 = v4;
    v4 = (_QWORD *)*v4;
    v10 = *((_DWORD *)v9 + 4);
    if ( v10 == *(_DWORD *)a2 )
    {
      if ( v10 )
      {
        if ( v10 == 1 )
          v5 = v8 & -(__int64)(RtlEqualUnicodeString((PCUNICODE_STRING)v9[3], a2[1], 0) != 0);
      }
      else if ( (PCUNICODE_STRING)v9[3] == a2[1] )
      {
        v5 = (__int64)v9;
      }
    }
  }
  if ( v5 )
  {
LABEL_11:
    *(_DWORD *)(v5 + 32) |= *((_DWORD *)a2 + 4);
    goto LABEL_21;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x53706E50u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 8) = *((_DWORD *)a2 + 4);
    v12 = *(_DWORD *)a2;
    *((_DWORD *)v2 + 4) = *(_DWORD *)a2;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        v13 = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x53706E50u);
        v2[3] = v13;
        if ( RtlDuplicateUnicodeString(0, a2[1], v13) < 0 )
        {
          PipFreeBindingRequestEntry(v2);
          v2 = 0LL;
          goto LABEL_21;
        }
      }
    }
    else
    {
      v2[3] = a2[1];
    }
    v14 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v14 != v3 )
      __fastfail(3u);
    *v2 = v3;
    v2[1] = v14;
    *v14 = v2;
    v3[1] = v2;
  }
LABEL_21:
  if ( !v5 )
    v5 = (__int64)v2;
  if ( v5 )
    PipMergeDependencyTypes(a1, *((_DWORD *)a2 + 4));
  return v5;
}
