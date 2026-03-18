/*
 * XREFs of MiTrimSharedPageFromViews @ 0x1400E1260
 * Callers:
 *     MiTrimSection @ 0x1400E0D30 (MiTrimSection.c)
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     MiTbFlushType @ 0x140023DD0 (MiTbFlushType.c)
 *     MiFreeWsleList @ 0x140024C50 (MiFreeWsleList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14005DF18 (MI_WSLE_LOG_ACCESS.c)
 *     MiWriteValidPteNewProtection @ 0x14005E7F0 (MiWriteValidPteNewProtection.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiSynchronizeSystemVa @ 0x140075950 (MiSynchronizeSystemVa.c)
 *     MiGetSystemCacheReverseMap @ 0x140075CD0 (MiGetSystemCacheReverseMap.c)
 *     MiGetSessionVm @ 0x140075D74 (MiGetSessionVm.c)
 *     MmDetachSession @ 0x14008BB30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008BBD0 (MmAttachSession.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     KeForceDetachProcess @ 0x14008E81C (KeForceDetachProcess.c)
 *     KeForceAttachProcess @ 0x14008E884 (KeForceAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     MiUnlockSystemVa @ 0x1400A15F4 (MiUnlockSystemVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiStartingOffset @ 0x1400D8C50 (MiStartingOffset.c)
 *     MiAttachThreadDone @ 0x1400E2224 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x1400E2AA4 (MiPrepareAttachThread.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiReplaceLockedPage @ 0x1402CA5B0 (MiReplaceLockedPage.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmQuitNextSession @ 0x1406EE950 (MmQuitNextSession.c)
 */

