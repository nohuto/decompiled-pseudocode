/*
 * XREFs of CmpCleanupDiscardReplacePost @ 0x140832430
 * Callers:
 *     CmpCleanupDiscardReplaceContext @ 0x14063BB00 (CmpCleanupDiscardReplaceContext.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C53FC (CmpDereferenceKeyControlBlockWithLock.c)
 */

_BOOL8 __fastcall CmpCleanupDiscardReplacePost(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax

  v3 = (_QWORD *)(a3 + 16);
  v5 = *(_QWORD **)(a3 + 16);
  if ( v5[1] != a3 + 16 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
    __fastfail(3u);
  *v3 = v6;
  *(_QWORD *)(v6 + 8) = v3;
  CmpDereferenceKeyControlBlockWithLock(a1, a2, 0);
  CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)(v5 - 15), a2, 0);
  return *v3 == (_QWORD)v3;
}
