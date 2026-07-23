/*
 * XREFs of CmpPerformCompleteKcbCacheLookup @ 0x1405F8430
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x140668CB0 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     CmpInitializeDelayDerefContext @ 0x140044154 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     ExpReleaseFastMutexContended @ 0x1400C6530 (ExpReleaseFastMutexContended.c)
 *     NLS_UPCASE @ 0x1400CFCA0 (NLS_UPCASE.c)
 *     ExpAcquireFastMutexContended @ 0x1400EF620 (ExpAcquireFastMutexContended.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntryByKcb @ 0x140635780 (CmpUnlockHashEntryByKcb.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140635944 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140635A9C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbExclusive @ 0x140661A18 (CmpLockKcbExclusive.c)
 *     CmpUnlockHashEntry @ 0x140661CE4 (CmpUnlockHashEntry.c)
 *     CmpGetComponentNameAtIndex @ 0x1406B8370 (CmpGetComponentNameAtIndex.c)
 *     CmpDeleteHive @ 0x1406B97A0 (CmpDeleteHive.c)
 *     CmpFreeKeyControlBlock @ 0x1406BA6D0 (CmpFreeKeyControlBlock.c)
 *     CmpRecordParseFailure @ 0x1406BD080 (CmpRecordParseFailure.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C53FC (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1406C9F78 (CmpLockHashEntrySharedByKcb.c)
 *     CmpCompareUnicodeString @ 0x1406CCDC0 (CmpCompareUnicodeString.c)
 *     CmpWaitForHiveMount @ 0x14077E0E8 (CmpWaitForHiveMount.c)
 */

