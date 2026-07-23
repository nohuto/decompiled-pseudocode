/*
 * XREFs of PsCallEnclave @ 0x14088E7E0
 * Callers:
 *     NtCallEnclave @ 0x1401C6100 (NtCallEnclave.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwTerminateProcess @ 0x1401B8870 (ZwTerminateProcess.c)
 *     PsGetBaseTrapFrame @ 0x1402E9C5C (PsGetBaseTrapFrame.c)
 *     RtlCreateEnclaveReturnFrame @ 0x1402FB754 (RtlCreateEnclaveReturnFrame.c)
 *     RtlPrepareEnclaveCall @ 0x1402FB880 (RtlPrepareEnclaveCall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VslCallEnclave @ 0x140818EFC (VslCallEnclave.c)
 *     MiHotPatchImageTreeCompare @ 0x140856848 (MiHotPatchImageTreeCompare.c)
 *     MmSelectVsmEnclaveByAddress @ 0x14085BA8C (MmSelectVsmEnclaveByAddress.c)
 *     PsDereferenceVsmEnclave @ 0x14088F3E4 (PsDereferenceVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x14088F86C (PspPrepareEnclaveThreadWait.c)
 *     PspReleaseEnclaveThread @ 0x14088F900 (PspReleaseEnclaveThread.c)
 *     PspRemoveEnclaveThreadWait @ 0x14088F95C (PspRemoveEnclaveThreadWait.c)
 *     PspSelectVsmEnclaveByNumber @ 0x14088FA0C (PspSelectVsmEnclaveByNumber.c)
 */

