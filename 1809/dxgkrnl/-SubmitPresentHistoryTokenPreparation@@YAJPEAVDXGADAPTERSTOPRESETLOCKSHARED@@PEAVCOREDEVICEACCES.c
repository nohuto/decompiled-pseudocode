/*
 * XREFs of ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00DC06C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkPresentRedirected @ 0x1C0227800 (DxgkPresentRedirected.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000D594 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00546BC (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGSHAREDSYNCOBJECT@@_K@Z @ 0x1C01F6300 (-VmBusSendSetRedirectedFlipFenceValue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_DXGS.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall SubmitPresentHistoryTokenPreparation(
        struct DXGADAPTERSTOPRESETLOCKSHARED *this,
        struct _KTHREAD ***a2,
        struct DXGADAPTER *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4,
        HANDLE Handle,
        bool a6)
{
  __int64 v6; // r15
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v15; // rdx
  BOOL v16; // r12d
  __int64 v17; // rcx
  __int64 v18; // rcx
  int SwapChainBindingStatus; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v28; // rcx
  PERESOURCE *Global; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _DXGSHAREDSYNCOBJECT *v33; // rsi
  UINT64 FenceValue; // rax
  NTSTATUS v35; // eax
  PVOID v36; // r15
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v44[8]; // [rsp+40h] [rbp-30h] BYREF
  char v45; // [rsp+48h] [rbp-28h]
  _BYTE v46[8]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v47; // [rsp+58h] [rbp-18h]
  int v48; // [rsp+60h] [rbp-10h]
  union _LARGE_INTEGER Timeout; // [rsp+B0h] [rbp+40h] BYREF
  PVOID v50; // [rsp+B8h] [rbp+48h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+50h] BYREF

  v6 = *((_QWORD *)a3 + 316);
  v47 = v6 + 736;
  if ( v6 != -736 && *(struct _KTHREAD **)(v6 + 744) == KeGetCurrentThread() )
  {
    v37 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v37 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v37);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6 + 736, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v38 = *(_DWORD *)(v6 + 752);
      if ( v38 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v11, &EventBlockThread, v12, v38);
    }
    ExAcquirePushLockSharedEx(v6 + 736, 0LL);
  }
  v48 = 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  if ( ProcessSessionId >= *(_DWORD *)(v6 + 760)
    || (v15 = *(_QWORD *)(*(_QWORD *)(v6 + 768) + 8LL * ProcessSessionId)) == 0 )
  {
    v15 = 0LL;
  }
  v16 = v15 != 0;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
  if ( *((_BYTE *)this + 16) )
  {
    v17 = *((_QWORD *)this + 1) + 120LL;
    *((_BYTE *)this + 16) = 0;
    ExReleasePushLockSharedEx(v17, 0LL);
    KeLeaveCriticalRegion();
    v18 = *((_QWORD *)this + 1);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v18 + 16), (struct DXGADAPTER *)v18);
  }
  if ( *((_BYTE *)a2 + 80) )
    COREACCESS::Release(a2 + 5);
  COREACCESS::Release(a2 + 1);
  if ( Handle )
  {
    v35 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &v50, 0LL);
    v36 = v50;
    v22 = v35;
    if ( v35 < 0 )
    {
LABEL_44:
      v39 = WdLogNewEntry5_WdEvent(v21, v20);
      *(_QWORD *)(v39 + 24) = v22;
      WdLogEvent5_WdEvent(v39);
      goto LABEL_45;
    }
    if ( a6 )
    {
      Timeout.QuadPart = 0LL;
      if ( KeWaitForSingleObject(v50, Executive, 0, 1u, &Timeout) == 258 )
      {
        ObfDereferenceObject(v36);
        LODWORD(v22) = -1071775486;
LABEL_45:
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2);
        return (unsigned int)v22;
      }
    }
    else
    {
      Timeout.QuadPart = -20000000LL;
      KeWaitForSingleObject(v50, Executive, 0, 1u, &Timeout);
    }
    ObfDereferenceObject(v36);
  }
  SwapChainBindingStatus = DxgkQuerySwapChainBindingStatus(v16, a4);
  v22 = SwapChainBindingStatus;
  if ( SwapChainBindingStatus < 0 )
  {
    if ( SwapChainBindingStatus == -1071775733 || SwapChainBindingStatus == -1071775730 )
      goto LABEL_45;
    goto LABEL_44;
  }
  if ( !a4 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v21);
    *(_QWORD *)(v40 + 24) = 124LL;
    WdLogEvent5_WdAssertion(v40);
  }
  if ( !*((_BYTE *)this + 16) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 1) + 24LL));
    *(_QWORD *)this = -1LL;
    v23 = *((_QWORD *)this + 1);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v23 + 120, 0LL);
    *((_BYTE *)this + 16) = 1;
  }
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a2);
  v22 = v24;
  if ( v24 < 0 )
  {
    v41 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v41 + 24) = v22;
    WdLogEvent5_WdError(v41);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2);
    goto LABEL_47;
  }
  if ( a4->Model == D3DKMT_PM_REDIRECTED_FLIP && a4->Token.Flip.hSyncObject )
  {
    Current = DXGPROCESS::GetCurrent();
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v28);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v44, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v44);
    LODWORD(v22) = ObReferenceObjectByHandle(
                     a4->Token.Flip.hSyncObject,
                     0x20000u,
                     g_pDxgkSharedSyncObjectType,
                     1,
                     &Object,
                     &HandleInformation);
    if ( (int)v22 < 0 )
    {
      v42 = WdLogNewEntry5_WdWarning(v31, v30, v32);
      *(_QWORD *)(v42 + 24) = a4->Token.Flip.hSyncObject;
      WdLogEvent5_WdWarning(v42);
    }
    else
    {
      v33 = (struct _DXGSHAREDSYNCOBJECT *)Object;
      FenceValue = *(_QWORD *)(*(_QWORD *)Object + 112LL);
      if ( FenceValue <= a4->Token.Flip.FenceValue )
        FenceValue = a4->Token.Flip.FenceValue;
      *(_QWORD *)(*(_QWORD *)Object + 112LL) = FenceValue;
      a4->Token.Flip.hSyncObject = 0LL;
      if ( *((_BYTE *)a3 + 185) )
      {
        LODWORD(v22) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetRedirectedFlipFenceValue(
                         (struct DXGADAPTER *)((char *)a3 + 4152),
                         Current,
                         v33,
                         a4->Token.Flip.FenceValue);
        if ( (int)v22 < 0 )
        {
          ObfDereferenceObject(v33);
          if ( v45 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v44);
          goto LABEL_47;
        }
      }
      ObfDereferenceObject(v33);
    }
    if ( v45 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v44);
  }
  if ( (int)v22 < 0 )
LABEL_47:
    DxgkCancelSwapChainBinding(a4);
  return (unsigned int)v22;
}
