/*
 * XREFs of DxgkEnableUnorderedWaitsForDevice @ 0x1C00B15E0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkEnableUnorderedWaitsForDevice(unsigned int a1, char a2)
{
  __int64 v3; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // edx
  __int64 v14; // rbx
  __int64 v15; // rcx
  struct _KEVENT *v16; // rdi
  struct _KEVENT *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // ebp
  __int64 *ThreadProperty; // rax
  __int64 *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int8 v32; // di
  const GUID *v33; // r8
  __int64 v34; // rax

  v3 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v25 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v7 = *v25;
      }
    }
  }
  if ( !v7 )
  {
    v26 = WdLogNewEntry5_WdError(v6);
    v22 = -1073741811;
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    return v22;
  }
  v8 = v7 + 208;
  if ( v7 != -208 && *(struct _KTHREAD **)(v7 + 216) == KeGetCurrentThread() )
  {
    v27 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v27 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v27);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v7 + 208, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v28 = *(_DWORD *)(v7 + 224);
      if ( v28 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v9, &EventBlockThread, v10, v28);
    }
    ExAcquirePushLockSharedEx(v7 + 208, 0LL);
  }
  v11 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 >= *(_DWORD *)(v7 + 248) )
    goto LABEL_38;
  v12 = *(_QWORD *)(v7 + 232);
  v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
  if ( (((unsigned int)v3 >> 25) & 0x60) != (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60)
    || (v13 & 0x2000) != 0
    || (v13 & 0x1F) == 0 )
  {
    goto LABEL_38;
  }
  if ( (v13 & 0x1F) != 3 )
  {
    v29 = WdLogNewEntry5_WdError(((unsigned int)v3 >> 25) & 0x60);
    *(_QWORD *)(v29 + 24) = 316LL;
    WdLogEvent5_WdError(v29);
LABEL_38:
    v14 = 0LL;
    goto LABEL_15;
  }
  v14 = *(_QWORD *)(v12 + 16LL * (unsigned int)v11);
  if ( v14 )
    _InterlockedIncrement64((volatile signed __int64 *)(v14 + 64));
LABEL_15:
  ExReleasePushLockSharedEx(v8, 0LL);
  KeLeaveCriticalRegion();
  if ( !v14 )
  {
    v30 = WdLogNewEntry5_WdError(v15);
    v22 = -1073741811;
    *(_QWORD *)(v30 + 24) = v3;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    return v22;
  }
  v16 = *(struct _KEVENT **)(v14 + 16);
  if ( *(_DWORD *)(v14 + 328) == 2 )
  {
    v17 = v16 + 4;
    if ( KeReadStateEvent(v17) )
      goto LABEL_18;
LABEL_41:
    KeWaitForSingleObject(v17, Executive, 0, 0, 0LL);
    goto LABEL_18;
  }
  v17 = v16 + 3;
  if ( !KeReadStateEvent(v17) )
    goto LABEL_41;
LABEL_18:
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 96LL));
    v32 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v31, &EventBlockThread, v33, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 104), 1u);
    if ( v32 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v18 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v18 + 120, 0LL);
  if ( *(_DWORD *)(v14 + 464) == 1 )
  {
    *(_BYTE *)(v14 + 1747) = a2;
    if ( !a2 && *(_QWORD *)(v14 + 656) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 520LL) + 8LL) + 856LL))();
    v22 = 0;
  }
  else
  {
    v34 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v34 + 24) = v3;
    *(_QWORD *)(v34 + 32) = -1073741130LL;
    WdLogEvent5_WdWarning(v34);
    v22 = -1073741130;
  }
  ExReleasePushLockSharedEx(v18 + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v18 + 16), (struct DXGADAPTER *)v18);
  ExReleaseResourceLite(*(PERESOURCE *)(v14 + 104));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v14 + 16), (struct DXGDEVICE *)v14);
  return v22;
}
