/*
 * XREFs of VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14080974C
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
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     VRegEnabledInJob @ 0x1408094FC (VRegEnabledInJob.c)
 *     VrpAddNamespaceNodeToList @ 0x14080ACFC (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x14080B03C (VrpCreateNamespaceNode.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x14080B2EC (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x14080B39C (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpHandleIoctlCreateMultipleNamespaceNodes(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  _QWORD *v7; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  int v10; // r12d
  int JobSilo; // esi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r10
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int16 v17; // cx
  unsigned __int64 v18; // r8
  unsigned __int16 v19; // dx
  int v20; // esi
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v22; // r8
  _QWORD *v23; // r14
  _QWORD *v24; // r14
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  __int64 v28; // [rsp+58h] [rbp-28h] BYREF
  _WORD v29[4]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v30; // [rsp+68h] [rbp-18h]
  _WORD v31[4]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v32; // [rsp+78h] [rbp-8h]
  int v34; // [rsp+E0h] [rbp+60h]

  Object = 0LL;
  v7 = 0LL;
  a6 = 0LL;
  v8 = 0LL;
  v9 = 12LL;
  v10 = 0;
  if ( a2 >= 0xC )
  {
    ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo < 0 )
      goto LABEL_36;
    if ( !PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
    {
      v27 = v13;
      VRegEnabledInJob(&v27);
      JobSilo = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, (unsigned __int64 *)&a6);
      if ( JobSilo < 0 )
      {
        v8 = a6;
        goto LABEL_36;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v8 = a6;
      ExAcquirePushLockExclusiveEx(a6 + 16, 0LL);
      v10 = 1;
      v34 = 0;
      if ( *(_DWORD *)(a1 + 8) )
      {
        while ( 1 )
        {
          v15 = v9 + 12;
          v28 = 0LL;
          v16 = v9 + a1;
          if ( v9 >= v9 + 12 )
            goto LABEL_30;
          if ( a2 < v15 )
            goto LABEL_30;
          v17 = *(_WORD *)(v16 + 4);
          if ( (v17 & 1) != 0 )
            goto LABEL_30;
          if ( !v17 )
            goto LABEL_30;
          v18 = v17 + v15;
          if ( v15 > v18 )
            goto LABEL_30;
          v19 = *(_WORD *)(v16 + 6);
          if ( (v19 & 1) != 0 )
            goto LABEL_30;
          if ( !v19 )
            goto LABEL_30;
          v9 = v18 + v19;
          if ( v18 > v9
            || a2 < v9
            || (v20 = *(_DWORD *)(v16 + 8),
                v32 = v16 + 12,
                v31[1] = v17,
                v31[0] = v17,
                v29[1] = v19,
                v29[0] = v19,
                v30 = v16 + 2 * (((unsigned __int64)v17 >> 1) + 6),
                (v20 & 7) != v20) )
          {
LABEL_30:
            JobSilo = -1073741811;
            goto LABEL_36;
          }
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x67655256u);
          if ( !PoolWithTag )
            break;
          v22 = v27;
          *PoolWithTag = v7;
          v7 = PoolWithTag;
          PoolWithTag[1] = 0LL;
          JobSilo = VrpCreateNamespaceNode(v8, v31, v22, v29, v20, &v28);
          if ( JobSilo < 0 )
            goto LABEL_29;
          v10 = 1;
          v7[1] = v28;
          if ( (unsigned int)++v34 >= *(_DWORD *)(a1 + 8) )
            goto LABEL_21;
        }
        JobSilo = -1073741670;
      }
      else
      {
LABEL_21:
        v23 = v7;
        if ( v7 )
        {
          while ( 1 )
          {
            JobSilo = VrpAddNamespaceNodeToList(v8, v23[1]);
            if ( JobSilo < 0 )
              break;
            v23 = (_QWORD *)*v23;
            if ( !v23 )
              goto LABEL_24;
          }
        }
        else
        {
LABEL_24:
          v24 = v7;
          if ( !v7 )
          {
LABEL_27:
            JobSilo = 0;
            goto LABEL_36;
          }
          while ( 1 )
          {
            JobSilo = VrpCreateNamespaceNodePlaceholderKey(v24[1]);
            if ( JobSilo < 0 )
              break;
            v24 = (_QWORD *)*v24;
            if ( !v24 )
              goto LABEL_27;
          }
        }
      }
LABEL_29:
      v10 = 1;
      goto LABEL_36;
    }
    v8 = a6;
    JobSilo = -1073741811;
    v12 = (unsigned int)v13;
  }
  else
  {
    JobSilo = -1073741811;
    v12 = 0LL;
  }
  while ( v12 )
  {
    if ( JobSilo < 0 && *(_QWORD *)(v12 + 8) )
      VrpDestroyNamespaceNode(v8);
    ExFreePoolWithTag((PVOID)v12, 0x67655256u);
LABEL_36:
    v12 = (unsigned __int64)v7;
    if ( v7 )
      v7 = (_QWORD *)*v7;
  }
  if ( v10 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 16));
    KeAbPostRelease(v8 + 16);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
