/*
 * XREFs of CmpLightWeightCommitDeleteKeyUoW @ 0x14083C694
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1406E3990 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CmpCleanUpSubKeyInfo @ 0x140634F00 (CmpCleanUpSubKeyInfo.c)
 *     CmpFreeKeyByCell @ 0x140635218 (CmpFreeKeyByCell.c)
 *     CmpCleanupDiscardReplaceContext @ 0x14063BB00 (CmpCleanupDiscardReplaceContext.c)
 *     CmpDiscardKcb @ 0x14063D9F4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14063DBF4 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063DC74 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1406F9D10 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14083251C (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14083C4BC (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x14083DA68 (CmpLightWeightSwapParentSubKeyList.c)
 */

void __fastcall CmpLightWeightCommitDeleteKeyUoW(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int *v3; // rbp
  __int64 v6; // rax
  ULONG_PTR v8; // rsi
  int v9; // r9d
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  ULONG_PTR v15; // rcx
  int v16; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v17[2]; // [rsp+38h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v19; // [rsp+60h] [rbp-48h]
  int v20; // [rsp+68h] [rbp-40h]
  int v21; // [rsp+6Ch] [rbp-3Ch]

  v17[0] = -1;
  v3 = *(unsigned int **)(a1 + 104);
  v17[1] = 0;
  v6 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(v6 + 32);
  if ( (int)CmpFreeKeyByCell(v8, *(unsigned int *)(v6 + 40), 0) < 0
    && stru_140425BC0.LevelPlus1 > 5
    && TlgKeywordOn(&stru_140425BC0, 0x200000000000uLL) )
  {
    v21 = 0;
    v19 = &v16;
    v16 = v9;
    v20 = 4;
    TlgWrite(&stru_140425BC0, &unk_14038C3D3, 0LL, 0LL, 3u, &pData);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL);
  if ( *v3 == 1 )
    CmpLightWeightSwapParentSubKeyList(v8, *(unsigned int *)(v10 + 40), v3);
  CmpCleanUpSubKeyInfo(v10, 1);
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v8 + 8))(v8, *(unsigned int *)(v10 + 40), v17);
  *(_WORD *)(v10 + 176) = *(_WORD *)(v11 + 52);
  *(_QWORD *)(v11 + 4) = *a2;
  v12 = *a2;
  ++*(_QWORD *)(v10 + 304);
  *(_QWORD *)(v10 + 168) = v12;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v8 + 16))(v8, v17);
  CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(*(_QWORD *)(a1 + 48), v13, a3, 1);
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 8LL, a3, 1);
  CmpMarkKeyUnbacked(*(_QWORD *)(a1 + 48));
  v14 = *(_QWORD *)(a1 + 112);
  v15 = *(_QWORD *)(a1 + 48);
  if ( v14 )
  {
    CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v15, v14, a3);
    CmpCleanupDiscardReplaceContext(*(_QWORD **)(a1 + 112), a3);
    CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else
  {
    CmpDiscardKcb(v15);
  }
  CmpLightWeightCleanupModifyKeyDataUoW(v8, v3);
  *(_QWORD *)(a1 + 104) = 0LL;
}
