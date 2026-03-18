/*
 * XREFs of PspUmsUnInitThread @ 0x1408C8BF4
 * Callers:
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsTerminateProcess @ 0x1406E90D0 (PsTerminateProcess.c)
 *     KeSetUmsThreadKernelLock @ 0x140880154 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x140880220 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x140880294 (KeUpdateUmsThreadState.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1408CCA64 (PspDisassociateUmsThreadFromPrimary.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408CCDEC (PspRundownUmsThreadForApcDelivery.c)
 */

__int64 __fastcall PspUmsUnInitThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  char v8; // di
  int v9; // eax
  signed int updated; // edi
  void *v11; // rsi
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0;
  CurrentThread = (struct _KTHREAD *)a1;
  if ( !a1 )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 496);
    v7 = *(_QWORD *)v6;
    if ( (*(_DWORD *)(v6 + 80) & 4) != 0 )
    {
      v8 = 1;
      LOBYTE(a4) = 1;
      v9 = PspRundownUmsThreadForApcDelivery(a1, &v13, v7, a4);
      if ( (*(_DWORD *)(a1 + 1760) & 0x10000) != 0 )
        v9 = 0;
      if ( v9 < 0 || (v13 & 8) == 0 && (v13 & 1) == 0 )
        v8 = (*(_DWORD *)(a1 + 1760) & 0x10000) != 0;
    }
    else
    {
      KeSetUmsThreadKernelLock(v7, 0LL);
      v8 = 1;
    }
    updated = KeUpdateUmsThreadState(v7, 2, v8);
  }
  else
  {
    --*(_WORD *)(a1 + 486);
    updated = PspDisassociateUmsThreadFromPrimary((PETHREAD)a1, 0LL);
    KiLeaveGuardedRegionUnsafe(a1);
  }
  v11 = *(void **)(*(_QWORD *)(a1 + 496) + 16LL);
  KeUnInitializeUmsThread(a1);
  if ( v11 )
    ObfDereferenceObject(v11);
  if ( updated < 0 && (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x4000000800000000LL) == 0 )
    PsTerminateProcess((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, updated);
  return (unsigned int)updated;
}
