/*
 * XREFs of KeRestoreExtendedAndSupervisorState @ 0x14012F894
 * Callers:
 *     KeRestoreExtendedProcessorState @ 0x14012F880 (KeRestoreExtendedProcessorState.c)
 *     PopHandleNextState @ 0x14056A410 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x14057B350 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlXRestore @ 0x14012F9C4 (RtlXRestore.c)
 *     KeFreeXStateContext @ 0x14012FA08 (KeFreeXStateContext.c)
 *     RtlXRestoreS @ 0x1401422F8 (RtlXRestoreS.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

char __fastcall KeRestoreExtendedAndSupervisorState(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r9
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int8 v4; // al
  unsigned __int8 v5; // cl
  ULONG_PTR v6; // r8
  unsigned __int64 v7; // rdx
  bool v8; // zf
  char result; // al

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
    v4 = CurrentIrql + 1;
  else
    v4 = 0;
  v5 = *(_BYTE *)(a1 + 16);
  if ( v5 != v4 )
    KeBugCheckEx(0x131u, 4uLL, v5, v4, 0LL);
  v6 = *(_QWORD *)(a1 + 8);
  if ( (struct _KTHREAD *)v6 != CurrentThread )
    KeBugCheckEx(0x131u, 3uLL, v6, (ULONG_PTR)CurrentThread, 0LL);
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  CurrentThread->WaitBlock[1].SparePtr = *(PVOID *)a1;
  v7 = *(_QWORD *)(a1 + 24);
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      v8 = (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & v7) == 0;
    else
      v8 = (~MEMORY[0xFFFFF780000003D8] & v7) == 0;
  }
  else
  {
    v8 = (v7 & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  result = !v8;
  if ( !v8 )
    KeBugCheckEx(0x131u, 0LL, KeFeatureBits & 0x800000, (unsigned int)v7, HIDWORD(v7));
  if ( v7 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      result = RtlXRestoreS(*(_QWORD *)(a1 + 40), v7);
      goto LABEL_19;
    }
    result = RtlXRestore(*(_QWORD *)(a1 + 40), v7);
  }
  if ( !CurrentIrql )
    result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_19:
  if ( *(_QWORD *)(a1 + 48) )
    return KeFreeXStateContext(a1 + 24);
  return result;
}
