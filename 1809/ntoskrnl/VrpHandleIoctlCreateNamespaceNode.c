/*
 * XREFs of VrpHandleIoctlCreateNamespaceNode @ 0x140809AA4
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140808EC0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsIsThreadInSilo @ 0x1400CC350 (PsIsThreadInSilo.c)
 *     PsGetPermanentSiloContext @ 0x14010A120 (PsGetPermanentSiloContext.c)
 *     PsGetJobSilo @ 0x1402EA310 (PsGetJobSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     VRegEnabledInJob @ 0x1408094FC (VRegEnabledInJob.c)
 *     VrpAddNamespaceNodeToList @ 0x14080ACFC (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x14080B03C (VrpCreateNamespaceNode.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14080B2EC (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x14080B39C (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpHandleIoctlCreateNamespaceNode(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        PVOID Object)
{
  unsigned __int64 v8; // r14
  int v9; // r12d
  __int64 v10; // rsi
  int JobSilo; // edi
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // dx
  unsigned int v14; // ecx
  unsigned int v15; // edx
  int v16; // esi
  unsigned __int64 v17; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v19; // eax
  unsigned __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-28h] BYREF
  __int16 v23; // [rsp+50h] [rbp-20h] BYREF
  __int16 v24; // [rsp+52h] [rbp-1Eh]
  __int64 v25; // [rsp+58h] [rbp-18h]
  _WORD v26[4]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v27; // [rsp+68h] [rbp-8h]

  Object = 0LL;
  v21 = 0LL;
  a5 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  v12 = *(_WORD *)(a1 + 8);
  if ( (v12 & 1) != 0 || (v13 = *(_WORD *)(a1 + 10), (v13 & 1) != 0) )
  {
    JobSilo = -1073741811;
    goto LABEL_20;
  }
  if ( !v12 )
    return (unsigned int)-1073741811;
  if ( !v13 )
    return (unsigned int)-1073741811;
  v14 = v12 + 16;
  v15 = v14 + v13;
  if ( v14 > v15 || a2 < v15 )
    return (unsigned int)-1073741811;
  JobSilo = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    v16 = *(_DWORD *)(a1 + 12);
    v27 = a1 + 16;
    v17 = *(unsigned __int16 *)(a1 + 8);
    v26[1] = v17;
    v26[0] = v17;
    v25 = a1 + 2 * ((v17 >> 1) + 8);
    v24 = *(_WORD *)(a1 + 10);
    v23 = v24;
    if ( (v16 & 7) != v16 )
    {
LABEL_11:
      JobSilo = -1073741811;
      goto LABEL_26;
    }
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
        goto LABEL_11;
      v22 = 0LL;
      VRegEnabledInJob(&v22);
      JobSilo = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, &v21);
      if ( JobSilo >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v8 = v21;
        ExAcquirePushLockExclusiveEx(v21 + 16, 0LL);
        v9 = 1;
        v19 = VrpCreateNamespaceNode(v8, v26, v22, &v23, v16, &a5);
        v10 = a5;
        JobSilo = v19;
        if ( v19 >= 0 )
        {
          JobSilo = VrpAddNamespaceNodeToList(v8, a5);
          if ( JobSilo >= 0 )
          {
            JobSilo = VrpCreateNamespaceNodePlaceholderKey(v10);
            if ( JobSilo >= 0 )
            {
              JobSilo = 0;
LABEL_23:
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 16));
              KeAbPostRelease(v8 + 16);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              goto LABEL_26;
            }
          }
        }
LABEL_20:
        if ( v10 )
          VrpDestroyNamespaceNode(v8);
        if ( !v9 )
          goto LABEL_26;
        goto LABEL_23;
      }
    }
  }
LABEL_26:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
