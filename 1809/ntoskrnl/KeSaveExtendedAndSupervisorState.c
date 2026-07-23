/*
 * XREFs of KeSaveExtendedAndSupervisorState @ 0x14012E67C
 * Callers:
 *     KeSaveExtendedProcessorState @ 0x14012E630 (KeSaveExtendedProcessorState.c)
 *     PopHandleNextState @ 0x14056A410 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x14057B350 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlXSave @ 0x14012E84C (RtlXSave.c)
 *     KeAllocateXStateContext @ 0x14012E8A0 (KeAllocateXStateContext.c)
 *     RtlXRestore @ 0x14012F9C4 (RtlXRestore.c)
 *     RtlXSaveS @ 0x140141E20 (RtlXSaveS.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall KeSaveExtendedAndSupervisorState(ULONG_PTR BugCheckParameter3, PVOID *a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KTHREAD *CurrentThread; // r14
  bool v6; // zf
  unsigned __int8 v7; // r12
  _BYTE *SparePtr; // rax
  ULONG_PTR v9; // r15
  unsigned int *v10; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  int v13; // eax
  unsigned __int8 v14; // cl

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & BugCheckParameter3) != 0 )
LABEL_33:
        KeBugCheckEx(
          0x131u,
          0LL,
          KeFeatureBits & 0x800000,
          (unsigned int)BugCheckParameter3,
          HIDWORD(BugCheckParameter3));
LABEL_26:
      v7 = CurrentIrql + 1;
      goto LABEL_9;
    }
    v6 = (~MEMORY[0xFFFFF780000003D8] & BugCheckParameter3) == 0;
  }
  else
  {
    v6 = (BugCheckParameter3 & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  if ( !v6 )
    goto LABEL_33;
  if ( CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
    goto LABEL_26;
  v7 = 0;
LABEL_9:
  SparePtr = CurrentThread->WaitBlock[1].SparePtr;
  v9 = (BugCheckParameter3 | MEMORY[0xFFFFF780000003D8]) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( SparePtr )
  {
    v14 = SparePtr[16];
    if ( v14 > v7 )
      KeBugCheckEx(0x131u, 2uLL, v14, v7, 0LL);
  }
  if ( v9 )
  {
    if ( CurrentIrql < 2u )
      goto LABEL_12;
    if ( SparePtr && SparePtr[16] == v7 )
    {
      v10 = (unsigned int *)0xFFFFF78000000600LL;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
LABEL_13:
        result = KeAllocateXStateContext(a2 + 3, BugCheckParameter3, *v10);
        if ( (int)result < 0 )
          return result;
        goto LABEL_14;
      }
LABEL_12:
      v10 = (unsigned int *)0xFFFFF780000003E8LL;
      goto LABEL_13;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    memset(&CurrentPrcb->ExtendedState->Header, 0, sizeof(CurrentPrcb->ExtendedState->Header));
    v13 = KeXStateLength;
    a2[6] = 0LL;
    *((_DWORD *)a2 + 8) = v13;
    a2[5] = CurrentPrcb->ExtendedState;
  }
  else
  {
    *((_DWORD *)a2 + 8) = 0;
    a2[6] = 0LL;
    a2[5] = 0LL;
  }
LABEL_14:
  a2[1] = CurrentThread;
  *((_BYTE *)a2 + 16) = v7;
  a2[3] = (PVOID)v9;
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  *a2 = CurrentThread->WaitBlock[1].SparePtr;
  if ( v9 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      RtlXRestore(a2[5], 0LL);
      *((_QWORD *)a2[5] + 65) = v9;
      RtlXSaveS(a2[5], v9);
    }
    else
    {
      RtlXSave(a2[5], v9);
    }
  }
  CurrentThread->WaitBlock[1].SparePtr = a2;
  if ( !CurrentIrql )
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
