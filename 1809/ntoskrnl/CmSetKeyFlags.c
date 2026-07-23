/*
 * XREFs of CmSetKeyFlags @ 0x1407F061C
 * Callers:
 *     NtSetInformationKey @ 0x1406981A0 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000FB08 (CmpTransEnlistUowInCmTrans.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     CmpTransEnlistUowInKcb @ 0x14010EF28 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpLockIXLockExclusive @ 0x1405A9E88 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1405A9EE8 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1405AA2B8 (CmpRundownUnitOfWork.c)
 *     CmpGetKeyNodeForKcb @ 0x1405AB400 (CmpGetKeyNodeForKcb.c)
 *     CmpCleanupRollbackPacket @ 0x1405B0F78 (CmpCleanupRollbackPacket.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140695010 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmAddLogForAction @ 0x1406BE17C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406C893C (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406D0908 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpAbortRollbackPacket @ 0x140703A6C (CmpAbortRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14071D37C (CmpTryAcquireKcbIXLocks.c)
 *     CmpRetryBackOff @ 0x1407F9CA4 (CmpRetryBackOff.c)
 *     CmpLogUnsupportedOperation @ 0x1407FB244 (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmSetKeyFlags(__int64 a1, int a2, int a3)
{
  _QWORD *v3; // r12
  __int64 v6; // r15
  int v7; // edi
  __int64 v8; // rbx
  ULONG_PTR v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 KeyNodeForKcb; // rax
  __int64 v17; // rcx
  int v18; // r13d
  int v19; // r13d
  int v20; // r13d
  __int16 v21; // ax
  unsigned int v22; // eax
  unsigned int v23; // r14d
  __int64 v24; // rbx
  _QWORD *UnitOfWork; // rax
  ULONG v26; // edx
  __int64 v28; // [rsp+38h] [rbp-39h] BYREF
  __int64 v29; // [rsp+40h] [rbp-31h] BYREF
  __int64 v30; // [rsp+48h] [rbp-29h] BYREF
  __int64 v31; // [rsp+50h] [rbp-21h]
  int v32; // [rsp+58h] [rbp-19h] BYREF
  _QWORD *v33; // [rsp+60h] [rbp-11h]
  _BYTE v34[48]; // [rsp+68h] [rbp-9h] BYREF

  v33 = (_QWORD *)a1;
  v29 = 0xFFFFFFFFLL;
  v3 = (_QWORD *)a1;
  v28 = 0LL;
  v32 = 0;
  v30 = 0LL;
  v6 = 0LL;
  v31 = 0LL;
  CmpAttachToRegistryProcess((__int64)v34);
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
      v9 = v3[1];
      CmpLockKcbExclusive(v9);
      if ( *(_WORD *)(v9 + 58) )
      {
        CmpLogUnsupportedOperation(16LL);
        v7 = -1073741822;
        goto LABEL_55;
      }
      if ( *(_BYTE *)(v9 + 57) == 1 )
      {
        v7 = -1073741790;
        goto LABEL_55;
      }
      v7 = CmpPerformKeyBodyDeletionCheck((__int64)v3, 0LL);
      if ( v7 < 0 )
        goto LABEL_55;
      if ( v3[7] || v3[8] )
      {
        v7 = CmpTransSearchAddTransFromKeyBody(v3, &v28);
        if ( v7 < 0 )
          goto LABEL_55;
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 24) + 160LL) & 2) != 0 )
        {
          v7 = -1072103423;
          goto LABEL_55;
        }
        v11 = v28;
        v7 = CmpPerformKeyBodyDeletionCheck((__int64)v33, v28);
        if ( v7 < 0 )
          goto LABEL_55;
      }
      else
      {
        v11 = v28;
      }
      if ( (unsigned int)(a2 - 2) <= 2 )
        v11 = 0LL;
      v28 = v11;
      if ( v11 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v6 = (__int64)UnitOfWork;
        if ( !UnitOfWork )
        {
          v7 = -1073741670;
          goto LABEL_55;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v9);
        v7 = CmpTransEnlistUowInCmTrans((_QWORD *)v6, v11);
        if ( v7 >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v9 + 240), v6) && CmpLockIXLockExclusive(v9 + 256, (_QWORD *)v6, 1) )
          {
            *(_DWORD *)(v6 + 68) = 7;
            *(_DWORD *)(v6 + 88) = a3;
            v7 = CmAddLogForAction(v6, v26);
            if ( v7 >= 0 )
            {
              v7 = 0;
              goto LABEL_55;
            }
          }
          else
          {
            v7 = -1072103423;
          }
        }
LABEL_42:
        if ( v6 )
        {
          CmpRundownUnitOfWork((_QWORD *)v6);
          ExFreePoolWithTag((PVOID)v6, 0x77554D43u);
        }
        goto LABEL_55;
      }
      v12 = CmpTryAcquireKcbIXLocks(v9, 0LL, v10, (__int64)&v30);
      v7 = v12;
      if ( v12 != -1073741267 )
      {
        if ( v12 < 0 )
        {
LABEL_55:
          CmpUnlockKcb(v9);
          CmpUnlockRegistry();
          goto LABEL_57;
        }
        ExAcquirePushLockSharedEx(*(_QWORD *)(v9 + 24) + 72LL, 0LL);
        if ( HvpMarkCellDirty(*(_QWORD *)(v9 + 24), *(unsigned int *)(v9 + 32), 0) )
        {
          KeyNodeForKcb = CmpGetKeyNodeForKcb(v9, (__int64)&v29, 1);
          v17 = KeyNodeForKcb;
          v18 = a2 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                if ( v20 == 1 )
                {
                  *(_BYTE *)(KeyNodeForKcb + 55) = a3;
                  *(_BYTE *)(v9 + 177) = a3;
                }
              }
              else
              {
                v21 = *(_WORD *)(KeyNodeForKcb + 2);
                if ( (a3 & 4) != 0 )
                {
                  *(_WORD *)(v17 + 2) = v21 | 0x80;
                  *(_WORD *)(v9 + 178) |= 0x80u;
                }
                else
                {
                  if ( (a3 & 1) != 0 )
                  {
                    *(_WORD *)(v17 + 2) = v21 | 0x300;
                    *(_WORD *)(v9 + 178) |= 0x300u;
                  }
                  else
                  {
                    *(_WORD *)(v17 + 2) = v21 & 0xFEFF;
                    *(_WORD *)(v9 + 178) &= ~0x100u;
                  }
                  if ( (a3 & 2) != 0 )
                  {
                    *(_WORD *)(v17 + 2) |= 0x200u;
                    *(_WORD *)(v9 + 178) |= 0x200u;
                  }
                }
              }
            }
            else
            {
              v22 = *(_DWORD *)(KeyNodeForKcb + 52) ^ (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 20)) & 0xF00000;
              *(_DWORD *)(v17 + 52) = v22;
              *(_DWORD *)(v9 + 176) ^= (*(_DWORD *)(v9 + 176) ^ HIWORD(v22)) & 0xF0;
              if ( (a3 & 2) != 0 )
              {
                *(_WORD *)(v17 + 2) &= ~0x80u;
                *(_WORD *)(v9 + 178) = *(_WORD *)(v17 + 2);
              }
            }
          }
          else
          {
            v23 = *(_DWORD *)(KeyNodeForKcb + 52) ^ (*(_DWORD *)(KeyNodeForKcb + 52) ^ (a3 << 16)) & 0xF0000;
            *(_DWORD *)(KeyNodeForKcb + 52) = v23;
            *(_DWORD *)(v9 + 176) ^= (*(_DWORD *)(v9 + 176) ^ HIWORD(v23)) & 0xF;
          }
          *(_QWORD *)(v17 + 4) = v8;
          v7 = 0;
          ++*(_QWORD *)(v9 + 296);
          *(_QWORD *)(v9 + 160) = v8;
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), &v29);
        }
        else
        {
          v7 = -1073741443;
        }
        v24 = *(_QWORD *)(v9 + 24);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v24 + 72));
        KeAbPostRelease(v24 + 72);
        goto LABEL_42;
      }
      CmpLogTransactionAbortedWithChildName(v9, 0LL, 3u, v13, v30);
      CmpUnlockKcb(v9);
      CmpUnlockRegistry();
      v7 = CmpAbortRollbackPacket((__int64)&v30, 0LL);
      if ( v7 < 0 )
        goto LABEL_57;
      CmpRetryBackOff(&v32, v14, v15);
      CmpCleanupRollbackPacket((__int64)&v30);
      v3 = v33;
      v30 = 0LL;
      v31 = 0LL;
    }
    v7 = -1073741431;
  }
LABEL_57:
  KiUnstackDetachProcess((__int64)v34, 0LL);
  CmpCleanupRollbackPacket((__int64)&v30);
  return (unsigned int)v7;
}
