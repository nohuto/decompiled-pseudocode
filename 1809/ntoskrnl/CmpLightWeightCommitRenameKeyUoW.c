/*
 * XREFs of CmpLightWeightCommitRenameKeyUoW @ 0x140804C84
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140695BDC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405AA42C (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDiscardKcb @ 0x1405AB6A8 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1405AB8A0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1405AE310 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     CmpSearchForOpenSubKeys @ 0x140692F60 (CmpSearchForOpenSubKeys.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1407F24BC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpUpdateParentForEachSon @ 0x1408015F8 (CmpUpdateParentForEachSon.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x1408047A0 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightSwapParentSubKeyList @ 0x140805E80 (CmpLightWeightSwapParentSubKeyList.c)
 */

__int64 __fastcall CmpLightWeightCommitRenameKeyUoW(__int64 *a1, _QWORD *a2, char a3)
{
  __int64 v5; // rax
  ULONG_PTR v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // r9
  unsigned __int16 v9; // dx
  unsigned int *v10; // rbx
  ULONG_PTR v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+54h] [rbp+Ch]
  int v16; // [rsp+58h] [rbp+10h] BYREF
  int v17; // [rsp+5Ch] [rbp+14h]

  v15 = 0;
  v17 = 0;
  v14 = -1;
  v5 = a1[6];
  v16 = -1;
  v6 = *(_QWORD *)(v5 + 24);
  CmpUpdateParentForEachSon(v6, *(unsigned int *)(v5 + 32), a3);
  HvFreeCell(v6, *(unsigned int *)(a1[11] + 32));
  CmpFlushNotifiesOnKeyBodyList(a1[11], 8LL, 1);
  CmpMarkKeyUnbacked(a1[11]);
  CmpDiscardKcb(a1[11]);
  ++*(_QWORD *)(a1[6] + 296);
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(v6, *(unsigned int *)(a1[6] + 32), &v14);
  *(_DWORD *)(v7 + 16) = *(_DWORD *)(*(_QWORD *)(a1[6] + 64) + 32LL);
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(
         v6,
         *(unsigned int *)(*(_QWORD *)(a1[6] + 64) + 32LL),
         &v16);
  *(_QWORD *)(v8 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1[6] + 64) + 160LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1[6] + 64) + 296LL);
  v9 = 2 * *(_WORD *)(v7 + 72);
  if ( (*(_BYTE *)(v7 + 2) & 0x20) == 0 )
    v9 = *(_WORD *)(v7 + 72);
  if ( (unsigned __int16)*(_DWORD *)(v8 + 52) < (unsigned int)v9 )
  {
    *(_WORD *)(v8 + 52) = v9;
    *(_WORD *)(*(_QWORD *)(a1[6] + 64) + 168LL) = v9;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *, _QWORD, __int64))(v6 + 16))(v6, &v14, v9, v8);
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v16);
  v13[1] = a1[6];
  v13[0] = a1[11];
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64))CmpRefreshParent,
    v6,
    (__int64)v13,
    0);
  CmpSearchForOpenSubKeys(a1[6], 1, 0LL);
  v10 = (unsigned int *)a1[13];
  if ( *v10 == 1 )
    CmpLightWeightSwapParentSubKeyList(v6, *(unsigned int *)(*(_QWORD *)(a1[6] + 64) + 32LL), a1[13]);
  CmpLightWeightCleanupModifyKeyDataUoW(v6, v10);
  v11 = a1[6];
  a1[13] = 0LL;
  CmpDereferenceKeyControlBlockWithLock(v11);
  return CmpDereferenceKeyControlBlockWithLock(a1[11]);
}
