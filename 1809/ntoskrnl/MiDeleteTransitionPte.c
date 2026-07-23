/*
 * XREFs of MiDeleteTransitionPte @ 0x140095370
 * Callers:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiTryDeleteTransitionPte @ 0x140094E6C (MiTryDeleteTransitionPte.c)
 *     MiDeleteSubsectionPages @ 0x140094EC0 (MiDeleteSubsectionPages.c)
 *     MiDeletePerSessionProtos @ 0x1401370A4 (MiDeletePerSessionProtos.c)
 *     MiPurgeFileOnlyPfn @ 0x1402B6B98 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiSetNonResidentPteHeat @ 0x140081E40 (MiSetNonResidentPteHeat.c)
 *     MiInvalidateCollidedIos @ 0x140117DB8 (MiInvalidateCollidedIos.c)
 *     MiDereferenceControlAreaPfnList @ 0x140119E9C (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteTransitionPte(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned __int8 a3, int a4)
{
  __int64 v6; // rdx
  ULONG_PTR v7; // r13
  __int64 v8; // r8
  ULONG_PTR v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  char v12; // bp
  unsigned __int64 v13; // rbx
  __int64 v14; // r12
  unsigned __int64 v15; // rdi
  unsigned int v16; // r14d
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r8
  unsigned __int8 v20; // di
  __int16 v22; // r10
  char v23; // al
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v29; // [rsp+30h] [rbp-58h]
  struct _KEVENT *v30; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v32; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int8 v33; // [rsp+A0h] [rbp+18h]
  int v34; // [rsp+A8h] [rbp+20h]

  v34 = a4;
  v33 = a3;
  v6 = (unsigned __int128)((__int64)(a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
  if ( MiPteInShadowRange(BugCheckParameter2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v24 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v24 )
    {
      v25 = *(_QWORD *)(v24 + 8 * ((BugCheckParameter2 >> 3) & 0x1FF));
      v26 = v9 | 0x20;
      if ( (v25 & 0x20) == 0 )
        v26 = v9;
      v9 = v26;
      if ( (v25 & 0x42) != 0 )
        v9 = v26 | 0x42;
    }
  }
  v10 = *(_QWORD *)(a2 + 8);
  if ( (v10 | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x402uLL, BugCheckParameter2, v9, *(_QWORD *)(a2 + 8));
  v11 = *(_QWORD *)(a2 + 16);
  v12 = 0;
  v13 = 0LL;
  v14 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL;
  v30 = 0LL;
  if ( (v11 & 0x400) != 0 )
  {
    if ( qword_14043B180 && (v11 & 0x10) == 0 )
      v11 &= ~qword_14043B180;
    MiDereferenceControlAreaPfnList(*(_QWORD *)(v11 >> 16), v11 >> 16, v8, 2LL);
    v32 = *(_QWORD *)(a2 + 16);
    MiSetNonResidentPteHeat(&v32, 0);
    v15 = v32;
    if ( (v22 & 0x400) == 0 )
    {
      v15 = v32 & 0xFFFFFFFFFFFFFFF9uLL;
      v32 &= 0xFFFFFFFFFFFFFFF9uLL;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v29 = 0LL;
  if ( *(_WORD *)(a2 + 32) )
  {
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    v23 = *(_BYTE *)(a2 + 34);
    if ( (v23 & 0x20) != 0 && (v23 & 8) == 0 )
    {
      v10 = *(_QWORD *)a2 - 32LL;
      if ( *(_QWORD *)(v10 + 16) == v10 + 16 )
        v10 = 0LL;
      v29 = v10;
    }
    v16 = 3;
  }
  else
  {
    MiUnlinkPageFromList(a2, 0);
    v11 = *(_QWORD *)(a2 + 16);
    if ( (v11 & 0x400) == 0 )
    {
      if ( (v11 & 4) != 0 || (LOBYTE(v11) = (unsigned __int8)v11 >> 1, (v11 & 1) != 0) )
        v13 = MI_READ_PTE_LOCK_FREE(a2 + 16);
      v10 = (*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL;
      v30 = *(struct _KEVENT **)(qword_14043B808 + 8 * v10);
    }
    v16 = 4;
  }
  if ( BugCheckParameter2 < 0xFFFFF6FB7DBED000uLL || BugCheckParameter2 > 0xFFFFF6FB7DBED7F8uLL )
    goto LABEL_12;
  if ( !(unsigned int)MiPteHasShadow(v10, v11) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v15 & 1) != 0 )
    {
      v15 |= 0x8000000000000000uLL;
    }
LABEL_12:
    *(_QWORD *)BugCheckParameter2 = v15;
    goto LABEL_13;
  }
  if ( !HIBYTE(word_14043B26C) && (v15 & 1) != 0 )
    v15 |= 0x8000000000000000uLL;
  *(_QWORD *)BugCheckParameter2 = v15;
  MiWritePteShadow(BugCheckParameter2);
LABEL_13:
  if ( v16 == 4 )
    MiInsertPageInFreeOrZeroedList(v7, 2);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v17 = 48 * v14;
  v18 = 48 * v14 - 0x58000000000LL;
  v31 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v31, v11, v8);
    while ( *(__int64 *)(v18 + 24) < 0 );
  }
  v19 = *(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (*(_BYTE *)(v18 + 34) & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, v17 / 48, *(_BYTE *)(v18 + 34) & 7, *(_QWORD *)(v18 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(v18 + 24) ^= ((v19 - 1) ^ *(_QWORD *)(v18 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v19 == 1 )
    MiPfnShareCountIsZero(v17 - 0x58000000000LL, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v20 = v33;
  if ( v33 != 17 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v33 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v20);
  }
  if ( v29 )
    MiInvalidateCollidedIos(v29);
  if ( v13 && v34 )
  {
    if ( v20 == 17 )
      v12 = 1;
    MiReleasePageFileInfo(v30, v13, v12);
  }
  return v16;
}
