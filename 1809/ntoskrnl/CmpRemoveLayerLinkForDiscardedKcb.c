/*
 * XREFs of CmpRemoveLayerLinkForDiscardedKcb @ 0x1405820C4
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14000FBF0 (CmpRemoveHiveFromNamespace.c)
 *     CmpCompleteUnloadKey @ 0x1405B061C (CmpCompleteUnloadKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x1406E25B0 (CmpInvalidateSubtreeWorker.c)
 * Callees:
 *     CmpDelayDerefKeyControlBlock @ 0x1405D5264 (CmpDelayDerefKeyControlBlock.c)
 */

_QWORD *__fastcall CmpRemoveLayerLinkForDiscardedKcb(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx
  ULONG_PTR v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // rdx

  result = *(_QWORD **)(a1 + 184);
  if ( result )
  {
    v3 = result[3];
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 16);
      result[3] = 0LL;
      *(_WORD *)(a1 + 58) = 0;
      CmpDelayDerefKeyControlBlock(v4);
      v5 = *(_QWORD **)(a1 + 184);
      v6 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (result = (_QWORD *)v5[1], (_QWORD *)*result != v5) )
        __fastfail(3u);
      *result = v6;
      *(_QWORD *)(v6 + 8) = result;
    }
  }
  return result;
}
