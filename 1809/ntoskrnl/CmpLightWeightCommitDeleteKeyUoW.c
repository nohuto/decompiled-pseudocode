/*
 * XREFs of CmpLightWeightCommitDeleteKeyUoW @ 0x140804978
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140695BDC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1405AB51C (CmpCleanupDiscardReplaceContext.c)
 *     CmpDiscardKcb @ 0x1405AB6A8 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1405AB8A0 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x1405ADA60 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1405AE310 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x1405AE6F8 (CmpFreeKeyByCell.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407FAC0C (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407FAE88 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x1408047A0 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x140805E80 (CmpLightWeightSwapParentSubKeyList.c)
 */

void __fastcall CmpLightWeightCommitDeleteKeyUoW(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // rsi
  __int64 v5; // rax
  ULONG_PTR v6; // rdi
  int v7; // r9d
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  ULONG_PTR v13; // rcx
  int v14; // [rsp+30h] [rbp-50h] BYREF
  __int16 v15; // [rsp+34h] [rbp-4Ch]
  _DWORD v16[2]; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  int *v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+6Ch] [rbp-14h]

  v16[0] = -1;
  v2 = *(unsigned int **)(a1 + 104);
  v16[1] = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v5 + 24);
  if ( (int)CmpFreeKeyByCell(v6, *(_DWORD *)(v5 + 32), 0) < 0
    && stru_140400AA0.LevelPlus1 > 5
    && TlgKeywordOn(&stru_140400AA0, 0x200000000000uLL) )
  {
    v20 = 0;
    v18 = &v14;
    v14 = v7;
    v19 = 4;
    TlgWrite(&stru_140400AA0, &unk_14036D6A1, 0LL, 0LL, 3u, &pData);
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL);
  if ( *v2 == 1 )
    CmpLightWeightSwapParentSubKeyList(v6, *(unsigned int *)(v8 + 32), v2);
  CmpCleanUpSubKeyInfo(v8, 1);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(v6, *(unsigned int *)(v8 + 32), v16);
  *(_WORD *)(v8 + 168) = *(_WORD *)(v9 + 52);
  *(_QWORD *)(v9 + 4) = *a2;
  v10 = *a2;
  ++*(_QWORD *)(v8 + 296);
  *(_QWORD *)(v8 + 160) = v10;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v16);
  v11 = *(_QWORD *)(a1 + 48);
  v14 = 8;
  v15 = 257;
  CmpEnumerateAllHigherLayerKcbs(
    v11,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpFlushNotifiesPreCallback,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpFlushNotifiesPostCallback,
    (__int64)&v14,
    1,
    1);
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 8LL, 1);
  CmpMarkKeyUnbacked(*(_QWORD *)(a1 + 48));
  v12 = *(_QWORD *)(a1 + 112);
  v13 = *(_QWORD *)(a1 + 48);
  if ( v12 )
  {
    CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v13, v12);
    CmpCleanupDiscardReplaceContext(*(_QWORD **)(a1 + 112));
    CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else
  {
    CmpDiscardKcb(v13);
  }
  CmpLightWeightCleanupModifyKeyDataUoW(v6, v2);
  *(_QWORD *)(a1 + 104) = 0LL;
}
