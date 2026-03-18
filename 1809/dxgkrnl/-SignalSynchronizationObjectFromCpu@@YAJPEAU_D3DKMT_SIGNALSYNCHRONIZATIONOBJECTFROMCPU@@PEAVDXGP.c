/*
 * XREFs of ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C0235EBC
 * Callers:
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F93A0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C0237C70 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C0010080 (-IsSyncObjectLockSharedOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0021A64 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0021B28 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqPR1XR1 @ 0x1C003C5F8 (McTemplateK0pqPR1XR1.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E0E70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C01C05D8 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C01DCDB0 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C01F64A4 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 */

__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  struct DXGPROCESS *v4; // rsi
  int v6; // eax
  __int64 v7; // rcx
  PERESOURCE *Global; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  UINT ObjectCount; // edx
  PVOID Elements; // r12
  _QWORD *v15; // r13
  UINT v16; // r8d
  UINT v17; // r14d
  DXGPUSHLOCK *v18; // rcx
  D3DKMT_HANDLE v19; // esi
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // ebx
  _QWORD *v31; // rax
  __int64 v32; // rax
  const D3DKMT_HANDLE *ObjectHandleArray; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // r9d
  __int64 v37; // rsi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v39; // rcx
  int v40; // r9d
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rcx
  const GUID *v47; // r8
  UINT v49; // [rsp+20h] [rbp-E0h]
  int v50; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h]
  char v52; // [rsp+80h] [rbp-80h]
  _QWORD v53[4]; // [rsp+88h] [rbp-78h] BYREF
  char v54; // [rsp+A8h] [rbp-58h]
  _QWORD v55[5]; // [rsp+B0h] [rbp-50h] BYREF
  int v56; // [rsp+D8h] [rbp-28h]
  _QWORD v57[5]; // [rsp+E0h] [rbp-20h] BYREF
  int v58; // [rsp+108h] [rbp+8h]
  DXGPUSHLOCK *v59; // [rsp+150h] [rbp+50h]

  v50 = -1;
  v4 = a2;
  v51 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v52 = 1;
    v50 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, (const GUID *)a3, 2044);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 2044);
  LOBYTE(v6) = EvaluateCurrentState((int **)&reg_FeatureDescriptors_a);
  if ( v6 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v7);
    if ( !DXGGLOBAL::IsSyncObjectLockSharedOwner(Global) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v9 + 24) = 4875LL;
      WdLogEvent5_WdAssertion(v9);
    }
  }
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v10 + 24) = 4881LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a1->ObjectCount )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v11 + 24) = 4882LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v12 + 24) = 4883LL;
    WdLogEvent5_WdAssertion(v12);
  }
  ObjectCount = a1->ObjectCount;
  v57[0] = 0LL;
  v58 = 0;
  v55[0] = 0LL;
  v56 = 0;
  Elements = PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(v57, ObjectCount);
  if ( !Elements || (v15 = PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(v55, a1->ObjectCount)) == 0LL )
  {
    v30 = -1073741801;
    goto LABEL_56;
  }
  v16 = a1->ObjectCount;
  v17 = 0;
  if ( !v16 )
  {
LABEL_32:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v53,
      Elements,
      v16);
    if ( v54 )
    {
      if ( !v53[0] )
      {
        v30 = -1073741801;
LABEL_54:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v53);
        goto LABEL_56;
      }
      v34 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v34 + 24) = 4970LL;
    }
    else
    {
      if ( (*((_BYTE *)a3 + 1749) & 1) != 0 )
      {
        v30 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 4152LL),
                v4,
                a1->ObjectCount,
                a1->ObjectHandleArray,
                a1->Flags,
                0,
                0LL,
                (unsigned __int64 *)a1->FenceValueArray,
                0LL,
                0LL,
                0,
                1,
                a3);
        goto LABEL_54;
      }
      v35 = a1->ObjectCount;
      v36 = 0;
      if ( !(_DWORD)v35 )
      {
LABEL_46:
        v41 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, const UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 520LL)
                                                                                               + 8LL)
                                                                                   + 656LL))(
                v35,
                v15,
                a1->Flags.Value,
                a1->FenceValueArray);
        v44 = v41;
        if ( v41 < 0 )
        {
          v45 = WdLogNewEntry5_WdError(v42);
          *(_QWORD *)(v45 + 24) = v44;
          WdLogEvent5_WdError(v45);
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v49 = a1->ObjectCount;
          McTemplateK0pqPR1XR1(v49, &EventSignalSynchronizationObjectFromCpu, v43, a3, v49, v15, a1->FenceValueArray);
        }
        v30 = v44;
        goto LABEL_54;
      }
      while ( 1 )
      {
        v37 = v36;
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *((DXGSYNCOBJECT **)Elements + v36),
                             *((struct ADAPTER_RENDER **)a3 + 2));
        v15[v37] = VidSchSyncObject;
        if ( !VidSchSyncObject )
          break;
        v35 = a1->ObjectCount;
        v36 = v40 + 1;
        if ( v36 >= (unsigned int)v35 )
          goto LABEL_46;
      }
      v34 = WdLogNewEntry5_WdError(v39);
      *(_QWORD *)(v34 + 24) = a1->ObjectHandleArray[v37];
    }
    WdLogEvent5_WdError(v34);
    v30 = -1073741811;
    goto LABEL_54;
  }
  v18 = (struct DXGPROCESS *)((char *)v4 + 208);
  v59 = (struct DXGPROCESS *)((char *)v4 + 208);
  while ( 1 )
  {
    v19 = a1->ObjectHandleArray[v17];
    DXGPUSHLOCK::AcquireShared(v18);
    v20 = (v19 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v20 >= *((_DWORD *)a2 + 62) )
      goto LABEL_24;
    v21 = *((_QWORD *)a2 + 29);
    v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
    if ( ((v19 >> 25) & 0x60) != (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60) || (v22 & 0x2000) != 0 || (v22 & 0x1F) == 0 )
      goto LABEL_24;
    v23 = v22 & 0x1F;
    if ( (_BYTE)v23 != 11 )
    {
      v24 = WdLogNewEntry5_WdError(v23);
      *(_QWORD *)(v24 + 24) = 316LL;
      WdLogEvent5_WdError(v24);
LABEL_24:
      v25 = 0LL;
      goto LABEL_25;
    }
    v25 = *(_QWORD *)(v21 + 16LL * (unsigned int)v20);
LABEL_25:
    ExReleasePushLockSharedEx(v59, 0LL);
    KeLeaveCriticalRegion();
    if ( !v25 )
      break;
    if ( (*(_DWORD *)(v25 + 72) & 0x10) != 0 )
    {
      v32 = WdLogNewEntry5_WdError(v26);
      *(_QWORD *)(v32 + 24) = a1->ObjectHandleArray[v17];
      WdLogEvent5_WdError(v32);
      v30 = -1073741790;
      goto LABEL_56;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL) + 16LL)) )
    {
      v28 = WdLogNewEntry5_WdAssertion(v27);
      *(_QWORD *)(v28 + 24) = 4933LL;
      WdLogEvent5_WdAssertion(v28);
    }
    *((_QWORD *)Elements + v17) = *(_QWORD *)(v25 + 32);
    if ( *(struct DXGDEVICE **)(v25 + 16) != a3 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v30 = -1073741811;
      v31[3] = *(_QWORD *)(v25 + 16);
      v31[4] = v25;
      v31[6] = a3;
      v31[7] = -1073741811LL;
      goto LABEL_39;
    }
    v16 = a1->ObjectCount;
    ++v17;
    v18 = v59;
    if ( v17 >= v16 )
    {
      v4 = a2;
      goto LABEL_32;
    }
  }
  v31 = (_QWORD *)WdLogNewEntry5_WdError(v26);
  v31[3] = a2;
  ObjectHandleArray = a1->ObjectHandleArray;
  v30 = -1073741811;
  v31[4] = ObjectHandleArray[v17];
  v31[6] = -1073741811LL;
LABEL_39:
  v31[5] = v17;
  WdLogEvent5_WdError(v31);
LABEL_56:
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v55);
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)v57);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50);
  if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v46, &EventProfilerExit, v47, v50);
  return v30;
}
