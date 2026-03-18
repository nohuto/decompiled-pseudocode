/*
 * XREFs of PsCallEnclave @ 0x1408CB3F0
 * Callers:
 *     NtCallEnclave @ 0x1401CD240 (NtCallEnclave.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ZwTerminateProcess @ 0x1401C11D0 (ZwTerminateProcess.c)
 *     PsGetBaseTrapFrame @ 0x140306AF0 (PsGetBaseTrapFrame.c)
 *     RtlCreateEnclaveReturnFrame @ 0x140319930 (RtlCreateEnclaveReturnFrame.c)
 *     RtlPrepareEnclaveCall @ 0x140319A24 (RtlPrepareEnclaveCall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VslCallEnclave @ 0x140850E4C (VslCallEnclave.c)
 *     MiHotPatchImageTreeCompare @ 0x14088E2C4 (MiHotPatchImageTreeCompare.c)
 *     MmSelectVsmEnclaveByAddress @ 0x14089472C (MmSelectVsmEnclaveByAddress.c)
 *     PsDereferenceVsmEnclave @ 0x1408CC0B8 (PsDereferenceVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x1408CC624 (PspPrepareEnclaveThreadWait.c)
 *     PspReleaseEnclaveThread @ 0x1408CC6B8 (PspReleaseEnclaveThread.c)
 *     PspRemoveEnclaveThreadWait @ 0x1408CC714 (PspRemoveEnclaveThreadWait.c)
 *     PspSelectVsmEnclaveByNumber @ 0x1408CC7C4 (PspSelectVsmEnclaveByNumber.c)
 */

