/*
 * XREFs of ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C00B10C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C00B13E0 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddIssueSyncObjectOpForDevice(unsigned int a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // edx
  __int64 v17; // rbx
  __int64 v18; // rcx
  struct _KEVENT *v19; // rcx
  volatile signed __int64 *v20; // rcx
  volatile signed __int64 *v21; // rcx
  __int64 v22; // rcx
  const GUID *v23; // r8
  unsigned int v24; // esi
  struct DXGADAPTER *v25; // rcx
  DXGADAPTER *v26; // rcx
  __int64 *ThreadProperty; // rax
  __int64 *v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rax
  _QWORD *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  struct _KTHREAD **v38[2]; // [rsp+48h] [rbp-21h] BYREF
  DXGADAPTER *v39; // [rsp+58h] [rbp-11h]
  char v40; // [rsp+60h] [rbp-9h]
  struct _KTHREAD **v41[2]; // [rsp+68h] [rbp-1h] BYREF
  struct DXGADAPTER *v42; // [rsp+78h] [rbp+Fh]
  char v43; // [rsp+80h] [rbp+17h]
  __int64 v44; // [rsp+88h] [rbp+1Fh]
  char v45; // [rsp+90h] [rbp+27h]

  v5 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v29 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v11 = *v29;
      }
    }
  }
  if ( !v11 )
  {
    v24 = -1073741811;
    v30 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    *(_QWORD *)(v30 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v30);
    return v24;
  }
  if ( v11 != -208 && *(struct _KTHREAD **)(v11 + 216) == KeGetCurrentThread() )
  {
    v31 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v31 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v31);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v32 = *(_DWORD *)(v11 + 224);
      if ( v32 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v12, &EventBlockThread, v13, v32);
    }
    ExAcquirePushLockSharedEx(v11 + 208, 0LL);
  }
  v14 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 >= *(_DWORD *)(v11 + 248) )
    goto LABEL_53;
  v15 = *(_QWORD *)(v11 + 232);
  v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
  if ( (((unsigned int)v5 >> 25) & 0x60) != (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60)
    || (v16 & 0x2000) != 0
    || (v16 & 0x1F) == 0 )
  {
    goto LABEL_53;
  }
  if ( (v16 & 0x1F) != 3 )
  {
    v33 = WdLogNewEntry5_WdError(((unsigned int)v5 >> 25) & 0x60);
    *(_QWORD *)(v33 + 24) = 316LL;
    WdLogEvent5_WdError(v33);
LABEL_53:
    v17 = 0LL;
    goto LABEL_15;
  }
  v17 = *(_QWORD *)(v15 + 16LL * (unsigned int)v14);
  if ( v17 )
    _InterlockedIncrement64((volatile signed __int64 *)(v17 + 64));
LABEL_15:
  ExReleasePushLockSharedEx(v11 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v17 )
  {
    v24 = -1073741811;
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v34[3] = -1073741811LL;
    v35 = PsGetCurrentProcess();
    v34[5] = v5;
    v34[4] = v35;
    WdLogEvent5_WdError(v34);
    return v24;
  }
  v19 = *(struct _KEVENT **)(v17 + 16);
  if ( *(_DWORD *)(v17 + 328) == 2 )
  {
    if ( !KeReadStateEvent(v19 + 4) )
      goto LABEL_56;
  }
  else if ( !KeReadStateEvent(v19 + 3) )
  {
    goto LABEL_56;
  }
  KeEnterCriticalRegion();
  if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v17 + 104), 0) )
  {
    v20 = *(volatile signed __int64 **)(*(_QWORD *)(v17 + 16) + 16LL);
    v39 = (DXGADAPTER *)v20;
    v40 = 0;
    if ( v20 )
    {
      _InterlockedIncrement64(v20 + 3);
      v38[1] = (struct _KTHREAD **)-1LL;
    }
    v21 = *(volatile signed __int64 **)(*(_QWORD *)(v17 + 16) + 16LL);
    v42 = (struct DXGADAPTER *)v21;
    v43 = 0;
    if ( v21 )
    {
      _InterlockedIncrement64(v21 + 3);
      v41[1] = (struct _KTHREAD **)-1LL;
    }
    v44 = v17;
    v45 = 0;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v39 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v39 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v22, &EventBlockThread, v23, 72);
        KeWaitForSingleObject((char *)v39 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v39);
    }
    v40 = 1;
    if ( *(_DWORD *)(v44 + 464) == 1 )
    {
      if ( !v45 || (COREACCESS::AcquireShared((DXGADAPTER **)v41), *((_DWORD *)v42 + 44) == 1) )
      {
        v24 = DXGDEVICE::IssueSyncObjectOpForAllContexts((DXGDEVICE *)v17, (struct DXGPROCESS *)v11, a2, a3, a4);
LABEL_29:
        v25 = v42;
        if ( v42 )
        {
          if ( v43 )
          {
            COREACCESS::Release(v41);
            v25 = v42;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v25 + 2), v25);
        }
        v26 = v39;
        if ( v39 )
        {
          if ( v40 )
          {
            v40 = 0;
            v26 = v39;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v39 + 20) )
            {
              DXGADAPTER::ReleaseCoreResource(v39);
              v26 = v39;
            }
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v26 + 2), v26);
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v17 + 104));
        KeLeaveCriticalRegion();
        goto LABEL_41;
      }
      COREACCESS::Release(v41);
    }
    COREACCESS::Release(v38);
    v37 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v37 + 24) = -1073741130LL;
    *(_QWORD *)(v37 + 32) = v11;
    WdLogEvent5_WdEvent(v37);
    v24 = -1073741130;
    goto LABEL_29;
  }
  KeLeaveCriticalRegion();
LABEL_56:
  v36 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v36 + 24) = v17;
  WdLogEvent5_WdEvent(v36);
  v24 = -2147483631;
LABEL_41:
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v17 + 16), (struct DXGDEVICE *)v17);
  return v24;
}
