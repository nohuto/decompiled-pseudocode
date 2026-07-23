/*
 * XREFs of CmpPerformCompleteKcbCacheLookup @ 0x1405E6320
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405AA42C (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405AB470 (CmpUnlockHashEntryByKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1405AB61C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDeleteHive @ 0x1405B0DEC (CmpDeleteHive.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1405B0FE0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1405D268C (CmpLockHashEntrySharedByKcb.c)
 *     CmpLockKcbExclusive @ 0x1405D2728 (CmpLockKcbExclusive.c)
 *     CmpUnlockHashEntry @ 0x1405D29F8 (CmpUnlockHashEntry.c)
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpGetComponentNameAtIndex @ 0x140645780 (CmpGetComponentNameAtIndex.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 *     CmpRecordParseFailure @ 0x140699420 (CmpRecordParseFailure.c)
 *     CmpCompareUnicodeString @ 0x1406B7838 (CmpCompareUnicodeString.c)
 *     CmpWaitForHiveMount @ 0x140756794 (CmpWaitForHiveMount.c)
 */

__int64 __fastcall CmpPerformCompleteKcbCacheLookup(
        volatile signed __int32 *BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        volatile signed __int32 **a6,
        char *a7,
        _WORD *a8)
{
  __int16 v8; // r13
  __int64 v9; // r12
  unsigned int v10; // esi
  ULONG_PTR v11; // r14
  _QWORD *v12; // rbp
  __int16 v13; // dx
  signed __int32 v14; // eax
  signed __int32 v15; // ecx
  signed __int32 v16; // ett
  volatile signed __int32 *v17; // r15
  unsigned int v18; // r14d
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // rax
  int v24; // r14d
  unsigned int v25; // edi
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  __int64 v28; // r13
  ULONG_PTR v29; // rcx
  char v30; // bp
  __int64 v32; // r12
  __int64 v33; // rcx
  unsigned __int8 *v34; // r15
  unsigned __int16 v35; // bp
  WCHAR *v36; // r14
  unsigned __int16 v37; // di
  WCHAR v38; // ax
  int v39; // esi
  int v40; // edx
  signed __int32 v41; // eax
  signed __int32 v42; // ett
  unsigned int v43; // r8d
  unsigned int v44; // r14d
  ULONG_PTR v45; // rcx
  bool v46; // zf
  signed __int32 v47; // eax
  signed __int32 v48; // ecx
  signed __int32 v49; // ett
  __int64 v50; // rcx
  int v51; // ebx
  unsigned __int32 v52; // eax
  unsigned __int32 v53; // edx
  signed __int32 v54; // eax
  signed __int32 v55; // ecx
  signed __int32 v56; // ett
  PRTL_BALANCED_NODE v57; // rdi
  unsigned __int8 CurrentIrql; // si
  char v59; // al
  __int64 *v60; // rcx
  __int64 *v61; // rdx
  __int64 **v62; // rax
  unsigned __int8 v63; // di
  signed __int32 v64; // eax
  char v65; // si
  bool v66; // di
  char v67; // di
  _QWORD *v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v72; // rbx
  __int64 ComponentNameAtIndex; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rax
  __int64 v77; // rdx
  unsigned int v78; // ebx
  _QWORD *v79; // rsi
  __int64 v80; // rax
  ULONG_PTR v81; // rdi
  __int64 v82; // rdx
  ULONG_PTR v83; // rcx
  signed __int32 v84[8]; // [rsp+0h] [rbp-D8h] BYREF
  char v85; // [rsp+30h] [rbp-A8h]
  __int16 v86; // [rsp+32h] [rbp-A6h]
  __int16 v87; // [rsp+34h] [rbp-A4h]
  __int64 v88; // [rsp+38h] [rbp-A0h]
  volatile signed __int32 *v89; // [rsp+40h] [rbp-98h]
  unsigned int v90; // [rsp+48h] [rbp-90h]
  int v91; // [rsp+4Ch] [rbp-8Ch]
  unsigned int v92; // [rsp+50h] [rbp-88h]
  PVOID P; // [rsp+58h] [rbp-80h]
  __int64 v94; // [rsp+60h] [rbp-78h]
  __int64 v95; // [rsp+68h] [rbp-70h]
  volatile signed __int32 *v96; // [rsp+70h] [rbp-68h]
  _WORD v97[4]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v98; // [rsp+80h] [rbp-58h]
  unsigned int v100; // [rsp+E8h] [rbp+10h]
  unsigned int v101; // [rsp+F0h] [rbp+18h]

  v101 = a3;
  v100 = a2;
  v96 = BugCheckParameter2;
  v88 = 0LL;
  v8 = 0;
  v86 = 0;
  v9 = a4;
  v10 = a2;
  v11 = (ULONG_PTR)BugCheckParameter2;
LABEL_2:
  v12 = *(_QWORD **)(v11 + 24);
  v13 = 0;
  v87 = 0;
  v14 = *(_DWORD *)v11;
  P = v12;
  v85 = 0;
  v15 = v14 + 1;
  if ( v14 != -1 )
  {
    while ( 1 )
    {
      if ( v15 == 1 )
LABEL_159:
        KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
      v16 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)v11, v15, v14);
      if ( v16 == v14 )
        break;
      v15 = v14 + 1;
      if ( v14 == -1 )
        goto LABEL_160;
    }
    v17 = (volatile signed __int32 *)v11;
    v89 = (volatile signed __int32 *)v11;
    v18 = v10;
    v90 = v10;
    v19 = *((_DWORD *)v96 + 2);
    if ( v10 >= a3 )
      goto LABEL_21;
    v20 = v10;
    v95 = v10;
