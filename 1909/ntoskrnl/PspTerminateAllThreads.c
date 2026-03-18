/*
 * XREFs of PspTerminateAllThreads @ 0x14067A1DC
 * Callers:
 *     PspTerminateProcess @ 0x140677ECC (PspTerminateProcess.c)
 *     NtTerminateProcess @ 0x1406D6760 (NtTerminateProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x1400065B0 (PsGetProcessServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KeFlushProcessWriteBuffers @ 0x140098C58 (KeFlushProcessWriteBuffers.c)
 *     PspGetPreviousProcessThread @ 0x14067A410 (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x14067C9D0 (PsGetNextProcessThread.c)
 *     PspTerminateThreadByPointer @ 0x14067DB90 (PspTerminateThreadByPointer.c)
 *     PspRundownSingleProcess @ 0x1406865E8 (PspRundownSingleProcess.c)
 *     DbgkClearProcessDebugObject @ 0x1407296E4 (DbgkClearProcessDebugObject.c)
 *     PspCatchCriticalBreak @ 0x1408C9224 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateAllThreads(ULONG_PTR BugCheckParameter1, ULONG_PTR a2, int a3, unsigned int a4)
{
  __int64 v8; // r13
  ULONG_PTR PreviousProcessThread; // rbp
  unsigned int v10; // ebx
  unsigned int v11; // esi
  int v12; // r12d
  __int64 i; // rax
  PVOID v14; // rbp
  void *v15; // rax
  ULONG v16; // edx
  PVOID Object; // [rsp+70h] [rbp+8h]

  if ( (*(_DWORD *)(BugCheckParameter1 + 780) & 0x2000) != 0 )
  {
    PsGetProcessServerSilo(BugCheckParameter1);
    PspCatchCriticalBreak("Terminating critical process 0x%p (%s)\n", BugCheckParameter1, BugCheckParameter1 + 1104, a3);
  }
  v8 = *(_QWORD *)(a2 + 184);
  PreviousProcessThread = PspGetPreviousProcessThread(BugCheckParameter1, 0LL);
  v10 = a4 & 4 | (2 * (a4 & 1)) | (a4 >> 1) & 1;
  v11 = 290;
  if ( PreviousProcessThread )
  {
    if ( (v10 & 1) != 0 )
    {
      v11 = -1073741558;
      v16 = 1850045264;
      v15 = (void *)PreviousProcessThread;
    }
    else
    {
      Object = (PVOID)PreviousProcessThread;
      v11 = 0;
      ObfReferenceObjectWithTag((PVOID)PreviousProcessThread, 0x65547350u);
      v12 = 0;
      do
      {
        if ( PreviousProcessThread != a2 )
        {
          if ( (v10 & 4) != 0 )
          {
            v10 ^= ((unsigned __int8)v10 ^ (unsigned __int8)(*(_DWORD *)(PreviousProcessThread + 1764) >> 3)) & 8;
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(PreviousProcessThread + 1736)) )
          {
            v10 |= 8u;
          }
          else
          {
            v10 = (((unsigned __int8)v10 ^ (unsigned __int8)(16
                                                           * _interlockedbittestandset(
                                                               (volatile signed __int32 *)(PreviousProcessThread + 1760),
                                                               0xFu))) & 0x10 ^ v10) & 0xFFFFFFF7;
          }
          if ( (v10 & 8) != 0 )
          {
            ++v12;
            PspTerminateThreadByPointer(PreviousProcessThread, a3);
          }
        }
        PreviousProcessThread = PspGetPreviousProcessThread(BugCheckParameter1, PreviousProcessThread);
      }
      while ( PreviousProcessThread );
      if ( v12 && BugCheckParameter1 == v8 )
        KeFlushProcessWriteBuffers(0);
      for ( i = PsGetNextProcessThread(BugCheckParameter1, 0LL); ; i = PsGetNextProcessThread(BugCheckParameter1, v14) )
      {
        v14 = (PVOID)i;
        if ( i != a2 && (v10 & 4) == 0 && (*(_DWORD *)(i + 1760) & 0x8000) == 0 )
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(i + 1736));
        if ( v14 == Object )
          break;
      }
      ObfDereferenceObjectWithTag(v14, 0x6E457350u);
      v15 = Object;
      v16 = 1700033360;
    }
    ObfDereferenceObjectWithTag(v15, v16);
    if ( (v10 & 2) != 0 && *(_QWORD *)(a2 + 544) == BugCheckParameter1 )
      PspTerminateThreadByPointer(a2, a3);
  }
  if ( BugCheckParameter1 != v8 && a3 == 1073807364 )
    DbgkClearProcessDebugObject(BugCheckParameter1);
  if ( (v11 == 290 || *(_QWORD *)(BugCheckParameter1 + 1056) && BugCheckParameter1 != v8)
    && !(unsigned __int8)PspRundownSingleProcess(BugCheckParameter1)
    && v11 == 290 )
  {
    return (unsigned int)-1073741558;
  }
  return v11;
}
