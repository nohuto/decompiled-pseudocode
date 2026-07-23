/*
 * XREFs of CmDeleteLayeredKey @ 0x14026CEBC
 * Callers:
 *     CmDeleteKey @ 0x1405AADD8 (CmDeleteKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpCreateTombstone @ 0x14026D34C (CmpCreateTombstone.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405AB470 (CmpUnlockHashEntryByKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1405AB51C (CmpCleanupDiscardReplaceContext.c)
 *     CmpLockKcbStackExclusive @ 0x1405AB5D8 (CmpLockKcbStackExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1405AB61C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDiscardKcb @ 0x1405AB6A8 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1405AB8A0 (CmpMarkKeyUnbacked.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1405AD984 (CmpRebuildKcbCacheFromNode.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1405AE310 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x1405AE6F8 (CmpFreeKeyByCell.c)
 *     CmpMarkKeyDirty @ 0x1405AF028 (CmpMarkKeyDirty.c)
 *     CmpHashUnicodeComponent @ 0x1405B02C4 (CmpHashUnicodeComponent.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405D0478 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpReportNotifyForKcbStack @ 0x1405DD11C (CmpReportNotifyForKcbStack.c)
 *     CmpCleanupKcbStack @ 0x140644FD0 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpFindSubKeyByNumber @ 0x1406B3F28 (CmpFindSubKeyByNumber.c)
 *     CmpHashCompressedComponent @ 0x1406F967C (CmpHashCompressedComponent.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x1407F21D8 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpIncrementKcbSequenceNumber @ 0x1407F2334 (CmpIncrementKcbSequenceNumber.c)
 *     HvpGetCellContextInitialize @ 0x1407FA888 (HvpGetCellContextInitialize.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407FAC0C (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1407FB030 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpInitializeDiscardReplaceContext @ 0x1407FB0CC (CmpInitializeDiscardReplaceContext.c)
 *     CmpInitializeKcbStack @ 0x1407FB100 (CmpInitializeKcbStack.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407FB39C (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFreeKeyValues @ 0x1407FE904 (CmpFreeKeyValues.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x1407FFF48 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteKey @ 0x1408067E0 (CmpPromoteKey.c)
 */

