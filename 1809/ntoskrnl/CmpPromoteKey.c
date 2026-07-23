/*
 * XREFs of CmpPromoteKey @ 0x1408067E0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CEBC (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1405B9548 (CmpSetKeySecurity.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmSetLastWriteTimeKey @ 0x1407F0AAC (CmSetLastWriteTimeKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405D0478 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpStartKcbStack @ 0x140644FF0 (CmpStartKcbStack.c)
 *     CmpPopulateKcbStack @ 0x1406450B0 (CmpPopulateKcbStack.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x140645670 (CmpIsKeyStackDeleted.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140805FC4 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140806AC0 (CmpPromoteSingleKeyFromKcbStacks.c)
 */

__int64 __fastcall CmpPromoteKey(__int64 a1, char a2, char a3)
{
  __int16 v4; // di
  __int16 v5; // dx
  int started; // ebx
  bool v7; // r15
  unsigned int v8; // r14d
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v10; // r13
  __int64 v11; // rdi
  __int64 i; // rsi
  PPRIVILEGE_SET *v13; // rbx
  PPRIVILEGE_SET *v14; // r12
  int v15; // eax
  __int64 v16; // rdi
  __int64 *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rsi
  __int64 *v25; // [rsp+20h] [rbp-58h]
  PPRIVILEGE_SET v26[4]; // [rsp+30h] [rbp-48h] BYREF
  PPRIVILEGE_SET v27[5]; // [rsp+50h] [rbp-28h] BYREF
  PPRIVILEGE_SET *v28; // [rsp+C0h] [rbp+48h]
  __int64 KcbAtLayerHeight; // [rsp+D8h] [rbp+60h]

  memset(v26, 0, sizeof(v26));
  WORD1(v26[0]) = -1;
  memset(v27, 0, 0x20uLL);
  v4 = *(_WORD *)(a1 + 2);
  WORD1(v27[0]) = -1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v4);
  started = CmpStartKcbStack((__int64)v26, v5);
  if ( started < 0 )
    goto LABEL_34;
  started = CmpStartKcbStack((__int64)v27, v4);
  if ( started < 0 )
    goto LABEL_34;
  v7 = 1;
  v8 = ((*(_DWORD *)(KcbAtLayerHeight + 4) >> 21) & 0x3FF) + 1;
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, 8LL * v8, 0x37364D43u);
  v10 = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
  {
    started = -1073741670;
    goto LABEL_34;
  }
  memset(TransientPoolWithTag, 0, 8LL * v8);
  LODWORD(v11) = v8;
  for ( i = KcbAtLayerHeight; (*(_DWORD *)(i + 176) & 0x40000) == 0; i = *(_QWORD *)(i + 64) )
  {
    v11 = (*(_DWORD *)(i + 4) >> 21) & 0x3FF;
    *((_QWORD *)&v10->PrivilegeCount + v11) = i;
  }
  v13 = v27;
  v28 = v27;
  v14 = v26;
  CmpPopulateKcbStack((__int64)v27, i);
  CmpLockKcbStackTopExclusiveRestShared((__int64)v27);
  if ( i == KcbAtLayerHeight )
  {
    if ( a2 )
    {
      ExAcquirePushLockSharedEx(*(_QWORD *)(i + 24) + 72LL, 0LL);
      v15 = CmpFullPromoteHiveRootFromKcbStack((__int64)v27);
      v16 = *(_QWORD *)(i + 24);
      started = v15;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v16 + 72));
      KeAbPostRelease(v16 + 72);
      if ( started < 0 )
        goto LABEL_32;
    }
LABEL_30:
    started = 0;
    v7 = a3 == 0;
    goto LABEL_31;
  }
  if ( (unsigned int)v11 >= v8 )
    goto LABEL_30;
  v17 = (__int64 *)((char *)v10 + 8 * (unsigned int)v11);
  v25 = v17;
  while ( 1 )
  {
    v18 = *v17;
    CmpPopulateKcbStack((__int64)v14, *v17);
    CmpLockKcbStackTopExclusiveRestShared(v19);
    if ( CmpIsKeyStackDeleted((__int64)v14, 0LL) )
      break;
    v20 = *(_DWORD *)(v18 + 32);
    if ( v18 == KcbAtLayerHeight )
    {
      if ( v20 != -1 && !a2 )
        goto LABEL_26;
      ExAcquirePushLockSharedEx(*(_QWORD *)(v18 + 24) + 72LL, 0LL);
      LOBYTE(v21) = a2;
    }
    else
    {
      if ( v20 != -1 )
        goto LABEL_26;
      ExAcquirePushLockSharedEx(*(_QWORD *)(v18 + 24) + 72LL, 0LL);
      v21 = 0LL;
    }
    v22 = CmpPromoteSingleKeyFromKcbStacks(v13, v14, v21);
    v23 = *(_QWORD *)(v18 + 24);
    started = v22;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v23 + 72));
    KeAbPostRelease(v23 + 72);
    if ( started < 0 )
      goto LABEL_29;
    v13 = v28;
LABEL_26:
    CmpUnlockKcbStack((__int64)v13);
    LODWORD(v11) = v11 + 1;
    v28 = v14;
    v14 = v13;
    v13 = v28;
    v17 = ++v25;
    if ( (unsigned int)v11 >= v8 )
      goto LABEL_30;
  }
  started = -1073741444;
LABEL_29:
  CmpUnlockKcbStack((__int64)v14);
LABEL_31:
  if ( v7 )
LABEL_32:
    CmpUnlockKcbStack((__int64)v28);
  CmSiFreeMemory(v10);
LABEL_34:
  if ( v26[3] )
    CmSiFreeMemory(v26[3]);
  if ( v27[3] )
    CmSiFreeMemory(v27[3]);
  return (unsigned int)started;
}
