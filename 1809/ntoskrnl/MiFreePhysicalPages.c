/*
 * XREFs of MiFreePhysicalPages @ 0x1402B0AD0
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x140852170 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140117C10 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140119050 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiDecrementAweMapCount @ 0x1402B031C (MiDecrementAweMapCount.c)
 *     MiLockAweVadsExclusive @ 0x1402B14CC (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1402B22FC (MiUnlockAweVadsExclusive.c)
 *     MiUpdateAwePageTable @ 0x1402B2338 (MiUpdateAwePageTable.c)
 */

__int64 __fastcall MiFreePhysicalPages(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  unsigned int v3; // r12d
  unsigned __int64 v4; // rbp
  __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r9
  const signed __int64 *v11; // r8
  unsigned __int128 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // r10
  bool v19; // zf
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 result; // rax
  unsigned __int8 v25; // [rsp+20h] [rbp-168h]
  int v26; // [rsp+24h] [rbp-164h]
  int v27; // [rsp+28h] [rbp-160h]
  __int64 v28; // [rsp+30h] [rbp-158h]
  unsigned __int64 v29; // [rsp+38h] [rbp-150h]
  signed __int64 *v30; // [rsp+40h] [rbp-148h]
  unsigned __int64 v31; // [rsp+48h] [rbp-140h]
  __int64 v32; // [rsp+50h] [rbp-138h]
  __int64 v34; // [rsp+60h] [rbp-128h]
  unsigned __int64 v35; // [rsp+68h] [rbp-120h]
  __int64 v36; // [rsp+70h] [rbp-118h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-110h]
  int v38; // [rsp+80h] [rbp-108h] BYREF
  __int16 v39; // [rsp+84h] [rbp-104h]
  __int64 v40; // [rsp+88h] [rbp-100h]
  __int64 v41; // [rsp+90h] [rbp-F8h]
  __int64 v42; // [rsp+98h] [rbp-F0h]

  v40 = 20LL;
  v39 = 0;
  v2 = (__int64 *)(a2 + 48);
  v3 = 0;
  v26 = 0;
  v4 = 0LL;
  v38 = 1;
  v41 = 0LL;
  v42 = 0LL;
  v6 = a1;
  CurrentThread = KeGetCurrentThread();
  v8 = (_QWORD *)(a2 + 48);
  v9 = (__int64)&CurrentThread->ApcState.Process[1].IdealNode[12];
  v25 = 17;
  v29 = a2 + 48 + 8 * ((unsigned __int64)*(unsigned int *)(a2 + 40) >> 12);
  v31 = *(_QWORD *)(a1 + 8);
  v27 = *(_DWORD *)a1 & 1;
  if ( v27 )
    MiLockAweVadsExclusive(CurrentThread);
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = v6 + 56;
  ExAcquireAutoExpandPushLockExclusive(v6 + 56, 0LL);
  v10 = *(_QWORD *)(v6 + 16);
  v11 = *(const signed __int64 **)(v6 + 24);
  v36 = v10;
  v30 = (signed __int64 *)v11;
  if ( (unsigned __int64)v2 >= v29 )
    goto LABEL_39;
  while ( 1 )
  {
    v34 = *v2;
    *(_QWORD *)&v12 = *v2 / v31;
    *((_QWORD *)&v12 + 1) = *v2 % v31;
    v35 = v12;
    if ( v12 >= (unsigned __int64)v10 )
      break;
    if ( !_bittest64(v11, v12) )
      break;
    *((_QWORD *)&v12 + 1) = 48 * v34 - 0x58000000000LL;
    v28 = *((_QWORD *)&v12 + 1);
    if ( (*(_QWORD *)(*((_QWORD *)&v12 + 1) + 24LL) & 0x4000000000000000LL) != 0 )
      break;
    v13 = *(_QWORD *)(*((_QWORD *)&v12 + 1) + 24LL) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v13 != 1 && (*(_DWORD *)v6 & 1) != 0 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)&v12 + 1) + 8LL);
      v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v32 = v15;
      if ( v4 != v15 )
      {
        if ( v4 )
        {
          MiFlushTbList(&v38, *((__int64 *)&v12 + 1), (__int64)v11, v10);
          MiUnlockPageTableInternal(v9, v4);
          v15 = v32;
        }
        v4 = v15;
        if ( v25 == 17 )
          v25 = MiLockWorkingSetShared(v9);
        MiLockPageTableInternal(v9, v4, 0);
      }
      if ( MiPteInShadowRange(v14) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v17 = 1;
          if ( !HIBYTE(word_14043B26C) )
          {
            v19 = (v16 & 1) == 0;
LABEL_21:
            if ( !v19 )
              v16 |= v18;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
          v19 = (v16 & 1) == 0;
          goto LABEL_21;
        }
      }
      *(_QWORD *)v14 = v16;
      if ( v17 )
        MiWritePteShadow(v14, v16);
      MiUpdateAwePageTable(v4, -1LL, 0xFFFFFFFFLL);
      MiInsertTbFlushEntry((__int64)&v38, (__int64)(v14 << 25) >> 16, 1LL, 0);
      MiDecrementAweMapCount(v20, v28, (__int64 *)MmBadPointer, 0);
      *((_QWORD *)&v12 + 1) = v28;
      v6 = a1;
    }
    if ( !MiDecrementAweMapCount(v13, *((__int64 *)&v12 + 1), (__int64 *)MmBadPointer, 1) )
    {
      *v8++ = v34;
      _bittestandreset64(v30, v35);
    }
    v21 = ++v26;
    if ( v25 != 17
      && (v21 & 0x3F) == 0
      && (MiWorkingSetIsContended(v9) || (unsigned int)MiPageTableLockIsContended(v9, v4) || KeShouldYieldProcessor()) )
    {
      MiFlushTbList(&v38, *((__int64 *)&v12 + 1), v22, v23);
      MiUnlockPageTableInternal(v9, v4);
      MiUnlockWorkingSetShared(v9, v25);
      v4 = 0LL;
      v25 = 17;
    }
    v11 = v30;
    ++v2;
    v10 = v36;
    if ( (unsigned __int64)v2 >= v29 )
      goto LABEL_37;
  }
  v3 = -1073741800;
LABEL_37:
  if ( v4 )
  {
    MiFlushTbList(&v38, *((__int64 *)&v12 + 1), (__int64)v11, v10);
    MiUnlockPageTableInternal(v9, v4);
    MiUnlockWorkingSetShared(v9, v25);
  }
LABEL_39:
  ExReleaseAutoExpandPushLockExclusive(BugCheckParameter2, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v27 )
    MiUnlockAweVadsExclusive(CurrentThread);
  result = v3;
  *(_DWORD *)(a2 + 44) = ((__int64)v2 - a2 - 48) >> 3;
  *(_DWORD *)(a2 + 40) = ((__int64)v8 - a2 - 48) >> 3;
  return result;
}
