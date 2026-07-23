/*
 * XREFs of VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14080AAB0
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
 *     ZwUnloadKey2 @ 0x1401BBB10 (ZwUnloadKey2.c)
 *     ULongLongMult @ 0x14026D9D8 (ULongLongMult.c)
 *     PsGetJobSilo @ 0x1402EA310 (PsGetJobSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpCleanupNamespace @ 0x140808BB0 (VrpCleanupNamespace.c)
 *     VrpDestroyNamespaceNode @ 0x14080B39C (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDynamicallyLoadedHives(
        ULONG_PTR *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        __int64 a5,
        PVOID Object)
{
  int JobSilo; // edi
  int PermanentSiloContext; // eax
  struct _KTHREAD *CurrentThread; // rax
  ULONGLONG *v9; // r14
  __int64 v10; // r13
  volatile signed __int64 *v11; // rsi
  ULONGLONG v12; // rax
  ULONGLONG i; // rdi
  ULONGLONG v14; // r8
  ULONGLONG v15; // rdx
  __int64 v16; // r15
  ULONGLONG pullResult; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+48h] [rbp-38h] BYREF

  Object = 0LL;
  a5 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  JobSilo = ObpReferenceObjectByHandleWithTag(*a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
      {
        JobSilo = -1073741811;
        goto LABEL_28;
      }
      PermanentSiloContext = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, (unsigned __int64 *)&a5);
      JobSilo = PermanentSiloContext;
      if ( PermanentSiloContext >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        v9 = (ULONGLONG *)a5;
        --CurrentThread->KernelApcDisable;
        v10 = a5;
        v11 = (volatile signed __int64 *)(a5 + 16);
        ExAcquirePushLockExclusiveEx(a5 + 16, 0LL);
        if ( *(_DWORD *)(v10 + 84) )
        {
          JobSilo = -1073741738;
          if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v11);
          KeAbPostRelease((ULONG_PTR)v11);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          goto LABEL_28;
        }
        v12 = v9[6];
        for ( i = 0LL; i < v12; v12 = v9[6] )
        {
          v14 = 0LL;
          if ( i < v12 )
          {
            if ( ULongLongMult(v9[5], i, &pullResult) < 0 || (v15 = v9[9], v15 + pullResult < v15) )
              v14 = 0LL;
            else
              v14 = v15 + pullResult;
          }
          v16 = *(_QWORD *)v14;
          if ( *(int *)(*(_QWORD *)v14 + 56LL) >= 0 )
          {
            ++i;
          }
          else
          {
            TargetKey.RootDirectory = 0LL;
            TargetKey.ObjectName = (PUNICODE_STRING)(v16 + 24);
            TargetKey.Length = 48;
            TargetKey.Attributes = 576;
            *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
            ZwUnloadKey2(&TargetKey, 1u);
            VrpDestroyNamespaceNode(v10);
          }
        }
        VrpCleanupNamespace(v10);
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v11);
        KeAbPostRelease((ULONG_PTR)v11);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      }
      else if ( PermanentSiloContext != -1073741275 )
      {
        goto LABEL_28;
      }
      JobSilo = 0;
    }
  }
LABEL_28:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