__int64 __fastcall CmpPerformCompleteKcbCacheLookup(
        volatile signed __int64 *BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        ULONG_PTR *a6,
        char *a7,
        _WORD *a8)
{
  unsigned int v8; // ebp
  unsigned int v9; // r15d
  __int64 v10; // r14
  __int16 v11; // dx
  ULONG_PTR v12; // r13
  ULONG_PTR v13; // r12
  __int16 v14; // cx
  signed __int64 v15; // rax
  ULONG_PTR v16; // rsi
  unsigned int v17; // r13d
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // r15
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rdi
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  __int64 v26; // rcx
  __int64 j; // rbp
  ULONG_PTR v28; // rcx
  __int16 v29; // dx
  char v30; // r12
  __int64 v32; // r14
  __int64 v33; // rcx
  unsigned __int8 *v34; // rsi
  unsigned __int16 v35; // r11
  unsigned __int16 *v36; // rdi
  unsigned __int16 v37; // r9
  unsigned __int16 v38; // ax
  int v39; // r10d
  int v40; // edx
  signed __int64 v41; // rax
  signed __int64 v42; // rtt
  unsigned int v43; // r8d
  ULONG_PTR v44; // rcx
  bool v45; // zf
  PRTL_BALANCED_NODE v46; // rdi
  unsigned __int8 CurrentIrql; // si
  char v48; // al
  __int64 v49; // rcx
  _BYTE *v50; // rdx
  _QWORD *v51; // rax
  unsigned __int8 v52; // di
  signed __int32 v53; // eax
  bool v54; // di
  signed __int64 v55; // rax
  __int64 v56; // rcx
  int v57; // ebx
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v61; // rbx
  __int64 ComponentNameAtIndex; // rax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // rdx
  ULONG_PTR v66; // r15
  void *v67; // rsi
  __int64 v68; // rax
  ULONG_PTR v69; // rdi
  __int64 v70; // rdx
  signed __int32 v71[8]; // [rsp+0h] [rbp-C8h] BYREF
  char v72; // [rsp+30h] [rbp-98h]
  __int16 i; // [rsp+32h] [rbp-96h]
  __int16 v74; // [rsp+34h] [rbp-94h]
  ULONG_PTR BugCheckParameter2a; // [rsp+38h] [rbp-90h]
  volatile signed __int64 *v76; // [rsp+40h] [rbp-88h]
  unsigned int v77; // [rsp+48h] [rbp-80h]
  __int64 v78; // [rsp+50h] [rbp-78h]
  int v79; // [rsp+58h] [rbp-70h]
  __int64 v80; // [rsp+60h] [rbp-68h] BYREF
  __int64 v81; // [rsp+68h] [rbp-60h]
  _QWORD *v82[11]; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v84; // [rsp+D8h] [rbp+10h]
  unsigned int v85; // [rsp+E0h] [rbp+18h]

  v85 = a3;
  v84 = a2;
  v8 = 0;
  v76 = BugCheckParameter2;
  v9 = a2;
  v10 = a4;
  v11 = 0;
  v12 = (ULONG_PTR)BugCheckParameter2;
  for ( i = 0; ; v11 = i )
  {
    v13 = *(_QWORD *)(v12 + 32);
    v14 = 0;
    v72 = 0;
    v74 = 0;
    v15 = _InterlockedIncrement64((volatile signed __int64 *)v12);
    if ( !v15 )
      KeBugCheckEx(0x51u, 0x24uLL, v12, 0LL, 0LL);
    if ( v15 == 1 )
LABEL_137:
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v16 = v12;
    BugCheckParameter2a = v12;
    v17 = v9;
    v18 = *((_DWORD *)v76 + 4);
    if ( v9 >= a3 )
      goto LABEL_19;
    v19 = v9;
    v78 = v9;
LABEL_6:
    if ( v17 >= 8 )
    {
      v19 = v78;
      v20 = *(_QWORD *)(v10 + 160) + 16 * (v17 - 8 + 6LL);
    }
    else
    {
      v20 = v10 + 16 * (v17 + 2LL);
    }
    if ( v17 >= 8 )
      v21 = *(_DWORD *)(*(_QWORD *)(v10 + 160) + 4LL * (v17 - 8));
    else
      v21 = *(_DWORD *)(v10 + 4 * v19);
    v18 = v21 + 37 * v18;
    v79 = v18 ^ (v18 >> 9);
    v22 = *(_QWORD *)(v13 + 1640);
    v77 = 101027 * v79;
    v23 = v77 ^ (v77 >> 9);
    ExAcquirePushLockSharedEx(v22 + 24LL * ((unsigned int)v23 & (*(_DWORD *)(v13 + 1648) - 1)), 0LL);
    _m_prefetchw((const void *)(v13 + 4272));
    v24 = *(_DWORD *)(v13 + 4272);
    if ( !v24 )
LABEL_127:
      KeBugCheckEx(0x51u, 0x17uLL, v13, 9uLL, v18);
    while ( 1 )
    {
      v25 = v24;
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 4272), v24 + 1, v24);
      if ( v25 == v24 )
        break;
      if ( !v24 )
        goto LABEL_127;
    }
    v26 = (unsigned int)(*(_DWORD *)(v13 + 1648) - 1);
    v80 = 0LL;
    v81 = 0LL;
    for ( j = *(_QWORD *)(*(_QWORD *)(v13 + 1640) + 24 * (v23 & v26) + 16); j; j = *(_QWORD *)(j + 8) )
    {
      if ( *(_DWORD *)j == v18 )
      {
        v32 = j - 16;
        if ( *(_QWORD *)(j + 56) == v16 )
        {
          v33 = *(_QWORD *)(v32 + 80);
          v34 = (unsigned __int8 *)(v33 + 26);
          if ( (*(_DWORD *)v33 & 1) != 0 )
          {
            v35 = *(_WORD *)v20 >> 1;
            v36 = *(unsigned __int16 **)(v20 + 8);
            v37 = *(_WORD *)(v33 + 24);
            if ( v35 )
            {
              while ( v37 )
              {
                v38 = *v36++;
                v39 = *v34++;
                if ( v38 != (_WORD)v39 )
                {
                  if ( v38 >= 0x61u )
                  {
                    if ( v38 > 0x7Au )
                      v38 = NLS_UPCASE(v38);
                    else
                      v38 -= 32;
                  }
                  v40 = v38 - v39;
                  if ( v38 != v39 )
                    goto LABEL_35;
                }
                --v37;
                if ( !--v35 )
                  break;
              }
            }
            v40 = v35 - v37;
LABEL_35:
            if ( !v40 )
            {
LABEL_36:
              if ( j == 16 )
                break;
              v41 = *(_QWORD *)v32;
              if ( *(_QWORD *)v32 )
              {
                while ( v41 != -1 )
                {
                  v42 = v41;
                  v41 = _InterlockedCompareExchange64((volatile signed __int64 *)v32, v41 + 1, v41);
                  if ( v42 == v41 )
                    goto LABEL_40;
                  if ( !v41 )
                    goto LABEL_49;
                }
LABEL_125:
                KeBugCheckEx(0x51u, 0x24uLL, j - 16, 0LL, 0LL);
              }
LABEL_49:
              ExAcquirePushLockSharedEx(v32 + 48, 0LL);
              _InterlockedIncrement((volatile signed __int32 *)(v32 + 56));
              if ( (*(_DWORD *)(v32 + 8) & 0x80000) != 0 )
                KeBugCheckEx(0x51u, 0x20uLL, j - 16, 0LL, 0LL);
              if ( !_InterlockedIncrement64((volatile signed __int64 *)v32) )
                goto LABEL_125;
              if ( (*(_BYTE *)(v32 + 64) & 2) != 0 )
              {
                v46 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0);
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(1uLL);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
                  ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v46);
                if ( v46 )
                  BYTE2(v46[1].Left) |= 1u;
                *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
                *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
                v48 = *(_BYTE *)(v32 + 64);
                if ( (v48 & 2) != 0 )
                {
                  v49 = v32 + 224;
                  if ( (v48 & 4) != 0 )
                  {
                    **(_BYTE **)v49 = 1;
                    *(_BYTE *)(v32 + 64) &= ~4u;
                  }
                  else
                  {
                    v50 = *(_BYTE **)v49;
                    v51 = *(_QWORD **)(v32 + 232);
                    if ( *(_QWORD *)(*(_QWORD *)v49 + 8LL) != v49 || *v51 != v49 )
                      __fastfail(3u);
                    --CmpDelayedCloseElements;
                    *v51 = v50;
                    *((_QWORD *)v50 + 1) = v51;
                    --qword_1409AEF38;
                  }
                  *(_QWORD *)(v32 + 232) = v32 + 224;
                  *(_QWORD *)v49 = v49;
                  _InterlockedOr(v71, 0);
                  *(_BYTE *)(v32 + 64) &= ~2u;
                }
                v52 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
                *(&CmpDelayedCloseTableLock + 1) = 0LL;
                v53 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
                if ( v53 )
                  ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v53);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v52 < 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
                __writecr8(v52);
                KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
              }
              v54 = (*(_DWORD *)(v32 + 8) & 0x80000) != 0;
              if ( *(struct _KTHREAD **)(v32 + 56) == KeGetCurrentThread() )
                *(_QWORD *)(v32 + 56) = 0LL;
              else
                _InterlockedDecrement((volatile signed __int32 *)(v32 + 56));
              ExReleasePushLockEx(v32 + 48, 0LL);
              if ( v54 && (*(_DWORD *)(v32 + 8) & 0x80000) != 0 )
                CmpFreeKeyControlBlock(j - 16);
LABEL_40:
              v43 = v85;
              if ( v17 == v85 - 1 )
              {
                v72 = 1;
              }
              else
              {
                v44 = *(_QWORD *)(v13 + 1640)
                    + 24 * ((unsigned int)(*(_DWORD *)(v13 + 1648) - 1) & (v77 ^ ((unsigned __int64)v77 >> 9)));
                *(_QWORD *)(v44 + 8) = 0LL;
                ExReleasePushLockEx(v44, 0LL);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 4272), 0xFFFFFFFF) == 1 )
                  CmpDeleteHive((PVOID)v13);
                v43 = v85;
              }
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2a, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                goto LABEL_128;
              v16 = j - 16;
              v14 = v74 + 1;
              BugCheckParameter2a = j - 16;
              v45 = (*(_DWORD *)(v32 + 184) & 0x100000) == 0;
              v10 = a4;
              ++v74;
              if ( !v45 || (++v17, v19 = v78 + 1, ++v78, v17 >= v43) )
              {
                v8 = 0;
                goto LABEL_18;
              }
              goto LABEL_6;
            }
          }
          else
          {
            LOWORD(v80) = *(_WORD *)(v33 + 24);
            WORD1(v80) = v80;
            v81 = v33 + 26;
            if ( !(unsigned int)CmpCompareUnicodeString(v20, &v80, 2LL) )
              goto LABEL_36;
          }
          v16 = BugCheckParameter2a;
        }
      }
    }
    v8 = 0;
    v28 = *(_QWORD *)(v13 + 1640)
        + 24
        * ((unsigned int)(*(_DWORD *)(v13 + 1648) - 1) & ((unsigned int)(101027 * v79) ^ ((unsigned __int64)(unsigned int)(101027 * v79) >> 9)));
    *(_QWORD *)(v28 + 8) = 0LL;
    ExReleasePushLockEx(v28, 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 4272), 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PVOID)v13);
    v16 = BugCheckParameter2a;
    v14 = v74;
    v10 = a4;