__int64 __fastcall PsCallEnclave(unsigned __int64 a1, __int64 a2, NTSTATUS a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 Process; // rcx
  unsigned __int64 v9; // r13
  char *v10; // r14
  int EnclaveReturnFrame; // r13d
  __int64 BaseTrapFrame; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  volatile signed __int64 *v15; // r12
  __int64 v16; // rsi
  int v17; // eax
  PVOID v18; // rcx
  int v19; // eax
  signed __int64 v20; // rax
  LARGE_INTEGER *Timeout; // rax
  _DWORD *v22; // rsi
  unsigned int v23; // eax
  signed __int64 v24; // rax
  int v25; // eax
  signed __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  int v30; // eax
  _QWORD *v31; // r14
  bool v32; // r8
  _QWORD *v33; // rax
  signed __int64 v34; // rax
  signed __int64 v36; // rax
  char v37; // bl
  _BYTE v38[7]; // [rsp+51h] [rbp-C7h] BYREF
  PVOID v39; // [rsp+58h] [rbp-C0h] BYREF
  _DWORD v40[2]; // [rsp+60h] [rbp-B8h] BYREF
  PVOID P; // [rsp+68h] [rbp-B0h] BYREF
  unsigned __int64 *v42; // [rsp+70h] [rbp-A8h]
  __int64 v43; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v44; // [rsp+80h] [rbp-98h]
  LARGE_INTEGER v45; // [rsp+88h] [rbp-90h] BYREF
  __int64 v46; // [rsp+90h] [rbp-88h] BYREF
  __int64 v47; // [rsp+98h] [rbp-80h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-78h]
  struct _KTHREAD *v49; // [rsp+A8h] [rbp-70h]
  signed __int64 v50; // [rsp+B0h] [rbp-68h]
  signed __int64 v51; // [rsp+B8h] [rbp-60h]
  signed __int64 v52; // [rsp+C0h] [rbp-58h]
  signed __int64 v53; // [rsp+C8h] [rbp-50h]
  signed __int64 v54; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v55; // [rsp+120h] [rbp+8h] BYREF
  __int64 v56; // [rsp+128h] [rbp+10h]
  NTSTATUS ExitStatus; // [rsp+130h] [rbp+18h] BYREF
  __int64 *v58; // [rsp+138h] [rbp+20h]

  v58 = a4;
  ExitStatus = a3;
  v56 = a2;
  v55 = a1;
  v45.QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  v49 = CurrentThread;
  v48 = 0LL;
  if ( CurrentThread->PreviousMode != 1 )
    return 3221225711LL;
  if ( v55 )
  {
    if ( a2 )
      return 3221225712LL;
  }
  else if ( a2 )
  {
    goto LABEL_9;
  }
  if ( (ExitStatus & 0xFFFFFFFE) != 0 )
    return 3221225713LL;
LABEL_9:
  v7 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v7 = (__int64)a4;
  *(_QWORD *)v7 = *(_QWORD *)v7;
  v43 = *a4;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a2 )
  {
    result = PspSelectVsmEnclaveByNumber(Process, a2, &v39);
    v9 = v55;
  }
  else
  {
    v9 = v55;
    result = MmSelectVsmEnclaveByAddress(Process, v55, &v39);
  }
  if ( (int)result >= 0 )
  {
    v10 = (char *)v39;
    if ( !*((_DWORD *)v39 + 10) )
    {
      EnclaveReturnFrame = -1073741816;
LABEL_100:
      PsDereferenceVsmEnclave(v10);
      return (unsigned int)EnclaveReturnFrame;
    }
    if ( *((_BYTE *)v39 + 76) )
    {
      --CurrentThread->KernelApcDisable;
      v15 = (volatile signed __int64 *)(v10 + 112);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
      v42 = (unsigned __int64 *)(v10 + 104);
      v16 = *((_QWORD *)v10 + 13);
      while ( v16 )
      {
        v25 = MiHotPatchImageTreeCompare(v9, v16);
        if ( v25 >= 0 )
        {
          if ( v25 <= 0 )
            break;
          v16 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v16 = *(_QWORD *)v16;
        }
      }
      v26 = _InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL);
      v52 = v26;
      if ( (v26 & 2) != 0 && (v26 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v10 + 14);
      KeAbPostRelease((ULONG_PTR)(v10 + 112));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( !v16 )
      {
        EnclaveReturnFrame = -1073741800;
        goto LABEL_99;
      }
      v44 = v16;
LABEL_67:
      --CurrentThread->SpecialApcDisable;
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
      v40[0] = *(_DWORD *)(v16 + 32);
      v10 = (char *)v39;
      EnclaveReturnFrame = VslCallEnclave((__int64)v39, v40, &v55, ExitStatus, &v43, &v47, &v46, &ExitStatus, v38);
      v40[1] = EnclaveReturnFrame;
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x200u;
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      if ( v38[0] )
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
      if ( EnclaveReturnFrame < 0 )
      {
        if ( !v56 )
        {
LABEL_93:
          if ( v10[76] || *(_DWORD *)(v16 + 36) )
            goto LABEL_100;
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
          *(_QWORD *)v16 = *((_QWORD *)v10 + 16);
          *((_QWORD *)v10 + 16) = v16;
          PspReleaseEnclaveThread(v10);
          v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 14, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v37 & 2) != 0 && (v37 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)v10 + 14);
          KeAbPostRelease((ULONG_PTR)(v10 + 112));
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          goto LABEL_99;
        }
        v55 = 0LL;
      }
      v29 = v55;
      if ( v55 )
      {
        --CurrentThread->SpecialApcDisable;
        EnclaveReturnFrame = RtlCreateEnclaveReturnFrame(
                               v48,
                               v27,
                               v28,
                               *((_QWORD *)v10 + 1),
                               v29,
                               ExitStatus,
                               v47,
                               v46,
                               v43);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( !v56 )
        {
          v30 = *(_DWORD *)(v16 + 36);
          if ( !v30 )
          {
            *(_DWORD *)(v16 + 32) = v40[0];
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)v15, 0LL);
            v31 = (_QWORD *)*v42;
            v32 = 0;
            if ( *v42 )
            {
              while ( 1 )
              {
                if ( (int)MiHotPatchImageTreeCompare((unsigned __int64)CurrentThread, (__int64)v31) < 0 )
                {
                  v33 = (_QWORD *)*v31;
                  if ( !*v31 )
                  {
                    v32 = 0;
                    break;
                  }
                }
                else
                {
                  v33 = (_QWORD *)v31[1];
                  if ( !v33 )
                  {
                    v32 = 1;
                    break;
                  }
                }
                v31 = v33;
              }
            }
            RtlAvlInsertNodeEx(v42, (unsigned __int64)v31, v32, (_QWORD *)v16);
            v34 = _InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL);
            v53 = v34;
            if ( (v34 & 2) != 0 && (v34 & 4) == 0 )
              ExfTryToWakePushLock(v15);
            KeAbPostRelease((ULONG_PTR)v15);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            v30 = *(_DWORD *)(v16 + 36);
            v10 = (char *)v39;
          }
          *(_DWORD *)(v16 + 36) = v30 + 1;
        }
      }
      else
      {
        *v58 = v43;
        if ( v56 )
        {
          if ( (*(_DWORD *)(v16 + 36))-- == 1 )
          {
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
            RtlAvlRemoveNode((unsigned __int64 *)v10 + 13, (unsigned __int64 *)v16);
            v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 14, 0xFFFFFFFFFFFFFFFFuLL);
            v54 = v36;
            if ( (v36 & 2) != 0 && (v36 & 4) == 0 )
              ExfTryToWakePushLock((volatile signed __int64 *)v10 + 14);
            KeAbPostRelease((ULONG_PTR)(v10 + 112));
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            v10 = (char *)v39;
          }
        }
      }
      goto LABEL_93;
    }
    BaseTrapFrame = PsGetBaseTrapFrame((__int64)CurrentThread);
    v48 = BaseTrapFrame;
    --CurrentThread->SpecialApcDisable;
    EnclaveReturnFrame = RtlPrepareEnclaveCall(BaseTrapFrame, (__int64)a4, v13, v14, &v47, &v46);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( EnclaveReturnFrame < 0 )
      goto LABEL_100;
    --CurrentThread->KernelApcDisable;
    v15 = (volatile signed __int64 *)(v10 + 112);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 112), 0LL);
    v42 = (unsigned __int64 *)(v10 + 104);
    v16 = *((_QWORD *)v10 + 13);
    while ( v16 )
    {
      v17 = MiHotPatchImageTreeCompare((unsigned __int64)CurrentThread, v16);
      if ( v17 >= 0 )
      {
        if ( v17 <= 0 )
          break;
        v16 = *(_QWORD *)(v16 + 8);
      }
      else
      {
        v16 = *(_QWORD *)v16;
      }
    }
    if ( v16 )
    {
LABEL_50:
      v44 = v16;
      v24 = _InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL);
      v51 = v24;
      if ( (v24 & 2) != 0 && (v24 & 4) == 0 )
        ExfTryToWakePushLock(v15);
      KeAbPostRelease((ULONG_PTR)v15);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( *(_DWORD *)(v16 + 36) == -1 )
      {
        EnclaveReturnFrame = -1073741670;
LABEL_99:
        v10 = (char *)v39;
        goto LABEL_100;
      }
      goto LABEL_67;
    }
    v18 = 0LL;
    P = 0LL;
    if ( v56 )
    {
      EnclaveReturnFrame = -1073741584;
    }
    else
    {
      v19 = *((_DWORD *)v10 + 18);
      if ( v19 )
      {
        *((_DWORD *)v10 + 18) = v19 - 1;
        EnclaveReturnFrame = 0;
      }
      else
      {
        EnclaveReturnFrame = PspPrepareEnclaveThreadWait(v10, &P);
        v18 = P;
      }
      if ( EnclaveReturnFrame >= 0 && !v18 )
      {
LABEL_49:
        v16 = *((_QWORD *)v10 + 16);
        *((_QWORD *)v10 + 16) = *(_QWORD *)v16;
        *(_QWORD *)(v16 + 24) = CurrentThread;
        *(_QWORD *)(v16 + 32) = 0LL;
        goto LABEL_50;
      }
    }
    v20 = _InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL);
    v50 = v20;
    if ( (v20 & 2) != 0 && (v20 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10 + 14);
    KeAbPostRelease((ULONG_PTR)(v10 + 112));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( EnclaveReturnFrame < 0 )
      goto LABEL_99;
    if ( (ExitStatus & 1) != 0 )
    {
      v45.QuadPart = 0LL;
      Timeout = &v45;
    }
    else
    {
      Timeout = 0LL;
    }
    v22 = P;
    v23 = KeWaitForSingleObject((char *)P + 16, Executive, 1, 0, Timeout);
    v10 = (char *)v39;
    if ( v23 )
      EnclaveReturnFrame = PspRemoveEnclaveThreadWait(v39, v22, v23);
    else
      EnclaveReturnFrame = v22[10];
    ExFreePoolWithTag(v22, 0);
    if ( EnclaveReturnFrame )
    {
      if ( EnclaveReturnFrame != 192
        && EnclaveReturnFrame != -1073740526
        && (unsigned int)(EnclaveReturnFrame - 257) > 1 )
      {
        EnclaveReturnFrame = -1073741749;
      }
      goto LABEL_100;
    }
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v15, 0LL);
    goto LABEL_49;
  }
  return result;
}
