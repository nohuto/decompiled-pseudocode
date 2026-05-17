/*
 * XREFs of LdrShutdownThread @ 0x1800232A0
 * Callers:
 *     RtlExitUserThread @ 0x18005A8F0 (RtlExitUserThread.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800237A0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180025950 (RtlDeactivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180025CC8 (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x180025DE4 (LdrpCallTlsInitializers.c)
 *     LdrpDrainWorkQueue @ 0x180028298 (LdrpDrainWorkQueue.c)
 *     LdrpReleaseLoaderLock @ 0x18002AFD4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18002B034 (LdrpAcquireLoaderLock.c)
 *     TpTrimPools @ 0x1800586A0 (TpTrimPools.c)
 *     RtlProcessFlsData @ 0x180076270 (RtlProcessFlsData.c)
 *     RtlFreeThreadActivationContextStack @ 0x180076570 (RtlFreeThreadActivationContextStack.c)
 *     LdrpFreeTls @ 0x1800769BC (LdrpFreeTls.c)
 *     LdrpDropLastInProgressCount @ 0x180079EDC (LdrpDropLastInProgressCount.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall LdrShutdownThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rbx
  struct _PEB *v5; // r13
  unsigned __int64 FlsData; // rsi
  char v7; // r14
  __int64 v8; // rcx
  __int64 *v9; // r15
  __int64 *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 TlsExpansionSlots; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 result; // rax
  unsigned __int64 FiberData; // r8
  __int64 v23; // [rsp+30h] [rbp-C8h] BYREF
  int v24; // [rsp+38h] [rbp-C0h]
  _BYTE v25[56]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+80h] [rbp-78h] BYREF
  int v27; // [rsp+88h] [rbp-70h]
  _BYTE v28[56]; // [rsp+90h] [rbp-68h] BYREF

  v4 = NtCurrentTeb();
  v5 = NtCurrentPeb();
  FlsData = (unsigned __int64)v4->FlsData;
  if ( FlsData )
    RtlProcessFlsData(v4->FlsData);
  if ( ((NtCurrentTeb()->SameTebFlags & 8) == 0 || (NtCurrentTeb()->SameTebFlags & 0x20) != 0)
    && (v4->SameTebFlags & 0x2000) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v7 = 1;
    }
    else
    {
      v7 = 0;
      LdrpDrainWorkQueue(0LL);
    }
    LdrpAcquireLoaderLock();
    v9 = (__int64 *)qword_1801653F8;
    while ( v9 != &qword_1801653F0 )
    {
      v10 = v9 - 4;
      v9 = (__int64 *)v9[1];
      v8 = *((unsigned int *)v10 + 26);
      if ( v5->ImageBaseAddress != (void *)v10[6] && (v8 & 0x40000) == 0 )
      {
        v11 = v10[7];
        if ( v11 )
        {
          v8 &= 0x80004u;
          if ( (_DWORD)v8 == 524292 )
          {
            v23 = 72LL;
            v24 = 1;
            memset(v25, 0, sizeof(v25));
            RtlActivateActivationContextUnsafeFast(&v23, v10[17]);
            if ( *((_WORD *)v10 + 55) )
              LdrpCallTlsInitializers(3LL, v10);
            LdrpCallInitRoutine(v11, v10[6], 3LL);
            RtlDeactivateActivationContextUnsafeFast(&v23);
          }
        }
      }
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v26 = 72LL;
      v27 = 1;
      memset(v28, 0, sizeof(v28));
      RtlActivateActivationContextUnsafeFast(&v26, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(3LL, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast(&v26);
    }
    LdrpReleaseLoaderLock(v8, 19LL);
    if ( !v7 )
      LdrpDropLastInProgressCount(v13, v12, v14, v15);
    LdrpFreeTls(v13, v12, v14, v15);
  }
  if ( FlsData )
  {
    v4->FlsData = 0LL;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, FlsData);
  }
  TlsExpansionSlots = (unsigned __int64)v4->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v4->TlsExpansionSlots = 0LL;
    RtlEnterCriticalSection((__int64)&FastPebLock);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, TlsExpansionSlots);
  }
  if ( (v4->SameTebFlags & 4) != 0 )
  {
    FiberData = (unsigned __int64)v4->NtTib.FiberData;
    v4->NtTib.FiberData = 0LL;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, FiberData);
  }
  RtlFreeThreadActivationContextStack(a1, a2, a3, a4);
  result = 1024LL;
  if ( (v4->SameTebFlags & 0x400) != 0 && LdrInitState == 3 )
    return TpTrimPools(v18, v17, v19, v20);
  return result;
}