__int64 __fastcall PsCallEnclave(unsigned __int64 a1, __int64 a2, NTSTATUS a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 Process; // rcx
  char *v9; // r15
  int EnclaveReturnFrame; // r13d
  __int64 BaseTrapFrame; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  volatile signed __int64 *v14; // r12
  __int64 v15; // rsi
  int v16; // eax
  PVOID v17; // rcx
  int v18; // eax
  LARGE_INTEGER *Timeout; // rax
  _DWORD *v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  int v25; // eax
  _QWORD *v26; // r15
  bool v27; // r8
  _QWORD *v28; // rax
  _BYTE v30[7]; // [rsp+51h] [rbp-97h] BYREF
  PVOID v31; // [rsp+58h] [rbp-90h] BYREF
  int v32; // [rsp+60h] [rbp-88h]
  PVOID P; // [rsp+68h] [rbp-80h] BYREF
  __int64 v34; // [rsp+70h] [rbp-78h] BYREF
  __int64 v35; // [rsp+78h] [rbp-70h] BYREF
  __int64 v36; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 *v37; // [rsp+88h] [rbp-60h]
  __int64 v38; // [rsp+90h] [rbp-58h]
  LARGE_INTEGER v39; // [rsp+98h] [rbp-50h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-48h]
  struct _KTHREAD *v41; // [rsp+A8h] [rbp-40h]
  unsigned __int64 v42; // [rsp+F0h] [rbp+8h] BYREF
  __int64 v43; // [rsp+F8h] [rbp+10h]
  NTSTATUS ExitStatus; // [rsp+100h] [rbp+18h] BYREF
  __int64 *v45; // [rsp+108h] [rbp+20h]

  v45 = a4;
  ExitStatus = a3;
  v43 = a2;
  v42 = a1;
  CurrentThread = KeGetCurrentThread();
  v41 = CurrentThread;
  if ( CurrentThread->PreviousMode != 1 )
    return 3221225711LL;
  if ( v42 )
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
  v34 = *a4;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a2 )
    result = PspSelectVsmEnclaveByNumber(Process, a2, &v31);
  else
    result = MmSelectVsmEnclaveByAddress(Process, v42, &v31);
  if ( (int)result >= 0 )
  {
    v9 = (char *)v31;
    if ( !*((_DWORD *)v31 + 10) )
    {
      EnclaveReturnFrame = -1073741816;
      goto LABEL_81;
    }
    BaseTrapFrame = PsGetBaseTrapFrame((__int64)CurrentThread);
    v40 = BaseTrapFrame;
    --CurrentThread->SpecialApcDisable;
    EnclaveReturnFrame = RtlPrepareEnclaveCall(BaseTrapFrame, (__int64)a4, v12, v13, &v36, &v35);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( EnclaveReturnFrame >= 0 )
    {
      --CurrentThread->KernelApcDisable;
      v14 = (volatile signed __int64 *)(v9 + 112);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 112), 0LL);
      v37 = (unsigned __int64 *)(v9 + 104);
      v15 = *((_QWORD *)v9 + 13);
      while ( v15 )
      {
        v16 = MiHotPatchImageTreeCompare((unsigned __int64)CurrentThread, v15);
        if ( v16 >= 0 )
        {
          if ( v16 <= 0 )
            break;
          v15 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v15 = *(_QWORD *)v15;
        }
      }
      if ( v15 )
      {
LABEL_48:
        v38 = v15;
        if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v14);
        KeAbPostRelease((ULONG_PTR)v14);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
        v9 = (char *)v31;
        if ( *(_DWORD *)(v15 + 36) == -1 )
        {
          EnclaveReturnFrame = -1073741670;
          goto LABEL_81;
        }
        --CurrentThread->SpecialApcDisable;
        *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
        EnclaveReturnFrame = VslCallEnclave(
                               (__int64)v9,
                               (unsigned int *)(v15 + 32),
                               (__int64 *)&v42,
                               ExitStatus,
                               &v34,
                               &v36,
                               &v35,
                               &ExitStatus,
                               v30);
        v32 = EnclaveReturnFrame;
        *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x200u;
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( v30[0] )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
        if ( EnclaveReturnFrame < 0 )
        {
          if ( !v43 )
            goto LABEL_76;
          v42 = 0LL;
        }
        v24 = v42;
        if ( !v42 )
        {
          *v45 = v34;
          if ( v43 )
          {
            if ( (*(_DWORD *)(v15 + 36))-- == 1 )
            {
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 112), 0LL);
              RtlAvlRemoveNode((unsigned __int64 *)v9 + 13, (unsigned __int64 *)v15);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)v9 + 14);
              KeAbPostRelease((ULONG_PTR)(v9 + 112));
              KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
              v9 = (char *)v31;
            }
          }
          goto LABEL_76;
        }
        --CurrentThread->SpecialApcDisable;
        EnclaveReturnFrame = RtlCreateEnclaveReturnFrame(
                               v40,
                               v22,
                               v23,
                               *((_QWORD *)v9 + 1),
                               v24,
                               ExitStatus,
                               v36,
                               v35,
                               v34);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        if ( v43 )
          goto LABEL_76;
        v25 = *(_DWORD *)(v15 + 36);
        if ( v25 )
          goto LABEL_70;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v14, 0LL);
        v26 = (_QWORD *)*v37;
        v27 = 0;
        if ( !*v37 )
          goto LABEL_67;
        while ( 1 )
        {
          if ( (int)MiHotPatchImageTreeCompare((unsigned __int64)CurrentThread, (__int64)v26) < 0 )
          {
            v28 = (_QWORD *)*v26;
            if ( !*v26 )
            {
              v27 = 0;
LABEL_67:
              RtlAvlInsertNodeEx(v37, (unsigned __int64)v26, v27, (_QWORD *)v15);
              if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v14);
              KeAbPostRelease((ULONG_PTR)v14);
              KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
              v25 = *(_DWORD *)(v15 + 36);
              v9 = (char *)v31;
LABEL_70:
              *(_DWORD *)(v15 + 36) = v25 + 1;
LABEL_76:
              if ( !*(_DWORD *)(v15 + 36) )
              {
                --CurrentThread->KernelApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 112), 0LL);
                *(_QWORD *)v15 = *((_QWORD *)v9 + 16);
                *((_QWORD *)v9 + 16) = v15;
                PspReleaseEnclaveThread(v9);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)v9 + 14);
                KeAbPostRelease((ULONG_PTR)(v9 + 112));
                KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
                goto LABEL_80;
              }
              goto LABEL_81;
            }
          }
          else
          {
            v28 = (_QWORD *)v26[1];
            if ( !v28 )
            {
              v27 = 1;
              goto LABEL_67;
            }
          }
          v26 = v28;
        }
      }
      v17 = 0LL;
      P = 0LL;
      if ( v43 )
      {
        EnclaveReturnFrame = -1073741584;
      }
      else
      {
        v18 = *((_DWORD *)v9 + 18);
        if ( v18 )
        {
          *((_DWORD *)v9 + 18) = v18 - 1;
          EnclaveReturnFrame = 0;
        }
        else
        {
          EnclaveReturnFrame = PspPrepareEnclaveThreadWait(v9, &P);
          v17 = P;
        }
        if ( EnclaveReturnFrame >= 0 && !v17 )
        {
LABEL_47:
          v15 = *((_QWORD *)v9 + 16);
          *((_QWORD *)v9 + 16) = *(_QWORD *)v15;
          *(_QWORD *)(v15 + 24) = CurrentThread;
          *(_QWORD *)(v15 + 32) = 0LL;
          goto LABEL_48;
        }
      }
      if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v9 + 14);
      KeAbPostRelease((ULONG_PTR)(v9 + 112));
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      if ( EnclaveReturnFrame < 0 )
      {
LABEL_80:
        v9 = (char *)v31;
        goto LABEL_81;
      }
      if ( (ExitStatus & 1) != 0 )
      {
        v39.QuadPart = 0LL;
        Timeout = &v39;
      }
      else
      {
        Timeout = 0LL;
      }
      v20 = P;
      v21 = KeWaitForSingleObject((char *)P + 16, Executive, 1, 0, Timeout);
      v9 = (char *)v31;
      if ( v21 )
        EnclaveReturnFrame = PspRemoveEnclaveThreadWait(v31, v20, v21);
      else
        EnclaveReturnFrame = v20[10];
      ExFreePoolWithTag(v20, 0);
      if ( EnclaveReturnFrame )
      {
        if ( EnclaveReturnFrame != 192
          && EnclaveReturnFrame != -1073740526
          && (unsigned int)(EnclaveReturnFrame - 257) > 1 )
        {
          EnclaveReturnFrame = -1073741749;
        }
        goto LABEL_81;
      }
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v14, 0LL);
      goto LABEL_47;
    }
LABEL_81:
    PsDereferenceVsmEnclave(v9);
    return (unsigned int)EnclaveReturnFrame;
  }
  return result;
}
