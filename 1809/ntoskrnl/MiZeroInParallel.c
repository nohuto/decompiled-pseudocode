/*
 * XREFs of MiZeroInParallel @ 0x14013C644
 * Callers:
 *     MiInitializeMdlBatchPages @ 0x140011478 (MiInitializeMdlBatchPages.c)
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     MiZeroInParallelWorker @ 0x14013C7C0 (MiZeroInParallelWorker.c)
 *     MiGetClosestNodeWithProcessors @ 0x1402BB9D4 (MiGetClosestNodeWithProcessors.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x14066BC30 (PsCreateSystemThread.c)
 */

void __fastcall MiZeroInParallel(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned int v3; // ecx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned int v7; // r15d
  __int64 v8; // r8
  __int64 v9; // rdi
  bool v10; // zf
  unsigned __int64 v11; // r12
  unsigned __int32 v12; // ebx
  KPRIORITY v13; // esi
  int v14; // edi
  __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned int ClosestNodeWithProcessors; // eax
  unsigned int v18; // edx
  __int64 v19; // r8
  unsigned int v20; // [rsp+40h] [rbp-39h]
  HANDLE ThreadHandle; // [rsp+48h] [rbp-31h] BYREF
  KPRIORITY StartContext; // [rsp+50h] [rbp-29h] BYREF
  _KPROCESS *Process; // [rsp+58h] [rbp-21h]
  unsigned __int32 v24; // [rsp+60h] [rbp-19h] BYREF
  __int64 v25; // [rsp+68h] [rbp-11h]
  __int16 v26; // [rsp+70h] [rbp-9h] BYREF
  char v27; // [rsp+72h] [rbp-7h]
  int v28; // [rsp+74h] [rbp-5h]
  _QWORD v29[11]; // [rsp+78h] [rbp-1h] BYREF
  unsigned int v30; // [rsp+E0h] [rbp+67h]
  unsigned int v31; // [rsp+E8h] [rbp+6Fh]
  unsigned int v32; // [rsp+F0h] [rbp+77h]

  CurrentThread = KeGetCurrentThread();
  v3 = *(_DWORD *)(a1 + 16);
  v4 = 0LL;
  v31 = v3;
  v20 = KeNumberProcessors_0;
  if ( (*(_DWORD *)(a1 + 8) & 2) != 0
    || (CurrentThread->MiscFlags & 0x400) != 0
    || KeGetCurrentIrql() == 2
    || (MiFlags & 0x30) == 0 )
  {
    v20 = 0;
  }
  v5 = 0LL;
  v6 = 0LL;
  v30 = -1;
  v7 = 0;
  v8 = 0xFFFFFFFFLL;
  if ( v3 )
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
        v5 = (unsigned int)(v5 + 1);
        v6 += *(_QWORD *)(v9 + 4);
        v32 = v5;
        if ( v3 != 1 )
        {
          LODWORD(v15) = -1;
          if ( (unsigned __int16)KeNumberNodes > 1u )
          {
            v16 = *(unsigned int *)(a1 + 24);
            if ( (_DWORD)v16 == -1 )
            {
              v18 = v7 >> byte_14043B109;
            }
            else
            {
              ClosestNodeWithProcessors = MiGetClosestNodeWithProcessors(v16, 1LL, v8);
              v8 = v30;
              v18 = ClosestNodeWithProcessors;
              if ( ClosestNodeWithProcessors == -1 )
                v18 = *(_DWORD *)(a1 + 24);
            }
            if ( v4 && v18 == (_DWORD)v8 )
            {
              _BitScanReverse64((unsigned __int64 *)&v15, v4);
              _bittestandreset64((__int64 *)&v4, (unsigned int)v15);
            }
            else
            {
              v4 = *(_QWORD *)(KeNodeBlock[v18] + 136);
              if ( v4 )
              {
                _BitScanReverse64((unsigned __int64 *)&v15, v4);
                v8 = v18;
                v30 = v18;
                v4 &= ~(1LL << v15);
              }
            }
            v3 = v31;
            v5 = v32;
          }
          *(_DWORD *)v9 = v15;
        }
      }
      ++v7;
      v9 += 24LL;
    }
    while ( v7 < v3 );
  }
  if ( v20 <= (unsigned int)v5 )
    v5 = v20;
  v11 = v6 >> 12;
  if ( v5 <= v11 )
    LODWORD(v11) = v5;
  v12 = 0;
  Process = CurrentThread->ApcState.Process;
  v25 = a1;
  v26 = 263;
  if ( (_DWORD)v11 != 1 )
    v12 = v11;
  v29[1] = v29;
  v28 = 0;
  v29[0] = v29;
  v27 = 6;
  v24 = v12;
  if ( v12 )
    v13 = KeSetPriorityThread(CurrentThread, 15);
  else
    v13 = -1;
  v14 = 0;
  StartContext = v13;
  if ( v12 )
  {
    while ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, MiZeroInParallelWorker, &StartContext) >= 0 )
    {
      ObCloseHandle(ThreadHandle, 0);
      if ( ++v14 >= v12 )
        goto LABEL_41;
    }
    v12 -= v14;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v24, -v12) == v12 )
      KeSignalGate((__int64)&v26, 1LL, v19);
LABEL_41:
    if ( v12 )
      KeSetPriorityThread(CurrentThread, v13);
  }
  if ( v14 )
    KeWaitForGate((__int64)&v26, 0);
  else
    MiZeroInParallelWorker(&StartContext);
}
