/*
 * XREFs of CmpCommitDiscardReplacePost @ 0x1407FAC60
 * Callers:
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407FAC0C (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 * Callees:
 *     CmpRebuildKcbCache @ 0x1405A9F78 (CmpRebuildKcbCache.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405AA42C (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDiscardKcb @ 0x1405AB6A8 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1405AB8A0 (CmpMarkKeyUnbacked.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1405B0FE0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405D9ADC (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1407F24BC (CmpSearchKeyControlBlockTreeEx.c)
 */

__int64 __fastcall CmpCommitDiscardReplacePost(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  ULONG_PTR v6; // rbx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rax
  _QWORD *v15; // rsi
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2 + 16;
  v4 = *(_QWORD **)v2;
  if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
    __fastfail(3u);
  *(_QWORD *)v2 = v5;
  v6 = (ULONG_PTR)(v4 - 14);
  *(_QWORD *)(v5 + 8) = v2;
  v4[1] = v4;
  *v4 = v4;
  *((_WORD *)v4 - 27) = *(_WORD *)(BugCheckParameter2 + 58);
  v4[9] = *(_QWORD *)(BugCheckParameter2 + 184);
  *(_QWORD *)(BugCheckParameter2 + 184) = 0LL;
  *(_WORD *)(BugCheckParameter2 + 58) = 0;
  *(_QWORD *)(v4[9] + 16LL) = v4 - 14;
  v7 = *(_DWORD *)(BugCheckParameter2 + 32);
  if ( v7 != -1 )
  {
    *(_DWORD *)(v6 + 32) = v7;
    CmpMarkKeyUnbacked(BugCheckParameter2);
    CmpRebuildKcbCache(v6);
  }
  CmpDiscardKcb(BugCheckParameter2);
  v8 = *(_QWORD *)(v6 + 24);
  v9 = *(_QWORD *)(v8 + 1640);
  v10 = 3
      * ((unsigned int)(*(_DWORD *)(v8 + 1648) - 1) & ((unsigned int)(101027
                                                                    * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) >> 9)));
  *(_QWORD *)(v6 + 16) = *(_QWORD *)(v9
                                   + 24
                                   * ((unsigned int)(*(_DWORD *)(v8 + 1648) - 1) & ((unsigned int)(101027
                                                                                                 * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) >> 9)))
                                   + 16);
  *(_QWORD *)(v9 + 8 * v10 + 16) = v6 + 8;
  v11 = *(_QWORD *)(v6 + 184);
  v12 = (_QWORD *)(v11 + 32);
  v13 = *(_QWORD **)(v11 + 32);
  while ( v13 != v12 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v6);
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)BugCheckParameter2);
    v11 = *(_QWORD *)(v6 + 184);
    v13 = (_QWORD *)*v13;
    v12 = (_QWORD *)(v11 + 32);
  }
  v14 = v11 + 48;
  v15 = *(_QWORD **)(v11 + 48);
  while ( v15 != (_QWORD *)v14 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v6);
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)BugCheckParameter2);
    v15 = (_QWORD *)*v15;
    v14 = *(_QWORD *)(v6 + 184) + 48LL;
  }
  v17[0] = BugCheckParameter2;
  v17[1] = v6;
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64))CmpRefreshParent,
    *(_QWORD *)(v6 + 24),
    (__int64)v17,
    0);
  CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2);
  CmpDereferenceKeyControlBlockWithLock(v6);
  return 0LL;
}
