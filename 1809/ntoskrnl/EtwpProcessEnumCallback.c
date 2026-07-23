/*
 * XREFs of EtwpProcessEnumCallback @ 0x1407277C0
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x140727650 (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwpEnumerateAddressSpace @ 0x1405F6E18 (EtwpEnumerateAddressSpace.c)
 *     EtwpIsProcessZombie @ 0x140727AA8 (EtwpIsProcessZombie.c)
 *     EtwpTraceProcessRundown @ 0x140727ADC (EtwpTraceProcessRundown.c)
 *     PsEnumProcessThreads @ 0x140727C0C (PsEnumProcessThreads.c)
 *     EtwpThreadEnumCallback @ 0x140727C90 (EtwpThreadEnumCallback.c)
 *     EtwpSysModuleRunDown @ 0x140727CD8 (EtwpSysModuleRunDown.c)
 *     EtwpEnumerateWorkingSet @ 0x1408BFA78 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleRundown @ 0x1408C0124 (EtwpObjectHandleRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1408C072C (EtwpProcessPerfCtrsRundown.c)
 */

__int64 __fastcall EtwpProcessEnumCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v2; // r15
  char v4; // r12
  int *v6; // rdi
  char v7; // r13
  char v8; // r14
  __int64 ProcessServerSilo; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // bp
  int v13; // eax
  int v14; // eax
  int v16; // eax
  int v17; // eax
  ULONG v18; // r14d
  ULONG i; // ebp
  __int64 Prcb; // rax
  ULONG v21; // r14d
  ULONG j; // ebp
  __int64 v23; // rax
  _QWORD *ServerSiloGlobals; // rax
  __int64 v25; // rdx
  _BYTE v26[48]; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v4 = *(_BYTE *)(a2 + 104);
  v6 = *(int **)a2;
  v7 = 0;
  v8 = 0;
  ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
  if ( *(_QWORD *)(v2 + 1080) != EtwpHostSiloState )
  {
    ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
    if ( ServerSiloGlobals[108] != v25 )
      return 0LL;
  }
  *(_BYTE *)(a2 + 105) = 0;
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
        *(_BYTE *)(a2 + 105) = v12;
        *(_BYTE *)(a2 + 107) = v8;
        if ( v4 )
        {
          if ( v6 )
          {
            v13 = *v6;
            if ( (*v6 & 1) != 0 )
            {
              EtwpTraceProcessRundown(BugCheckParameter1, v2, 771LL, a2);
              v13 = *v6;
            }
            if ( (v13 & 2) != 0 )
            {
              if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
              {
                v18 = KeNumberProcessors_0;
                for ( i = 0; i < v18; ++i )
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
            v14 = *v6;
            if ( (*v6 & 0xC004) != 0 )
            {
              EtwpEnumerateAddressSpace(BugCheckParameter1, a2, v6);
              v14 = *v6;
            }
            if ( (v14 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
            {
              LOBYTE(v10) = v4;
              EtwpSysModuleRunDown(v2, v10);
            }
            if ( (v6[1] & 0x8000000) != 0 )
              EtwpEnumerateWorkingSet(BugCheckParameter1, a2);
          }
        }
        else if ( v6 )
        {
          if ( (v6[1] & 0x8000000) != 0 )
            EtwpEnumerateWorkingSet(BugCheckParameter1, a2);
          v16 = *v6;
          if ( (*v6 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
          {
            EtwpSysModuleRunDown(v2, 0LL);
            v16 = *v6;
          }
          if ( (v16 & 0xC004) != 0 )
            EtwpEnumerateAddressSpace(BugCheckParameter1, a2, v6);
          if ( (v6[4] & 0x40) != 0 && (PVOID)BugCheckParameter1 != PsIdleProcess )
            EtwpObjectHandleRundown((PEPROCESS)BugCheckParameter1);
          if ( (*v6 & 2) != 0 )
          {
            if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
            {
              v21 = KeNumberProcessors_0;
              for ( j = 0; j < v21; ++j )
              {
                v23 = KeGetPrcb(j);
                EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(v23 + 24), a2);
              }
            }
            else
            {
              PsEnumProcessThreads(BugCheckParameter1, EtwpThreadEnumCallback, a2);
            }
          }
          v17 = *v6;
          if ( (*v6 & 8) != 0 )
          {
            EtwpProcessPerfCtrsRundown(BugCheckParameter1, v2);
            v17 = *v6;
          }
          if ( (v17 & 1) != 0 )
            EtwpTraceProcessRundown(BugCheckParameter1, v2, 772LL, a2);
        }
        if ( v7 )
        {
          KiUnstackDetachProcess((__int64)v26, 0LL);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
        }
        return 0LL;
      }
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v26);
        v7 = 1;
        goto LABEL_7;
      }
    }
    v12 = 0;
    goto LABEL_7;
  }
  if ( v6 && (*v6 & 1) != 0 && !v4 )
    EtwpTraceProcessRundown(v11, v2, 807LL, a2);
  return 0LL;
}
