/*
 * XREFs of CmDeleteLayeredKey @ 0x140280714
 * Callers:
 *     CmDeleteKey @ 0x14063846C (CmDeleteKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpCreateTombstone @ 0x140280C1C (CmpCreateTombstone.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1405F83F0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1405FCF50 (CmpCleanupKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FD470 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FD520 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x14062D4D0 (CmpReportNotifyForKcbStack.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140630F78 (CmpRebuildKcbCacheFromNode.c)
 *     CmpMarkKeyDirty @ 0x140631144 (CmpMarkKeyDirty.c)
 *     CmpFreeKeyByCell @ 0x140631398 (CmpFreeKeyByCell.c)
 *     CmpUnlockHashEntryByKcb @ 0x140631900 (CmpUnlockHashEntryByKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140631C1C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpHashUnicodeComponent @ 0x140632D10 (CmpHashUnicodeComponent.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140638A70 (CmpCleanupDiscardReplaceContext.c)
 *     CmpLockKcbStackExclusive @ 0x140638B38 (CmpLockKcbStackExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14063A3C0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpDiscardKcb @ 0x14063A964 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14063AB64 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063ABE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFindSubKeyByNumber @ 0x1406D8E24 (CmpFindSubKeyByNumber.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1406F7F50 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpHashCompressedComponent @ 0x1407133F0 (CmpHashCompressedComponent.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x14082B2B8 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpIncrementKcbSequenceNumber @ 0x14082B420 (CmpIncrementKcbSequenceNumber.c)
 *     HvpGetCellContextInitialize @ 0x140832B6C (HvpGetCellContextInitialize.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140832EBC (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpInitializeDiscardReplaceContext @ 0x1408331BC (CmpInitializeDiscardReplaceContext.c)
 *     CmpInitializeKcbStack @ 0x1408331E4 (CmpInitializeKcbStack.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1408334DC (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFreeKeyValues @ 0x140836B54 (CmpFreeKeyValues.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14083814C (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteKey @ 0x14083EDCC (CmpPromoteKey.c)
 */

