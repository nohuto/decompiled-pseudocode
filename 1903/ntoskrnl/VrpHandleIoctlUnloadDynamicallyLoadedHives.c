/*
 * XREFs of VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140843198
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140841570 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     PsIsThreadInSilo @ 0x1400064B4 (PsIsThreadInSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     PsGetPermanentSiloContext @ 0x1400FF140 (PsGetPermanentSiloContext.c)
 *     ZwUnloadKey2 @ 0x1401C3910 (ZwUnloadKey2.c)
 *     ULongLongMult @ 0x1402812BC (ULongLongMult.c)
 *     PsGetJobSilo @ 0x140307C10 (PsGetJobSilo.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpCleanupNamespace @ 0x140841254 (VrpCleanupNamespace.c)
 *     VrpDestroyNamespaceNode @ 0x140843A54 (VrpDestroyNamespaceNode.c)
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
  __int64 v12; // r8
  ULONGLONG v13; // rax
  ULONGLONG i; // rdi
  ULONGLONG v15; // rdx
  ULONGLONG v16; // rcx
  __int64 v17; // r15
  ULONGLONG pullResult; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v20[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+58h] [rbp-28h]
  int v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+64h] [rbp-1Ch]
  __int128 v25; // [rsp+68h] [rbp-18h]

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
        goto LABEL_27;
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
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          goto LABEL_27;
        }
        v13 = v9[6];
        for ( i = 0LL; i < v13; v13 = v9[6] )
        {
          v15 = 0LL;
          if ( i < v13 )
          {
            if ( ULongLongMult(v9[5], i, &pullResult) < 0
              || (v16 = v9[9], v15 = v16 + pullResult, v16 + pullResult < v16) )
            {
              v15 = 0LL;
            }
          }
          v17 = *(_QWORD *)v15;
          if ( *(int *)(*(_QWORD *)v15 + 56LL) >= 0 )
          {
            ++i;
          }
          else
          {
            v20[1] = 0;
            v24 = 0;
            v21 = 0LL;
            v22 = v17 + 24;
            v25 = 0LL;
            v20[0] = 48;
            v23 = 576;
            ZwUnloadKey2((__int64)v20, 1LL, v12);
            VrpDestroyNamespaceNode(v10);
          }
        }
        VrpCleanupNamespace(v10);
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v11);
        KeAbPostRelease((ULONG_PTR)v11);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      else if ( PermanentSiloContext != -1073741275 )
      {
        goto LABEL_27;
      }
      JobSilo = 0;
    }
  }
LABEL_27:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
