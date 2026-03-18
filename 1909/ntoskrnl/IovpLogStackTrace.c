/*
 * XREFs of IovpLogStackTrace @ 0x140963B18
 * Callers:
 *     IoReuseIrp @ 0x140091F90 (IoReuseIrp.c)
 *     IovAllocateIrp @ 0x140962970 (IovAllocateIrp.c)
 *     IovCancelIrp @ 0x1409630F0 (IovCancelIrp.c)
 *     IovCompleteRequest @ 0x140963134 (IovCompleteRequest.c)
 * Callees:
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400175E0 (RtlEnoughStackSpaceForStackCapture.c)
 *     KeExpandKernelStackAndCallout @ 0x14013D220 (KeExpandKernelStackAndCallout.c)
 *     ViPoolLogStackCallout @ 0x140963AE0 (ViPoolLogStackCallout.c)
 */

unsigned __int64 __fastcall IovpLogStackTrace(__int64 a1)
{
  unsigned __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !IovIrpTraces )
    return 0LL;
  v2 = IovIrpTraces
     + ((unsigned __int64)(_InterlockedIncrement(&IovIrpTracesIndex) & (unsigned int)(IovIrpTracesLength - 1)) << 7);
  *(_QWORD *)v2 = a1;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(v2 + 8) = CurrentThread;
  *(_DWORD *)(v2 + 16) = CurrentThread->WaitBlock[3].SpareLong;
  LOBYTE(CurrentThread) = KeGetCurrentIrql();
  *(_BYTE *)(v2 + 20) = (_BYTE)CurrentThread;
  if ( (unsigned __int8)CurrentThread > 1u || (unsigned int)RtlEnoughStackSpaceForStackCapture() )
  {
    ViPoolLogStackCallout((PVOID *)v2);
  }
  else if ( KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)ViPoolLogStackCallout, (PVOID)v2, 0xE30uLL) < 0 )
  {
    *(_QWORD *)(v2 + 24) = 0LL;
  }
  return v2;
}