__int64 __fastcall CmDeleteLayeredKey(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v5; // rdi
  char v6; // r14
  __int64 v7; // r12
  char v8; // r13
  int started; // ebx
  int SubKeyCountForKcbStack; // eax
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // r14
  unsigned int v27; // r15d
  unsigned int i; // r15d
  __int64 v29; // rax
  unsigned __int16 v30; // dx
  int v31; // eax
  int v32; // ebx
  __int64 v33; // rdx
  ULONG_PTR v34; // rbx
  __int64 KcbInHashEntryByCellIndex; // rax
  char v36; // al
  ULONG_PTR v37; // rcx
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // [rsp+20h] [rbp-59h] BYREF
  __int64 v41; // [rsp+28h] [rbp-51h] BYREF
  __int64 v42; // [rsp+30h] [rbp-49h]
  _BYTE v43[32]; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v44[32]; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v45[88]; // [rsp+78h] [rbp-1h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v47; // [rsp+E8h] [rbp+6Fh]
  __int64 v48; // [rsp+F8h] [rbp+7Fh] BYREF

  v47 = a2;
  memset(v43, 0, sizeof(v43));
  memset(v44, 0, sizeof(v44));
  v41 = 0LL;
  v42 = 0LL;
  v48 = 0LL;
  v40 = 0LL;
  memset(v45, 0, 0x20uLL);
  CmpInitializeKcbStack(v43);
  CmpInitializeKcbStack(v44);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v7 = *(_QWORD *)(v5 + 72);
  HvpGetCellContextInitialize(&v40);
  HvpGetCellContextInitialize(&v48);
  CmpInitializeDiscardReplaceContext(v45);
  v8 = 0;
  if ( (*(_DWORD *)(v5 + 184) & 0x80000) != 0 )
  {
    started = -1073741535;
    goto LABEL_28;
  }
  started = CmpStartKcbStackForTopLayerKcb(v43, v5);
  if ( started >= 0 )
  {
    started = CmpStartKcbStackForTopLayerKcb(v44, v7);
    if ( started >= 0 )
    {
LABEL_23:
      CmpLockHashEntryExclusiveByKcb(v5);
      CmpLockKcbStackTopExclusiveRestShared(v44);
      CmpLockKcbStackExclusive(v43);
      while ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        SubKeyCountForKcbStack = CmpGetSubKeyCountForKcbStack(v43, &BugCheckParameter3);
        v12 = 0LL;
        started = SubKeyCountForKcbStack;
        if ( SubKeyCountForKcbStack < 0 )
          goto LABEL_26;
        if ( (_DWORD)BugCheckParameter3 )
        {
          started = -1073741535;
          goto LABEL_26;
        }
        v13 = *(_QWORD *)(v5 + 192);
        if ( v13 )
        {
          v14 = (_QWORD *)(v13 + 32);
          v11 = (_QWORD *)*v14;
          if ( (_QWORD *)*v14 != v14 )
          {
            if ( !v6 )
              goto LABEL_22;
            if ( v11 != v14 )
            {
              v8 = 1;
              started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v5, v45, 0LL);
              if ( started < 0 )
                goto LABEL_26;
            }
          }
        }
        v15 = *(unsigned int *)(v5 + 40);
        if ( (_DWORD)v15 != -1 )
        {
          if ( !v6 )
          {
LABEL_22:
            CmpUnlockKcbStack(v43);
            CmpUnlockKcbStack(v44);
            CmpUnlockHashEntryByKcb(v5);
            CmpUnlockRegistry(v20, v19, v21);
            CmpLockRegistryExclusive(v23, v22, v24);
            v6 = 1;
            goto LABEL_23;
          }
          v26 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
                  *(_QWORD *)(v5 + 32),
                  v15,
                  &v40);
          v27 = 0;
          if ( *(_DWORD *)(v26 + 24) + *(_DWORD *)(v26 + 20) )
          {
            while ( 1 )
            {
              started = CmpFindSubKeyByNumber(*(_QWORD *)(v5 + 32), v26, v27, &BugCheckParameter3, v40, v41, v42);
              if ( started < 0 )
                break;
              if ( !(unsigned __int8)CmpMarkKeyDirty(*(_QWORD *)(v5 + 32), (unsigned int)BugCheckParameter3) )
                goto LABEL_40;
              if ( ++v27 >= *(_DWORD *)(v26 + 24) + *(_DWORD *)(v26 + 20) )
                goto LABEL_36;
            }
          }
          else
          {
LABEL_36:
            if ( (unsigned __int8)CmpMarkKeyDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40)) )
            {
              CmpFindSubKeyByNumber(*(_QWORD *)(v5 + 32), v26, 0LL, &BugCheckParameter3, v40, v41, v42);
              for ( i = BugCheckParameter3; (_DWORD)BugCheckParameter3 != -1; i = BugCheckParameter3 )
              {
                v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
                        *(_QWORD *)(v5 + 32),
                        i,
                        &v48);
                v30 = *(_WORD *)(v29 + 72);
                if ( (*(_BYTE *)(v29 + 2) & 0x20) != 0 )
                {
                  v31 = CmpHashCompressedComponent(v29 + 76, v30);
                }
                else
                {
                  v42 = v29 + 76;
                  LOWORD(v41) = v30;
                  WORD1(v41) = v30;
                  v31 = CmpHashUnicodeComponent(&v41);
                }
                v32 = v31;
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 16LL))(*(_QWORD *)(v5 + 32), &v48);
                v33 = (unsigned int)(v32 + 37 * *(_DWORD *)(v5 + 16));
                v34 = *(_QWORD *)(v5 + 32);
                KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(v34, v33, i);
                if ( KcbInHashEntryByCellIndex )
                {
                  *(_DWORD *)(KcbInHashEntryByCellIndex + 40) = -1;
                  v34 = *(_QWORD *)(v5 + 32);
                }
                CmpFreeKeyByCell(v34, i);
                CmpFindSubKeyByNumber(*(_QWORD *)(v5 + 32), v26, 0LL, &BugCheckParameter3, v40, v41, v42);
              }
              CmpFreeKeyValues(*(_QWORD *)(v5 + 32));
              v36 = *(_BYTE *)(v26 + 13) & 0xFD;
              *(_BYTE *)(v26 + 55) = 0;
              *(_DWORD *)(v26 + 52) &= 0xFF00FFFF;
              *(_BYTE *)(v26 + 13) = v36 | 1;
              *(_WORD *)(v26 + 2) &= 0x20u;
              *(_QWORD *)(v26 + 4) = 0LL;
              *(_QWORD *)(v26 + 56) = 0LL;
              *(_DWORD *)(v26 + 64) = 0;
              *(_WORD *)(v26 + 52) = 0;
              CmpIncrementKcbSequenceNumber(v5);
              CmpRebuildKcbCacheFromNode(v37);
              CmpReportNotifyForKcbStack(v44, 0LL, 1LL, v47);
              LOBYTE(v38) = 1;
              CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v5, v39, a3, v38);
              CmpFlushNotifiesOnKeyBodyList(v5, 8LL, a3);
              if ( v8 )
              {
                CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v5);
              }
              else
              {
                CmpMarkKeyUnbacked(v5, a3);
                CmpDiscardKcb(v5);
              }
              started = 0;
            }
            else
            {
LABEL_40:
              started = -1073741670;
            }
          }
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 16LL))(*(_QWORD *)(v5 + 32), &v40);
          goto LABEL_26;
        }
        if ( *(_DWORD *)(v7 + 40) != -1 )
          goto LABEL_18;
        CmpUnlockKcbStack(v43);
        CmpUnlockKcbStack(v44);
        LOBYTE(v16) = 1;
        v17 = CmpPromoteKey(v44, 0LL, v16);
        started = v17;
        if ( v17 == -1073741444 )
        {
          started = 0;
LABEL_27:
          CmpUnlockHashEntryByKcb(v5);
          goto LABEL_28;
        }
        if ( v17 < 0 )
          goto LABEL_27;
        CmpLockKcbStackExclusive(v43);
        if ( v6 )
        {
LABEL_18:
          started = CmpCreateTombstone(v11, v43, v12);
          if ( started >= 0 )
          {
            CmpReportNotifyForKcbStack(v44, 0LL, 1LL, v47);
            CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v5, v18, a3, 0LL);
            CmpFlushNotifiesOnKeyBodyList(v5, 8LL, a3);
            if ( v8 )
            {
              CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v5);
            }
            else
            {
              CmpMarkKeyUnbacked(v5, a3);
              CmpDiscardKcb(v5);
            }
            started = 0;
          }
          goto LABEL_26;
        }
      }
      started = 0;
LABEL_26:
      CmpUnlockKcbStack(v43);
      CmpUnlockKcbStack(v44);
      goto LABEL_27;
    }
  }
LABEL_28:
  CmpCleanupDiscardReplaceContext(v45, a3);
  CmpCleanupKcbStack(v43);
  CmpCleanupKcbStack(v44);
  return (unsigned int)started;
}
