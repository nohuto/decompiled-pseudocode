/*
 * XREFs of ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00FB960
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C010A6E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresentRedirected @ 0x1C025C950 (DxgkPresentRedirected.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000469C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075A8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0007FC4 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C005B4C0 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ??0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C359C (--0TOKEN_BINDING_GUARD@@QEAA@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010C150 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGSHAREDSYNCOBJECT@@_K@Z @ 0x1C02269A0 (-VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGS.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall SubmitPresentHistoryTokenPreparation(
        struct DXGADAPTERSTOPRESETLOCKSHARED *a1,
        struct COREDEVICEACCESS *a2,
        struct DXGADAPTER *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4,
        HANDLE Handle,
        bool a6)
{
  __int64 v6; // rdi
  struct DXGADAPTER *v8; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  const GUID *v14; // r8
  int v15; // r9d
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  BOOL v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  char *v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // rcx
  void *v25; // rcx
  NTSTATUS v26; // eax
  __int64 v27; // rcx
  PVOID v28; // rbx
  __int64 v29; // r12
  __int64 v30; // rax
  int SwapChainBindingStatus; // eax
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  const GUID *v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  NTSTATUS v48; // esi
  int v49; // eax
  __int64 v50; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  struct DXGPROCESS *v54; // rdi
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v56; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  _QWORD *v64; // rax
  PERESOURCE *v65; // rbx
  HANDLE hSyncObject; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  struct _DXGSHAREDSYNCOBJECT *v70; // rbx
  UINT64 FenceValue; // rax
  __int64 v72; // rax
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+30h] [rbp-50h] BYREF
  PVOID v74; // [rsp+38h] [rbp-48h] BYREF
  PERESOURCE *v75; // [rsp+48h] [rbp-38h] BYREF
  char v76; // [rsp+50h] [rbp-30h]
  int v77; // [rsp+58h] [rbp-28h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN *v78; // [rsp+60h] [rbp-20h]
  DXGADAPTERSTOPRESETLOCKSHARED *v79; // [rsp+68h] [rbp-18h]
  COREDEVICEACCESS *v80; // [rsp+70h] [rbp-10h]
  union _LARGE_INTEGER Timeout; // [rsp+C0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF
  struct DXGADAPTER *v83; // [rsp+D0h] [rbp+50h]

  v83 = a3;
  v6 = *((_QWORD *)a3 + 320);
  v8 = a3;
  if ( v6 != -736 && *(struct _KTHREAD **)(v6 + 744) == KeGetCurrentThread() )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v11 + 24) = 1449LL;
    WdLogEvent5_WdAssertion(v11);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6 + 736, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v15 = *(_DWORD *)(v6 + 752);
      if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v13, &EventBlockThread, v14, v15);
    }
    ExAcquirePushLockSharedEx(v6 + 736, 0LL);
  }
  CurrentProcess = PsGetCurrentProcess(v13, v12);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v18 = ProcessSessionId < *(_DWORD *)(v6 + 760) && *(_QWORD *)(*(_QWORD *)(v6 + 768) + 8LL * ProcessSessionId);
  ExReleasePushLockSharedEx(v6 + 736, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_BYTE *)a1 + 16) )
  {
    v21 = *((_QWORD *)a1 + 1) + 120LL;
    *((_BYTE *)a1 + 16) = 0;
    ExReleasePushLockSharedEx(v21, 0LL);
    KeLeaveCriticalRegion();
    v20 = *((_QWORD *)a1 + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v20 + 16), (struct DXGADAPTER *)v20);
  }
  if ( *((_BYTE *)a2 + 144) )
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
  v22 = (char *)a2 + 8;
  if ( !*((_BYTE *)a2 + 32) )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
    v23[3] = 275LL;
    v23[4] = 4LL;
    v23[5] = v22;
    v23[6] = 0LL;
    v23[7] = 0LL;
    WdLogEvent5_WdCriticalError(v23);
  }
  v24 = *((_QWORD *)a2 + 3);
  *((_BYTE *)a2 + 32) = 0;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v24 + 160) )
    DXGADAPTER::ReleaseCoreResource(v24, *((unsigned int *)a2 + 9), *((_QWORD *)a2 + 5));
  v25 = Handle;
  *((_QWORD *)a2 + 5) = 0LL;
  *((_DWORD *)a2 + 9) = -1;
  if ( v25 )
  {
    Timeout.QuadPart = 0LL;
    v26 = ObReferenceObjectByHandle(v25, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &Object, 0LL);
    v28 = Object;
    v29 = v26;
    if ( v26 < 0 )
    {
      v30 = WdLogNewEntry5_WdEvent(v27);
      *(_QWORD *)(v30 + 24) = v29;
      WdLogEvent5_WdEvent(v30);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a1);
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)a2);
      return (unsigned int)v29;
    }
    if ( a6 )
    {
      if ( KeWaitForSingleObject(Object, Executive, 0, 1u, &Timeout) == 258 )
      {
        ObfDereferenceObject(v28);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a1);
        COREDEVICEACCESS::AcquireSharedUncheck((__int64)a2);
        return 3223191810LL;
      }
    }
    else
    {
      Timeout.QuadPart = -20000000LL;
      KeWaitForSingleObject(Object, Executive, 0, 1u, &Timeout);
    }
    ObfDereferenceObject(v28);
    v8 = v83;
  }
  SwapChainBindingStatus = DxgkQuerySwapChainBindingStatus(v18, a4);
  v34 = SwapChainBindingStatus;
  if ( SwapChainBindingStatus < 0 )
  {
    if ( SwapChainBindingStatus != -1071775733 && SwapChainBindingStatus != -1071775730 )
    {
      v35 = WdLogNewEntry5_WdEvent(v33);
      *(_QWORD *)(v35 + 24) = v34;
      WdLogEvent5_WdEvent(v35);
    }
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a1);
    COREDEVICEACCESS::AcquireSharedUncheck((__int64)a2);
    return (unsigned int)v34;
  }
  TOKEN_BINDING_GUARD::TOKEN_BINDING_GUARD((TOKEN_BINDING_GUARD *)&v77, a4, a1, a2);
  if ( !*((_BYTE *)a1 + 16) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a1 + 1) + 24LL));
    v38 = *((_QWORD *)a1 + 1);
    *(_QWORD *)a1 = -1LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v38 + 120, 0LL);
    *((_BYTE *)a1 + 16) = 1;
  }
  if ( *((_BYTE *)a2 + 32) )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v37, v36);
    v39[3] = 275LL;
    v39[4] = 4LL;
    v39[5] = v22;
    v39[6] = 0LL;
    v39[7] = 0LL;
    WdLogEvent5_WdCriticalError(v39);
  }
  v40 = *((_QWORD *)a2 + 3);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v40 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v40 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v41, &EventBlockThread, v42, 72);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)a2 + 3) + 48LL), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(*((_QWORD *)a2 + 3), 0xFFFFFFFFLL, 0LL);
  }
  *((_DWORD *)a2 + 9) = -1;
  *((_QWORD *)a2 + 5) = 0LL;
  *((_BYTE *)a2 + 32) = 1;
  v43 = *(unsigned int *)(*((_QWORD *)a2 + 17) + 464LL);
  if ( (_DWORD)v43 == 1 )
  {
    if ( !*((_BYTE *)a2 + 144)
      || (COREACCESS::AcquireShared((__int64)a2 + 72, 0xFFFFFFFF, 0LL),
          v36 = *(unsigned int *)(*((_QWORD *)a2 + 11) + 176LL),
          (_DWORD)v36 == 1) )
    {
      v48 = 0;
      if ( a4->Model == D3DKMT_PM_REDIRECTED_FLIP && a4->Token.Flip.hSyncObject )
      {
        v50 = PsGetCurrentProcess(v43, v36);
        ProcessDxgProcess = PsGetProcessDxgProcess(v50);
        v54 = (struct DXGPROCESS *)ProcessDxgProcess;
        if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
        {
          ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
          v56 = ThreadProperty;
          if ( ThreadProperty )
          {
            ObfDereferenceObject(ThreadProperty);
            v54 = *v56;
          }
        }
        HandleInformation = 0LL;
        Global = DXGGLOBAL::GetGlobal(v53, v52);
        v75 = (PERESOURCE *)Global;
        v76 = 0;
        if ( !Global )
        {
          v60 = WdLogNewEntry5_WdAssertion(v59, v58);
          *(_QWORD *)(v60 + 24) = 2313LL;
          WdLogEvent5_WdAssertion(v60);
          Global = (struct DXGGLOBAL *)v75;
        }
        if ( ExIsResourceAcquiredSharedLite(*((PERESOURCE *)Global + 43)) )
        {
          v63 = WdLogNewEntry5_WdAssertion(v62, v61);
          *(_QWORD *)(v63 + 24) = 2318LL;
          WdLogEvent5_WdAssertion(v63);
        }
        if ( v76 )
        {
          v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v62, v61);
          v64[5] = &v75;
          v64[3] = 275LL;
          v64[4] = 4LL;
          v64[6] = 0LL;
          v64[7] = 0LL;
          WdLogEvent5_WdCriticalError(v64);
        }
        v65 = v75;
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v65[43], 1u);
        hSyncObject = a4->Token.Flip.hSyncObject;
        v76 = 1;
        v48 = ObReferenceObjectByHandle(hSyncObject, 0x20000u, g_pDxgkSharedSyncObjectType, 1, &v74, &HandleInformation);
        if ( v48 < 0 )
        {
          v72 = WdLogNewEntry5_WdWarning(v68, v67, v69);
          *(_QWORD *)(v72 + 24) = a4->Token.Flip.hSyncObject;
          WdLogEvent5_WdWarning(v72);
        }
        else
        {
          v70 = (struct _DXGSHAREDSYNCOBJECT *)v74;
          FenceValue = *(_QWORD *)(*(_QWORD *)v74 + 112LL);
          if ( FenceValue <= a4->Token.Flip.FenceValue )
            FenceValue = a4->Token.Flip.FenceValue;
          *(_QWORD *)(*(_QWORD *)v74 + 112LL) = FenceValue;
          a4->Token.Flip.hSyncObject = 0LL;
          if ( *((_BYTE *)v8 + 185) )
          {
            v48 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetRedirectedFlipFenceValue(
                    (struct DXGADAPTER *)((char *)v8 + 4144),
                    v54,
                    v70,
                    a4->Token.Flip.FenceValue);
            if ( v48 < 0 )
            {
              ObfDereferenceObject(v70);
              if ( v76 )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v75);
              goto LABEL_52;
            }
          }
          ObfDereferenceObject(v70);
        }
        if ( v76 )
        {
          v76 = 0;
          ExReleaseResourceLite(v75[43]);
          KeLeaveCriticalRegion();
        }
      }
      v49 = v48;
      goto LABEL_53;
    }
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 72));
  }
  COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a2 + 8));
  v47 = WdLogNewEntry5_WdError(v45, v44, v46);
  v48 = -1073741130;
  *(_QWORD *)(v47 + 24) = -1073741130LL;
  WdLogEvent5_WdError(v47);
  COREDEVICEACCESS::AcquireSharedUncheck((__int64)a2);
LABEL_52:
  v49 = v77;
LABEL_53:
  if ( v49 < 0 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v79);
    COREDEVICEACCESS::Release(v80);
    DxgkCancelSwapChainBinding(v78);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v79);
    COREDEVICEACCESS::AcquireSharedUncheck((__int64)v80);
  }
  return (unsigned int)v48;
}
