/*
 * XREFs of MiPrepareImagePagesForHotPatch @ 0x1402B9B84
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408585A8 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiCountSharedPages @ 0x14010ACF0 (MiCountSharedPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB40C (MiCopyOnWriteCheckConditions.c)
 *     MiChargeFullProcessCommitment @ 0x1405E1510 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1405F3998 (MiReturnFullProcessCommitment.c)
 *     MiLogHotPatchPagesLocked @ 0x140857880 (MiLogHotPatchPagesLocked.c)
 */

__int64 __fastcall MiPrepareImagePagesForHotPatch(__int64 *a1, ULONG_PTR a2, __int64 a3)
{
  _KPROCESS *Process; // rbx
  __int64 v5; // r14
  __int64 v6; // r13
  unsigned __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 result; // rax
  unsigned __int64 v12; // rsi
  int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // rax
  __int16 v16; // bx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  struct _MDL *v19; // rax
  struct _MDL *v20; // rbx
  unsigned int v21; // edi
  _KPROCESS *v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rdi
  struct _MDL *v25; // rsi
  unsigned __int64 v26; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v28; // rdx
  unsigned __int64 v29; // r9
  __int64 v30; // rdi
  char v31; // al
  unsigned int v32; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // r8
  int v37; // [rsp+30h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-A0h]
  int v39; // [rsp+40h] [rbp-98h]
  int v40; // [rsp+48h] [rbp-90h] BYREF
  PMDL Mdl; // [rsp+50h] [rbp-88h]
  __int64 v42; // [rsp+58h] [rbp-80h]
  unsigned __int64 v43; // [rsp+60h] [rbp-78h]
  _KPROCESS *v44; // [rsp+68h] [rbp-70h]
  _KPROCESS *v45; // [rsp+70h] [rbp-68h]
  __int64 v46; // [rsp+78h] [rbp-60h]
  __int64 v47; // [rsp+80h] [rbp-58h]
  __int64 v48; // [rsp+88h] [rbp-50h] BYREF
  __int64 v49[9]; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int8 v53; // [rsp+F8h] [rbp+20h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v44 = Process;
  v45 = Process;
  v5 = (__int64)&Process[1].IdealNode[12];
  v6 = *a1;
  v46 = v6;
  Mdl = 0LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = v7 + 8 * (a3 - 1);
  v8 = 0LL;
  v42 = 0LL;
  v9 = MiCountSharedPages(v6, v7, v43);
  v10 = v9;
  v47 = v9;
  if ( !v9 || (result = MiChargeFullProcessCommitment(Process, v9), (int)result >= 0) )
  {
    BugCheckParameter2 = a2;
    v12 = 0LL;
    v13 = 1;
    v37 = 1;
    v53 = MiLockWorkingSetShared(v5);
LABEL_4:
    v14 = 0xFFFFFA8000000000uLL;
    while ( v7 <= v43 )
    {
      if ( v13 || (v7 & 0xFFF) == 0 )
      {
        if ( v12 )
          MiUnlockPageTableInternal(v5, v12);
        v12 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        LOBYTE(v14) = v53;
        MiMakeSystemAddressValid(v7, 0LL, (*(_DWORD *)(v6 + 48) >> 8) & 0x3F, v14, 0);
        v37 = 0;
      }
      v15 = MI_READ_PTE_LOCK_FREE(v7);
      v16 = v15;
      v48 = v15;
      if ( (*(_BYTE *)v7 & 1) == 0 )
      {
        MiUnlockPageTableInternal(v5, v12);
        MiUnlockWorkingSetShared(v5, v53);
        v12 = 0LL;
LABEL_13:
        v13 = 1;
        v37 = 1;
        MiLockWorkingSetShared(v5);
        goto LABEL_4;
      }
      v17 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v48);
      v18 = v14 + 48 * ((v17 >> 12) & 0xFFFFFFFFFLL);
      if ( (*(_QWORD *)(v18 + 40) & 0x200000000000000LL) != 0 && *(__int64 *)(v18 + 8) < 0 )
      {
        if ( (*(_QWORD *)(v18 + 8) | 0x8000000000000000uLL) == MiGetProtoPteAddress(
                                                                 v6,
                                                                 BugCheckParameter2 >> 12,
                                                                 0,
                                                                 v49) )
        {
          v39 = MiCopyOnWrite(BugCheckParameter2, v7, 0xFFFFFFFFFFFFFFFFuLL, 0);
          if ( v39 < 0 )
          {
            MiUnlockPageTableInternal(v5, v12);
            MiUnlockWorkingSetShared(v5, v53);
            v12 = 0LL;
            MiCopyOnWriteCheckConditions(v5, (unsigned int)v39);
            goto LABEL_13;
          }
          v14 = 0xFFFFFA8000000000uLL;
          if ( (v16 & 0x200) == 0 )
            v42 = ++v8;
        }
        else
        {
          v14 = 0xFFFFFA8000000000uLL;
        }
      }
      v7 += 8LL;
      BugCheckParameter2 += 4096LL;
      v13 = v37;
    }
    MiUnlockPageTableInternal(v5, v12);
    MiUnlockWorkingSetShared(v5, v53);
    v19 = IoAllocateMdl((PVOID)a2, (_DWORD)a3 << 12, 0, 0, 0LL);
    v20 = v19;
    Mdl = v19;
    if ( v19 )
    {
      MiProbeAndLockPages((__int64)v19, 0, 0);
      v20->MdlFlags |= 0x80u;
      v24 = 0LL;
      v25 = v20 + 1;
      v26 = (unsigned __int64)&v20[1] + 8 * a3;
      CurrentIrql = KeGetCurrentIrql();
      v28 = 2LL;
      __writecr8(2uLL);
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || CurrentIrql >= 2u )
        goto LABEL_31;
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      while ( 1 )
      {
        v26 = (unsigned __int64)&v20[1] + 8 * a3;
LABEL_31:
        v29 = v24;
        v43 = v24;
        if ( (unsigned __int64)v25 >= v26 )
          break;
        v30 = 48 * (__int64)v25->Next - 0x58000000000LL;
        v40 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v40, v28, v23);
            while ( *(__int64 *)(v30 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) );
          v29 = v43;
        }
        v23 = (unsigned int)((*(_QWORD *)(v30 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 1;
        v31 = *(_BYTE *)(v30 + 34);
        v28 = *(unsigned __int16 *)(v30 + 32);
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v25 = (struct _MDL *)((char *)v25 + 8);
        v32 = v23 + 1;
        if ( (v31 & 8) == 0 )
          v32 = v23;
        v24 = v29 + 1;
        if ( (unsigned int)v28 <= v32 )
          v24 = v29;
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      if ( v24 )
      {
        v34 = *(_QWORD *)(***(_QWORD ***)(v6 + 72) + 56LL);
        MiLogHotPatchPagesLocked(a2, a2 + ((_DWORD)a3 << 12) - 1, *(_DWORD *)(v34 + 60), *(_DWORD *)(v34 + 72), v24);
      }
      v35 = a1[7];
      if ( v35 )
        v20->Next = (struct _MDL *)v35;
      a1[7] = (__int64)v20;
      v21 = 0;
    }
    else
    {
      v21 = -1073741670;
    }
    v22 = v44;
    if ( v8 )
    {
      v36 = v8 + (((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 31) | *(_DWORD *)(v6 + 52) & 0x7FFFFFFF);
      *(_DWORD *)(v6 + 52) ^= (v36 ^ *(_DWORD *)(v6 + 52)) & 0x7FFFFFFF;
      *(_BYTE *)(v6 + 34) = v36 >> 31;
    }
    if ( v10 != v8 )
      MiReturnFullProcessCommitment(v22);
    return v21;
  }
  return result;
}
