/*
 * XREFs of PspDisassociateUmsThreadFromPrimary @ 0x1408CCA64
 * Callers:
 *     PspUmsUnInitThread @ 0x1408C8BF4 (PspUmsUnInitThread.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x1408CCD90 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140017050 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400170A8 (RtlInitializeExtendedContext.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     ObReferenceObjectSafe @ 0x140107F50 (ObReferenceObjectSafe.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401CD060 (_alloca_probe.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KeDoesTebMatchThread @ 0x1402B6B40 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x1402B6B5C (KeGetCurrentUmsTeb.c)
 *     KeSetCurrentUmsTeb @ 0x1402B6BA4 (KeSetCurrentUmsTeb.c)
 *     PspSetContextThreadInternal @ 0x1405E5AE0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405E8510 (PspGetContextThreadInternal.c)
 *     KeRemoveUmsThreadCidOwnership @ 0x1408800F8 (KeRemoveUmsThreadCidOwnership.c)
 *     KeUpdateUmsThreadState @ 0x140880294 (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x1408809E4 (KeBuildPrimaryThreadContext.c)
 *     KeFixUserSwitchContext @ 0x140881568 (KeFixUserSwitchContext.c)
 *     PspFindThreadForTeb @ 0x1408C85D0 (PspFindThreadForTeb.c)
 *     PspSetUmsThreadContext @ 0x1408CCFB0 (PspSetUmsThreadContext.c)
 */

__int64 __fastcall PspDisassociateUmsThreadFromPrimary(PETHREAD Thread, __int64 Object, int *a3)
{
  int updated; // ebx
  unsigned __int64 CurrentUmsTeb; // rax
  char v8; // r15
  char v9; // r12
  __int64 v10; // rdx
  _DWORD *v11; // r8
  struct _EX_RUNDOWN_REF *ThreadForTeb; // rax
  _QWORD *v13; // r13
  int v14; // r12d
  unsigned __int64 v15; // rax
  void *v16; // rsp
  CONTEXT_CHUNK *p_XState; // rbx
  PCONTEXT_EX v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  void *v22; // rcx
  __int64 v23; // r13
  int v24; // eax
  ULONG ContextLength[2]; // [rsp+30h] [rbp+0h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF
  int CycleTime; // [rsp+40h] [rbp+10h] BYREF
  int v29; // [rsp+44h] [rbp+14h]
  unsigned int CurrentRunTime; // [rsp+48h] [rbp+18h]
  int v31; // [rsp+4Ch] [rbp+1Ch]
  int v32; // [rsp+50h] [rbp+20h]
  int *p_CycleTime; // [rsp+58h] [rbp+28h] BYREF
  int v34; // [rsp+60h] [rbp+30h]
  int v35; // [rsp+64h] [rbp+34h]

  updated = 0;
  CurrentUmsTeb = KeGetCurrentUmsTeb(Thread);
  v8 = 0;
  v9 = 0;
  if ( KeDoesTebMatchThread((__int64)Thread, CurrentUmsTeb) )
    goto LABEL_2;
  if ( Object )
  {
    if ( v10 != *(_QWORD *)(Object + 240) )
    {
LABEL_2:
      *v11 |= 2u;
      goto LABEL_24;
    }
    goto LABEL_10;
  }
  ThreadForTeb = (struct _EX_RUNDOWN_REF *)PspFindThreadForTeb(v10);
  Object = (__int64)ThreadForTeb;
  if ( !ThreadForTeb )
  {
LABEL_5:
    updated = -1073740004;
    goto LABEL_24;
  }
  v8 = 1;
  if ( ExAcquireRundownProtection_0(ThreadForTeb + 217) )
  {
LABEL_10:
    v13 = Thread->WaitBlock[3].Object;
    if ( (Thread->MiscFlags & 0x100) != 0 )
    {
      *a3 |= 1u;
    }
    else
    {
      KeSetCurrentUmsTeb(Thread, (unsigned __int64)Thread->Teb);
      v14 = MEMORY[0xFFFFF780000003D8] != 0LL ? 0x40 : 0;
      RtlGetExtendedContextLength(v14 + 1048603, ContextLength);
      v15 = ContextLength[0] + 15LL;
      if ( v15 <= ContextLength[0] )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(ContextLength, 0, ContextLength[0]);
      RtlInitializeExtendedContext((PCONTEXT)ContextLength, v14 + 1048603, &ContextEx);
      p_XState = &ContextEx[-39].XState;
      *(_QWORD *)ContextLength = (char *)ContextEx - 1232;
      PspGetContextThreadInternal((__int64)Thread, (__int64)&ContextEx[-39].XState, 0, 1, 1);
      ContextEx = **(PCONTEXT_EX **)(Object + 496);
      v18 = ContextEx;
      KeFixUserSwitchContext(Object, (__int64)ContextEx, 0LL, (__int64)p_XState);
      updated = KeRemoveUmsThreadCidOwnership((__int64)v18, 1);
      v9 = v8;
      if ( updated < 0 )
        goto LABEL_24;
      v19 = *(_QWORD *)ContextLength;
      *a3 |= 2u;
      updated = PspSetUmsThreadContext(Object, v19, a3);
      if ( updated < 0 )
        goto LABEL_24;
      v20 = v13[2];
      if ( *(_QWORD *)(*(_QWORD *)(Object + 496) + 16LL) != v20 )
      {
        ObReferenceObjectSafe(v20);
        v21 = *(_QWORD *)(Object + 496);
        v22 = *(void **)(v21 + 16);
        if ( v22 )
        {
          ObfDereferenceObject(v22);
          v21 = *(_QWORD *)(Object + 496);
        }
        *(_QWORD *)(v21 + 8) = v13[1];
        *(_QWORD *)(*(_QWORD *)(Object + 496) + 16LL) = v13[2];
      }
      v23 = *(_QWORD *)ContextLength;
      updated = KeBuildPrimaryThreadContext((__int64)Thread, 0LL, *(__int64 *)ContextLength, 1, 0LL, 0LL);
      v9 = v8;
      if ( updated < 0 )
        goto LABEL_24;
      PspSetContextThreadInternal(Thread, v23, 0, 1, 1);
      *a3 |= 8u;
      if ( !v8 )
        goto LABEL_24;
      updated = KeUpdateUmsThreadState((__int64)ContextEx, 0, 1);
    }
    v9 = v8;
    goto LABEL_24;
  }
  KeSetCurrentUmsTeb(Thread, (unsigned __int64)Thread->Teb);
  if ( _interlockedbittestandset((volatile signed __int32 *)(Object + 1760), 0x10u) )
    goto LABEL_5;
LABEL_24:
  if ( SBYTE8(PerfGlobalGroupMask[0]) < 0 )
  {
    CycleTime = Thread[1].CycleTime;
    CurrentRunTime = Thread[1].CurrentRunTime;
    if ( Object )
      v29 = *(_DWORD *)(Object + 1616);
    else
      v29 = 0;
    v24 = *a3;
    v35 = 0;
    v31 = v24;
    v32 = updated;
    p_CycleTime = &CycleTime;
    v34 = 20;
    EtwTraceKernelEvent((__int64)&p_CycleTime, 1u, 0x40000080u, 0x1923u, 0x401802u);
  }
  if ( v8 )
  {
    if ( v9 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(Object + 1736));
    ObfDereferenceObject((PVOID)Object);
  }
  return (unsigned int)updated;
}
