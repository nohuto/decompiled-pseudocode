/*
 * XREFs of MiDeleteTransitionPte @ 0x14002EB00
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiDeleteSubsectionPages @ 0x1400DC990 (MiDeleteSubsectionPages.c)
 *     MmPurgeSection @ 0x1400DCED0 (MmPurgeSection.c)
 *     MiTryDeleteTransitionPte @ 0x1400DFC94 (MiTryDeleteTransitionPte.c)
 *     MiDeletePerSessionProtos @ 0x140138800 (MiDeletePerSessionProtos.c)
 *     MiPurgeFileOnlyPfn @ 0x1402CCC18 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x140026B30 (MiPfnShareCountIsZero.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A450 (MiDereferenceControlAreaPfnList.c)
 *     MiInvalidateCollidedIos @ 0x14010D7FC (MiInvalidateCollidedIos.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteTransitionPte(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, __int64 a3, int a4)
{
  ULONG_PTR v6; // r9
  __int64 v7; // rdx
  ULONG_PTR v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r13
  unsigned int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // r12d
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r9
  __int64 v22; // r8
  unsigned __int8 v23; // di
  char v25; // al
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v31; // [rsp+30h] [rbp-58h]
  int v32; // [rsp+90h] [rbp+8h] BYREF
  __int64 v33; // [rsp+98h] [rbp+10h]
  unsigned __int8 v34; // [rsp+A0h] [rbp+18h]
  int v35; // [rsp+A8h] [rbp+20h]

  v35 = a4;
  v34 = a3;
  v6 = *(_QWORD *)BugCheckParameter2;
  v7 = (unsigned __int128)((__int64)(a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 3);
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
    && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v6 & 1) != 0
    && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v27 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
      v28 = v6 | 0x20;
      if ( (v27 & 0x20) == 0 )
        v28 = *(_QWORD *)BugCheckParameter2;
      v6 = v28;
      if ( (v27 & 0x42) != 0 )
        v6 = v28 | 0x42;
    }
  }
  if ( (*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x402uLL, BugCheckParameter2, v6, *(_QWORD *)(a2 + 8));
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL;
  v11 = 0;
  v31 = 0LL;
  v12 = 0LL;
  if ( (v9 & 0x400) != 0 )
  {
    if ( qword_140465B00 && (v9 & 0x10) == 0 )
      v9 &= ~qword_140465B00;
    MiDereferenceControlAreaPfnList(*(_QWORD *)(v9 >> 16), v9 >> 16, a3, 2LL);
    v13 = *(_QWORD *)(a2 + 16);
    v14 = -2049LL;
    if ( (v13 & 0x400) == 0 )
      v14 = -9LL;
    v15 = v14 & *(_QWORD *)(a2 + 16);
    if ( (v13 & 0x400) == 0 )
      v15 &= 0xFFFFFFFFFFFFFFF9uLL;
  }
  else
  {
    v15 = 0LL;
  }
  v33 = 0LL;
  if ( *(_WORD *)(a2 + 32) )
  {
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    v25 = *(_BYTE *)(a2 + 34);
    if ( (v25 & 0x20) != 0 && (v25 & 8) == 0 )
    {
      v29 = *(_QWORD *)a2 - 32LL;
      if ( *(_QWORD *)(v29 + 16) == v29 + 16 )
        v29 = 0LL;
      v33 = v29;
    }
    v17 = 3;
  }
  else
  {
    MiUnlinkPageFromList(a2);
    v16 = *(_QWORD *)(a2 + 16);
    if ( (v16 & 0x400) == 0 )
    {
      if ( (v16 & 4) != 0 || (v16 & 2) != 0 )
        v12 = MI_READ_PTE_LOCK_FREE(a2 + 16);
      v31 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL));
    }
    v17 = 4;
  }
  if ( !MiPteInShadowRange(BugCheckParameter2) )
    goto LABEL_15;
  if ( !(unsigned int)MiPteHasShadow(v18) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v15 & 1) != 0 )
    {
      v15 |= 0x8000000000000000uLL;
    }
LABEL_15:
    *(_QWORD *)BugCheckParameter2 = v15;
    goto LABEL_16;
  }
  if ( !HIBYTE(word_140465BEC) && (v15 & 1) != 0 )
    v15 |= 0x8000000000000000uLL;
  *(_QWORD *)BugCheckParameter2 = v15;
  MiWritePteShadow(BugCheckParameter2, v15);
LABEL_16:
  if ( v17 == 4 )
    MiInsertPageInFreeOrZeroedList(v8, 2);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v19 = 48 * v10;
  v20 = 48 * v10 - 0x58000000000LL;
  v32 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v32);
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  v21 = *(unsigned __int8 *)(v20 + 34);
  v22 = *(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v21 & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, v19 / 48, v21 & 7, *(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(v20 + 24) ^= ((v22 - 1) ^ *(_QWORD *)(v20 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v22 == 1 )
    MiPfnShareCountIsZero(v19 - 0x58000000000LL, 0LL, 1LL, v21);
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v23 = v34;
  if ( v34 != 17 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v34 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v23);
  }
  if ( v33 )
    MiInvalidateCollidedIos();
  if ( v12 && v35 )
  {
    if ( v23 == 17 )
      v11 = 1;
    MiReleasePageFileInfo(v31, v12, v11);
  }
  return v17;
}
