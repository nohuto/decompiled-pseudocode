/*
 * XREFs of CmpCreateKeyControlBlock @ 0x1405D6EB0
 * Callers:
 *     CmpWalkOneLevel @ 0x1405D5560 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x1409C4FAC (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     CmpFindSecurityCellCacheIndexNew @ 0x1401B3724 (CmpFindSecurityCellCacheIndexNew.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1405B0FE0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405D03BC (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1405D549C (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpFindKcbInHashEntryByName @ 0x1405D739C (CmpFindKcbInHashEntryByName.c)
 *     CmpIsHiveLoadingOnOtherThread @ 0x1405D745C (CmpIsHiveLoadingOnOtherThread.c)
 *     CmpGetNameControlBlock @ 0x1405D7490 (CmpGetNameControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x1405D775C (CmpAllocateKeyControlBlock.c)
 *     CmpKeyFullNameLength @ 0x1405D8860 (CmpKeyFullNameLength.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405D9ADC (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpKeyNodeNeedsAccessBitUpdate @ 0x1405D9B0C (CmpKeyNodeNeedsAccessBitUpdate.c)
 *     CmpTryToLockKcbExclusive @ 0x1405D9B30 (CmpTryToLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140692E2C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 *     CmpEtwDumpKcb @ 0x1407ECB80 (CmpEtwDumpKcb.c)
 *     CmpCreateLayerLink @ 0x1407FADF0 (CmpCreateLayerLink.c)
 */

