/*
 * XREFs of ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C026AE18
 * Callers:
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0229BF0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C026CBE0 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0007364 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C00247C8 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqPR1XR1 @ 0x1C0042EEC (McTemplateK0pqPR1XR1.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F58CC (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F61DC (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C020B960 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 *     ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C0226B44 (-VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGN.c)
 */

__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  struct DXGPROCESS *v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  UINT ObjectCount; // edx
  __int64 v12; // rdx
  PVOID v13; // r12
  _QWORD *v14; // r13
  UINT v15; // r8d
  UINT v16; // r14d
  DXGPUSHLOCK *v17; // rcx
  D3DKMT_HANDLE v18; // esi
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // ebx
  _QWORD *v36; // rax
  __int64 v37; // rax
  const D3DKMT_HANDLE *ObjectHandleArray; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // r9d
  __int64 v42; // rsi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // r9d
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rcx
  const GUID *v55; // r8
  int v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h]
  char v59; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  char v61; // [rsp+90h] [rbp-70h] BYREF
  int v62; // [rsp+B0h] [rbp-50h]
  PVOID v63; // [rsp+B8h] [rbp-48h] BYREF
  char v64; // [rsp+C0h] [rbp-40h] BYREF
  int v65; // [rsp+E0h] [rbp-20h]
  _QWORD v66[4]; // [rsp+E8h] [rbp-18h] BYREF
  char v67; // [rsp+108h] [rbp+8h]
  DXGPUSHLOCK *v68; // [rsp+150h] [rbp+50h]

  v57 = -1;
  v4 = a2;
  v58 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v59 = 1;
    v57 = 2044;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, (const GUID *)a3, 2044);
  }
  else
  {
    v59 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v57, 2044LL);
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 4865LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a1->ObjectCount )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v9 + 24) = 4866LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v10 + 24) = 4867LL;
    WdLogEvent5_WdAssertion(v10);
  }
  ObjectCount = a1->ObjectCount;
  v63 = 0LL;
  v65 = 0;
  P = 0LL;
  v62 = 0;
  v13 = PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&v63, ObjectCount);
  if ( !v13 || (v14 = PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(&P, a1->ObjectCount)) == 0LL )
  {
    v35 = -1073741801;
    goto LABEL_53;
  }
  v15 = a1->ObjectCount;
  v16 = 0;
  if ( !v15 )
  {
LABEL_29:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v66,
      v13,
      v15);
    if ( v67 )
    {
      if ( !v66[0] )
      {
        v35 = -1073741801;
LABEL_51:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v66);
        goto LABEL_53;
      }
      v39 = WdLogNewEntry5_WdError(v33, v32, v34);
      *(_QWORD *)(v39 + 24) = 4954LL;
    }
    else
    {
      if ( (*((_BYTE *)a3 + 1749) & 1) != 0 )
      {
        v35 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 4144LL),
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
        goto LABEL_51;
      }
      v40 = a1->ObjectCount;
      v41 = 0;
      if ( !(_DWORD)v40 )
      {
LABEL_43:
        v48 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, const UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 520LL)
                                                                                               + 8LL)
                                                                                   + 656LL))(
                v40,
                v14,
                a1->Flags.Value,
                a1->FenceValueArray);
        v52 = v48;
        if ( v48 < 0 )
        {
          v53 = WdLogNewEntry5_WdError(v50, v49, v51);
          *(_QWORD *)(v53 + 24) = v52;
          WdLogEvent5_WdError(v53);
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0pqPR1XR1(
            a1->ObjectCount,
            &EventSignalSynchronizationObjectFromCpu,
            v51,
            a3,
            a1->ObjectCount,
            v14,
            a1->FenceValueArray);
        }
        v35 = v52;
        goto LABEL_51;
      }
      while ( 1 )
      {
        v42 = v41;
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *((DXGSYNCOBJECT **)v13 + v41),
                             *((struct ADAPTER_RENDER **)a3 + 2));
        v14[v42] = VidSchSyncObject;
        if ( !VidSchSyncObject )
          break;
        v40 = a1->ObjectCount;
        v41 = v47 + 1;
        if ( v41 >= (unsigned int)v40 )
          goto LABEL_43;
      }
      v39 = WdLogNewEntry5_WdError(v45, v44, v46);
      *(_QWORD *)(v39 + 24) = a1->ObjectHandleArray[v42];
    }
    WdLogEvent5_WdError(v39);
    v35 = -1073741811;
    goto LABEL_51;
  }
  v17 = (struct DXGPROCESS *)((char *)v4 + 184);
  v68 = (struct DXGPROCESS *)((char *)v4 + 184);
  while ( 1 )
  {
    v18 = a1->ObjectHandleArray[v16];
    DXGPUSHLOCK::AcquireShared(v17);
    v19 = (v18 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v19 >= *((_DWORD *)a2 + 56) )
      goto LABEL_21;
    v20 = *((_QWORD *)a2 + 26);
    v21 = *(_DWORD *)(v20 + 16 * v19 + 8);
    if ( ((v18 >> 25) & 0x60) != (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60) || (v21 & 0x2000) != 0 || (v21 & 0x1F) == 0 )
      goto LABEL_21;
    v22 = v21 & 0x1F;
    if ( (_BYTE)v22 != 11 )
    {
      v23 = WdLogNewEntry5_WdError(v22, 2LL * (unsigned int)v19, v20);
      *(_QWORD *)(v23 + 24) = 267LL;
      WdLogEvent5_WdError(v23);
LABEL_21:
      v24 = 0LL;
      goto LABEL_22;
    }
    v24 = *(_QWORD *)(v20 + 16LL * (unsigned int)v19);
LABEL_22:
    ExReleasePushLockSharedEx(v68, 0LL);
    KeLeaveCriticalRegion();
    if ( !v24 )
      break;
    if ( (*(_DWORD *)(v24 + 72) & 0x10) != 0 )
    {
      v37 = WdLogNewEntry5_WdError(v26, v25, v27);
      *(_QWORD *)(v37 + 24) = a1->ObjectHandleArray[v16];
      WdLogEvent5_WdError(v37);
      v35 = -1073741790;
      goto LABEL_53;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 16LL)) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v31 + 24) = 4917LL;
      WdLogEvent5_WdAssertion(v31);
    }
    *((_QWORD *)v13 + v16) = *(_QWORD *)(v24 + 32);
    if ( *(struct DXGDEVICE **)(v24 + 16) != a3 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
      v35 = -1073741811;
      v36[3] = *(_QWORD *)(v24 + 16);
      v36[4] = v24;
      v36[6] = a3;
      v36[7] = -1073741811LL;
      goto LABEL_36;
    }
    v15 = a1->ObjectCount;
    ++v16;
    v17 = v68;
    if ( v16 >= v15 )
    {
      v4 = a2;
      goto LABEL_29;
    }
  }
  v36 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
  v36[3] = a2;
  ObjectHandleArray = a1->ObjectHandleArray;
  v35 = -1073741811;
  v36[4] = ObjectHandleArray[v16];
  v36[6] = -1073741811LL;
LABEL_36:
  v36[5] = v16;
  WdLogEvent5_WdError(v36);
LABEL_53:
  if ( P != &v61 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v62 = 0;
  if ( v63 != &v64 && v63 )
    ExFreePoolWithTag(v63, 0);
  v63 = 0LL;
  v65 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57, v12);
  if ( v59 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v54, &EventProfilerExit, v55, v57);
  return v35;
}
