/*
 * XREFs of MiTrimSharedPageFromViews @ 0x1400EB48C
 * Callers:
 *     MiTrimSection @ 0x1400EAC24 (MiTrimSection.c)
 * Callees:
 *     KeForceAttachProcess @ 0x14001674C (KeForceAttachProcess.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetSessionById @ 0x14007E4D0 (MmGetSessionById.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiWriteValidPteNewProtection @ 0x140087960 (MiWriteValidPteNewProtection.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140088034 (MI_WSLE_LOG_ACCESS.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     MiGetSystemCacheReverseMap @ 0x1400ADE90 (MiGetSystemCacheReverseMap.c)
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MiSynchronizeSystemVa @ 0x1400E9FE8 (MiSynchronizeSystemVa.c)
 *     MiUnlockSystemVa @ 0x1400ECE44 (MiUnlockSystemVa.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     MiPrepareAttachThread @ 0x1400EEABC (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x1400EEB1C (MiAttachThreadDone.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     KeForceDetachProcess @ 0x140128044 (KeForceDetachProcess.c)
 *     MiReplaceLockedPage @ 0x14018B174 (MiReplaceLockedPage.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmQuitNextSession @ 0x1406D08F0 (MmQuitNextSession.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(void **a1, int a2, char a3, __int64 a4, _BYTE *a5)
{
  unsigned __int64 i; // rdx
  __int64 v8; // r9
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 result; // rax
  void **v12; // r12
  void *v13; // rdi
  _KPROCESS *v14; // rsi
  void *v15; // rdi
  unsigned __int64 v16; // r14
  _QWORD *v17; // r8
  __int64 v18; // r8
  unsigned __int8 OldIrql; // di
  __int64 v20; // r8
  __int64 v21; // r12
  __int64 v22; // rdi
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r15
  __int64 v25; // rdi
  unsigned int v26; // esi
  int v27; // eax
  __int64 SystemCacheReverseMap; // rax
  _QWORD *v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  _BYTE *v35; // r15
  __int64 v36; // rax
  int v37; // ecx
  ULONG_PTR v38; // rdi
  _KPROCESS *v39; // r12
  __int64 v40; // r11
  unsigned __int64 ProtoPteAddress; // rax
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // r11
  __int64 v45; // rcx
  char v46; // al
  __int64 v47; // r10
  unsigned __int64 Address; // rax
  _QWORD *v49; // rdi
  unsigned __int64 v50; // r8
  unsigned int v51; // eax
  unsigned int v52; // ecx
  ULONG_PTR SessionById; // rax
  int SystemRegionType; // eax
  _QWORD *v55; // rbx
  void *v56; // rcx
  int v57; // eax
  int v58; // ecx
  __int64 SessionVm; // rax
  int v60; // r8d
  struct _KTHREAD *v61; // r12
  unsigned __int64 v62; // r8
  signed __int64 *v63; // rdi
  __int64 v64; // rax
  int v65; // ecx
  signed __int64 *v66; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  int v68; // eax
  unsigned __int8 v69; // al
  char v70; // cl
  unsigned __int8 v71; // si
  struct _KPRCB *v72; // rcx
  unsigned __int8 v73; // [rsp+30h] [rbp-D0h]
  _KPROCESS *Object; // [rsp+38h] [rbp-C8h]
  unsigned __int64 valid; // [rsp+40h] [rbp-C0h]
  void *v76; // [rsp+48h] [rbp-B8h]
  __int64 v77; // [rsp+48h] [rbp-B8h]
  unsigned int v78; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v79; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v81; // [rsp+68h] [rbp-98h]
  int v82; // [rsp+70h] [rbp-90h]
  int v83; // [rsp+74h] [rbp-8Ch]
  __int64 *v85; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  __int64 v87; // [rsp+90h] [rbp-70h]
  ULONG_PTR v88; // [rsp+98h] [rbp-68h]
  __int64 v89; // [rsp+A0h] [rbp-60h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-58h]
  _BYTE *v91; // [rsp+B0h] [rbp-50h]
  PVOID v92; // [rsp+B8h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v94; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v95[16]; // [rsp+E0h] [rbp-20h] BYREF
  int v96; // [rsp+160h] [rbp+60h] BYREF
  __int16 v97; // [rsp+164h] [rbp+64h]
  __int64 v98; // [rsp+168h] [rbp+68h]
  __int64 v99; // [rsp+170h] [rbp+70h]
  __int64 v100; // [rsp+178h] [rbp+78h]
  int v101; // [rsp+220h] [rbp+120h] BYREF
  __int16 v102; // [rsp+224h] [rbp+124h]
  __int64 v103; // [rsp+228h] [rbp+128h]
  __int64 v104; // [rsp+230h] [rbp+130h]
  __int64 v105; // [rsp+238h] [rbp+138h]
  _BYTE v106[48]; // [rsp+2E0h] [rbp+1E0h] BYREF

  v91 = a5;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v95, 0, sizeof(v95));
  v73 = 17;
  HIDWORD(v98) = 0;
  v9 = 0LL;
  v10 = 0LL;
  CurrentThread = KeGetCurrentThread();
  result = 0LL;
  v78 = 0;
  HIDWORD(v103) = 0;
  valid = 0LL;
  if ( !a1 )
    return result;
  while ( 1 )
  {
    v12 = a1;
    P = a1;
    v13 = *a1;
    v88 = 0LL;
    v92 = v13;
    v14 = (_KPROCESS *)v12[1];
    v15 = v12[4];
    v16 = (unsigned __int64)v12[2];
    v81 = (unsigned __int64)v12[3];
    Object = v14;
    v17 = 0LL;
    v76 = v15;
    v87 = 0LL;
    v83 = 0;
    v82 = 0;
    if ( v14 && v14 != KeGetCurrentThread()->ApcState.Process )
    {
      KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
      v83 = MiPrepareAttachThread(v14, &v14[1].IdealNode[12]);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v18 = 0LL;
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v18 = 0LL;
      }
      __writecr8(OldIrql);
      if ( !v83 )
        goto LABEL_32;
      KeForceAttachProcess((ULONG_PTR)v14, (__int64)v106);
      v15 = v76;
      goto LABEL_7;
    }
    v51 = *((_DWORD *)v12 + 11);
    if ( v51 < 2 )
      goto LABEL_7;
    v52 = *((_DWORD *)v12 + 10);
    if ( v52 == -1 )
    {
      v17 = &unk_14043A000;
      goto LABEL_103;
    }
    if ( v52 == -2 )
      goto LABEL_104;
    SessionById = MmGetSessionById(v52);
    v18 = 0LL;
    v88 = SessionById;
    if ( SessionById )
    {
      if ( (int)MmAttachSession(SessionById) >= 0 )
      {
        v51 = *((_DWORD *)v12 + 11);
        v17 = (_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2944);
LABEL_103:
        v87 = (__int64)v17;
LABEL_104:
        if ( v51 == 3 )
        {
          SystemRegionType = MiGetSystemRegionType(v16);
          if ( *((_DWORD *)v12 + 10) == -2 )
          {
            if ( SystemRegionType == 1 )
              goto LABEL_96;
          }
          else if ( SystemRegionType != 1 )
          {
            goto LABEL_96;
          }
        }
        else
        {
          if ( (a3 & 6) != 0 )
          {
LABEL_96:
            v18 = 0LL;
            goto LABEL_32;
          }
          v61 = CurrentThread;
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockSharedEx(v17[1], 0LL);
          v8 = v87;
          for ( i = *(_QWORD *)(v87 + 16); ; i = *(_QWORD *)i )
          {
            while ( 1 )
            {
              if ( !i )
                goto LABEL_160;
              v62 = *(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL;
              if ( v16 < v62 + *(_QWORD *)(i + 32) )
                break;
              i = *(_QWORD *)(i + 8);
            }
            if ( v16 >= v62 )
              break;
          }
          v85 = *(__int64 **)(i + 48);
          if ( *v85 != a4 || v16 + (*(_QWORD *)(i + 24) << 12) - (_QWORD)v15 != v62 )
          {
LABEL_160:
            v66 = *(signed __int64 **)(v87 + 8);
            if ( _InterlockedCompareExchange64(v66, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v66);
            KeAbPostRelease((ULONG_PTR)v66);
            KiLeaveGuardedRegionUnsafe((__int64)v61);
            goto LABEL_96;
          }
          v82 = 1;
        }
LABEL_7:
        v20 = 4096LL;
        v21 = 0LL;
        v22 = (__int64)v15 - 4096;
        v23 = (v16 - 4096) >> 12;
        if ( v16 < v81 )
        {
          while ( 1 )
          {
            v24 = v23 + 1;
            v25 = v22 + 4096;
            v79 = v24;
            v77 = v25;
            if ( v9 && ((v16 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL != valid )
            {
              if ( HIDWORD(v103) )
              {
                v64 = MiFreeWsleList(v9, (__int64)&v101, 0);
                v65 = v78;
                if ( v64 )
                  v65 = 277;
                v78 = v65;
              }
              MiFlushTbList(&v96, i, v20, v8);
              if ( v14 )
              {
                if ( valid )
                  MiUnlockPageTableInternal(v9, valid);
                MiUnlockWorkingSetShared(v9, v73);
              }
              else
              {
                MiUnlockSystemVa(v95);
              }
              valid = 0LL;
              v9 = 0LL;
            }
            if ( !v14 )
              break;
            v26 = 0;
            if ( !v9 )
            {
              v9 = (__int64)&Object[1].IdealNode[12];
              if ( (a3 & 1) != 0 )
              {
                v68 = MiTbFlushType(&Object[1].IdealNode[12]);
                v21 = 0LL;
                v98 = 20LL;
                v97 = 0;
                v99 = 0LL;
                v100 = 0LL;
                v96 = v68;
              }
              else
              {
                v21 = 0LL;
              }
              v73 = MiLockWorkingSetShared(v9);
            }
            if ( v21
              && (i = *(unsigned int *)(v21 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32), v24 >= i)
              && v24 <= (*(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32)) )
            {
              v40 = a4;
            }
            else
            {
              Address = MiLocateAddress(v16);
              v18 = 0LL;
              v21 = Address;
              if ( !Address
                || (i = *(unsigned int *)(Address + 48), (i & 0x4000) != 0)
                || (v40 = a4, (*(_DWORD *)(a4 + 56) & 0x20) == 0) && (i & 7) != 0
                || (v85 = *(__int64 **)(Address + 72), *v85 != a4) )
              {
LABEL_191:
                v10 = valid;
LABEL_192:
                v14 = Object;
                goto LABEL_32;
              }
            }
            if ( (*(_DWORD *)(v40 + 56) & 0x20) != 0 )
            {
              v50 = *(_QWORD *)(v21 + 80);
              if ( (unsigned __int64)v91 < v50
                || (v8 = *(unsigned int *)(v21 + 24),
                    i = *(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32),
                    (unsigned __int64)v91 >= v50
                                           - 8 * (v8 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32))
                                           + 8 * (i + 1)) )
              {
LABEL_190:
                v10 = valid;
LABEL_95:
                v14 = Object;
                goto LABEL_96;
              }
              v16 = ((__int64)&v91[-v50] >> 3 << 12)
                  + ((v8 | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32)) << 12);
            }
            else
            {
              ProtoPteAddress = MiGetProtoPteAddress(v21, v16 >> 12, 0, &v85);
              v18 = 0LL;
              if ( !ProtoPteAddress || !v85 )
                goto LABEL_191;
              if ( v25 != MiStartingOffset(v85, ProtoPteAddress, 0xFFFFFFFF) )
                goto LABEL_190;
            }
            i = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v42 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            if ( valid == v42 )
              goto LABEL_28;
            v18 = 0LL;
            if ( !valid )
            {
              valid = MiLockLowestValidPageTable(v9, i, &v94, v8);
              v10 = valid;
              if ( valid != v42 )
                goto LABEL_95;
              goto LABEL_28;
            }
            v16 -= 4096LL;
            v23 = v24 - 1;
            v22 = v77 - 4096;
LABEL_30:
            v14 = Object;
            v16 += 4096LL;
            if ( v16 >= v81 )
            {
              v10 = valid;
              goto LABEL_32;
            }
            v20 = 4096LL;
          }
          v26 = 1;
          if ( v9 )
          {
            v10 = valid;
LABEL_15:
            v27 = MiGetSystemRegionType(v16);
            v18 = 0LL;
            if ( !*((_DWORD *)P + 11) )
            {
              if ( v27 != 8 )
                goto LABEL_192;
              SystemCacheReverseMap = MiGetSystemCacheReverseMap(v16);
              v18 = 0LL;
              v29 = (_QWORD *)SystemCacheReverseMap;
              if ( !SystemCacheReverseMap )
                goto LABEL_192;
              v30 = MiGetSystemCacheReverseMap(v16);
              v18 = 0LL;
              i = *(_QWORD *)(v30 + 24);
              v31 = i & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (i & 1) == 0 )
                v31 = *(_QWORD *)(v30 + 24);
              if ( v9 != *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)v31 + 60LL) & 0x3FF)) + 7424LL )
                goto LABEL_192;
              v32 = v29[2];
              if ( !v32 )
                goto LABEL_192;
              v33 = v29[3];
              v85 = (__int64 *)v33;
              if ( (v33 & 1) != 0 )
              {
                v33 &= ~1uLL;
                v85 = (__int64 *)v33;
              }
              if ( *(_QWORD *)v33 != a4 )
                goto LABEL_192;
              v34 = (v32 & 3) != 0 ? v29[4] : v29[5] << 18;
              if ( v34 + (v16 & 0x3FFFF) != v77 )
                goto LABEL_192;
            }
LABEL_28:
            v35 = (_BYTE *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v89 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v35);
            v8 = v89;
            if ( (v89 & 1) != 0 )
            {
              v43 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v89) >> 12) & 0xFFFFFFFFFLL)
                  - 0x58000000000LL;
              if ( (a3 & 8) == 0 || (v8 & 0x42) == 0 && (*(_BYTE *)(v43 + 34) & 0x10) == 0 )
              {
                i = 0x200000000000000LL;
                if ( (*(_QWORD *)(v43 + 40) & 0x200000000000000LL) != 0 )
                {
                  v45 = *(_QWORD *)(v43 + 16) & 0x400LL;
                  if ( (a3 & 1) != 0 )
                  {
                    if ( v45 && (v8 & 0x42) != 0 )
                    {
                      v69 = MiLockPageInline(v43);
                      v70 = *(_BYTE *)(v43 + 34);
                      v71 = v69;
                      if ( (v70 & 0x10) == 0 )
                        *(_BYTE *)(v43 + 34) = v70 | 0x10;
                      _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v69 < 2u )
                      {
                        v72 = KeGetCurrentPrcb();
                        _InterlockedAnd((volatile signed __int32 *)v72->SchedulerAssist, 0xFFFEFFFF);
                        KiRemoveSystemWorkPriorityKick(v72);
                      }
                      __writecr8(v71);
                      v89 &= 0xFFFFFFFFFFFFFFBDuLL;
                      MiWriteValidPteNewProtection((unsigned __int64)v35, v89);
                      MiInsertTbFlushEntry((__int64)&v96, v16, 1LL, 0);
                    }
                    goto LABEL_29;
                  }
                  if ( v45 || (*(_DWORD *)(v44 + 56) & 0x80u) == 0 )
                  {
                    v46 = MiGetWsleContents(v45, v16) & 0xF;
                    if ( *(_DWORD *)(v47 + 44) != 3 || v46 != 9 )
                    {
                      if ( v46 == 8 || (a3 & 0x10) != 0 )
                      {
                        if ( (a3 & 8) == 0
                          && a2
                          && (*(_BYTE *)(v9 + 184) & 7) != 2
                          && (unsigned int)MiReplaceLockedPage(v9, v43, v16, v26) )
                        {
                          goto LABEL_29;
                        }
                      }
                      else
                      {
                        if ( dword_14043B9A8 )
                          MI_WSLE_LOG_ACCESS(v9, v35);
                        if ( !HIDWORD(v103) )
                        {
                          v101 = MiTbFlushType(v9);
                          v103 = 20LL;
                          v102 = 4;
                          v104 = 0LL;
                          v105 = 0LL;
                        }
                        MiInsertTbFlushEntry((__int64)&v101, v16, 1LL, 0);
                        if ( HIDWORD(v103) != (_DWORD)v103 || !MiFreeWsleList(v9, (__int64)&v101, 0) )
                          goto LABEL_29;
                      }
                      v78 = 277;
                    }
                  }
                }
              }
            }
LABEL_29:
            v22 = v77;
            v18 = 0LL;
            v23 = v79;
            goto LABEL_30;
          }
          v57 = MiGetSystemRegionType(v16);
          if ( v57 == 8 )
          {
            v58 = 0;
          }
          else
          {
            if ( v57 == 1 )
            {
              SessionVm = MiGetSessionVm();
              goto LABEL_116;
            }
            if ( (unsigned int)(v57 - 6) <= 1 )
            {
              v58 = 2;
            }
            else
            {
              if ( v57 != 12 )
              {
                v10 = valid;
                goto LABEL_42;
              }
              v58 = 1;
            }
          }
          SessionVm = (__int64)MiGetAnyMultiplexedVm(v58);
LABEL_116:
          v9 = SessionVm;
          if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, v16, v60, 0, (__int64)v95) )
            goto LABEL_190;
          v9 = v95[3];
          if ( (a3 & 1) != 0 )
          {
            v96 = MiTbFlushType(v95[3]);
            v98 = 20LL;
            v97 = 0;
            v99 = 0LL;
            v100 = 0LL;
          }
          v10 = ((v16 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
          valid = v10;
          goto LABEL_15;
        }
        v10 = valid;
        goto LABEL_96;
      }
      MmQuitNextSession(v88);
      v18 = 0LL;
      v88 = 0LL;
    }
LABEL_32:
    if ( v9 )
    {
      if ( HIDWORD(v103) )
      {
        v36 = MiFreeWsleList(v9, (__int64)&v101, 0);
        v37 = v78;
        if ( v36 )
          v37 = 277;
        v78 = v37;
      }
      MiFlushTbList(&v96, i, v18, v8);
      if ( v14 )
      {
        if ( v10 )
          MiUnlockPageTableInternal(v9, v10);
        MiUnlockWorkingSetShared(v9, v73);
      }
      else
      {
        MiUnlockSystemVa(v95);
      }
      v10 = 0LL;
      valid = 0LL;
      v9 = 0LL;
    }
LABEL_42:
    if ( v82 == 1 )
    {
      v63 = *(signed __int64 **)(v87 + 8);
      if ( _InterlockedCompareExchange64(v63, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v63);
      KeAbPostRelease((ULONG_PTR)v63);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    v38 = v88;
    if ( v88 )
    {
      MmDetachSession(v88, v106);
      MmQuitNextSession(v38);
    }
    else if ( v83 == 1 )
    {
      KeForceDetachProcess(v106, 0LL);
      v39 = Object;
      MiAttachThreadDone(&Object[1].IdealNode[12]);
      goto LABEL_46;
    }
    v39 = Object;
LABEL_46:
    if ( v39 )
      ObfDereferenceObject(v39);
    ExFreePoolWithTag(P, 0);
    if ( a2 == 1 && (*v91 & 1) == 0 )
      break;
    a1 = (void **)v92;
    if ( !v92 )
      return v78;
  }
  v49 = v92;
  while ( v49 )
  {
    v55 = v49;
    v49 = (_QWORD *)*v49;
    v56 = (void *)v55[1];
    if ( v56 )
      ObfDereferenceObject(v56);
    ExFreePoolWithTag(v55, 0);
  }
  return 0LL;
}