__int64 __fastcall MiTrimSharedPageFromViews(void **a1, int a2, char a3, __int64 a4, char *a5)
{
  unsigned __int64 i; // rdx
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // r13
  __int64 v11; // r15
  void **v12; // r12
  void *v13; // rdi
  _KPROCESS *v14; // rsi
  void *v15; // rdi
  unsigned __int64 v16; // r14
  char *v17; // r8
  int v18; // r11d
  unsigned __int8 OldIrql; // di
  __int64 v20; // r12
  __int64 v21; // rdi
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r15
  __int64 v24; // rdi
  unsigned int v25; // esi
  int v26; // eax
  _QWORD *v27; // r10
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  _BYTE *v31; // r15
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // rdi
  _KPROCESS *v36; // r12
  unsigned __int64 Address; // rax
  __int64 v38; // r11
  unsigned __int64 ProtoPteAddress; // rax
  __int64 v40; // rdi
  unsigned __int64 v41; // rdi
  __int64 v42; // r11
  __int64 v43; // rcx
  char v44; // al
  __int64 v45; // r10
  unsigned int v46; // eax
  unsigned int v47; // ecx
  int SystemRegionType; // eax
  int v49; // r8d
  int v50; // ecx
  __int64 SessionVm; // rax
  int v52; // r8d
  _QWORD *v53; // rdi
  _QWORD *v54; // rbx
  void *v55; // rcx
  ULONG_PTR SessionById; // rax
  __int64 v57; // rdx
  struct _KTHREAD *v58; // r12
  signed __int64 *v59; // rdi
  __int64 v60; // rax
  int v61; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int64 *v63; // rdi
  int v64; // eax
  unsigned __int8 v65; // al
  char v66; // cl
  unsigned __int8 v67; // si
  struct _KPRCB *v68; // rcx
  unsigned __int8 v69; // [rsp+30h] [rbp-D0h]
  _KPROCESS *Object; // [rsp+38h] [rbp-C8h]
  unsigned __int64 valid; // [rsp+40h] [rbp-C0h]
  void *v72; // [rsp+48h] [rbp-B8h]
  __int64 v73; // [rsp+48h] [rbp-B8h]
  unsigned int v74; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v75; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v77; // [rsp+68h] [rbp-98h]
  int v78; // [rsp+70h] [rbp-90h]
  int v79; // [rsp+74h] [rbp-8Ch]
  __int64 *v81; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  __int64 v83; // [rsp+90h] [rbp-70h]
  ULONG_PTR v84; // [rsp+98h] [rbp-68h]
  __int64 v85; // [rsp+A0h] [rbp-60h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-58h]
  char *v87; // [rsp+B0h] [rbp-50h]
  PVOID v88; // [rsp+B8h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v90; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v91[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v92[48]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v93[24]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v94[24]; // [rsp+250h] [rbp+150h] BYREF

  v87 = a5;
  memset(v92, 0, sizeof(v92));
  memset(v94, 0, 0xB8uLL);
  memset(v93, 0, 0xB8uLL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v91, 0, sizeof(v91));
  CurrentThread = KeGetCurrentThread();
  result = 0LL;
  v74 = 0;
  v10 = 0LL;
  v69 = 17;
  v11 = 0LL;
  valid = 0LL;
  if ( !a1 )
    return result;
  while ( 1 )
  {
    v12 = a1;
    P = a1;
    v13 = *a1;
    v84 = 0LL;
    v88 = v13;
    v14 = (_KPROCESS *)v12[1];
    v15 = v12[4];
    v16 = (unsigned __int64)v12[2];
    v77 = (unsigned __int64)v12[3];
    Object = v14;
    v17 = 0LL;
    v72 = v15;
    v83 = 0LL;
    v79 = 0;
    v78 = 0;
    if ( v14 && v14 != KeGetCurrentThread()->ApcState.Process )
    {
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      v79 = MiPrepareAttachThread(v14, &v14[1].IdealNode[6]);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v18 = 0;
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v18 = 0;
      }
      __writecr8(OldIrql);
      if ( !v79 )
        goto LABEL_30;
      KeForceAttachProcess((ULONG_PTR)v14, (__int64)v92);
      v15 = v72;
      goto LABEL_7;
    }
    v46 = *((_DWORD *)v12 + 11);
    if ( v46 < 2 )
      goto LABEL_7;
    v47 = *((_DWORD *)v12 + 10);
    if ( v47 == -1 )
    {
      v17 = (char *)&unk_140464960;
      goto LABEL_125;
    }
    if ( v47 == -2 )
      goto LABEL_90;
    SessionById = MmGetSessionById(v47);
    v18 = 0;
    v84 = SessionById;
    if ( SessionById )
    {
      if ( (int)MmAttachSession(SessionById) >= 0 )
      {
        v46 = *((_DWORD *)v12 + 11);
        v17 = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 192);
LABEL_125:
        v83 = (__int64)v17;
LABEL_90:
        if ( v46 == 3 )
        {
          SystemRegionType = MiGetSystemRegionType(v16);
          if ( *((_DWORD *)v12 + 10) == -2 )
          {
            if ( SystemRegionType == 1 )
              goto LABEL_113;
          }
          else if ( SystemRegionType != 1 )
          {
            goto LABEL_113;
          }
        }
        else
        {
          if ( (a3 & 6) != 0 )
          {
LABEL_113:
            v18 = 0;
            goto LABEL_30;
          }
          v58 = CurrentThread;
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockSharedEx(*((_QWORD *)v17 + 1), 0LL);
          v8 = v83;
          for ( i = *(_QWORD *)(v83 + 16); ; i = *(_QWORD *)i )
          {
            while ( 1 )
            {
              if ( !i )
                goto LABEL_158;
              v17 = (char *)(*(_QWORD *)(i + 88) & 0xFFFFFFFFFFFFF000uLL);
              if ( v16 < (unsigned __int64)&v17[*(_QWORD *)(i + 32)] )
                break;
              i = *(_QWORD *)(i + 8);
            }
            if ( v16 >= (unsigned __int64)v17 )
              break;
          }
          v81 = *(__int64 **)(i + 48);
          if ( *v81 != a4 || (char *)(v16 + (*(_QWORD *)(i + 24) << 12) - (_QWORD)v15) != v17 )
          {
LABEL_158:
            v63 = *(signed __int64 **)(v83 + 8);
            if ( _InterlockedCompareExchange64(v63, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v63);
            KeAbPostRelease((ULONG_PTR)v63);
            KiLeaveGuardedRegionUnsafe((__int64)v58);
            goto LABEL_113;
          }
          v78 = 1;
        }
LABEL_7:
        v20 = 0LL;
        v21 = (__int64)v15 - 4096;
        v22 = (v16 - 4096) >> 12;
        if ( v16 < v77 )
        {
          while ( 1 )
          {
            v23 = v22 + 1;
            v24 = v21 + 4096;
            v75 = v23;
            v73 = v24;
            if ( v10 && ((v16 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL != valid )
            {
              if ( HIDWORD(v94[1]) )
              {
                v60 = MiFreeWsleList(v10, (__int64)v94, 0);
                v61 = v74;
                if ( v60 )
                  v61 = 277;
                v74 = v61;
              }
              MiFlushTbList((int *)v93, i, (__int64)v17, v8);
              if ( v14 )
              {
                if ( valid )
                  MiUnlockPageTableInternal(v10);
                MiUnlockWorkingSetShared(v10, v69);
              }
              else
              {
                MiUnlockSystemVa((__int64)v91, v57);
              }
              valid = 0LL;
              v10 = 0LL;
            }
            if ( v14 )
            {
              v25 = 0;
              if ( !v10 )
              {
                v10 = (__int64)&Object[1].IdealNode[6];
                if ( (a3 & 1) != 0 )
                {
                  v64 = MiTbFlushType((__int64)&Object[1].IdealNode[6]);
                  v20 = 0LL;
                  v93[1] = 20LL;
                  WORD2(v93[0]) = 0;
                  v93[2] = 0LL;
                  v93[3] = 0LL;
                  LODWORD(v93[0]) = v64;
                }
                else
                {
                  v20 = 0LL;
                }
                v69 = MiLockWorkingSetShared(v10);
              }
              if ( v20
                && (i = *(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32), v23 >= i)
                && v23 <= (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) )
              {
                v38 = a4;
              }
              else
              {
                Address = MiLocateAddress(v16);
                v18 = 0;
                v20 = Address;
                if ( !Address || (i = *(unsigned int *)(Address + 48), (i & 0x100000) != 0) )
                {
LABEL_184:
                  v11 = valid;
LABEL_185:
                  v14 = Object;
                  goto LABEL_30;
                }
                v38 = a4;
                if ( (*(_DWORD *)(a4 + 56) & 0x20) == 0 && (i & 0x70) != 0
                  || (v81 = *(__int64 **)(Address + 72), *v81 != a4) )
                {
LABEL_183:
                  v11 = valid;
LABEL_112:
                  v14 = Object;
                  goto LABEL_113;
                }
              }
              if ( (*(_DWORD *)(v38 + 56) & 0x20) != 0 )
              {
                v17 = *(char **)(v20 + 80);
                if ( v87 < v17 )
                  goto LABEL_183;
                v8 = *(unsigned int *)(v20 + 24);
                i = *(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32);
                if ( v87 >= &v17[8 * i + 8 + -8 * (v8 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32))] )
                  goto LABEL_183;
                v16 = ((v87 - v17) >> 3 << 12) + ((v8 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12);
              }
              else
              {
                ProtoPteAddress = MiGetProtoPteAddress(v20, v16 >> 12, 0, &v81);
                v18 = 0;
                if ( !ProtoPteAddress || !v81 )
                  goto LABEL_184;
                if ( v24 != MiStartingOffset(v81, ProtoPteAddress, 0xFFFFFFFF) )
                  goto LABEL_183;
              }
              i = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v40 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              if ( valid != v40 )
              {
                v18 = 0;
                if ( valid )
                {
                  v16 -= 4096LL;
                  v22 = v23 - 1;
                  v21 = v73 - 4096;
                  goto LABEL_28;
                }
                valid = MiLockLowestValidPageTable(v10, i, &v90);
                v11 = valid;
                if ( valid != v40 )
                  goto LABEL_112;
              }
              goto LABEL_26;
            }
            v25 = 1;
            if ( v10 )
            {
              v11 = valid;
              goto LABEL_13;
            }
            v49 = MiGetSystemRegionType(v16);
            switch ( v49 )
            {
              case 8:
                v50 = 0;
                break;
              case 1:
                SessionVm = MiGetSessionVm();
                goto LABEL_101;
              case 6:
                v50 = 2;
                break;
              case 12:
                v50 = 1;
                break;
              default:
                v11 = valid;
                goto LABEL_40;
            }
            SessionVm = (__int64)MiGetAnyMultiplexedVm(v50);
LABEL_101:
            v10 = SessionVm;
            if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, v16, v52, 0, (__int64)v91) )
              goto LABEL_183;
            v10 = v91[3];
            if ( (a3 & 1) != 0 )
            {
              LODWORD(v93[0]) = MiTbFlushType(v91[3]);
              v93[1] = 20LL;
              WORD2(v93[0]) = 0;
              v93[2] = 0LL;
              v93[3] = 0LL;
            }
            v11 = ((v16 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            valid = v11;
LABEL_13:
            v26 = MiGetSystemRegionType(v16);
            v18 = 0;
            if ( !*((_DWORD *)P + 11) )
            {
              if ( v26 != 8 || !MiGetSystemCacheReverseMap(v16) )
                goto LABEL_185;
              i = *(_QWORD *)(MiGetSystemCacheReverseMap(v16) + 24);
              v28 = i & 0xFFFFFFFFFFFFFFFEuLL;
              if ( (i & 1) == 0 )
                v28 = i;
              if ( v10 != *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(*(_QWORD *)v28 + 60LL) & 0x3FF)) + 0x2000LL )
                goto LABEL_185;
              i = v27[2];
              if ( !i )
                goto LABEL_185;
              v29 = v27[3];
              v81 = (__int64 *)v29;
              if ( (v29 & 1) != 0 )
              {
                v29 &= ~1uLL;
                v81 = (__int64 *)v29;
              }
              if ( *(_QWORD *)v29 != a4 )
                goto LABEL_112;
              v30 = v27[4];
              if ( (i & 3) == 0 )
                v30 = 4 * (v30 & 0xFFFFFFFFFFFF0000uLL);
              if ( v30 + (v16 & 0x3FFFF) != v24 )
                goto LABEL_112;
            }
LABEL_26:
            v31 = (_BYTE *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v85 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v31);
            v8 = v85;
            if ( (v85 & 1) != 0 )
            {
              v41 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v85) >> 12) & 0xFFFFFFFFFLL)
                  - 0x58000000000LL;
              if ( (a3 & 8) == 0 || (v8 & 0x42) == 0 && (*(_BYTE *)(v41 + 34) & 0x10) == 0 )
              {
                i = 0x200000000000000LL;
                if ( (*(_QWORD *)(v41 + 40) & 0x200000000000000LL) != 0 )
                {
                  v43 = *(_QWORD *)(v41 + 16) & 0x400LL;
                  if ( (a3 & 1) != 0 )
                  {
                    if ( v43 && (v8 & 0x42) != 0 )
                    {
                      v65 = MiLockPageInline(v41);
                      v66 = *(_BYTE *)(v41 + 34);
                      v67 = v65;
                      if ( (v66 & 0x10) == 0 )
                        *(_BYTE *)(v41 + 34) = v66 | 0x10;
                      _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v65 < 2u )
                      {
                        v68 = KeGetCurrentPrcb();
                        _InterlockedAnd((volatile signed __int32 *)v68->SchedulerAssist, 0xFFFEFFFF);
                        KiRemoveSystemWorkPriorityKick(v68);
                      }
                      __writecr8(v67);
                      v85 &= 0xFFFFFFFFFFFFFFBDuLL;
                      MiWriteValidPteNewProtection((unsigned __int64)v31);
                      MiInsertTbFlushEntry((__int64)v93, v16, 1LL, 0);
                    }
                    goto LABEL_27;
                  }
                  if ( v43 || (*(_DWORD *)(v42 + 56) & 0x80u) == 0 )
                  {
                    v44 = MiGetWsleContents(v43, v16) & 0xF;
                    if ( *(_DWORD *)(v45 + 44) != 3 || v44 != 9 )
                    {
                      if ( v44 == 8 || (a3 & 0x10) != 0 )
                      {
                        if ( (a3 & 8) == 0
                          && a2
                          && (*(_BYTE *)(v10 + 184) & 7) != 2
                          && (unsigned int)MiReplaceLockedPage(v10, v41, v16, v25) )
                        {
                          goto LABEL_27;
                        }
                      }
                      else
                      {
                        if ( dword_140466368 )
                          MI_WSLE_LOG_ACCESS(v10, v31);
                        if ( !HIDWORD(v94[1]) )
                        {
                          LODWORD(v94[0]) = MiTbFlushType(v10);
                          v94[1] = 20LL;
                          WORD2(v94[0]) = 4;
                          v94[2] = 0LL;
                          v94[3] = 0LL;
                        }
                        MiInsertTbFlushEntry((__int64)v94, v16, 1LL, 0);
                        if ( HIDWORD(v94[1]) != LODWORD(v94[1]) || !MiFreeWsleList(v10, (__int64)v94, 0) )
                          goto LABEL_27;
                      }
                      v74 = 277;
                    }
                  }
                }
              }
            }
LABEL_27:
            v21 = v73;
            v18 = 0;
            v22 = v75;
LABEL_28:
            v14 = Object;
            v16 += 4096LL;
            if ( v16 >= v77 )
            {
              v11 = valid;
              goto LABEL_30;
            }
          }
        }
        v11 = valid;
        goto LABEL_113;
      }
      MmQuitNextSession(v84);
      v18 = 0;
      v84 = 0LL;
    }
