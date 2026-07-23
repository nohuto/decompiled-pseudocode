/*
 * XREFs of CmpLightWeightPrepareRenameKeyUoW @ 0x1408057F8
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140695BDC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405AA42C (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpFreeKeyByCell @ 0x1405AE6F8 (CmpFreeKeyByCell.c)
 *     CmpRemoveSubKeyFromList @ 0x1405AF780 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyToList @ 0x1405AFCF4 (CmpAddSubKeyToList.c)
 *     CmpCleanupRollbackPacket @ 0x1405B0F78 (CmpCleanupRollbackPacket.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     HvAllocateCell @ 0x1405FCE54 (HvAllocateCell.c)
 *     CmpReferenceKeyControlBlock @ 0x140693BFC (CmpReferenceKeyControlBlock.c)
 *     CmpCopyCell @ 0x1406968D8 (CmpCopyCell.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407FAE88 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpMarkAllChildrenDirty @ 0x140800DDC (CmpMarkAllChildrenDirty.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x1408047A0 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x14080505C (CmpLightWeightCreateModificationData.c)
 */

__int64 __fastcall CmpLightWeightPrepareRenameKeyUoW(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r13
  ULONG_PTR v4; // rsi
  unsigned int *v5; // rdi
  int ModificationData; // eax
  unsigned int v7; // ebx
  ULONG_PTR v8; // r12
  ULONG_PTR v9; // rcx
  __int64 v10; // rax
  ULONG_PTR v11; // r15
  unsigned int v12; // r15d
  unsigned int *v13; // r12
  unsigned int v14; // eax
  _WORD *v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  char v18; // al
  __int64 v19; // r13
  __int64 v20; // rcx
  _DWORD v22[2]; // [rsp+30h] [rbp-48h] BYREF
  _WORD *v23; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v25; // [rsp+50h] [rbp-28h] BYREF
  _QWORD *v26; // [rsp+58h] [rbp-20h]
  __int64 v27; // [rsp+60h] [rbp-18h]
  __int64 v28; // [rsp+C0h] [rbp+48h] BYREF
  ULONG_PTR v29; // [rsp+C8h] [rbp+50h]
  ULONG_PTR v30; // [rsp+D0h] [rbp+58h]
  __int64 v31; // [rsp+D8h] [rbp+60h] BYREF

  v22[1] = 0;
  v22[0] = -1;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(int *)(a1 + 72);
  v31 = 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(v2 + 24);
  v24[0] = 0LL;
  v24[1] = 0LL;
  v5 = *(unsigned int **)(*(_QWORD *)(a1 + 80) + 104LL);
  v28 = (__int64)v5;
  if ( v5 )
  {
    ++*v5;
  }
  else
  {
    ModificationData = CmpLightWeightCreateModificationData(a1, (unsigned int **)&v28);
    v5 = (unsigned int *)v28;
    v7 = ModificationData;
    if ( ModificationData < 0 )
      goto LABEL_36;
  }
  if ( !CmpReferenceKeyControlBlock(*(_QWORD *)(a1 + 48)) )
  {
    v7 = -1073741670;
    goto LABEL_36;
  }
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_QWORD *)(a1 + 88);
  v29 = v8;
  if ( CmpReferenceKeyControlBlock(v9) )
  {
    v10 = *(_QWORD *)(a1 + 48);
    v11 = *(_QWORD *)(a1 + 88);
    v30 = v11;
    if ( !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v4 + 8))(
            v4,
            *(unsigned int *)(*(_QWORD *)(v10 + 64) + 32LL),
            v22) )
    {
      v7 = -1073741670;
      goto LABEL_32;
    }
    if ( !HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL) + 32LL), 1)
      || !HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), 1)
      || !HvpMarkCellDirty(v4, *(unsigned int *)(*(_QWORD *)(a1 + 88) + 32LL), 1) )
    {
      v7 = -1073741443;
LABEL_31:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v4 + 16))(v4, v22);
LABEL_32:
      if ( v11 )
        CmpDereferenceKeyControlBlockWithLock(v11);
      goto LABEL_34;
    }
    v12 = CmpCopyCell(v4, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 32LL), v4, v3);
    if ( v12 == -1 )
    {
      v7 = -1073741670;
LABEL_30:
      v11 = v30;
      goto LABEL_31;
    }
    v13 = &v5[v3];
    if ( v13[3] == -1 )
    {
      LODWORD(v28) = *(_DWORD *)(v4 + 212);
      v14 = HvAllocateCell(v4, 12, v3, &v23, &v31);
      v13[3] = v14;
      if ( v14 == -1 )
        goto LABEL_19;
      v15 = v23;
      *v23 = (unsigned int)v28 < 5 ? 26220 : 26732;
      v15[1] = 0;
      v5[v3 + 1] = 0;
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v4 + 16))(v4, &v31);
    }
    if ( CmpAddSubKeyToList(v4, v13 + 3, v12) )
    {
      ++v5[v3 + 1];
      v16 = *(_QWORD *)(a1 + 88);
      v17 = (unsigned __int64)*(unsigned int *)(v16 + 32) >> 31;
      if ( CmpRemoveSubKeyFromList(v4, (int *)&v5[v17 + 3], *(_DWORD *)(v16 + 32)) )
      {
        --v5[v17 + 1];
        v18 = CmpMarkAllChildrenDirty(v4, v12);
        v8 = v29;
        if ( v18 )
        {
          v25 = 0LL;
          v26 = v24;
          v27 = 1LL;
          CmpEnumerateAllHigherLayerKcbs(
            v29,
            (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
            (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
            (__int64)&v25,
            1,
            1);
          v7 = v25;
          if ( (int)v25 >= 0 )
          {
            v25 = 0LL;
            v19 = v30;
            v26 = v24;
            v27 = 1LL;
            CmpEnumerateAllHigherLayerKcbs(
              v30,
              (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
              (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
              (__int64)&v25,
              1,
              1);
            v7 = v25;
            if ( (int)v25 >= 0 )
            {
              v28 = 0x800000001LL;
              CmpEnumerateAllHigherLayerKcbs(
                v8,
                (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
                (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpInvalidateAllHigherLayerKcbsPostCallback,
                (__int64)&v28,
                1,
                1);
              v28 = 0x800000001LL;
              CmpEnumerateAllHigherLayerKcbs(
                v19,
                (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanUpHigherLayerKcbCachesPreCallback,
                (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpInvalidateAllHigherLayerKcbsPostCallback,
                (__int64)&v28,
                1,
                1);
              v20 = *(_QWORD *)(a1 + 48);
              *(_QWORD *)(a1 + 104) = v5;
              v7 = 0;
              v5 = 0LL;
              v30 = 0LL;
              v8 = 0LL;
              *(_DWORD *)(a1 + 96) = *(_DWORD *)(v20 + 32);
              *(_DWORD *)(v20 + 32) = v12;
              v12 = -1;
            }
          }
        }
        else
        {
          v7 = -1073741670;
        }
        goto LABEL_28;
      }
    }
LABEL_19:
    v8 = v29;
    v7 = -1073741670;
LABEL_28:
    if ( v12 != -1 )
      CmpFreeKeyByCell(v4, v12, 0);
    goto LABEL_30;
  }
  v7 = -1073741670;
LABEL_34:
  if ( v8 )
    CmpDereferenceKeyControlBlockWithLock(v8);
LABEL_36:
  if ( v5 )
    CmpLightWeightCleanupModifyKeyDataUoW(v4, v5);
  CmpCleanupRollbackPacket((__int64)v24);
  return v7;
}
