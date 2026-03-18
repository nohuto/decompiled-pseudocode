/*
 * XREFs of EtwpProcessEnumCallback @ 0x140707DB0
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x140707754 (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     PsGetProcessServerSilo @ 0x140006520 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpEnumerateAddressSpace @ 0x1405E9F34 (EtwpEnumerateAddressSpace.c)
 *     EtwpIsProcessZombie @ 0x1407080A0 (EtwpIsProcessZombie.c)
 *     EtwpTraceProcessRundown @ 0x1407080D4 (EtwpTraceProcessRundown.c)
 *     PsEnumProcessThreads @ 0x140708240 (PsEnumProcessThreads.c)
 *     EtwpThreadEnumCallback @ 0x1407082C0 (EtwpThreadEnumCallback.c)
 *     EtwpSysModuleRunDown @ 0x140708308 (EtwpSysModuleRunDown.c)
 *     EtwpEnumerateWorkingSet @ 0x1408FB4F4 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleRundown @ 0x1408FBC24 (EtwpObjectHandleRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1408FC248 (EtwpProcessPerfCtrsRundown.c)
 */

__int64 __fastcall EtwpProcessEnumCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v4; // r15
  char v5; // r12
  char v6; // r13
  int *v7; // rdi
  char v8; // r14
  __int64 ProcessServerSilo; // rax
  __int64 v10; // rdx
  struct _KPROCESS *v11; // rcx
  char v12; // bp
  int v13; // eax
  int v14; // eax
  int v16; // eax
  int v17; // eax
  ULONG v18; // r14d
  ULONG j; // ebp
  __int64 v20; // rax
  ULONG v21; // r14d
  ULONG i; // ebp
  __int64 Prcb; // rax
  _QWORD *ServerSiloGlobals; // rax
  __int64 v25; // rdx
  _BYTE v26[48]; // [rsp+20h] [rbp-78h] BYREF

  memset(v26, 0, sizeof(v26));
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_BYTE *)(a2 + 64);
  v6 = 0;
  v7 = *(int **)a2;
  v8 = 0;
  ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
  if ( *(_QWORD *)(v4 + 1112) != EtwpHostSiloState )
  {
    ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
    if ( ServerSiloGlobals[108] != v25 )
      return 0LL;
  }
  *(_BYTE *)(a2 + 65) = 0;
  if ( !(unsigned int)EtwpIsProcessZombie(BugCheckParameter1) )
  {
    v12 = 1;
    if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
    {
      v8 = 1;
    }
    else
    {
      if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
      {
LABEL_7:
        *(_BYTE *)(a2 + 65) = v12;
        *(_BYTE *)(a2 + 67) = v8;
        if ( v7 )
        {
          if ( v5 )
          {
            v16 = *v7;
            if ( (*v7 & 1) != 0 )
            {
              EtwpTraceProcessRundown((PEPROCESS)BugCheckParameter1);
              v16 = *v7;
            }
            if ( (v16 & 2) != 0 )
            {
              if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
              {
                v21 = KeNumberProcessors_0;
                for ( i = 0; i < v21; ++i )
                {
                  Prcb = KeGetPrcb(i);
                  EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(Prcb + 24), a2);
                }
              }
              else
              {
                PsEnumProcessThreads(BugCheckParameter1, EtwpThreadEnumCallback, a2);
              }
            }
            v17 = *v7;
            if ( (*v7 & 0xC004) != 0 )
            {
              EtwpEnumerateAddressSpace(BugCheckParameter1, a2, v7);
              v17 = *v7;
            }
            if ( (v17 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
            {
              LOBYTE(v10) = v5;
              EtwpSysModuleRunDown(v4, v10);
            }
            if ( (v7[1] & 0x8000000) != 0 )
              EtwpEnumerateWorkingSet(BugCheckParameter1, a2);
          }
          else
          {
            if ( (v7[1] & 0x8000000) != 0 )
              EtwpEnumerateWorkingSet(BugCheckParameter1, a2);
            v13 = *v7;
            if ( (*v7 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
            {
              EtwpSysModuleRunDown(v4, 0LL);
              v13 = *v7;
            }
            if ( (v13 & 0xC004) != 0 )
              EtwpEnumerateAddressSpace(BugCheckParameter1, a2, v7);
            if ( (v7[4] & 0x40) != 0 && (PVOID)BugCheckParameter1 != PsIdleProcess )
              EtwpObjectHandleRundown((PEPROCESS)BugCheckParameter1);
            if ( (*v7 & 2) != 0 )
            {
              if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
              {
                v18 = KeNumberProcessors_0;
                for ( j = 0; j < v18; ++j )
                {
                  v20 = KeGetPrcb(j);
                  EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(v20 + 24), a2);
                }
              }
              else
              {
                PsEnumProcessThreads(BugCheckParameter1, EtwpThreadEnumCallback, a2);
              }
            }
            v14 = *v7;
            if ( (*v7 & 8) != 0 )
            {
              EtwpProcessPerfCtrsRundown(BugCheckParameter1, v4);
              v14 = *v7;
            }
            if ( (v14 & 1) != 0 )
              EtwpTraceProcessRundown((PEPROCESS)BugCheckParameter1);
          }
        }
        if ( v6 )
        {
          KiUnstackDetachProcess((struct _KTHREAD *)v26, 0);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
        }
        return 0LL;
      }
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768)) )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v26);
        v6 = 1;
        goto LABEL_7;
      }
    }
    v12 = 0;
    goto LABEL_7;
  }
  if ( v7 && (*v7 & 1) != 0 && !v5 )
    EtwpTraceProcessRundown(v11);
  return 0LL;
}
