/*
 * XREFs of LdrShutdownThread @ 0x180022A20
 * Callers:
 *     RtlExitUserThread @ 0x18006D750 (RtlExitUserThread.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180024DB0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180024F00 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x180024FBC (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x18002507C (LdrpCallTlsInitializers.c)
 *     LdrpReleaseLoaderLock @ 0x18002D75C (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18002D7BC (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x18002E73C (LdrpDrainWorkQueue.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     TpTrimPools @ 0x180060860 (TpTrimPools.c)
 *     ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18006B674 (-RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z.c)
 *     LdrpFreeTls @ 0x18006E3E4 (LdrpFreeTls.c)
 *     RtlFreeThreadActivationContextStack @ 0x18006EBD0 (RtlFreeThreadActivationContextStack.c)
 *     LdrpDropLastInProgressCount @ 0x1800743BC (LdrpDropLastInProgressCount.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

void __noreturn LdrShutdownThread(void)
{
  __int64 v0; // rdx
  struct _RTLP_FLS_CONTEXT *v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _TEB *v4; // rbx
  struct _PEB *v5; // r13
  struct _RTLP_FLS_DATA *FlsData; // r14
  char v7; // si
  __int64 v8; // rcx
  __int64 *v9; // r15
  __int64 *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  void **TlsExpansionSlots; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  void *FiberData; // r8
  __int64 v22; // [rsp+30h] [rbp-C8h] BYREF
  int v23; // [rsp+38h] [rbp-C0h]
  _BYTE v24[56]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+80h] [rbp-78h] BYREF
  int v26; // [rsp+88h] [rbp-70h]
  _BYTE v27[56]; // [rsp+90h] [rbp-68h] BYREF

  v4 = NtCurrentTeb();
  v5 = NtCurrentPeb();
  FlsData = (struct _RTLP_FLS_DATA *)v4->FlsData;
  if ( FlsData )
    RtlpFlsDataCleanup(v1, (struct _RTLP_FLS_DATA *)v4->FlsData, 1u);
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
            v22 = 72LL;
            v23 = 1;
            memset(v24, 0, sizeof(v24));
            RtlActivateActivationContextUnsafeFast(&v22, v10[17]);
            if ( *((_WORD *)v10 + 55) )
              LdrpCallTlsInitializers(3LL, v10);
            LdrpCallInitRoutine(v11, v10[6], 3LL);
            RtlDeactivateActivationContextUnsafeFast(&v22);
          }
        }
      }
    }
    if ( *(_WORD *)(LdrpImageEntry + 110) )
    {
      v25 = 72LL;
      v26 = 1;
      memset(v27, 0, sizeof(v27));
      RtlActivateActivationContextUnsafeFast(&v25, *(_QWORD *)(LdrpImageEntry + 136));
      LdrpCallTlsInitializers(3LL, LdrpImageEntry);
      RtlDeactivateActivationContextUnsafeFast(&v25);
    }
    LdrpReleaseLoaderLock(v8, 19LL);
    if ( !v7 )
      LdrpDropLastInProgressCount(v13, v12, v14, v15);
    LdrpFreeTls(v13, v12, v14, v15);
  }
  if ( FlsData )
  {
    v4->FlsData = 0LL;
    RtlpFlsDataCleanup(v1, FlsData, 2u);
  }
  TlsExpansionSlots = v4->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v4->TlsExpansionSlots = 0LL;
    RtlEnterCriticalSection(&FastPebLock);
    RtlLeaveCriticalSection(&FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, TlsExpansionSlots);
  }
  if ( (v4->SameTebFlags & 4) != 0 )
  {
    FiberData = v4->NtTib.FiberData;
    v4->NtTib.FiberData = 0LL;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, FiberData);
  }
  RtlFreeThreadActivationContextStack(v1, v0, v2, v3);
  if ( (v4->SameTebFlags & 0x400) != 0 && LdrInitState == 3 )
    TpTrimPools(v18, v17, v19, v20);
}
