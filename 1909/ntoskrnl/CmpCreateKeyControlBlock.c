/*
 * XREFs of CmpCreateKeyControlBlock @ 0x1406676D0
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x140665590 (CmpWalkOneLevel.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x140A0EAE8 (CmpCreateRegistryRoot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140635944 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockKcbExclusive @ 0x140661A18 (CmpLockKcbExclusive.c)
 *     CmpFindKcbInHashEntryByName @ 0x140667A54 (CmpFindKcbInHashEntryByName.c)
 *     CmpIsHiveLoadingOnOtherThread @ 0x140667B20 (CmpIsHiveLoadingOnOtherThread.c)
 *     CmpGetNameControlBlock @ 0x140667B50 (CmpGetNameControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140667DC8 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpAllocateKeyControlBlock @ 0x140667ED4 (CmpAllocateKeyControlBlock.c)
 *     CmpKeyFullNameLength @ 0x140668C50 (CmpKeyFullNameLength.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140669828 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpAssignSecurityToKcb @ 0x140669990 (CmpAssignSecurityToKcb.c)
 *     CmpTryToLockKcbExclusive @ 0x140669A7C (CmpTryToLockKcbExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x140669AE0 (CmpGetKeyNodeForKcb.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1406B8B24 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpFreeKeyControlBlock @ 0x1406BA6D0 (CmpFreeKeyControlBlock.c)
 *     CmpEtwDumpKcb @ 0x140825BE8 (CmpEtwDumpKcb.c)
 *     CmpCreateLayerLink @ 0x140832718 (CmpCreateLayerLink.c)
 */

__int64 __fastcall CmpCreateKeyControlBlock(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        char a5,
        unsigned __int16 *a6,
        char a7,
        unsigned int a8,
        ULONG_PTR *a9)
{
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  ULONG_PTR KcbInHashEntryByName; // rax
  ULONG_PTR v17; // rdi
  __int64 KeyControlBlock; // rax
  ULONG_PTR v19; // rdi
  _QWORD *v20; // rax
  _DWORD *v21; // r15
  __int64 NameControlBlock; // rax
  __int64 KeyNodeForKcb; // rbx
  int v24; // edx
  bool v25; // zf
  unsigned int v26; // ecx
  unsigned __int64 v27; // rdx
  int LayerLink; // ebx
  __int64 v30; // rcx
  void *v31; // rcx
  _QWORD v32[7]; // [rsp+30h] [rbp-38h] BYREF

  v32[0] = 0xFFFFFFFFLL;
  if ( (unsigned __int8)CmpIsHiveLoadingOnOtherThread() )
    return 3221225524LL;
  v15 = a8;
  KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v13, a8, v14, a6);
  v17 = KcbInHashEntryByName;
  if ( KcbInHashEntryByName )
  {
    CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName);
    *a9 = v17;
    return 0LL;
  }
  if ( *a6 + 2 + (unsigned int)CmpKeyFullNameLength(a3) > 0xFFFF )
    return 3221225485LL;
  KeyControlBlock = CmpAllocateKeyControlBlock();
  v19 = KeyControlBlock;
  if ( !KeyControlBlock )
    return 3221225626LL;
  v20 = (_QWORD *)(KeyControlBlock + 120);
  v20[1] = v20;
  *v20 = v20;
  *(_QWORD *)(v19 + 136) = 0LL;
  *(_QWORD *)(v19 + 144) = 0LL;
  *(_QWORD *)(v19 + 152) = 0LL;
  *(_QWORD *)(v19 + 160) = 0LL;
  *(_DWORD *)(v19 + 40) = a2;
  v21 = (_DWORD *)(v19 + 16);
  *(_DWORD *)(v19 + 16) = v15;
  *(_QWORD *)v19 = 1LL;
  *(_QWORD *)(v19 + 32) = a1;
  *(_QWORD *)(v19 + 48) = 0LL;
  *(_QWORD *)(v19 + 216) = v19 + 208;
  *(_QWORD *)(v19 + 208) = v19 + 208;
  *(_QWORD *)(v19 + 232) = v19 + 224;
  *(_QWORD *)(v19 + 224) = v19 + 224;
  *(_QWORD *)(v19 + 240) = 0LL;
  *(_DWORD *)(v19 + 248) = 0;
  *(_QWORD *)(v19 + 256) = 0LL;
  *(_DWORD *)(v19 + 264) = 0;
  *(_QWORD *)(v19 + 272) = 0LL;
  *(_DWORD *)(v19 + 280) = 0;
  *(_DWORD *)(v19 + 284) = -1;
  *(_QWORD *)(v19 + 288) = 0LL;
  NameControlBlock = CmpGetNameControlBlock(a6, &a7);
  *(_QWORD *)(v19 + 80) = NameControlBlock;
  if ( NameControlBlock )
  {
    if ( *(_DWORD *)(v19 + 40) == -1 )
    {
      if ( ((*(_BYTE *)(a3 + 65) - 1) & 0xFD) == 0 )
        *(_BYTE *)(v19 + 65) = 1;
      if ( (a5 & 1) != 0 )
        *(_WORD *)(v19 + 186) |= 4u;
      goto LABEL_9;
    }
    KeyNodeForKcb = CmpGetKeyNodeForKcb(v19, v32, 0LL);
    *(_BYTE *)(v19 + 65) = *(_BYTE *)(KeyNodeForKcb + 13) & 3;
    v24 = *(_DWORD *)(KeyNodeForKcb + 40);
    *(_DWORD *)(v19 + 96) = *(_DWORD *)(KeyNodeForKcb + 36);
    *(_DWORD *)(v19 + 100) = v24;
    *(_WORD *)(v19 + 186) = *(_WORD *)(KeyNodeForKcb + 2);
    *(_DWORD *)(v19 + 112) = *(_DWORD *)(KeyNodeForKcb + 20) + *(_DWORD *)(KeyNodeForKcb + 24);
    *(_QWORD *)(v19 + 168) = *(_QWORD *)(KeyNodeForKcb + 4);
    *(_WORD *)(v19 + 176) = *(_WORD *)(KeyNodeForKcb + 52);
    *(_WORD *)(v19 + 178) = *(_WORD *)(KeyNodeForKcb + 60);
    *(_DWORD *)(v19 + 180) = *(_DWORD *)(KeyNodeForKcb + 64);
    *(_DWORD *)(v19 + 184) ^= (*(_DWORD *)(v19 + 184) ^ *(unsigned __int16 *)(KeyNodeForKcb + 54)) & 0xF;
    *(_DWORD *)(v19 + 184) ^= ((unsigned __int8)*(_DWORD *)(v19 + 184) ^ (unsigned __int8)*(_WORD *)(KeyNodeForKcb + 54)) & 0xF0;
    *(_BYTE *)(v19 + 185) = *(_BYTE *)(KeyNodeForKcb + 55);
    CmpTryToLockKcbExclusive(v19);
    LOBYTE(KeyNodeForKcb) = CmpAssignSecurityToKcb(v19, *(unsigned int *)(KeyNodeForKcb + 44), 1);
    CmpUnlockKcb(v19);
    if ( (_BYTE)KeyNodeForKcb )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v19 + 32) + 16LL))(*(_QWORD *)(v19 + 32), v32);