LABEL_30:
    if ( v10 )
    {
      if ( HIDWORD(v94[1]) != v18 )
      {
        v32 = MiFreeWsleList(v10, (__int64)v94, 0);
        v33 = v74;
        if ( v32 )
          v33 = 277;
        v74 = v33;
      }
      MiFlushTbList((int *)v93, i, (__int64)v17, v8);
      if ( v14 )
      {
        if ( v11 )
          MiUnlockPageTableInternal(v10);
        MiUnlockWorkingSetShared(v10, v69);
      }
      else
      {
        MiUnlockSystemVa((__int64)v91, v34);
      }
      v11 = 0LL;
      valid = 0LL;
      v10 = 0LL;
    }
LABEL_40:
    if ( v78 == 1 )
    {
      v59 = *(signed __int64 **)(v83 + 8);
      if ( _InterlockedCompareExchange64(v59, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v59);
      KeAbPostRelease((ULONG_PTR)v59);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    v35 = v84;
    if ( v84 )
    {
      MmDetachSession(v84, (__int64)v92);
      MmQuitNextSession(v35);
    }
    else if ( v79 == 1 )
    {
      KeForceDetachProcess(v92, 0);
      v36 = Object;
      MiAttachThreadDone(&Object[1].IdealNode[6]);
      goto LABEL_44;
    }
    v36 = Object;
LABEL_44:
    if ( v36 )
      ObfDereferenceObject(v36);
    ExFreePoolWithTag(P, 0);
    if ( a2 == 1 && (*v87 & 1) == 0 )
      break;
    a1 = (void **)v88;
    if ( !v88 )
      return v74;
  }
  v53 = v88;
  while ( v53 )
  {
    v54 = v53;
    v53 = (_QWORD *)*v53;
    v55 = (void *)v54[1];
    if ( v55 )
      ObfDereferenceObject(v55);
    ExFreePoolWithTag(v54, 0);
  }
  return 0LL;
}
