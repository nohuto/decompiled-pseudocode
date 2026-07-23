/*
 * XREFs of MmAdjustWorkingSetSizeEx @ 0x14013C164
 * Callers:
 *     MmAdjustWorkingSetSize @ 0x14018EE70 (MmAdjustWorkingSetSize.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140307CE8 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1403080CC (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     PspSetQuotaLimits @ 0x1406D2398 (PspSetQuotaLimits.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     PsReturnProcessQuota @ 0x1400917C8 (PsReturnProcessQuota.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiGetCurrentMultiplexedVm @ 0x1400EF564 (MiGetCurrentMultiplexedVm.c)
 *     MiCheckWsLimits @ 0x14013C3F8 (MiCheckWsLimits.c)
 *     PsChargeProcessQuota @ 0x14013DB78 (PsChargeProcessQuota.c)
 *     MiEmptyWorkingSetInitiate @ 0x140142320 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MmAdjustWorkingSetSizeEx(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        char a4,
        int a5,
        _BYTE *a6)
{
  _KPROCESS *Process; // r13
  __int64 CurrentMultiplexedVm; // rdi
  __int64 v11; // r15
  LONG *SharedVm; // rbx
  KIRQL v13; // al
  LONG *v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r14
  int v17; // esi
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rcx
  int v24; // ebx
  int v25; // eax
  LONG *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v30; // rdx
  int v31; // ecx
  unsigned __int64 v32; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-28h] BYREF
  __int64 v34; // [rsp+40h] [rbp-20h]
  volatile signed __int64 *v35[3]; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 v36; // [rsp+B0h] [rbp+50h]
  __int16 v38; // [rsp+C8h] [rbp+68h]

  Process = 0LL;
  *a6 = 0;
  if ( !a3 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    CurrentMultiplexedVm = (__int64)&Process[1].IdealNode[12];
LABEL_3:
    if ( a1 == -1LL && a2 == -1LL )
      return MiEmptyWorkingSetInitiate(CurrentMultiplexedVm, 0LL, 0LL, -1LL);
    v11 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(CurrentMultiplexedVm + 174));
    SharedVm = MiGetSharedVm(CurrentMultiplexedVm);
    v13 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v36 = v13;
    v14 = MiGetSharedVm(CurrentMultiplexedVm);
    ExAcquireSpinLockExclusiveAtDpcLevel(v14 + 10);
    if ( !a3 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
    {
      v17 = -1073741558;
      goto LABEL_29;
    }
    if ( a1 )
      v15 = a1 >> 12;
    else
      v15 = *(_QWORD *)(CurrentMultiplexedVm + 112);
    v32 = v15;
    if ( a2 )
      v16 = a2 >> 12;
    else
      v16 = *(_QWORD *)(CurrentMultiplexedVm + 152);
    v33 = v16;
    v17 = MiCheckWsLimits(CurrentMultiplexedVm, (unsigned int)&v32, (unsigned int)&v33, a5, 0);
    if ( (v17 & 0xC0000000) == 0xC0000000 )
      goto LABEL_29;
    v19 = *(_QWORD *)(CurrentMultiplexedVm + 112);
    v20 = v32;
    v21 = *(_QWORD *)(CurrentMultiplexedVm + 16);
    v34 = v21;
    if ( v32 > v19 )
    {
      v22 = v32 - v19;
      *a6 = 1;
      if ( !a4 )
      {
        v17 = -1073741727;
        goto LABEL_29;
      }
      if ( !a3 )
      {
        v17 = PsChargeProcessQuota(Process, v21, v22);
        if ( v17 < 0 )
          goto LABEL_29;
      }
      if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v11, v22, 512LL) )
      {
        if ( !a3 )
          PsReturnProcessQuota(Process, v30, v22);
        v17 = -1073741670;
        goto LABEL_29;
      }
      v21 = v34;
    }
    else
    {
      v22 = v19 - v32;
      if ( v32 < *(_QWORD *)(v21 + 32) )
      {
        v17 = -1073741748;
        goto LABEL_29;
      }
    }
    v23 = v33;
    v34 = v33;
    if ( v33 < *(_QWORD *)(CurrentMultiplexedVm + 120) )
    {
      if ( *(_QWORD *)(v21 + 32) + 6LL >= v33 )
      {
        v17 = -1073741748;
        if ( *a6 == 1 )
        {
          if ( !a3 )
            PsReturnProcessQuota(Process, v21, v22);
          if ( (ULONG_PTR *)v11 == &MiSystemPartition )
            MiReturnResidentAvailable(v22);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 7360), v22);
        }
        goto LABEL_29;
      }
      *(_BYTE *)(CurrentMultiplexedVm + 187) |= 0x10u;
    }
    if ( !*a6 && v22 )
    {
      if ( !a3 )
        PsReturnProcessQuota(Process, v21, v22);
      if ( (ULONG_PTR *)v11 == &MiSystemPartition )
      {
        MiReturnResidentAvailable(v22);
        v23 = v34;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 7360), v22);
        v20 = v32;
        v23 = v33;
      }
    }
    *(_QWORD *)(CurrentMultiplexedVm + 112) = v20;
    *(_QWORD *)(CurrentMultiplexedVm + 152) = v23;
    if ( !a5 )
    {
LABEL_29:
      v26 = MiGetSharedVm(CurrentMultiplexedVm);
      ExReleaseSpinLockExclusiveFromDpcLevel(v26 + 10);
      MiUnlockWorkingSetExclusive(CurrentMultiplexedVm, v36, v27, v28);
      return (unsigned int)v17;
    }
    v24 = 0;
    v35[0] = 0LL;
    v35[1] = (volatile signed __int64 *)&qword_14043BF40;
    KxAcquireQueuedSpinLock((__int64)v35, (volatile __int64 *)&qword_14043BF40, v18);
    v25 = *(_DWORD *)(CurrentMultiplexedVm + 184);
    v38 = v25;
    if ( (a5 & 4) != 0 )
    {
      LOBYTE(v25) = v25 | 0x80;
    }
    else
    {
      if ( (a5 & 8) == 0 )
        goto LABEL_23;
      LOBYTE(v25) = v25 & 0x7F;
    }
    v24 = 1;
    LOBYTE(v38) = v25;
LABEL_23:
    if ( (a5 & 1) != 0 )
    {
      LOBYTE(v38) = v25 | 0x40;
    }
    else
    {
      if ( (a5 & 2) != 0 )
      {
        v24 = 1;
        LOBYTE(v38) = v25 & 0xBF;
      }
      if ( !v24 )
        goto LABEL_28;
    }
    *(_WORD *)(CurrentMultiplexedVm + 184) = v38;
LABEL_28:
    KxReleaseQueuedSpinLock(v35);
    goto LABEL_29;
  }
  if ( a3 == 2 )
  {
    CurrentMultiplexedVm = MiGetCurrentMultiplexedVm();
    if ( CurrentMultiplexedVm )
      goto LABEL_3;
  }
  else
  {
    v31 = a3 - 3;
    if ( a3 == 3 )
    {
      v31 = 2;
LABEL_43:
      CurrentMultiplexedVm = (__int64)MiGetAnyMultiplexedVm(v31);
      goto LABEL_3;
    }
    if ( a3 == 4 )
      goto LABEL_43;
  }
  return 3221225713LL;
}
