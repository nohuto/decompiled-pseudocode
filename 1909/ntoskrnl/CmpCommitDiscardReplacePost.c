/*
 * XREFs of CmpCommitDiscardReplacePost @ 0x140832580
 * Callers:
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14083251C (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 * Callees:
 *     CmpRebuildKcbCache @ 0x140635460 (CmpRebuildKcbCache.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140635944 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpDiscardKcb @ 0x14063D9F4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14063DBF4 (CmpMarkKeyUnbacked.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140669828 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C53FC (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082ACBC (CmpSearchKeyControlBlockTreeEx.c)
 */

__int64 __fastcall CmpCommitDiscardReplacePost(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  _QWORD *v6; // rax
  __int64 v7; // rcx
  ULONG_PTR v8; // rbx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _QWORD **v13; // rax
  _QWORD *v14; // r14
  ULONG_PTR v16; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR v17; // [rsp+38h] [rbp-10h]

  v3 = a3 + 16;
  v16 = 0LL;
  v17 = 0LL;
  v6 = *(_QWORD **)v3;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
    __fastfail(3u);
  *(_QWORD *)v3 = v7;
  v8 = (ULONG_PTR)(v6 - 15);
  *(_QWORD *)(v7 + 8) = v3;
  v6[1] = v6;
  *v6 = v6;
  *((_WORD *)v6 - 27) = *(_WORD *)(BugCheckParameter2 + 66);
  v6[9] = *(_QWORD *)(BugCheckParameter2 + 192);
  *(_QWORD *)(BugCheckParameter2 + 192) = 0LL;
  *(_WORD *)(BugCheckParameter2 + 66) = 0;
  *(_QWORD *)(v6[9] + 16LL) = v6 - 15;
  v9 = *(_DWORD *)(BugCheckParameter2 + 40);
  if ( v9 != -1 )
  {
    *(_DWORD *)(v8 + 40) = v9;
    CmpMarkKeyUnbacked(BugCheckParameter2);
    CmpRebuildKcbCache(v8, a2);
  }
  CmpDiscardKcb(BugCheckParameter2);
  v10 = *(_QWORD *)(v8 + 32);
  v11 = *(_QWORD *)(v10 + 1640);
  v12 = 3
      * ((unsigned int)(*(_DWORD *)(v10 + 1648) - 1) & ((unsigned int)(101027
                                                                     * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) >> 9)));
  *(_QWORD *)(v8 + 24) = *(_QWORD *)(v11
                                   + 24
                                   * ((unsigned int)(*(_DWORD *)(v10 + 1648) - 1) & ((unsigned int)(101027
                                                                                                  * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v8 + 16) ^ (*(_DWORD *)(v8 + 16) >> 9))) >> 9)))
                                   + 16);
  *(_QWORD *)(v11 + 8 * v12 + 16) = v8 + 16;
  v13 = (_QWORD **)(*(_QWORD *)(v8 + 192) + 32LL);
  v14 = *v13;
  while ( v14 != v13 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v8);
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
    v14 = (_QWORD *)*v14;
    v13 = (_QWORD **)(*(_QWORD *)(v8 + 192) + 32LL);
  }
  v16 = BugCheckParameter2;
  v17 = v8;
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, __int64))CmpRefreshParent,
    *(_QWORD *)(v8 + 32),
    a2,
    (__int64)&v16,
    0);
  CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2, a2, 0);
  CmpDereferenceKeyControlBlockWithLock(v8, a2, 0);
  return 0LL;
}
