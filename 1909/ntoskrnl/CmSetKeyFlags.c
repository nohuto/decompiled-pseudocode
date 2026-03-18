/*
 * XREFs of CmSetKeyFlags @ 0x14082937C
 * Callers:
 *     NtSetInformationKey @ 0x1406B8050 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x140112BCC (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14012EEB8 (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     HvUnlockHiveFlusherShared @ 0x1406312D0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140631304 (HvLockHiveFlusherShared.c)
 *     CmpRundownUnitOfWork @ 0x14063582C (CmpRundownUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140635D2C (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140635EBC (CmpLockIXLockExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140636374 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockKcbExclusive @ 0x140661A18 (CmpLockKcbExclusive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpGetKeyNodeForKcb @ 0x140669AE0 (CmpGetKeyNodeForKcb.c)
 *     CmpCleanupRollbackPacket @ 0x1406B9FA4 (CmpCleanupRollbackPacket.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406BAB84 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpAbortRollbackPacket @ 0x1406BACDC (CmpAbortRollbackPacket.c)
 *     CmAddLogForAction @ 0x1406BB324 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406DA1BC (CmpAllocateUnitOfWork.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1407470A4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpRetryBackOff @ 0x1408315E8 (CmpRetryBackOff.c)
 *     CmpLogUnsupportedOperation @ 0x1408329E4 (CmpLogUnsupportedOperation.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140832D1C (CmpReleaseKeyNodeForKcb.c)
 *     HvMarkCellDirty @ 0x140839B58 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14083C4A0 (CmpFreeUnitOfWork.c)
 */

