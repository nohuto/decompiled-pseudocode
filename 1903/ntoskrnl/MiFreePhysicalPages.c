/*
 * XREFs of MiFreePhysicalPages @ 0x1402D6018
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x140897730 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x140023050 (MiWorkingSetIsContended.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x14008DE78 (MiPageTableLockIsContended.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140115920 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140115F50 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiDecrementAweMapCount @ 0x1402D5840 (MiDecrementAweMapCount.c)
 *     MiLockAweVadsExclusive @ 0x1402D6EA4 (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1402D7C9C (MiUnlockAweVadsExclusive.c)
 *     MiUpdateAwePageTable @ 0x1402D7CD8 (MiUpdateAwePageTable.c)
 */

__int64 __fastcall MiFreePhysicalPages(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 *v4; // rbx
  unsigned int v5; // r12d
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // r13
  __int64 v10; // rsi
  __int64 v11; // r9
  const signed __int64 *v12; // r8
  unsigned __int128 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // r10
  bool v20; // zf
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 result; // rax
  unsigned __int8 v26; // [rsp+20h] [rbp-168h]
  int v27; // [rsp+24h] [rbp-164h]
  int v28; // [rsp+28h] [rbp-160h]
  __int64 v29; // [rsp+30h] [rbp-158h]
  unsigned __int64 v30; // [rsp+38h] [rbp-150h]
  signed __int64 *v31; // [rsp+40h] [rbp-148h]
  unsigned __int64 v32; // [rsp+48h] [rbp-140h]
  __int64 v33; // [rsp+50h] [rbp-138h]
  __int64 v35; // [rsp+60h] [rbp-128h]
  unsigned __int64 v36; // [rsp+68h] [rbp-120h]
  __int64 v37; // [rsp+70h] [rbp-118h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-110h]
  _QWORD v39[24]; // [rsp+80h] [rbp-108h] BYREF

  v3 = a1;
  memset(v39, 0, 0xB8uLL);
  LODWORD(v39[0]) = 1;
  WORD2(v39[0]) = 0;
  v4 = (__int64 *)(a2 + 48);
  v39[2] = 0LL;
  v5 = 0;
  v39[3] = 0LL;
  v6 = 0LL;
  v27 = 0;
  v7 = (_QWORD *)(a2 + 48);
  v8 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  LODWORD(v39[1]) = 20;
  CurrentThread = KeGetCurrentThread();
  v26 = 17;
  v30 = a2 + 48 + 8 * v8;
  v32 = *(_QWORD *)(v3 + 8);
  v10 = (__int64)&CurrentThread->ApcState.Process[1].IdealNode[6];
  v28 = *(_DWORD *)v3 & 1;
  if ( v28 )
    MiLockAweVadsExclusive(CurrentThread);
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = v3 + 56;
  ExAcquireAutoExpandPushLockExclusive(v3 + 56, 0LL);
  v11 = *(_QWORD *)(v3 + 16);
  v12 = *(const signed __int64 **)(v3 + 24);
  v37 = v11;
  v31 = (signed __int64 *)v12;
  if ( (unsigned __int64)v4 >= v30 )
    goto LABEL_39;
  while ( 1 )
  {
    v35 = *v4;
    *(_QWORD *)&v13 = *v4 / v32;
    *((_QWORD *)&v13 + 1) = *v4 % v32;
    v36 = v13;
    if ( v13 >= (unsigned __int64)v11 )
      break;
    if ( !_bittest64(v12, v13) )
      break;
    *((_QWORD *)&v13 + 1) = 48 * v35 - 0x58000000000LL;
    v29 = *((_QWORD *)&v13 + 1);
    if ( (*(_QWORD *)(*((_QWORD *)&v13 + 1) + 24LL) & 0x4000000000000000LL) != 0 )
      break;
    v14 = *(_QWORD *)(*((_QWORD *)&v13 + 1) + 24LL) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v14 != 1 && (*(_DWORD *)v3 & 1) != 0 )
    {
      v15 = *(_QWORD *)(*((_QWORD *)&v13 + 1) + 8LL);
      v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v33 = v16;
      if ( v6 != v16 )
      {
        if ( v6 )
        {
          MiFlushTbList((int *)v39, *((__int64 *)&v13 + 1), (__int64)v12, v11);
          MiUnlockPageTableInternal(v10, v6);
          v16 = v33;
        }
        v6 = v16;
        if ( v26 == 17 )
          v26 = MiLockWorkingSetShared(v10);
        MiLockPageTableInternal(v10, v6, 0LL);
      }
      if ( MiPteInShadowRange(v15) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v18 = 1;
          if ( !HIBYTE(word_140465BEC) )
          {
            v20 = (v17 & 1) == 0;
LABEL_21:
            if ( !v20 )
              v17 |= v19;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
          v20 = (v17 & 1) == 0;
          goto LABEL_21;
        }
      }
      *(_QWORD *)v15 = v17;
      if ( v18 )
        MiWritePteShadow(v15);
      MiUpdateAwePageTable(v6, -1LL, 0xFFFFFFFFLL);
      MiInsertTbFlushEntry((__int64)v39, (__int64)(v15 << 25) >> 16, 1LL, 0);
      MiDecrementAweMapCount(v21, v29, (__int64 *)MmBadPointer, 0);
      *((_QWORD *)&v13 + 1) = v29;
      v3 = a1;
    }
    if ( !MiDecrementAweMapCount(v14, *((__int64 *)&v13 + 1), (__int64 *)MmBadPointer, 1) )
    {
      *v7++ = v35;
      _bittestandreset64(v31, v36);
    }
    v22 = ++v27;
    if ( v26 != 17
      && (v22 & 0x3F) == 0
      && (MiWorkingSetIsContended(v10) || (unsigned int)MiPageTableLockIsContended(v10, v6) || KeShouldYieldProcessor()) )
    {
      MiFlushTbList((int *)v39, *((__int64 *)&v13 + 1), v23, v24);
      MiUnlockPageTableInternal(v10, v6);
      MiUnlockWorkingSetShared(v10, v26);
      v6 = 0LL;
      v26 = 17;
    }
    v12 = v31;
    ++v4;
    v11 = v37;
    if ( (unsigned __int64)v4 >= v30 )
      goto LABEL_37;
  }
  v5 = -1073741800;
LABEL_37:
  if ( v6 )
  {
    MiFlushTbList((int *)v39, *((__int64 *)&v13 + 1), (__int64)v12, v11);
    MiUnlockPageTableInternal(v10, v6);
    MiUnlockWorkingSetShared(v10, v26);
  }
LABEL_39:
  ExReleaseAutoExpandPushLockExclusive(BugCheckParameter2, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v28 )
    MiUnlockAweVadsExclusive(CurrentThread);
  result = v5;
  *(_DWORD *)(a2 + 44) = ((__int64)v4 - a2 - 48) >> 3;
  *(_DWORD *)(a2 + 40) = ((__int64)v7 - a2 - 48) >> 3;
  return result;
}