LABEL_7:
    if ( v18 >= 8 )
    {
      v20 = v95;
      v21 = *(_QWORD *)(v9 + 160) + 16 * (v18 - 8 + 6LL);
    }
    else
    {
      v21 = v9 + 16 * (v18 + 2LL);
    }
    v94 = v21;
    if ( v18 >= 8 )
      v22 = *(_DWORD *)(*(_QWORD *)(v9 + 160) + 4LL * (v18 - 8));
    else
      v22 = *(_DWORD *)(v9 + 4 * v20);
    v19 = v22 + 37 * v19;
    v23 = v12[205];
    v24 = v19 ^ (v19 >> 9);
    v91 = v24;
    v92 = 101027 * v24;
    v25 = (101027 * v24) ^ ((unsigned int)(101027 * v24) >> 9);
    ExAcquirePushLockSharedEx(v23 + 24LL * (v25 & (*((_DWORD *)v12 + 412) - 1)), 0LL);
    _m_prefetchw(v12 + 536);
    v26 = *((_DWORD *)v12 + 1072);
    if ( !v26 )
LABEL_147:
      KeBugCheckEx(0x51u, 0x17uLL, (ULONG_PTR)v12, 9uLL, v19);
    while ( 1 )
    {
      v27 = v26;
      v26 = _InterlockedCompareExchange((volatile signed __int32 *)v12 + 1072, v26 + 1, v26);
      if ( v27 == v26 )
        break;
      if ( !v26 )
        goto LABEL_147;
    }
    v28 = *(_QWORD *)(v12[205] + 24LL * (v25 & (*((_DWORD *)v12 + 412) - 1)) + 16);
    if ( !v28 )
      goto LABEL_17;
    while ( 1 )
    {
      if ( *(_DWORD *)v28 == v19 )
      {
        v32 = v28 - 8;
        if ( *(volatile signed __int32 **)(v28 + 56) == v17 )
        {
          v33 = *(_QWORD *)(v32 + 72);
          v34 = (unsigned __int8 *)(v33 + 26);
          if ( (*(_DWORD *)v33 & 1) != 0 )
          {
            v35 = *(_WORD *)v21 >> 1;
            v36 = *(WCHAR **)(v21 + 8);
            v37 = *(_WORD *)(v33 + 24);
            if ( v35 )
            {
              while ( 1 )
              {
                if ( !v37 )
                {
LABEL_36:
                  v21 = v94;
                  goto LABEL_37;
                }
                v38 = *v36++;
                v39 = *v34++;
                if ( v38 != (_WORD)v39 )
                {
                  if ( v38 >= 0x61u )
                  {
                    if ( v38 > 0x7Au )
                      v38 = RtlUpcaseUnicodeChar(v38);
                    else
                      v38 -= 32;
                  }
                  v40 = v38 - v39;
                  if ( v38 != v39 )
                    break;
                }
                --v37;
                if ( !--v35 )
                  goto LABEL_36;
              }
              v21 = v94;
            }
            else
            {
LABEL_37:
              v40 = v35 - v37;
            }
            if ( !v40 )
            {
LABEL_39:
              if ( v28 == 8 )
              {
LABEL_16:
                v24 = v91;
                v12 = P;
LABEL_17:
                v29 = v12[205]
                    + 24
                    * ((unsigned int)(*((_DWORD *)v12 + 412) - 1) & ((unsigned int)(101027 * v24) ^ ((unsigned __int64)(unsigned int)(101027 * v24) >> 9)));
                *(_QWORD *)(v29 + 8) = 0LL;
                ExReleasePushLockEx(v29, 0LL);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 1072, 0xFFFFFFFF) == 1 )
                  CmpDeleteHive(v12);
                goto LABEL_19;
              }
              v41 = *(_DWORD *)v32;
              if ( *(_DWORD *)v32 )
              {
                while ( v41 != -1 )
                {
                  v42 = v41;
                  v41 = _InterlockedCompareExchange((volatile signed __int32 *)v32, v41 + 1, v41);
                  if ( v42 == v41 )
                    goto LABEL_43;
                  if ( !v41 )
                    goto LABEL_69;
                }
LABEL_129:
                CmpUnlockHashEntry(P, v19);
LABEL_19:
                v17 = v89;
                v13 = v87;
                v9 = a4;
LABEL_20:
                v10 = v100;
                v8 = v86;
LABEL_21:
                if ( v96 != BugCheckParameter2 && _InterlockedExchangeAdd(v96, 0xFFFFFFFF) == 1 )
LABEL_148:
                  KeBugCheckEx(0x51u, 0x1FuLL, 0LL, 0LL, 0LL);
                v8 += v13;
                v10 += v13;
                v86 = v8;
                v100 = v10;
                if ( (v17[44] & 0x20000) == 0 )
                {
                  v30 = v85;
                  goto LABEL_24;
                }
                ExAcquirePushLockSharedEx((ULONG_PTR)(v17 + 10), 0LL);
                _InterlockedIncrement(v17 + 12);
                if ( (v17[44] & 0x20000) != 0 )
                {
                  v11 = *((_QWORD *)v17 + 12);
                  v96 = (volatile signed __int32 *)v11;
                  v47 = *(_DWORD *)v11;
                  v48 = *(_DWORD *)v11 + 1;
                  if ( *(_DWORD *)v11 == -1 )
                  {
LABEL_153:
                    LODWORD(v88) = -1073741670;
                    CmpRecordParseFailure(a5, 393728LL);
                    goto LABEL_154;
                  }
                  while ( 1 )
                  {
                    if ( v48 == 1 )
                      goto LABEL_159;
                    v49 = v47;
                    v47 = _InterlockedCompareExchange((volatile signed __int32 *)v11, v48, v47);
                    if ( v49 == v47 )
                      break;
                    v48 = v47 + 1;
                    if ( v47 == -1 )
                      goto LABEL_153;
                  }
                  v50 = *(_QWORD *)(v11 + 24);
                  if ( (*(_DWORD *)(v50 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(v50 + 4208) != KeGetCurrentThread() )
                  {
                    v72 = a5;
                    v88 = 3221225524LL;
                    if ( CmpLoadingSystemHivesActive )
                    {
                      if ( (struct _KTHREAD *)CmpMountThread != KeGetCurrentThread() )
                      {
                        if ( a5 )
                        {
                          ComponentNameAtIndex = CmpGetComponentNameAtIndex(v9, v10 - 1);
                          if ( (unsigned __int8)CmpWaitForHiveMount(ComponentNameAtIndex, v74, v75, a5 + 34) )
                          {
                            *a5 |= 0x100u;
                            v76 = 259LL;
                            v77 = 393984LL;
                            goto LABEL_151;
                          }
                        }
                      }
                    }
                    v77 = 394240LL;
LABEL_152:
                    CmpRecordParseFailure(v72, v77);
                    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)v11);
LABEL_154:
                    CmpUnlockKcb((ULONG_PTR)v17);
                    if ( v85 )
                      CmpUnlockHashEntryByKcb((__int64)v17);
                    if ( v17 )
                    {
                      v83 = (ULONG_PTR)v17;
                      goto LABEL_162;
                    }
                    return (unsigned int)v88;
                  }
                  if ( (*(_DWORD *)(v11 + 4) & 0x40000) != 0 )
                  {
                    v72 = a5;
                    v76 = 3221226533LL;
                    v77 = 394496LL;
LABEL_151:
                    v88 = v76;
                    goto LABEL_152;
                  }
                  v51 = v17[1] & 0x80000;
                  if ( *((struct _KTHREAD **)v17 + 6) == KeGetCurrentThread() )
                    *((_QWORD *)v17 + 6) = 0LL;
                  else
                    _InterlockedDecrement(v17 + 12);
                  ExReleasePushLockEx((ULONG_PTR)(v17 + 10), 0LL);
                  if ( v51 && (v17[1] & 0x80000) != 0 )
                    CmpFreeKeyControlBlock((ULONG_PTR)v17);
                  v30 = v85;
                  if ( v85 )
                    CmpUnlockHashEntryByKcb((__int64)v17);
                  v52 = *v17;
                  if ( *v17 <= 1u )
                  {
LABEL_139:
                    v78 = *((_DWORD *)v17 + 2);
                    v79 = (_QWORD *)*((_QWORD *)v17 + 3);
                    CmpLockHashEntryExclusiveByKcb((ULONG_PTR)v17);
                    CmpLockKcbExclusive((__int64)v17);
                    v80 = *((_QWORD *)v17 + 23);
                    v81 = 0LL;
                    if ( v80 )
                    {
                      v82 = *(_QWORD *)(v80 + 24);
                      if ( v82 )
                      {
                        v81 = *(_QWORD *)(v82 + 16);
                        CmpUnlockKcb((ULONG_PTR)v17);
                        CmpLockKcbExclusive(v81);
                        CmpLockKcbExclusive((__int64)v17);
                      }
                    }
                    CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v17);
                    CmpUnlockKcb((ULONG_PTR)v17);
                    if ( v81 )
                      CmpUnlockKcb(v81);
                    CmpUnlockHashEntry(v79, v78);
                    v10 = v100;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v53 = v52;
                      v52 = _InterlockedCompareExchange(v17, v52 - 1, v52);
                      if ( v52 == v53 )
                        break;
                      if ( v52 <= 1 )
                        goto LABEL_139;
                    }
                  }
                  if ( !v30 )
                  {
                    a3 = v101;
                    goto LABEL_2;
                  }
                  v17 = (volatile signed __int32 *)v11;
                  CmpLockHashEntrySharedByKcb(v11);
                  ExAcquirePushLockSharedEx(v11 + 40, 0LL);
                  _InterlockedIncrement((volatile signed __int32 *)(v11 + 48));
                }
                else
                {
                  v30 = v85;
                }
                CmpUnlockKcb((ULONG_PTR)v17);
LABEL_24:
                *a6 = v17;
                *a7 = v30;
                *a8 = v8;
                return (unsigned int)v88;
              }
LABEL_69:
              ExAcquirePushLockSharedEx(v32 + 40, 0LL);
              _InterlockedIncrement((volatile signed __int32 *)(v32 + 48));
              if ( (*(_DWORD *)(v32 + 4) & 0x80000) != 0 )
                KeBugCheckEx(0x51u, 0x20uLL, v28 - 8, 0LL, 0LL);
              v54 = *(_DWORD *)v32;
              v55 = *(_DWORD *)v32 + 1;
              if ( *(_DWORD *)v32 == -1 )
              {
LABEL_109:
                v65 = 0;
              }
              else
              {
                while ( 1 )
                {
                  v56 = v54;
                  v54 = _InterlockedCompareExchange((volatile signed __int32 *)v32, v55, v54);
                  if ( v56 == v54 )
                    break;
                  v55 = v54 + 1;
                  if ( v54 == -1 )
                    goto LABEL_109;
                }
                if ( (*(_BYTE *)(v32 + 56) & 1) != 0 )
                {
                  v67 = 0;
                  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayDerefKCBLock);
                  if ( (*(_BYTE *)(v32 + 56) & 1) != 0 )
                  {
                    v68 = (_QWORD *)(v32 + 216);
                    v69 = *(_QWORD *)(v32 + 216);
                    v70 = *(_QWORD **)(v32 + 224);
                    if ( *(_QWORD *)(v69 + 8) != v32 + 216 || (_QWORD *)*v70 != v68 )
                      goto LABEL_145;
                    *v70 = v69;
                    *(_QWORD *)(v69 + 8) = v70;
                    *(_QWORD *)(v32 + 224) = v32 + 216;
                    *v68 = v68;
                    _InterlockedOr(v84, 0);
                    *(_BYTE *)(v32 + 56) &= ~1u;
                    v67 = 1;
                  }
                  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
                  if ( !v67 )
                    goto LABEL_73;
                  CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)(v28 - 8));
                }
                else
                {
LABEL_73:
                  if ( (*(_BYTE *)(v32 + 56) & 2) != 0 )
                  {
                    v57 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0);
                    CurrentIrql = KeGetCurrentIrql();
                    __writecr8(1uLL);
                    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
                      ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v57);
                    if ( v57 )
                      BYTE2(v57[1].Left) |= 1u;
                    *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
                    *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
                    v59 = *(_BYTE *)(v32 + 56);
                    if ( (v59 & 2) != 0 )
                    {
                      v60 = (__int64 *)(v32 + 216);
                      if ( (v59 & 4) == 0 )
                      {
                        v61 = (__int64 *)*v60;
                        v62 = *(__int64 ***)(v32 + 224);
                        if ( *(__int64 **)(*v60 + 8) == v60 && *v62 == v60 )
                        {
                          --CmpDelayedCloseElements;
                          *v62 = v61;
                          v61[1] = (__int64)v62;
                          --qword_14096FB28;
                          goto LABEL_83;
                        }
LABEL_145:
                        __fastfail(3u);
                      }
                      *(_BYTE *)*v60 = 1;
                      *(_BYTE *)(v32 + 56) &= ~4u;
LABEL_83:
                      *(_QWORD *)(v32 + 224) = v32 + 216;
                      *v60 = (__int64)v60;
                      _InterlockedOr(v84, 0);
                      *(_BYTE *)(v32 + 56) &= ~2u;
                    }
                    v63 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
                    *(&CmpDelayedCloseTableLock + 1) = 0LL;
                    v64 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
                    if ( v64 )
                      ExpReleaseFastMutexContended((__int64)&CmpDelayedCloseTableLock, v64);
                    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v63 < 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                    }
                    __writecr8(v63);
                    KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
                  }
                }
                v65 = 1;
              }
              v66 = (*(_DWORD *)(v32 + 4) & 0x80000) != 0;
              if ( *(struct _KTHREAD **)(v32 + 48) == KeGetCurrentThread() )
                *(_QWORD *)(v32 + 48) = 0LL;
              else
                _InterlockedDecrement((volatile signed __int32 *)(v32 + 48));
              ExReleasePushLockEx(v32 + 40, 0LL);
              if ( v66 && (*(_DWORD *)(v32 + 4) & 0x80000) != 0 )
                CmpFreeKeyControlBlock(v28 - 8);
              if ( !v65 )
                goto LABEL_129;
