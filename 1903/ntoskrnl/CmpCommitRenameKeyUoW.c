/*
 * XREFs of CmpCommitRenameKeyUoW @ 0x14083C9BC
 * Callers:
 *     CmpTransMgrCommitUoW @ 0x14063367C (CmpTransMgrCommitUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     HvFreeCell @ 0x14062DCA8 (HvFreeCell.c)
 *     HvAllocateCell @ 0x14062E37C (HvAllocateCell.c)
 *     CmpFreeKeyByCell @ 0x140631398 (CmpFreeKeyByCell.c)
 *     CmpDiscardKcb @ 0x14063A964 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14063AB64 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063ABE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanupRollbackPacket @ 0x1406627FC (CmpCleanupRollbackPacket.c)
 *     CmpSearchForOpenSubKeys @ 0x14069A650 (CmpSearchForOpenSubKeys.c)
 *     CmpReferenceKeyControlBlock @ 0x14069B5DC (CmpReferenceKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C6B20 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpRemoveSubKey @ 0x1406D6948 (CmpRemoveSubKey.c)
 *     CmpMarkIndexDirty @ 0x1406D8A5C (CmpMarkIndexDirty.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082B5BC (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x140833260 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140833600 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpAddSubKey @ 0x140837E8C (CmpAddSubKey.c)
 *     CmpUpdateParentForEachSon @ 0x14083974C (CmpUpdateParentForEachSon.c)
 *     HvMarkCellDirty @ 0x14083A4F8 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpCommitRenameKeyUoW(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // r14
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // rdi
  ULONG_PTR v7; // r12
  ULONG_PTR v8; // r15
  __int64 v9; // r13
  int v10; // ebx
  void *v11; // rax
  unsigned int Cell; // eax
  _DWORD *v13; // r14
  unsigned int v14; // ebx
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int16 v20; // dx
  unsigned int v21; // eax
  __int64 v22; // rax
  _DWORD v23[2]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v24[2]; // [rsp+38h] [rbp-40h] BYREF
  void *Src; // [rsp+40h] [rbp-38h]
  void *v26; // [rsp+48h] [rbp-30h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v28; // [rsp+60h] [rbp-18h] BYREF
  __int64 v29; // [rsp+68h] [rbp-10h]
  unsigned int BugCheckParameter3; // [rsp+C0h] [rbp+48h]
  unsigned int BugCheckParameter3a; // [rsp+C0h] [rbp+48h]
  int v34; // [rsp+D8h] [rbp+60h] BYREF
  int v35; // [rsp+DCh] [rbp+64h]

  v26 = 0LL;
  v23[0] = -1;
  v4 = a3;
  v24[0] = -1;
  v34 = -1;
  v5 = *(_QWORD *)(a1 + 48);
  v23[1] = 0;
  v24[1] = 0;
  v35 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v27[0] = 0LL;
  v27[1] = 0LL;
  v6 = *(_QWORD *)(v5 + 32);
  BugCheckParameter3 = *(_DWORD *)(a1 + 72);
  CmpReferenceKeyControlBlock(v5);
  v7 = *(_QWORD *)(a1 + 48);
  CmpReferenceKeyControlBlock(*(_QWORD *)(a1 + 88));
  v8 = *(_QWORD *)(a1 + 88);
  v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(
         v6,
         *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
         v24);
  if ( !v9 )
  {
    v10 = -1073741670;
LABEL_25:
    if ( v7 )
      CmpDereferenceKeyControlBlockWithLock(v7, v4, 0);
    if ( v8 )
      CmpDereferenceKeyControlBlockWithLock(v8, v4, 0);
    CmpCleanupRollbackPacket((__int64)v27);
    return (unsigned int)v10;
  }
  if ( !HvMarkCellDirty(v6, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL), 1)
    || !HvMarkCellDirty(v6, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 1)
    || !HvMarkCellDirty(v6, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 40LL), 1)
    || !CmpMarkIndexDirty(
          v6,
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 88) + 40LL)) )
  {
    v10 = -1073741443;
LABEL_24:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v24);
    goto LABEL_25;
  }
  ++*(_QWORD *)(v7 + 304);
  ++*(_QWORD *)(v8 + 304);
  v10 = CmpPrepareToInvalidateAllHigherLayerKcbs(v7, 1u, (__int64)v27);
  if ( v10 < 0 )
    goto LABEL_24;
  v10 = CmpPrepareToInvalidateAllHigherLayerKcbs(v8, 1u, (__int64)v27);
  if ( v10 < 0 )
    goto LABEL_24;
  CmpInvalidateAllHigherLayerKcbs(v7, 1u, 8, v4);
  CmpInvalidateAllHigherLayerKcbs(v8, 1u, 8, v4);
  v11 = (void *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v6 + 8))(
                  v6,
                  *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL),
                  &v34);
  Src = v11;
  if ( !v11 )
  {
    v10 = -1073741670;
    goto LABEL_24;
  }
  Cell = HvAllocateCell(v6, -4 - *((_DWORD *)v11 - 1), BugCheckParameter3, (__int64)&v26, (__int64)v23);
  v13 = v26;
  v14 = Cell;
  BugCheckParameter3a = Cell;
  if ( Cell == -1 )
  {
    v10 = -1073741443;
    v15 = -1;
    goto LABEL_19;
  }
  memmove(v26, Src, -4 - *((_DWORD *)Src - 1));
  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v34);
  v16 = *(_QWORD *)(a1 + 48);
  Src = 0LL;
  if ( !CmpAddSubKey(v6, *(unsigned int *)(*(_QWORD *)(v16 + 72) + 40LL), v14)
    || !CmpRemoveSubKey(
          v6,
          *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 88) + 40LL)) )
  {
    v15 = BugCheckParameter3a;
    v10 = -1073741670;
LABEL_21:
    if ( v13 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v23);
      CmpFreeKeyByCell(v6, v15, 0);
    }
    v4 = a3;
    goto LABEL_24;
  }
  if ( !CmpUpdateParentForEachSon(v6, v14, 1) )
  {
    v10 = -1073741670;
    v15 = BugCheckParameter3a;
    CmpRemoveSubKey(v6, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL), BugCheckParameter3a);
    CmpAddSubKey(
      v6,
      *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 88) + 40LL));
LABEL_19:
    if ( Src )
      (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v34);
    goto LABEL_21;
  }
  HvFreeCell(v6, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 40LL));
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 88), 8LL, a3, 1);
  CmpMarkKeyUnbacked(*(_QWORD *)(a1 + 88));
  CmpDiscardKcb(*(_QWORD *)(a1 + 88));
  v18 = *(_QWORD *)(a1 + 48);
  v19 = *a2;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(v18 + 40);
  *(_DWORD *)(v18 + 40) = v14;
  v13[4] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL);
  ++*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 304LL);
  *(_QWORD *)(v9 + 4) = v19;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 168LL) = v19;
  v20 = *((_WORD *)v13 + 36);
  if ( (*((_BYTE *)v13 + 2) & 0x20) != 0 )
    v20 *= 2;
  if ( (unsigned __int16)*(_DWORD *)(v9 + 52) < (unsigned int)v20 )
  {
    *(_WORD *)(v9 + 52) = v20;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 176LL) = v20;
  }
  v21 = *((unsigned __int16 *)v13 + 37);
  if ( *(_DWORD *)(v9 + 56) < v21 )
    *(_DWORD *)(v9 + 56) = v21;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v23);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v24);
  v22 = *(_QWORD *)(a1 + 88);
  v29 = *(_QWORD *)(a1 + 48);
  v28 = v22;
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, __int64))CmpRefreshParent,
    *(_QWORD *)(v29 + 32),
    a3,
    (__int64)&v28,
    1);
  CmpSearchForOpenSubKeys(*(_QWORD *)(a1 + 48), 1, 0LL);
  CmpDereferenceKeyControlBlockWithLock(v7, a3, 0);
  CmpDereferenceKeyControlBlockWithLock(v8, a3, 0);
  CmpCleanupRollbackPacket((__int64)v27);
  return 0LL;
}
