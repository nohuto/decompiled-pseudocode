/*
 * XREFs of MiPrepareImagePagesForHotPatch @ 0x1402CF8F0
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408904FC (MiPrepareToHotPatchImage.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     IoAllocateMdl @ 0x140036DE0 (IoAllocateMdl.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400A7E70 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     IoFreeMdl @ 0x1400FEF60 (IoFreeMdl.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     MiCountSharedPages @ 0x140105ED0 (MiCountSharedPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E54BC (MiCopyOnWriteCheckConditions.c)
 *     MiReturnFullProcessCommitment @ 0x1405ECF80 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x140605690 (MiChargeFullProcessCommitment.c)
 *     MiLogHotPatchPagesLocked @ 0x14088F764 (MiLogHotPatchPagesLocked.c)
 */

__int64 __fastcall MiPrepareImagePagesForHotPatch(__int64 *a1, ULONG_PTR a2, __int64 a3)
{
  _KPROCESS *Process; // rbx
  __int64 v5; // rsi
  __int64 v6; // r13
  unsigned __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 result; // rax
  unsigned __int64 v12; // r14
  int v13; // ebx
  __int64 v14; // rax
  __int16 v15; // bx
  unsigned __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rcx
  int v19; // edi
  struct _MDL *v20; // rax
  struct _MDL *v21; // rbx
  unsigned int v22; // edi
  _KPROCESS *v23; // rcx
  __int64 v24; // rsi
  struct _MDL *p_Size; // rdx
  unsigned __int64 v26; // r8
  unsigned __int8 CurrentIrql; // r14
  __int64 v28; // r9
  __int64 v29; // rdi
  unsigned int v30; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  __int64 v35; // r12
  int v36; // [rsp+30h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-A0h]
  int v38; // [rsp+48h] [rbp-90h]
  int v39; // [rsp+50h] [rbp-88h] BYREF
  PMDL Mdl; // [rsp+58h] [rbp-80h]
  __int64 v41; // [rsp+60h] [rbp-78h]
  unsigned __int64 v42; // [rsp+68h] [rbp-70h]
  _KPROCESS *v43; // [rsp+70h] [rbp-68h]
  _KPROCESS *v44; // [rsp+78h] [rbp-60h]
  __int64 v45; // [rsp+80h] [rbp-58h]
  unsigned int v46; // [rsp+88h] [rbp-50h]
  __int64 v47; // [rsp+90h] [rbp-48h] BYREF
  __int64 v48[8]; // [rsp+98h] [rbp-40h] BYREF
  unsigned __int8 v52; // [rsp+F8h] [rbp+20h]
  struct _MDL *v53; // [rsp+F8h] [rbp+20h]

  Process = KeGetCurrentThread()->ApcState.Process;
  v43 = Process;
  v44 = Process;
  v5 = (__int64)&Process[1].IdealNode[6];
  v6 = *a1;
  v45 = v6;
  Mdl = 0LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v42 = v7 + 8 * (a3 - 1);
  v8 = 0LL;
  v41 = 0LL;
  v9 = MiCountSharedPages(v6, v7, v42);
  v10 = v9;
  if ( v9 )
  {
    result = MiChargeFullProcessCommitment(Process, v9);
    if ( (int)result < 0 )
      return result;
  }
  BugCheckParameter2 = a2;
  v12 = 0LL;
  v13 = 1;
  v36 = 1;
  v52 = MiLockWorkingSetShared(v5);
  while ( v7 <= v42 )
  {
    if ( v13 || (v7 & 0xFFF) == 0 )
    {
      if ( v12 )
        MiUnlockPageTableInternal(v5, v12);
      v12 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v46 = (*(_DWORD *)(v6 + 48) >> 12) & 0x3F;
      MiMakeSystemAddressValid(v7, 0LL, v46, v52, 0);
      v36 = 0;
    }
    v14 = MI_READ_PTE_LOCK_FREE(v7);
    v15 = v14;
    v47 = v14;
    if ( (*(_BYTE *)v7 & 1) == 0 )
    {
      MiUnlockPageTableInternal(v5, v12);
      MiUnlockWorkingSetShared(v5, v52);
      v12 = 0LL;
      goto LABEL_12;
    }
    v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v47);
    v18 = v17 + 48 * ((v16 >> 12) & 0xFFFFFFFFFLL);
    if ( (*(_QWORD *)(v18 + 40) & 0x200000000000000LL) != 0
      && *(__int64 *)(v18 + 8) < 0
      && (*(_QWORD *)(v18 + 8) | 0x8000000000000000uLL) == MiGetProtoPteAddress(v6, BugCheckParameter2 >> 12, 0, v48) )
    {
      v38 = MiCopyOnWrite(BugCheckParameter2, v7, 0xFFFFFFFFFFFFFFFFuLL, 0);
      if ( v38 >= 0 )
      {
        if ( (v15 & 0x200) == 0 )
          v41 = ++v8;
        goto LABEL_20;
      }
      MiUnlockPageTableInternal(v5, v12);
      MiUnlockWorkingSetShared(v5, v52);
      v12 = 0LL;
      MiCopyOnWriteCheckConditions(v5, (unsigned int)v38);
LABEL_12:
      v13 = 1;
      v36 = 1;
      MiLockWorkingSetShared(v5);
    }
    else
    {
LABEL_20:
      v7 += 8LL;
      BugCheckParameter2 += 4096LL;
      v13 = v36;
    }
  }
  MiUnlockPageTableInternal(v5, v12);
  MiUnlockWorkingSetShared(v5, v52);
  v19 = a3;
  v20 = IoAllocateMdl((PVOID)a2, (_DWORD)a3 << 12, 0, 0, 0LL);
  v21 = v20;
  Mdl = v20;
  if ( v20 )
  {
    MiProbeAndLockPages(v20, 0, 0);
    v21->MdlFlags |= 0x80u;
    v24 = 0LL;
    p_Size = v21 + 1;
    v53 = v21 + 1;
    v26 = (unsigned __int64)&v21[1] + 8 * a3;
    v42 = v26;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (unsigned __int64)p_Size < v26 )
    {
      do
      {
        v28 = v24;
        v29 = 48 * (__int64)p_Size->Next - 0x58000000000LL;
        v39 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v39);
            while ( *(__int64 *)(v29 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) );
          v26 = v42;
          v28 = v24;
        }
        v30 = ((*(_QWORD *)(v29 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 2;
        if ( (*(_BYTE *)(v29 + 34) & 8) == 0 )
          v30 = ((*(_QWORD *)(v29 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 1;
        v24 = v28 + 1;
        if ( *(unsigned __int16 *)(v29 + 32) <= v30 )
          v24 = v28;
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        p_Size = (struct _MDL *)&v53->Size;
        v53 = p_Size;
      }
      while ( (unsigned __int64)p_Size < v26 );
      v19 = a3;
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
      v32 = *(_QWORD *)(***(_QWORD ***)(v6 + 72) + 56LL);
      MiLogHotPatchPagesLocked(a2, (v19 << 12) + a2 - 1, *(_DWORD *)(v32 + 60), *(_DWORD *)(v32 + 72), v24);
    }
    v33 = a1[7];
    if ( v33 )
      v21->Next = (struct _MDL *)v33;
    a1[7] = (__int64)v21;
    v22 = 0;
  }
  else
  {
    v22 = -1073741670;
  }
  v23 = v43;
  if ( v8 )
  {
    v34 = v8 + (((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 31) | *(_DWORD *)(v6 + 52) & 0x7FFFFFFF);
    *(_DWORD *)(v6 + 52) ^= (v34 ^ *(_DWORD *)(v6 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v6 + 34) = v34 >> 31;
  }
  v35 = v10 - v8;
  if ( v35 )
    MiReturnFullProcessCommitment(v23, v35);
  return v22;
}