LABEL_18:
    v11 = i;
    v9 = v84;
LABEL_19:
    if ( v76 != BugCheckParameter2 && _InterlockedExchangeAdd64(v76, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
LABEL_128:
      KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
    v29 = v14 + v11;
    v9 += v14;
    i = v29;
    v84 = v9;
    if ( (*(_DWORD *)(v16 + 184) & 0x20000) == 0 )
    {
      v30 = v72;
      goto LABEL_22;
    }
    ExAcquirePushLockSharedEx(v16 + 48, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 56));
    if ( (*(_DWORD *)(v16 + 184) & 0x20000) == 0 )
    {
      v30 = v72;
LABEL_88:
      CmpUnlockKcb(v16);
      v29 = i;
LABEL_22:
      *a6 = v16;
      *a7 = v30;
      *a8 = v29;
      return v8;
    }
    v12 = *(_QWORD *)(v16 + 104);
    v76 = (volatile signed __int64 *)v12;
    v55 = _InterlockedIncrement64((volatile signed __int64 *)v12);
    if ( !v55 )
      KeBugCheckEx(0x51u, 0x24uLL, v12, 0LL, 0LL);
    if ( v55 == 1 )
      goto LABEL_137;
    v56 = *(_QWORD *)(v12 + 32);
    if ( (*(_DWORD *)(v56 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(v56 + 4208) != KeGetCurrentThread() )
      break;
    if ( (*(_DWORD *)(v12 + 8) & 0x40000) != 0 )
    {
      v61 = a5;
      v8 = -1073740763;
      v65 = 394496LL;
      goto LABEL_132;
    }
    v57 = *(_DWORD *)(v16 + 8) & 0x80000;
    if ( *(struct _KTHREAD **)(v16 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(v16 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v16 + 56));
    ExReleasePushLockEx(v16 + 48, 0LL);
    if ( v57 && (*(_DWORD *)(v16 + 8) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(v16);
    v30 = v72;
    if ( v72 )
      CmpUnlockHashEntryByKcb(v16);
    v82[0] = 0LL;
    v82[1] = 0LL;
    CmpInitializeDelayDerefContext(v82);
    v58 = *(_QWORD *)v16;
    if ( *(_QWORD *)v16 <= 1uLL )
    {
LABEL_118:
      v66 = BugCheckParameter2a;
      v67 = *(void **)(v16 + 32);
      CmpLockHashEntryExclusiveByKcb(BugCheckParameter2a);
      CmpLockKcbExclusive(v66);
      v68 = *(_QWORD *)(v66 + 192);
      v69 = 0LL;
      if ( v68 )
      {
        v70 = *(_QWORD *)(v68 + 24);
        if ( v70 )
        {
          v69 = *(_QWORD *)(v70 + 16);
          CmpUnlockKcb(v66);
          CmpLockKcbExclusive(v69);
          CmpLockKcbExclusive(v66);
        }
      }
      CmpDereferenceKeyControlBlockWithLock(v66);
      CmpUnlockKcb(v66);
      if ( v69 )
        CmpUnlockKcb(v69);
      CmpUnlockHashEntry(v67);
      CmpDrainDelayDerefContext(v82);
      v9 = v84;
    }
    else
    {
      while ( 1 )
      {
        v59 = v58 - 1;
        v58 = _InterlockedCompareExchange64((volatile signed __int64 *)v16, v58 - 1, v58);
        if ( v58 == v59 + 1 )
          break;
        if ( v58 <= 1 )
          goto LABEL_118;
      }
      if ( v58 < v59 )
        KeBugCheckEx(0x51u, 0x25uLL, v16, 0LL, 0LL);
    }
    if ( v30 )
    {
      v16 = v12;
      CmpLockHashEntrySharedByKcb(v12);
      ExAcquirePushLockSharedEx(v12 + 48, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 56));
      goto LABEL_88;
    }
    a3 = v85;
  }
  v8 = -1073741772;
  v61 = a5;
  if ( CmpLoadingSystemHivesActive
    && (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread()
    && a5
    && (ComponentNameAtIndex = CmpGetComponentNameAtIndex(v10, v9 - 1),
        (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v63, v64, a5 + 34)) )
  {
    *a5 |= 0x100u;
    v8 = 259;
    v65 = 393984LL;
  }
  else
  {
    v65 = 394240LL;
  }
LABEL_132:
  CmpRecordParseFailure(v61, v65, v8);
  CmpDereferenceKeyControlBlockUnsafe(v12);
  CmpUnlockKcb(v16);
  if ( v72 )
    CmpUnlockHashEntryByKcb(v16);
  CmpDereferenceKeyControlBlock(v16);
  return v8;
}
