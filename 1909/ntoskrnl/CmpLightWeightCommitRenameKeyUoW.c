/*
 * XREFs of CmpLightWeightCommitRenameKeyUoW @ 0x14083C98C
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1406E3990 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x140631B28 (HvFreeCell.c)
 *     CmpDiscardKcb @ 0x14063D9F4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14063DBF4 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063DC74 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpSearchForOpenSubKeys @ 0x1406B8C30 (CmpSearchForOpenSubKeys.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C53FC (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082ACBC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpUpdateParentForEachSon @ 0x140838DAC (CmpUpdateParentForEachSon.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14083C4BC (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x14083DA68 (CmpLightWeightSwapParentSubKeyList.c)
 */

void __fastcall CmpLightWeightCommitRenameKeyUoW(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  ULONG_PTR v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r9
  unsigned __int16 v10; // dx
  unsigned int *v11; // rbx
  ULONG_PTR v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h]
  int v15; // [rsp+70h] [rbp+30h] BYREF
  int v16; // [rsp+74h] [rbp+34h]
  int v17; // [rsp+78h] [rbp+38h] BYREF
  int v18; // [rsp+7Ch] [rbp+3Ch]

  v16 = 0;
  v18 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v6 = a1[6];
  v15 = -1;
  v17 = -1;
  v7 = *(_QWORD *)(v6 + 32);
  CmpUpdateParentForEachSon(v7, *(unsigned int *)(v6 + 40), 0);
  HvFreeCell(v7, *(unsigned int *)(a1[11] + 40));
  CmpFlushNotifiesOnKeyBodyList(a1[11], 8LL, a3, 1);
  CmpMarkKeyUnbacked(a1[11]);
  CmpDiscardKcb(a1[11]);
  ++*(_QWORD *)(a1[6] + 304);
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, *(unsigned int *)(a1[6] + 40), &v15);
  *(_DWORD *)(v8 + 16) = *(_DWORD *)(*(_QWORD *)(a1[6] + 72) + 40LL);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(
         v7,
         *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL),
         &v17);
  *(_QWORD *)(v9 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1[6] + 72) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1[6] + 72) + 304LL);
  v10 = 2 * *(_WORD *)(v8 + 72);
  if ( (*(_BYTE *)(v8 + 2) & 0x20) == 0 )
    v10 = *(_WORD *)(v8 + 72);
  if ( (unsigned __int16)*(_DWORD *)(v9 + 52) < (unsigned int)v10 )
  {
    *(_WORD *)(v9 + 52) = v10;
    *(_WORD *)(*(_QWORD *)(a1[6] + 72) + 176LL) = v10;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *, _QWORD, __int64))(v7 + 16))(v7, &v15, v10, v9);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v17);
  v14 = a1[6];
  v13 = a1[11];
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, __int64))CmpRefreshParent,
    v7,
    a3,
    (__int64)&v13,
    0);
  CmpSearchForOpenSubKeys(a1[6], 1, 0LL);
  v11 = (unsigned int *)a1[13];
  if ( *v11 == 1 )
    CmpLightWeightSwapParentSubKeyList(v7, *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL), a1[13]);
  CmpLightWeightCleanupModifyKeyDataUoW(v7, v11);
  v12 = a1[6];
  a1[13] = 0LL;
  CmpDereferenceKeyControlBlockWithLock(v12, a3, 0);
  CmpDereferenceKeyControlBlockWithLock(a1[11], a3, 0);
}