LABEL_9:
      if ( a3 )
      {
        CmpReferenceKeyControlBlockUnsafe(a3);
        v25 = (*(_DWORD *)(v19 + 184) & 0x40000) == 0;
        *(_QWORD *)(v19 + 72) = a3;
        if ( v25 )
          v26 = *(_DWORD *)(v19 + 8) ^ (*(_DWORD *)(v19 + 8) ^ (*(_DWORD *)(a3 + 8) + 0x200000)) & 0x7FE00000;
        else
          v26 = *(_DWORD *)(v19 + 8) ^ (*(_DWORD *)(a3 + 8) ^ *(_DWORD *)(v19 + 8)) & 0x7FE00000;
      }
      else
      {
        v26 = *(_DWORD *)(v19 + 8) & 0x801FFFFF | 0x200000;
      }
      *(_DWORD *)(v19 + 8) = v26;
      if ( a4 )
      {
        CmpLockKcbExclusive(a4);
        CmpTryToLockKcbExclusive(v19);
        LayerLink = CmpCreateLayerLink(a4);
        CmpUnlockKcb(v19);
        CmpUnlockKcb(a4);
        if ( LayerLink < 0 )
          goto LABEL_32;
      }
      v27 = *(_QWORD *)(*(_QWORD *)(v19 + 32) + 1640LL)
          + 24
          * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v19 + 32) + 1648LL) - 1) & ((unsigned int)(101027
                                                                                             * (*v21 ^ (*v21 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v21 ^ (*v21 >> 9))) >> 9)));
      *(_QWORD *)(v19 + 24) = *(_QWORD *)(v27 + 16);
      *(_QWORD *)(v27 + 16) = v21;
      if ( *(_BYTE *)(a1 + 2936) == 1 )
        *(_WORD *)(v19 + 8) |= 0x20u;
      if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
      {
        LOBYTE(v27) = 22;
        CmpEtwDumpKcb(v19, v27);
      }
      *a9 = v19;
      return 0LL;
    }
    LayerLink = -1073741670;
    (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 16))(a1, v32);
  }
  else
  {
    LayerLink = -1073741670;
  }
LABEL_32:
  v30 = *(_QWORD *)(v19 + 80);
  if ( v30 )
    CmpDereferenceNameControlBlockWithLock(v30);
  if ( *(_QWORD *)(v19 + 72) )
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)a3);
  v31 = *(void **)(v19 + 192);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  *(_DWORD *)(v19 + 8) |= 0x80000u;
  CmpFreeKeyControlBlock(v19);
  return (unsigned int)LayerLink;
}
