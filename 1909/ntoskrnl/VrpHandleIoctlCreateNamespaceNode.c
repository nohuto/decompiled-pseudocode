/*
 * XREFs of VrpHandleIoctlCreateNamespaceNode @ 0x140841848
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140840BD0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     PsIsThreadInSilo @ 0x140006544 (PsIsThreadInSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     PsGetPermanentSiloContext @ 0x140101B40 (PsGetPermanentSiloContext.c)
 *     PsGetJobSilo @ 0x1403076C0 (PsGetJobSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     VRegEnabledInJob @ 0x14084121C (VRegEnabledInJob.c)
 *     VrpAddNamespaceNodeToList @ 0x140842A58 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x140842D70 (VrpCreateNamespaceNode.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x140843020 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x1408430C8 (VrpDestroyNamespaceNode.c)
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
  __int64 v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h] BYREF
  __int64 v26; // [rsp+68h] [rbp-8h]

  v25 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v8 = 0LL;
  Object = 0LL;
  v9 = 0;
  v21 = 0LL;
  v10 = 0LL;
  a5 = 0LL;
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
    v26 = a1 + 16;
    v17 = *(unsigned __int16 *)(a1 + 8);
    WORD1(v25) = v17;
    LOWORD(v25) = v17;
    v24 = a1 + 2 * ((v17 >> 1) + 8);
    WORD1(v23) = *(_WORD *)(a1 + 10);
    LOWORD(v23) = WORD1(v23);
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
        v19 = VrpCreateNamespaceNode(v8, &v25, v22, &v23, v16, &a5);
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
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
