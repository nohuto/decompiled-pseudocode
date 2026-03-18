/*
 * XREFs of CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140832B3C
 * Callers:
 *     CmDeleteLayeredKey @ 0x140280474 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x1406F9BA0 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14083D174 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140044154 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406F9D60 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardReplacePost @ 0x140832BE0 (CmpPrepareDiscardReplacePost.c)
 */

__int64 __fastcall CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  int v6; // ebx
  _QWORD *v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v8[0] = 0LL;
  v8[1] = 0LL;
  CmpInitializeDelayDerefContext(v8);
  *(_DWORD *)(v5 + 8) &= v4;
  *(_QWORD *)v5 = a1;
  CmpEnumerateAllHigherLayerKcbs(
    a1,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanupDiscardReplacePre,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpPrepareDiscardReplacePost,
    (__int64)v8,
    v5,
    1,
    v4);
  v6 = *(_DWORD *)(a2 + 8);
  if ( v6 >= 0 )
  {
    CmpPrepareDiscardReplacePost(a1, v8, a2);
    v6 = 0;
    if ( *(int *)(a2 + 8) < 0 )
      v6 = *(_DWORD *)(a2 + 8);
  }
  CmpDrainDelayDerefContext(v8);
  return (unsigned int)v6;
}