LABEL_43:
              v43 = v101;
              v44 = v90;
              v12 = P;
              if ( v90 == v101 - 1 )
              {
                v85 = 1;
              }
              else
              {
                v45 = *((_QWORD *)P + 205)
                    + 24 * ((unsigned int)(*((_DWORD *)P + 412) - 1) & (v92 ^ ((unsigned __int64)v92 >> 9)));
                *(_QWORD *)(v45 + 8) = 0LL;
                ExReleasePushLockEx(v45, 0LL);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 1072, 0xFFFFFFFF) == 1 )
                  CmpDeleteHive(v12);
                v43 = v101;
              }
              if ( _InterlockedExchangeAdd(v89, 0xFFFFFFFF) == 1 )
                goto LABEL_148;
              v17 = (volatile signed __int32 *)(v28 - 8);
              v13 = v87 + 1;
              v89 = (volatile signed __int32 *)(v28 - 8);
              v46 = (*(_DWORD *)(v32 + 176) & 0x100000) == 0;
              v9 = a4;
              ++v87;
              if ( !v46 )
                goto LABEL_20;
              v18 = v44 + 1;
              v20 = v95 + 1;
              v90 = v18;
              ++v95;
              if ( v18 >= v43 )
                goto LABEL_20;
              goto LABEL_7;
            }
          }
          else
          {
            v97[0] = *(_WORD *)(v33 + 24);
            v97[1] = v97[0];
            v98 = v33 + 26;
            if ( !(unsigned int)CmpCompareUnicodeString(v21, v97, 2LL) )
              goto LABEL_39;
          }
          v17 = v89;
        }
      }
      v28 = *(_QWORD *)(v28 + 8);
      if ( !v28 )
        goto LABEL_16;
    }
  }
LABEL_160:
  LODWORD(v88) = -1073741670;
  CmpRecordParseFailure(a5, 393472LL);
  if ( (volatile signed __int32 *)v11 != BugCheckParameter2 )
  {
    v83 = v11;
LABEL_162:
    CmpDereferenceKeyControlBlock(v83);
  }
  return (unsigned int)v88;
}
