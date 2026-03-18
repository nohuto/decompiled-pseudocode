/*
 * XREFs of MiZeroInParallel @ 0x140123178
 * Callers:
 *     MiInitializeMdlBatchPages @ 0x14009F4C0 (MiInitializeMdlBatchPages.c)
 *     MiAllocateLargeZeroPages @ 0x140899454 (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x140899CB0 (MiFindLargePageMemory.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140010B30 (KeSetPriorityThread.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     MiZeroInParallelWorker @ 0x140123300 (MiZeroInParallelWorker.c)
 *     KeSignalGate @ 0x1401309D0 (KeSignalGate.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiGetClosestNodeWithProcessors @ 0x1402D1D78 (MiGetClosestNodeWithProcessors.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1406B3FB0 (PsCreateSystemThread.c)
 */

void __fastcall MiZeroInParallel(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v3; // rdi
  unsigned int v4; // ecx
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rax
  unsigned int v7; // r12d
  int v8; // ebx
  __int64 v9; // rsi
  bool v10; // zf
  unsigned __int64 v11; // r13
  unsigned int v12; // ebx
  KPRIORITY v13; // esi
  int v14; // edi
  __int64 v15; // r14
  __int64 v16; // rcx
  int ClosestNodeWithProcessors; // eax
  struct _KTHREAD *v18; // [rsp+40h] [rbp-39h]
  HANDLE ThreadHandle; // [rsp+48h] [rbp-31h] BYREF
  _QWORD StartContext[16]; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v21; // [rsp+E0h] [rbp+67h]
  unsigned int v22; // [rsp+E8h] [rbp+6Fh]
  unsigned int v23; // [rsp+F8h] [rbp+7Fh]

  memset(StartContext, 0, 0x38uLL);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 16);
  v22 = v4;
  v18 = CurrentThread;
  v23 = KeNumberProcessors_0;
  if ( (*(_DWORD *)(a1 + 8) & 4) != 0
    || (CurrentThread->MiscFlags & 0x400) != 0
    || KeGetCurrentIrql() == 2
    || (MiFlags & 0x30) == 0 )
  {
    v23 = 0;
  }
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = -1;
  if ( v4 )
  {
    v9 = *(_QWORD *)a1 + 4LL;
    do
    {
      v10 = *(_QWORD *)(v9 + 12) == 0LL;
      *(_DWORD *)v9 = -1;
      if ( v10 )
      {
        *(_DWORD *)(v9 - 4) = 1;
      }
      else
      {
        *(_DWORD *)(v9 - 4) = 0;
        v6 = (unsigned int)(v6 + 1);
        v5 += *(_QWORD *)(v9 + 4);
        v21 = v6;
        if ( v4 != 1 )
        {
          LODWORD(v15) = -1;
          if ( (unsigned __int16)KeNumberNodes > 1u )
          {
            v16 = *(unsigned int *)(a1 + 24);
            if ( (_DWORD)v16 == -1 )
            {
              ClosestNodeWithProcessors = v7 >> byte_140465A4D;
            }
            else
            {
              ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(v16, 0xFFFFFFFFLL, 1LL);
              if ( ClosestNodeWithProcessors == -1 )
                ClosestNodeWithProcessors = *(_DWORD *)(a1 + 24);
            }
            if ( v3 && ClosestNodeWithProcessors == v8 )
            {
              _BitScanReverse64((unsigned __int64 *)&v15, v3);
              _bittestandreset64((__int64 *)&v3, (unsigned int)v15);
            }
            else
            {
              v3 = *(_QWORD *)(KeNodeBlock[ClosestNodeWithProcessors] + 136);
              if ( v3 )
              {
                _BitScanReverse64((unsigned __int64 *)&v15, v3);
                v8 = ClosestNodeWithProcessors;
                v3 &= ~(1LL << v15);
              }
            }
            v6 = v21;
            v4 = v22;
          }
          *(_DWORD *)v9 = v15;
        }
      }
      ++v7;
      v9 += 24LL;
    }
    while ( v7 < v4 );
    CurrentThread = v18;
  }
  if ( v23 <= (unsigned int)v6 )
    v6 = v23;
  v11 = v5 >> 12;
  if ( v6 <= v11 )
    LODWORD(v11) = v6;
  v12 = 0;
  StartContext[1] = CurrentThread->ApcState.Process;
  StartContext[3] = a1;
  LOWORD(StartContext[4]) = 263;
  if ( (_DWORD)v11 != 1 )
    v12 = v11;
  StartContext[6] = &StartContext[5];
  HIDWORD(StartContext[4]) = 0;
  StartContext[5] = &StartContext[5];
  BYTE2(StartContext[4]) = 6;
  LODWORD(StartContext[2]) = v12;
  if ( v12 )
    v13 = KeSetPriorityThread(CurrentThread, 15);
  else
    v13 = -1;
  v14 = 0;
  LODWORD(StartContext[0]) = v13;
  if ( v12 )
  {
    while ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, MiZeroInParallelWorker, StartContext) >= 0 )
    {
      ObCloseHandle(ThreadHandle, 0);
      if ( ++v14 >= v12 )
        goto LABEL_42;
    }
    v12 -= v14;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&StartContext[2], -v12) == v12 )
      KeSignalGate(&StartContext[4], 1LL);
LABEL_42:
    if ( v12 )
      KeSetPriorityThread(CurrentThread, v13);
  }
  if ( v14 )
    KeWaitForGate((__int64)&StartContext[4], 0);
  else
    MiZeroInParallelWorker(StartContext);
}