__int64 __fastcall CmDeleteLayeredKey(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rdi
  char v5; // si
  __int64 v6; // r15
  char v7; // r12
  int started; // ebx
  int SubKeyCountForKcbStack; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v19; // rsi
  unsigned int v20; // r14d
  unsigned int i; // r14d
  __int64 v22; // rax
  unsigned __int16 v23; // dx
  int v24; // eax
  int v25; // ebx
  __int64 v26; // rdx
  ULONG_PTR v27; // rbx
  __int64 KcbInHashEntryByCellIndex; // rax
  char v29; // al
  ULONG_PTR v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  _WORD v33[4]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v34; // [rsp+28h] [rbp-41h]
  _BYTE v35[32]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v36[32]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v37[80]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v38; // [rsp+D0h] [rbp+67h] BYREF
  char v39; // [rsp+E0h] [rbp+77h] BYREF
  char v40; // [rsp+E8h] [rbp+7Fh] BYREF

  CmpInitializeKcbStack(v35);
  CmpInitializeKcbStack(v36);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v6 = *(_QWORD *)(v4 + 64);
  HvpGetCellContextInitialize(&v40);
  HvpGetCellContextInitialize(&v39);
  CmpInitializeDiscardReplaceContext(v37);
  v7 = 0;
  if ( (*(_DWORD *)(v4 + 176) & 0x80000) != 0 )
  {
    started = -1073741535;
    goto LABEL_28;
  }
  started = CmpStartKcbStackForTopLayerKcb(v35, v4);
  if ( started >= 0 )
  {
    started = CmpStartKcbStackForTopLayerKcb(v36, v6);
    if ( started >= 0 )
    {
LABEL_23:
      CmpLockHashEntryExclusiveByKcb(v4);
      CmpLockKcbStackTopExclusiveRestShared(v36);
      CmpLockKcbStackExclusive(v35);
      while ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        SubKeyCountForKcbStack = CmpGetSubKeyCountForKcbStack(v35, v17, &v38);
        v10 = 0LL;
        started = SubKeyCountForKcbStack;
        if ( SubKeyCountForKcbStack < 0 )
          goto LABEL_26;
        if ( v38 )
        {
          started = -1073741535;
          goto LABEL_26;
        }
        v11 = *(_QWORD *)(v4 + 184);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 32);
          if ( v12 != v11 + 32 && !v5 )
            goto LABEL_22;
          if ( v12 != v11 + 32 )
          {
            v7 = 1;
            started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v4);
            if ( started < 0 )
              goto LABEL_26;
          }
        }
        v13 = *(unsigned int *)(v4 + 32);
        if ( (_DWORD)v13 != -1 )
        {
          if ( !v5 )
          {
LABEL_22:
            CmpUnlockKcbStack(v35);
            CmpUnlockKcbStack(v36);
            CmpUnlockHashEntryByKcb(v4);
            CmpUnlockRegistry();
            CmpLockRegistryExclusive();
            v5 = 1;
            goto LABEL_23;
          }
          v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v4 + 24) + 8LL))(
                  *(_QWORD *)(v4 + 24),
                  v13,
                  &v40);
          v20 = 0;
          if ( *(_DWORD *)(v19 + 24) + *(_DWORD *)(v19 + 20) )
          {
            while ( 1 )
            {
              started = CmpFindSubKeyByNumber(*(_QWORD *)(v4 + 24), v19, v20, &v38);
              if ( started < 0 )
                break;
              if ( !(unsigned __int8)CmpMarkKeyDirty(*(_QWORD *)(v4 + 24), v38) )
                goto LABEL_40;
              if ( ++v20 >= *(_DWORD *)(v19 + 24) + *(_DWORD *)(v19 + 20) )
                goto LABEL_36;
            }
          }
          else
          {
LABEL_36:
            if ( (unsigned __int8)CmpMarkKeyDirty(*(_QWORD *)(v4 + 24), *(unsigned int *)(v4 + 32)) )
            {
              CmpFindSubKeyByNumber(*(_QWORD *)(v4 + 24), v19, 0LL, &v38);
              for ( i = v38; v38 != -1; i = v38 )
              {
                v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v4 + 24) + 8LL))(
                        *(_QWORD *)(v4 + 24),
                        i,
                        &v39);
                v23 = *(_WORD *)(v22 + 72);
                if ( (*(_BYTE *)(v22 + 2) & 0x20) != 0 )
                {
                  v24 = CmpHashCompressedComponent(v22 + 76, v23);
                }
                else
                {
                  v34 = v22 + 76;
                  v33[0] = v23;
                  v33[1] = v23;
                  v24 = CmpHashUnicodeComponent(v33);
                }
                v25 = v24;
                (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v4 + 24) + 16LL))(*(_QWORD *)(v4 + 24), &v39);
                v26 = (unsigned int)(v25 + 37 * *(_DWORD *)(v4 + 8));
                v27 = *(_QWORD *)(v4 + 24);
                KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(v27, v26, i);
                if ( KcbInHashEntryByCellIndex )
                {
                  *(_DWORD *)(KcbInHashEntryByCellIndex + 32) = -1;
                  v27 = *(_QWORD *)(v4 + 24);
                }
                CmpFreeKeyByCell(v27);
                CmpFindSubKeyByNumber(*(_QWORD *)(v4 + 24), v19, 0LL, &v38);
              }
              CmpFreeKeyValues(*(_QWORD *)(v4 + 24));
              v29 = *(_BYTE *)(v19 + 13);
              *(_WORD *)(v19 + 2) &= 0x20u;
              *(_BYTE *)(v19 + 55) = 0;
              *(_DWORD *)(v19 + 52) &= 0xFF00FFFF;
              *(_BYTE *)(v19 + 13) = v29 & 0xFC | 1;
              *(_QWORD *)(v19 + 4) = 0LL;
              *(_QWORD *)(v19 + 56) = 0LL;
              *(_DWORD *)(v19 + 64) = 0;
              *(_WORD *)(v19 + 52) = 0;
              CmpIncrementKcbSequenceNumber(v4);
              CmpRebuildKcbCacheFromNode(v30);
              CmpReportNotifyForKcbStack(v36, 0LL, 1LL, a2);
              LOBYTE(v31) = 1;
              CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v4, v32, v31);
              CmpFlushNotifiesOnKeyBodyList(v4, 8LL);
              if ( v7 )
              {
                CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v4);
              }
              else
              {
                CmpMarkKeyUnbacked(v4);
                CmpDiscardKcb(v4);
              }
              started = 0;
            }
            else
            {
LABEL_40:
              started = -1073741670;
            }
          }
          (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(v4 + 24) + 16LL))(*(_QWORD *)(v4 + 24), &v40);
          goto LABEL_26;
        }
        if ( *(_DWORD *)(v6 + 32) != -1 )
          goto LABEL_18;
        CmpUnlockKcbStack(v35);
        CmpUnlockKcbStack(v36);
        LOBYTE(v14) = 1;
        v15 = CmpPromoteKey(v36, 0LL, v14);
        started = v15;
        if ( v15 == -1073741444 )
        {
          started = 0;
LABEL_27:
          CmpUnlockHashEntryByKcb(v4);
          goto LABEL_28;
        }
        if ( v15 < 0 )
          goto LABEL_27;
        CmpLockKcbStackExclusive(v35);
        if ( v5 )
        {
LABEL_18:
          started = CmpCreateTombstone(v11, v35, v10);
          if ( started >= 0 )
          {
            CmpReportNotifyForKcbStack(v36, 0LL, 1LL, a2);
            CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v4, v16, 0LL);
            CmpFlushNotifiesOnKeyBodyList(v4, 8LL);
            if ( v7 )
            {
              CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v4);
            }
            else
            {
              CmpMarkKeyUnbacked(v4);
              CmpDiscardKcb(v4);
            }
            started = 0;
          }
          goto LABEL_26;
        }
      }
      started = 0;
LABEL_26:
      CmpUnlockKcbStack(v35);
      CmpUnlockKcbStack(v36);
      goto LABEL_27;
    }
  }
LABEL_28:
  CmpCleanupDiscardReplaceContext(v37);
  CmpCleanupKcbStack(v35);
  CmpCleanupKcbStack(v36);
  return (unsigned int)started;
}