__int64 __fastcall CmSetKeyFlags(__int64 a1, int a2, int a3)
{
  _QWORD *v5; // r12
  __int64 v6; // r15
  int v7; // edi
  __int64 v8; // rbx
  ULONG_PTR v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r12
  int v13; // eax
  __int64 KeyNodeForKcb; // rax
  __int64 v15; // rcx
  int v16; // r13d
  int v17; // r13d
  int v18; // r13d
  __int16 v19; // ax
  unsigned int v20; // r14d
  _QWORD *UnitOfWork; // rax
  ULONG v22; // edx
  __int64 v24; // [rsp+28h] [rbp-39h] BYREF
  __int64 v25; // [rsp+30h] [rbp-31h] BYREF
  __int64 v26; // [rsp+38h] [rbp-29h] BYREF
  __int64 v27; // [rsp+40h] [rbp-21h]
  int v28; // [rsp+48h] [rbp-19h] BYREF
  _QWORD *v29; // [rsp+50h] [rbp-11h]
  _BYTE v30[48]; // [rsp+58h] [rbp-9h] BYREF

  v29 = (_QWORD *)a1;
  v5 = (_QWORD *)a1;
  memset(v30, 0, sizeof(v30));
  v25 = 0xFFFFFFFFLL;
  v6 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v28 = 0;
  CmpAttachToRegistryProcess((__int64)v30);
  if ( a2 == 1 && (a3 & 0xFFFFFFF0) != 0 )
  {
    v7 = -1073741811;
  }
  else
  {
    while ( (CmpShutdownRundown & 1) == 0 )
    {
      v8 = MEMORY[0xFFFFF78000000014];
      CmpLockRegistry();
      v9 = v5[1];
      CmpLockKcbExclusive(v9);
      if ( *(_WORD *)(v9 + 66) )
      {
        CmpLogUnsupportedOperation(16LL, v10);
        v7 = -1073741822;
        goto LABEL_53;
      }
      if ( *(_BYTE *)(v9 + 65) == 1 )
      {
        v7 = -1073741790;
        goto LABEL_53;
      }
      v7 = CmpPerformKeyBodyDeletionCheck((__int64)v5, 0LL);
      if ( v7 < 0 )
        goto LABEL_53;
      if ( v5[7] || v5[8] )
      {
        v7 = CmpTransSearchAddTransFromKeyBody(v5, &v24);
        if ( v7 < 0 )
          goto LABEL_53;
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
        {
          v7 = -1072103423;
          goto LABEL_53;
        }
        v12 = v24;
        v7 = CmpPerformKeyBodyDeletionCheck((__int64)v29, v24);
        if ( v7 < 0 )
          goto LABEL_53;
      }
      else
      {
        v12 = v24;
      }
      if ( (unsigned int)(a2 - 2) <= 2 )
        v12 = 0LL;
      v24 = v12;
      if ( v12 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v6 = (__int64)UnitOfWork;
        if ( !UnitOfWork )
        {
          v7 = -1073741670;
          goto LABEL_53;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v9);
        v7 = CmpTransEnlistUowInCmTrans((_QWORD *)v6, v12);
        if ( v7 >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v9 + 248), v6) && CmpLockIXLockExclusive(v9 + 264, (_QWORD *)v6, 1) )
          {
            *(_DWORD *)(v6 + 68) = 7;
            *(_DWORD *)(v6 + 88) = a3;
            v7 = CmAddLogForAction(v6, v22);
            if ( v7 >= 0 )
            {
              v7 = 0;
              goto LABEL_53;
            }
          }
          else
          {
            v7 = -1072103423;
          }
        }
LABEL_40:
        if ( v6 )
        {
          CmpRundownUnitOfWork((_QWORD *)v6);
          CmpFreeUnitOfWork(v6);
        }
        goto LABEL_53;
      }
      v13 = CmpTryAcquireKcbIXLocks(v9, 0LL, v11, (__int64)&v26);
      v7 = v13;
      if ( v13 != -1073741267 )
      {
        if ( v13 < 0 )
        {
LABEL_53:
          CmpUnlockKcb(v9);
          CmpUnlockRegistry();
          goto LABEL_55;
        }
        HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        if ( (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40), 0LL) )
        {
          KeyNodeForKcb = CmpGetKeyNodeForKcb(v9, (__int64)&v25, 1);
          v15 = KeyNodeForKcb;
          v16 = a2 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                if ( v18 == 1 )
                {
                  *(_BYTE *)(KeyNodeForKcb + 55) = a3;
                  *(_BYTE *)(v9 + 185) = a3;
                }
              }
              else
              {
                v19 = *(_WORD *)(KeyNodeForKcb + 2);
                if ( (a3 & 4) != 0 )
                {
                  *(_WORD *)(v15 + 2) = v19 | 0x80;
                  *(_WORD *)(v9 + 186) |= 0x80u;
                }
                else
                {
                  if ( (a3 & 1) != 0 )
                  {
                    *(_WORD *)(v15 + 2) = v19 | 0x300;
                    *(_WORD *)(v9 + 186) |= 0x300u;
                  }
                  else
                  {
                    *(_WORD *)(v15 + 2) = v19 & 0xFEFF;
                    *(_WORD *)(v9 + 186) &= ~0x100u;
                  }
                  if ( (a3 & 2) != 0 )
                  {
                    *(_WORD *)(v15 + 2) |= 0x200u;
                    *(_WORD *)(v9 + 186) |= 0x200u;
                  }
                }
              }
            }
            else
            {
              *(_DWORD *)(KeyNodeForKcb + 52) ^= (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 20)) & 0xF00000;
              *(_DWORD *)(v9 + 184) ^= (*(_DWORD *)(v9 + 184) ^ *(unsigned __int16 *)(KeyNodeForKcb + 54)) & 0xF0;
              if ( (a3 & 2) != 0 )
              {
                *(_WORD *)(KeyNodeForKcb + 2) &= ~0x80u;
                *(_WORD *)(v9 + 186) = *(_WORD *)(KeyNodeForKcb + 2);
              }
            }
          }
          else
          {
            v20 = *(_DWORD *)(KeyNodeForKcb + 52) ^ (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 16)) & 0xF0000;
            *(_DWORD *)(KeyNodeForKcb + 52) = v20;
            *(_DWORD *)(v9 + 184) ^= (*(_DWORD *)(v9 + 184) ^ HIWORD(v20)) & 0xF;
          }
          *(_QWORD *)(v15 + 4) = v8;
          ++*(_QWORD *)(v9 + 304);
          *(_QWORD *)(v9 + 168) = v8;
          v7 = 0;
          CmpReleaseKeyNodeForKcb(v9, &v25);
        }
        else
        {
          v7 = -1073741443;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        goto LABEL_40;
      }
      CmpLogTransactionAbortedForRollbackPacket(v9, 3u);
      CmpUnlockKcb(v9);
      CmpUnlockRegistry();
      v7 = CmpAbortRollbackPacket((__int64)&v26);
      if ( v7 < 0 )
        goto LABEL_55;
      CmpRetryBackOff(&v28);
      CmpCleanupRollbackPacket((__int64)&v26);
      v5 = v29;
      v26 = 0LL;
      v27 = 0LL;
    }
    v7 = -1073741431;
  }
LABEL_55:
  CmpDetachFromRegistryProcess((struct _KTHREAD *)v30);
  CmpCleanupRollbackPacket((__int64)&v26);
  return (unsigned int)v7;
}
