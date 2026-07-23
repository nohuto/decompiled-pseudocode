/*
 * XREFs of CmpPrepareDiscardReplacePost @ 0x1407FB400
 * Callers:
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407FB39C (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405AA42C (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpReferenceKeyControlBlock @ 0x140693BFC (CmpReferenceKeyControlBlock.c)
 *     CmpCloneToUnbackedKcb @ 0x1407F1CB0 (CmpCloneToUnbackedKcb.c)
 */

__int64 __fastcall CmpPrepareDiscardReplacePost(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned int v2; // ebx
  char v5; // si
  int v6; // edi
  _QWORD *v7; // rdx
  _QWORD *v8; // rcx
  ULONG_PTR v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v10 = 0LL;
  v5 = CmpReferenceKeyControlBlock(BugCheckParameter2);
  if ( v5 )
  {
    v6 = CmpCloneToUnbackedKcb(BugCheckParameter2, &v10);
    if ( v6 >= 0 )
    {
      v7 = *(_QWORD **)(a2 + 24);
      v8 = (_QWORD *)(v10 + 112);
      if ( *v7 != a2 + 16 )
        __fastfail(3u);
      *v8 = a2 + 16;
      v5 = 0;
      v8[1] = v7;
      v6 = 0;
      *v7 = v8;
      *(_QWORD *)(a2 + 24) = v8;
    }
    if ( v5 )
      CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2);
  }
  else
  {
    v6 = -1073741670;
  }
  *(_DWORD *)(a2 + 8) = v6;
  LOBYTE(v2) = v6 < 0;
  return v2;
}
