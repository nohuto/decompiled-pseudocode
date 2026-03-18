/*
 * XREFs of CmSetCallbackObjectContext @ 0x140825030
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140841C48 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x140843E6C (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x140844778 (VrpPreLoadKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall CmSetCallbackObjectContext(PVOID Object, PLARGE_INTEGER Cookie, PVOID NewContext, PVOID *OldContext)
{
  char v4; // r12
  NTSTATUS v9; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // rsi
  LONGLONG QuadPart; // rcx
  void *v15; // rax
  struct _KTHREAD *v16; // rax
  __int64 *v17; // rbx
  LARGE_INTEGER *PoolWithTag; // rax
  LONGLONG *v19; // rcx
  __int64 *v20; // rbx
  LARGE_INTEGER *v21; // rax
  LARGE_INTEGER **v22; // rdx
  LONGLONG v23; // rax
  LONGLONG v24; // rdx

  v4 = 0;
  v9 = -1073741275;
  if ( !Object || *(_DWORD *)Object != 1803104306 )
    return -1073741585;
  if ( OldContext )
    *OldContext = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
  v12 = (char *)Object + 72;
  while ( 1 )
  {
    v13 = (_QWORD *)*v12;
    if ( (_QWORD *)*v12 != v12 )
    {
      QuadPart = Cookie->QuadPart;
      while ( v13[4] != QuadPart )
      {
        if ( v13[4] >= QuadPart )
        {
          v13 = (_QWORD *)*v13;
          if ( v13 != v12 )
            continue;
        }
        goto LABEL_15;
      }
      v15 = (void *)_InterlockedExchange64(v13 + 7, (__int64)NewContext);
      if ( OldContext )
        *OldContext = v15;
      v9 = 0;
    }
LABEL_15:
    if ( v9 >= 0 )
      break;
    if ( v4 )
    {
      v17 = (__int64 *)CallbackListHead;
      if ( (__int64 *)CallbackListHead == &CallbackListHead )
      {
LABEL_21:
        v17 = 0LL;
      }
      else
      {
        while ( Cookie->QuadPart != v17[3] )
        {
          v17 = (__int64 *)*v17;
          if ( v17 == &CallbackListHead )
            goto LABEL_21;
        }
      }
      if ( v17 )
      {
        v9 = 0;
        PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x63634D43u);
        v19 = (LONGLONG *)PoolWithTag;
        if ( PoolWithTag )
        {
          PoolWithTag[5].QuadPart = (LONGLONG)v17;
          v20 = v17 + 8;
          PoolWithTag[4] = *Cookie;
          v21 = PoolWithTag + 2;
          v19[7] = (LONGLONG)NewContext;
          v19[6] = (LONGLONG)Object;
          v22 = (LARGE_INTEGER **)v20[1];
          if ( *v22 != (LARGE_INTEGER *)v20
            || (v21->QuadPart = (LONGLONG)v20,
                v19[3] = (LONGLONG)v22,
                *v22 = v21,
                v20[1] = (__int64)v21,
                v23 = v13[1],
                v24 = *(_QWORD *)v23,
                *(_QWORD *)(*(_QWORD *)v23 + 8LL) != v23) )
          {
            __fastfail(3u);
          }
          *v19 = v24;
          v19[1] = v23;
          *(_QWORD *)(v24 + 8) = v19;
          *(_QWORD *)v23 = v19;
        }
        else
        {
          v9 = -1073741670;
        }
      }
      else
      {
        v9 = -1073741584;
      }
      break;
    }
    ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v16 = KeGetCurrentThread();
    v4 = 1;
    --v16->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}
