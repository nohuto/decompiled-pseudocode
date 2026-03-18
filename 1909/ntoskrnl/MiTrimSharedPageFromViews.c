/*
 * XREFs of MiTrimSharedPageFromViews @ 0x1400C10E0
 * Callers:
 *     MiTrimSection @ 0x1400C0BB0 (MiTrimSection.c)
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     MiTbFlushType @ 0x1400241C0 (MiTbFlushType.c)
 *     MiFreeWsleList @ 0x140025040 (MiFreeWsleList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockLowestValidPageTable @ 0x14004AE30 (MiLockLowestValidPageTable.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14005DFB8 (MI_WSLE_LOG_ACCESS.c)
 *     MiWriteValidPteNewProtection @ 0x14005E890 (MiWriteValidPteNewProtection.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     MiSynchronizeSystemVa @ 0x140075BC0 (MiSynchronizeSystemVa.c)
 *     MiGetSystemCacheReverseMap @ 0x140075F40 (MiGetSystemCacheReverseMap.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008CED0 (MmAttachSession.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiStartingOffset @ 0x1400B8AD0 (MiStartingOffset.c)
 *     MiPrepareAttachThread @ 0x1400C212C (MiPrepareAttachThread.c)
 *     MiUnlockSystemVa @ 0x1400C46E8 (MiUnlockSystemVa.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     MiAttachThreadDone @ 0x1400C76B0 (MiAttachThreadDone.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     KeForceDetachProcess @ 0x1400CBE04 (KeForceDetachProcess.c)
 *     KeForceAttachProcess @ 0x1400CBE6C (KeForceAttachProcess.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiReplaceLockedPage @ 0x1402CA310 (MiReplaceLockedPage.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmQuitNextSession @ 0x1406F04A0 (MmQuitNextSession.c)
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
  __int64 v34; // rdi
  _KPROCESS *v35; // r12
  unsigned __int64 Address; // rax
  __int64 v37; // r11
  unsigned __int64 ProtoPteAddress; // rax
  __int64 v39; // rdi
  unsigned __int64 v40; // rdi
  __int64 v41; // r11
  __int64 v42; // rcx
  char v43; // al
  __int64 v44; // r10
  unsigned int v45; // eax
  unsigned int v46; // ecx
  int SystemRegionType; // eax
  int v48; // r8d
  __int64 v49; // rcx
  unsigned __int64 SessionVm; // rax
  int v51; // r8d
  _QWORD *v52; // rdi
  _QWORD *v53; // rbx
  void *v54; // rcx
  ULONG_PTR SessionById; // rax
  struct _KTHREAD *v56; // r12
  volatile signed __int64 *v57; // rdi
  __int64 v58; // rax
  int v59; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int64 *v61; // rdi
  int v62; // eax
  unsigned __int8 v63; // al
  char v64; // cl
  unsigned __int8 v65; // si
  struct _KPRCB *v66; // rcx
  unsigned __int8 v67; // [rsp+30h] [rbp-D0h]
  _KPROCESS *Object; // [rsp+38h] [rbp-C8h]
  unsigned __int64 valid; // [rsp+40h] [rbp-C0h]
  void *v70; // [rsp+48h] [rbp-B8h]
  __int64 v71; // [rsp+48h] [rbp-B8h]
  unsigned int v72; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v73; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v75; // [rsp+68h] [rbp-98h]
  int v76; // [rsp+70h] [rbp-90h]
  int v77; // [rsp+74h] [rbp-8Ch]
  __int64 *v79; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  __int64 v81; // [rsp+90h] [rbp-70h]
  ULONG_PTR v82; // [rsp+98h] [rbp-68h]
  __int64 v83; // [rsp+A0h] [rbp-60h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-58h]
  char *v85; // [rsp+B0h] [rbp-50h]
  PVOID v86; // [rsp+B8h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v88; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v89[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v90[48]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v91[24]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v92[24]; // [rsp+250h] [rbp+150h] BYREF

  v85 = a5;
  memset(v90, 0, sizeof(v90));
  memset(v92, 0, 0xB8uLL);
  memset(v91, 0, 0xB8uLL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v89, 0, sizeof(v89));
  CurrentThread = KeGetCurrentThread();
  result = 0LL;
  v72 = 0;
  v10 = 0LL;
  v67 = 17;
  v11 = 0LL;
  valid = 0LL;
  if ( !a1 )
    return result;
  while ( 1 )
  {
    v12 = a1;
    P = a1;
    v13 = *a1;
    v82 = 0LL;
    v86 = v13;
    v14 = (_KPROCESS *)v12[1];
    v15 = v12[4];
    v16 = (unsigned __int64)v12[2];
    v75 = (unsigned __int64)v12[3];
    Object = v14;
    v17 = 0LL;
    v70 = v15;
    v81 = 0LL;
    v77 = 0;
    v76 = 0;
    if ( v14 && v14 != KeGetCurrentThread()->ApcState.Process )
    {
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      v77 = MiPrepareAttachThread(v14, &v14[1].IdealNode[6]);
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
      if ( !v77 )
        goto LABEL_30;
      KeForceAttachProcess((ULONG_PTR)v14);
      v15 = v70;
      goto LABEL_7;
    }
    v45 = *((_DWORD *)v12 + 11);
    if ( v45 < 2 )
      goto LABEL_7;
    v46 = *((_DWORD *)v12 + 10);
    if ( v46 == -1 )
    {
      v17 = (char *)&unk_140464660;
      goto LABEL_125;
    }
    if ( v46 == -2 )
      goto LABEL_90;
    SessionById = MmGetSessionById(v46);
    v18 = 0;
    v82 = SessionById;
    if ( SessionById )
    {
      if ( (int)MmAttachSession(SessionById) >= 0 )
      {
        v45 = *((_DWORD *)v12 + 11);
        v17 = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 192);
LABEL_125:
        v81 = (__int64)v17;
LABEL_90:
        if ( v45 == 3 )
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
          v56 = CurrentThread;
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockSharedEx(*((_QWORD *)v17 + 1), 0LL);
          v8 = v81;
          for ( i = *(_QWORD *)(v81 + 16); ; i = *(_QWORD *)i )
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
          v79 = *(__int64 **)(i + 48);
          if ( *v79 != a4 || (char *)(v16 + (*(_QWORD *)(i + 24) << 12) - (_QWORD)v15) != v17 )
          {
LABEL_158:
            v61 = *(volatile signed __int64 **)(v81 + 8);
            if ( _InterlockedCompareExchange64(v61, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v61);
            KeAbPostRelease((ULONG_PTR)v61);
            KiLeaveGuardedRegionUnsafe((__int64)v56);
            goto LABEL_113;
          }
          v76 = 1;
        }
LABEL_7:
        v20 = 0LL;
        v21 = (__int64)v15 - 4096;
        v22 = (v16 - 4096) >> 12;
        if ( v16 < v75 )
        {
          while ( 1 )
          {
            v23 = v22 + 1;
            v24 = v21 + 4096;
            v73 = v23;
            v71 = v24;
            if ( v10 && ((v16 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL != valid )
            {
              if ( HIDWORD(v92[1]) )
              {
                v58 = MiFreeWsleList(v10, (__int64)v92, 0);
                v59 = v72;
                if ( v58 )
                  v59 = 277;
                v72 = v59;
              }
              MiFlushTbList((int *)v91, i, (__int64)v17, v8);
              if ( v14 )
              {
                if ( valid )
                  MiUnlockPageTableInternal(v10);
                MiUnlockWorkingSetShared(v10, v67);
              }
              else
              {
                MiUnlockSystemVa(v89);
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
                  v62 = MiTbFlushType((__int64)&Object[1].IdealNode[6]);
                  v20 = 0LL;
                  v91[1] = 20LL;
                  WORD2(v91[0]) = 0;
                  v91[2] = 0LL;
                  v91[3] = 0LL;
                  LODWORD(v91[0]) = v62;
                }
                else
                {
                  v20 = 0LL;
                }
                v67 = MiLockWorkingSetShared(v10);
              }
              if ( v20
                && (i = *(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32), v23 >= i)
                && v23 <= (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) )
              {
                v37 = a4;
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
                v37 = a4;
                if ( (*(_DWORD *)(a4 + 56) & 0x20) == 0 && (i & 0x70) != 0
                  || (v79 = *(__int64 **)(Address + 72), *v79 != a4) )
                {
LABEL_183:
                  v11 = valid;
LABEL_112:
                  v14 = Object;
                  goto LABEL_113;
                }
              }
              if ( (*(_DWORD *)(v37 + 56) & 0x20) != 0 )
              {
                v17 = *(char **)(v20 + 80);
                if ( v85 < v17 )
                  goto LABEL_183;
                v8 = *(unsigned int *)(v20 + 24);
                i = *(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32);
                if ( v85 >= &v17[8 * i + 8 + -8 * (v8 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32))] )
                  goto LABEL_183;
                v16 = ((v85 - v17) >> 3 << 12) + ((v8 | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12);
              }
              else
              {
                ProtoPteAddress = MiGetProtoPteAddress(v20, v16 >> 12, 0, &v79);
                v18 = 0;
                if ( !ProtoPteAddress || !v79 )
                  goto LABEL_184;
                if ( v24 != MiStartingOffset(v79, ProtoPteAddress, 0xFFFFFFFF) )
                  goto LABEL_183;
              }
              i = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v39 = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              if ( valid != v39 )
              {
                v18 = 0;
                if ( valid )
                {
                  v16 -= 4096LL;
                  v22 = v23 - 1;
                  v21 = v71 - 4096;
                  goto LABEL_28;
                }
                valid = MiLockLowestValidPageTable(v10, i, &v88);
                v11 = valid;
                if ( valid != v39 )
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
            v48 = MiGetSystemRegionType(v16);
            switch ( v48 )
            {
              case 8:
                v49 = 0LL;
                break;
              case 1:
                SessionVm = MiGetSessionVm();
                goto LABEL_101;
              case 6:
                v49 = 2LL;
                break;
              case 12:
                v49 = 1LL;
                break;
              default:
                v11 = valid;
                goto LABEL_40;
            }
            SessionVm = MiGetAnyMultiplexedVm(v49);
LABEL_101:
            v10 = SessionVm;
            if ( !(unsigned int)MiSynchronizeSystemVa(SessionVm, v16, v51, 0, (__int64)v89) )
              goto LABEL_183;
            v10 = v89[3];
            if ( (a3 & 1) != 0 )
            {
              LODWORD(v91[0]) = MiTbFlushType(v89[3]);
              v91[1] = 20LL;
              WORD2(v91[0]) = 0;
              v91[2] = 0LL;
              v91[3] = 0LL;
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
              if ( v10 != *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(*(_QWORD *)v28 + 60LL) & 0x3FF)) + 0x2000LL )
                goto LABEL_185;
              i = v27[2];
              if ( !i )
                goto LABEL_185;
              v29 = v27[3];
              v79 = (__int64 *)v29;
              if ( (v29 & 1) != 0 )
              {
                v29 &= ~1uLL;
                v79 = (__int64 *)v29;
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
            v83 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v31);
            v8 = v83;
            if ( (v83 & 1) != 0 )
            {
              v40 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v83) >> 12) & 0xFFFFFFFFFLL)
                  - 0x58000000000LL;
              if ( (a3 & 8) == 0 || (v8 & 0x42) == 0 && (*(_BYTE *)(v40 + 34) & 0x10) == 0 )
              {
                i = 0x200000000000000LL;
                if ( (*(_QWORD *)(v40 + 40) & 0x200000000000000LL) != 0 )
                {
                  v42 = *(_QWORD *)(v40 + 16) & 0x400LL;
                  if ( (a3 & 1) != 0 )
                  {
                    if ( v42 && (v8 & 0x42) != 0 )
                    {
                      v63 = MiLockPageInline(v40);
                      v64 = *(_BYTE *)(v40 + 34);
                      v65 = v63;
                      if ( (v64 & 0x10) == 0 )
                        *(_BYTE *)(v40 + 34) = v64 | 0x10;
                      _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v63 < 2u )
                      {
                        v66 = KeGetCurrentPrcb();
                        _InterlockedAnd((volatile signed __int32 *)v66->SchedulerAssist, 0xFFFEFFFF);
                        KiRemoveSystemWorkPriorityKick(v66);
                      }
                      __writecr8(v65);
                      v83 &= 0xFFFFFFFFFFFFFFBDuLL;
                      MiWriteValidPteNewProtection((unsigned __int64)v31);
                      MiInsertTbFlushEntry((__int64)v91, v16, 1LL, 0);
                    }
                    goto LABEL_27;
                  }
                  if ( v42 || (*(_DWORD *)(v41 + 56) & 0x80u) == 0 )
                  {
                    v43 = MiGetWsleContents(v42, v16) & 0xF;
                    if ( *(_DWORD *)(v44 + 44) != 3 || v43 != 9 )
                    {
                      if ( v43 == 8 || (a3 & 0x10) != 0 )
                      {
                        if ( (a3 & 8) == 0
                          && a2
                          && (*(_BYTE *)(v10 + 184) & 7) != 2
                          && (unsigned int)MiReplaceLockedPage(v10, v40, v16, v25) )
                        {
                          goto LABEL_27;
                        }
                      }
                      else
                      {
                        if ( dword_140466068 )
                          MI_WSLE_LOG_ACCESS(v10, v31);
                        if ( !HIDWORD(v92[1]) )
                        {
                          LODWORD(v92[0]) = MiTbFlushType(v10);
                          v92[1] = 20LL;
                          WORD2(v92[0]) = 4;
                          v92[2] = 0LL;
                          v92[3] = 0LL;
                        }
                        MiInsertTbFlushEntry((__int64)v92, v16, 1LL, 0);
                        if ( HIDWORD(v92[1]) != LODWORD(v92[1]) || !MiFreeWsleList(v10, (__int64)v92, 0) )
                          goto LABEL_27;
                      }
                      v72 = 277;
                    }
                  }
                }
              }
            }
LABEL_27:
            v21 = v71;
            v18 = 0;
            v22 = v73;
LABEL_28:
            v14 = Object;
            v16 += 4096LL;
            if ( v16 >= v75 )
            {
              v11 = valid;
              goto LABEL_30;
            }
          }
        }
        v11 = valid;
        goto LABEL_113;
      }
      MmQuitNextSession(v82);
      v18 = 0;
      v82 = 0LL;
    }
LABEL_30:
    if ( v10 )
    {
      if ( HIDWORD(v92[1]) != v18 )
      {
        v32 = MiFreeWsleList(v10, (__int64)v92, 0);
        v33 = v72;
        if ( v32 )
          v33 = 277;
        v72 = v33;
      }
      MiFlushTbList((int *)v91, i, (__int64)v17, v8);
      if ( v14 )
      {
        if ( v11 )
          MiUnlockPageTableInternal(v10);
        MiUnlockWorkingSetShared(v10, v67);
      }
      else
      {
        MiUnlockSystemVa(v89);
      }
      v11 = 0LL;
      valid = 0LL;
      v10 = 0LL;
    }
LABEL_40:
    if ( v76 == 1 )
    {
      v57 = *(volatile signed __int64 **)(v81 + 8);
      if ( _InterlockedCompareExchange64(v57, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v57);
      KeAbPostRelease((ULONG_PTR)v57);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    v34 = v82;
    if ( v82 )
    {
      MmDetachSession(v82, (__int64)v90);
      MmQuitNextSession(v34);
    }
    else if ( v77 == 1 )
    {
      KeForceDetachProcess(v90, 0LL);
      v35 = Object;
      MiAttachThreadDone(&Object[1].IdealNode[6]);
      goto LABEL_44;
    }
    v35 = Object;
LABEL_44:
    if ( v35 )
      ObfDereferenceObject(v35);
    ExFreePoolWithTag(P, 0);
    if ( a2 == 1 && (*v85 & 1) == 0 )
      break;
    a1 = (void **)v86;
    if ( !v86 )
      return v72;
  }
  v52 = v86;
  while ( v52 )
  {
    v53 = v52;
    v52 = (_QWORD *)*v52;
    v54 = (void *)v53[1];
    if ( v54 )
      ObfDereferenceObject(v54);
    ExFreePoolWithTag(v53, 0);
  }
  return 0LL;
}
