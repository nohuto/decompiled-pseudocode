/*
 * XREFs of CmSetCallbackObjectContext @ 0x1407EBFD0
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140809E80 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x14080C044 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x14080C964 (VrpPreLoadKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall CmSetCallbackObjectContext(PVOID Object, PLARGE_INTEGER Cookie, PVOID NewContext, PVOID *OldContext)
{
  NTSTATUS v8; // edi
  char v9; // r12
  _QWORD *v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // rsi
  LONGLONG QuadPart; // rcx
  LONGLONG v16; // rax
  void *v17; // rax
  struct _KTHREAD *v18; // rax
  __int64 *v19; // rbx
  LARGE_INTEGER *PoolWithTag; // rax
  LONGLONG *v21; // rcx
  __int64 *v22; // rbx
  LARGE_INTEGER *v23; // rax
  LARGE_INTEGER **v24; // rdx
  LONGLONG v25; // rax
  LONGLONG v26; // rdx
  PVOID v28[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = -1073741275;
  v9 = 0;
  CmpInitializeThreadInfo(v28);
  if ( Object && *(_DWORD *)Object == 1803104306 )
  {
    if ( OldContext )
      *v10 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
    v13 = (char *)Object + 72;
    while ( 1 )
    {
      v14 = (_QWORD *)*v13;
      if ( (_QWORD *)*v13 != v13 )
      {
        QuadPart = Cookie->QuadPart;
        while ( 1 )
        {
          v16 = v14[4];
          if ( v16 == QuadPart )
            break;
          if ( v16 >= QuadPart )
          {
            v14 = (_QWORD *)*v14;
            if ( v14 != v13 )
              continue;
          }
          goto LABEL_15;
        }
        v17 = (void *)_InterlockedExchange64(v14 + 7, (__int64)NewContext);
        if ( OldContext )
          *OldContext = v17;
        v8 = 0;
      }
LABEL_15:
      if ( v8 >= 0 )
        break;
      if ( v9 )
      {
        v19 = (__int64 *)CallbackListHead;
        if ( (__int64 *)CallbackListHead == &CallbackListHead )
        {
LABEL_21:
          v19 = 0LL;
        }
        else
        {
          while ( Cookie->QuadPart != v19[3] )
          {
            v19 = (__int64 *)*v19;
            if ( v19 == &CallbackListHead )
              goto LABEL_21;
          }
        }
        if ( v19 )
        {
          v8 = 0;
          PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x63634D43u);
          v21 = (LONGLONG *)PoolWithTag;
          if ( PoolWithTag )
          {
            PoolWithTag[5].QuadPart = (LONGLONG)v19;
            v22 = v19 + 8;
            PoolWithTag[4] = *Cookie;
            v23 = PoolWithTag + 2;
            v21[7] = (LONGLONG)NewContext;
            v21[6] = (LONGLONG)Object;
            v24 = (LARGE_INTEGER **)v22[1];
            if ( *v24 != (LARGE_INTEGER *)v22
              || (v23->QuadPart = (LONGLONG)v22,
                  v21[3] = (LONGLONG)v24,
                  *v24 = v23,
                  v22[1] = (__int64)v23,
                  v25 = v14[1],
                  v26 = *(_QWORD *)v25,
                  *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25) )
            {
              __fastfail(3u);
            }
            *v21 = v26;
            v21[1] = v25;
            *(_QWORD *)(v26 + 8) = v21;
            *(_QWORD *)v25 = v21;
          }
          else
          {
            v8 = -1073741670;
          }
        }
        else
        {
          v8 = -1073741584;
        }
        break;
      }
      ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v18 = KeGetCurrentThread();
      v9 = 1;
      --v18->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
    }
    ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    CmCleanupThreadInfo(v28);
    return v8;
  }
  else
  {
    CmCleanupThreadInfo(v28);
    return -1073741585;
  }
}
