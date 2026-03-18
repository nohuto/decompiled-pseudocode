/*
 * XREFs of CmpPromoteKey @ 0x14083E42C
 * Callers:
 *     CmDeleteLayeredKey @ 0x140280474 (CmDeleteLayeredKey.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmSetLastWriteTimeKey @ 0x1408297E0 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008D0A0 (CmpAllocateTransientPoolWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockKcbStack @ 0x1405F9440 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStack @ 0x1405FE000 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1405FE060 (CmpPopulateKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140600710 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyStackDeleted @ 0x140636AB0 (CmpIsKeyStackDeleted.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14063D450 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x14083DBA4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14083E6F0 (CmpPromoteSingleKeyFromKcbStacks.c)
 */

__int64 __fastcall CmpPromoteKey(__int64 a1, char a2, char a3)
{
  __int16 v4; // di
  __int16 v5; // dx
  __int64 v6; // r8
  struct _LOOKASIDE_LIST_EX *v7; // r9
  int started; // ebx
  __int64 v9; // r8
  struct _LOOKASIDE_LIST_EX *v10; // r9
  struct _LOOKASIDE_LIST_EX *v11; // r9
  bool v12; // r15
  unsigned int v13; // r14d
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v15; // r12
  __int64 v16; // rdi
  __int64 i; // rsi
  PPRIVILEGE_SET *v18; // r12
  PPRIVILEGE_SET *v19; // r13
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rsi
  PPRIVILEGE_SET *v29; // rax
  PPRIVILEGE_SET v31[4]; // [rsp+30h] [rbp-48h] BYREF
  PPRIVILEGE_SET v32[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 KcbAtLayerHeight; // [rsp+C0h] [rbp+48h]
  struct _PRIVILEGE_SET *Privileges; // [rsp+D8h] [rbp+60h]

  memset(v31, 0, sizeof(v31));
  WORD1(v31[0]) = -1;
  memset(v32, 0, 0x20uLL);
  v4 = *(_WORD *)(a1 + 2);
  WORD1(v32[0]) = -1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v4);
  started = CmpStartKcbStack((__int64)v31, v5, v6, v7);
  if ( started < 0 )
    goto LABEL_33;
  started = CmpStartKcbStack((__int64)v32, v4, v9, v10);
  if ( started < 0 )
    goto LABEL_33;
  v12 = 1;
  v13 = ((*(_DWORD *)(KcbAtLayerHeight + 8) >> 21) & 0x3FF) + 1;
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                    PagedPool,
                                                    8LL * v13,
                                                    0x37364D43u,
                                                    v11);
  Privileges = TransientPoolWithTag;
  v15 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
  {
    started = -1073741670;
    goto LABEL_33;
  }
  memset(TransientPoolWithTag, 0, 8LL * v13);
  LODWORD(v16) = v13;
  for ( i = KcbAtLayerHeight; (*(_DWORD *)(i + 184) & 0x40000) == 0; i = *(_QWORD *)(i + 72) )
  {
    v16 = (*(_DWORD *)(i + 8) >> 21) & 0x3FF;
    *((_QWORD *)&v15->PrivilegeCount + v16) = i;
  }
  v18 = v31;
  v19 = v32;
  CmpPopulateKcbStack((__int64)v32, i);
  CmpLockKcbStackTopExclusiveRestShared((__int64)v32);
  v20 = KcbAtLayerHeight;
  if ( i == KcbAtLayerHeight )
  {
    if ( a2 )
    {
      ExAcquirePushLockSharedEx(*(_QWORD *)(i + 32) + 72LL, 0LL);
      v21 = CmpFullPromoteHiveRootFromKcbStack((__int64)v32);
      v22 = *(_QWORD *)(i + 32);
      started = v21;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v22 + 72));
      KeAbPostRelease(v22 + 72);
      if ( started < 0 )
        goto LABEL_31;
    }
LABEL_29:
    started = 0;
    v12 = a3 == 0;
    goto LABEL_30;
  }
  if ( (unsigned int)v16 >= v13 )
    goto LABEL_29;
  while ( 1 )
  {
    v23 = *((_QWORD *)&Privileges->PrivilegeCount + (unsigned int)v16);
    CmpPopulateKcbStack((__int64)v18, v23);
    CmpLockKcbStackTopExclusiveRestShared(v24);
    if ( CmpIsKeyStackDeleted((__int64)v18, 0LL) )
      break;
    v25 = *(_DWORD *)(v23 + 40);
    if ( v23 == v20 )
    {
      if ( v25 != -1 && !a2 )
        goto LABEL_25;
      ExAcquirePushLockSharedEx(*(_QWORD *)(v23 + 32) + 72LL, 0LL);
      LOBYTE(v26) = a2;
    }
    else
    {
      if ( v25 != -1 )
        goto LABEL_25;
      ExAcquirePushLockSharedEx(*(_QWORD *)(v23 + 32) + 72LL, 0LL);
      v26 = 0LL;
    }
    v27 = CmpPromoteSingleKeyFromKcbStacks(v19, v18, v26);
    v28 = *(_QWORD *)(v23 + 32);
    started = v27;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v28 + 72));
    KeAbPostRelease(v28 + 72);
    if ( started < 0 )
      goto LABEL_28;
    v20 = KcbAtLayerHeight;
LABEL_25:
    CmpUnlockKcbStack((__int64)v19);
    v29 = v18;
    LODWORD(v16) = v16 + 1;
    v18 = v19;
    v19 = v29;
    if ( (unsigned int)v16 >= v13 )
      goto LABEL_29;
  }
  started = -1073741444;
LABEL_28:
  CmpUnlockKcbStack((__int64)v18);
LABEL_30:
  if ( v12 )
LABEL_31:
    CmpUnlockKcbStack((__int64)v19);
  CmSiFreeMemory(Privileges);
LABEL_33:
  if ( v31[3] )
    CmSiFreeMemory(v31[3]);
  if ( v32[3] )
    CmSiFreeMemory(v32[3]);
  return (unsigned int)started;
}