__int64 __fastcall CmpCreateKeyControlBlock(
        __int64 a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        char a5,
        unsigned __int16 *a6,
        char a7,
        unsigned int a8,
        ULONG_PTR *a9)
{
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v16; // ebx
  ULONG_PTR KcbInHashEntryByName; // rax
  ULONG_PTR v18; // rdi
  __int64 KeyControlBlock; // rax
  _QWORD *v20; // rax
  _DWORD *v21; // r13
  __int64 NameControlBlock; // rax
  int LayerLink; // ebx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r15
  int v28; // eax
  unsigned int v29; // eax
  char v30; // bl
  __int64 v31; // r15
  __int64 v32; // rax
  bool v33; // zf
  unsigned int v34; // ecx
  unsigned int *v35; // rcx
  void *v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned int v38; // [rsp+20h] [rbp-48h]
  unsigned int v39; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v40[2]; // [rsp+30h] [rbp-38h] BYREF

  v40[0] = 0xFFFFFFFFLL;
  if ( (unsigned __int8)CmpIsHiveLoadingOnOtherThread() )
    return 3221225524LL;
  v16 = a8;
  KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v13, a8, v14, a6);
  v18 = KcbInHashEntryByName;
  if ( KcbInHashEntryByName )
  {
    if ( (unsigned __int8)CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName) )
    {
LABEL_50:
      *a9 = v18;
      return 0LL;
    }
    return 3221225626LL;
  }
  if ( *a6 + 2 + (unsigned int)CmpKeyFullNameLength(a3) > 0xFFFF )
    return 3221225485LL;
  KeyControlBlock = CmpAllocateKeyControlBlock();
  v18 = KeyControlBlock;
  if ( !KeyControlBlock )
    return 3221225626LL;
  v20 = (_QWORD *)(KeyControlBlock + 112);
  v20[1] = v20;
  *v20 = v20;
  *(_QWORD *)(v18 + 128) = 0LL;
  *(_QWORD *)(v18 + 136) = 0LL;
  *(_QWORD *)(v18 + 144) = 0LL;
  *(_QWORD *)(v18 + 152) = 0LL;
  *(_DWORD *)(v18 + 32) = a2;
  v21 = (_DWORD *)(v18 + 8);
  *(_DWORD *)(v18 + 8) = v16;
  *(_DWORD *)v18 = 1;
  *(_QWORD *)(v18 + 24) = a1;
  *(_QWORD *)(v18 + 40) = 0LL;
  *(_QWORD *)(v18 + 208) = v18 + 200;
  *(_QWORD *)(v18 + 200) = v18 + 200;
  *(_QWORD *)(v18 + 224) = v18 + 216;
  *(_QWORD *)(v18 + 216) = v18 + 216;
  *(_QWORD *)(v18 + 232) = 0LL;
  *(_DWORD *)(v18 + 240) = 0;
  *(_QWORD *)(v18 + 248) = 0LL;
  *(_DWORD *)(v18 + 256) = 0;
  *(_QWORD *)(v18 + 264) = 0LL;
  *(_DWORD *)(v18 + 272) = 0;
  *(_DWORD *)(v18 + 276) = -1;
  *(_QWORD *)(v18 + 280) = 0LL;
  NameControlBlock = CmpGetNameControlBlock(a6, &a7);
  *(_QWORD *)(v18 + 72) = NameControlBlock;
  if ( NameControlBlock )
  {
    v24 = *(unsigned int *)(v18 + 32);
    if ( (_DWORD)v24 == -1 )
    {
      if ( ((*(_BYTE *)(a3 + 57) - 1) & 0xFD) == 0 )
        *(_BYTE *)(v18 + 57) = 1;
      if ( (a5 & 1) != 0 )
        *(_WORD *)(v18 + 178) |= 4u;
    }
    else
    {
      v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)(v18 + 24) + 8LL))(
              *(_QWORD *)(v18 + 24),
              v24,
              v40);
      if ( (unsigned __int8)CmpKeyNodeNeedsAccessBitUpdate(*(_QWORD *)(v18 + 24), v25) )
      {
        (*(void (__fastcall **)(__int64, _QWORD *))(v26 + 16))(v26, v40);
        ExAcquirePushLockSharedEx(*(_QWORD *)(v18 + 24) + 72LL, 0LL);
        v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)(v18 + 24) + 8LL))(
                *(_QWORD *)(v18 + 24),
                *(unsigned int *)(v18 + 32),
                v40);
        CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v18 + 24), v25, *(_DWORD *)(v18 + 32));
        v27 = *(_QWORD *)(v18 + 24);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v27 + 72));
        KeAbPostRelease(v27 + 72);
      }
      *(_BYTE *)(v18 + 57) = *(_BYTE *)(v25 + 13) & 3;
      v28 = *(_DWORD *)(v25 + 36);
      *(_QWORD *)(v18 + 96) = *(unsigned int *)(v25 + 40);
      *(_DWORD *)(v18 + 88) = v28;
      *(_WORD *)(v18 + 178) = *(_WORD *)(v25 + 2);
      *(_DWORD *)(v18 + 104) = *(_DWORD *)(v25 + 20) + *(_DWORD *)(v25 + 24);
      *(_QWORD *)(v18 + 160) = *(_QWORD *)(v25 + 4);
      *(_WORD *)(v18 + 168) = *(_WORD *)(v25 + 52);
      *(_WORD *)(v18 + 170) = *(_WORD *)(v25 + 60);
      *(_DWORD *)(v18 + 172) = *(_DWORD *)(v25 + 64);
      *(_DWORD *)(v18 + 176) ^= (*(_DWORD *)(v18 + 176) ^ *(unsigned __int16 *)(v25 + 54)) & 0xF;
      *(_DWORD *)(v18 + 176) ^= ((unsigned __int8)*(_DWORD *)(v18 + 176) ^ (unsigned __int8)*(_WORD *)(v25 + 54)) & 0xF0;
      *(_BYTE *)(v18 + 177) = *(_BYTE *)(v25 + 55);
      CmpTryToLockKcbExclusive(v18);
      v29 = *(_DWORD *)(v25 + 44);
      v30 = 1;
      v38 = v29;
      if ( v29 == -1 )
      {
        *(_QWORD *)(v18 + 80) = 0LL;
      }
      else
      {
        v31 = *(_QWORD *)(v18 + 24);
        ExAcquirePushLockSharedEx(v31 + 1776, 0LL);
        if ( CmpFindSecurityCellCacheIndexNew(v31, v38, &v39) )
        {
          v32 = *(_QWORD *)(*(_QWORD *)(v31 + 1880) + 16LL * v39 + 8);
        }
        else
        {
          v30 = 0;
          v32 = 0LL;
        }
        *(_QWORD *)(v18 + 80) = v32;
        ExReleasePushLockEx(v31 + 1776, 0LL);
        v21 = (_DWORD *)(v18 + 8);
      }
      CmpUnlockKcb(v18);
      if ( !v30 )
      {
        LayerLink = -1073741670;
        (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 16))(a1, v40);
        goto LABEL_39;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v18 + 24) + 16LL))(*(_QWORD *)(v18 + 24), v40);
    }
    if ( a3 )
    {
      if ( !(unsigned __int8)CmpReferenceKeyControlBlockUnsafe(a3) )
      {
        LayerLink = -1073741670;
        goto LABEL_39;
      }
      v33 = (*(_DWORD *)(v18 + 176) & 0x40000) == 0;
      *(_QWORD *)(v18 + 64) = a3;
      if ( v33 )
        v34 = *(_DWORD *)(v18 + 4) ^ (*(_DWORD *)(v18 + 4) ^ (*(_DWORD *)(a3 + 4) + 0x200000)) & 0x7FE00000;
      else
        v34 = *(_DWORD *)(v18 + 4) ^ (*(_DWORD *)(a3 + 4) ^ *(_DWORD *)(v18 + 4)) & 0x7FE00000;
    }
    else
    {
      v34 = *(_DWORD *)(v18 + 4) & 0x801FFFFF | 0x200000;
    }
    *(_DWORD *)(v18 + 4) = v34;
    if ( !a4
      || (CmpLockKcbExclusive(a4),
          CmpTryToLockKcbExclusive(v18),
          LayerLink = CmpCreateLayerLink(a4),
          CmpUnlockKcb(v18),
          CmpUnlockKcb(a4),
          LayerLink >= 0) )
    {
      v37 = *(_QWORD *)(*(_QWORD *)(v18 + 24) + 1640LL)
          + 24
          * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v18 + 24) + 1648LL) - 1) & ((unsigned int)(101027
                                                                                             * (*v21 ^ (*v21 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v21 ^ (*v21 >> 9))) >> 9)));
      *(_QWORD *)(v18 + 16) = *(_QWORD *)(v37 + 16);
      *(_QWORD *)(v37 + 16) = v21;
      if ( *(_BYTE *)(a1 + 2936) == 1 )
        *(_WORD *)(v18 + 4) |= 0x20u;
      if ( CmpTraceRoutine )
      {
        LOBYTE(v37) = 22;
        CmpEtwDumpKcb(v18, v37);
      }
      goto LABEL_50;
    }
  }
  else
  {
    LayerLink = -1073741670;
  }
LABEL_39:
  v35 = *(unsigned int **)(v18 + 72);
  if ( v35 )
    CmpDereferenceNameControlBlockWithLock(v35);
  if ( *(_QWORD *)(v18 + 64) )
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)a3);
  v36 = *(void **)(v18 + 184);
  if ( v36 )
    ExFreePoolWithTag(v36, 0);
  *(_DWORD *)(v18 + 4) |= 0x80000u;
  CmpFreeKeyControlBlock(v18);
  return (unsigned int)LayerLink;
}
