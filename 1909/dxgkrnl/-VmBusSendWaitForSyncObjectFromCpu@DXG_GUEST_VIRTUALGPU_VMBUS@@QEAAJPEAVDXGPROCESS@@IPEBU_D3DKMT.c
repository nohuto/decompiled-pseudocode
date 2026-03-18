/*
 * XREFs of ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C022876C
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00F4848 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C0273F2C (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0228000 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        __int64 a3,
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a4)
{
  int v5; // r12d
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _KEVENT *p_Event; // r14
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rsi
  __int64 v28; // rax
  char *v29; // r12
  UINT64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // rax
  struct _MDL *v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  PVOID Object; // [rsp+48h] [rbp-29h] BYREF
  PVOID v44[2]; // [rsp+50h] [rbp-21h] BYREF
  char v45[8]; // [rsp+60h] [rbp-11h] BYREF
  __int64 v46; // [rsp+68h] [rbp-9h]
  char v47; // [rsp+70h] [rbp-1h]
  _BYTE v48[24]; // [rsp+78h] [rbp+7h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp+1Fh] BYREF
  unsigned int v50; // [rsp+F0h] [rbp+7Fh]

  v5 = a3;
  if ( a4->ObjectCount >= 0x2AAA )
  {
    v8 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v8 + 24) = 5971LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  v46 = *((_QWORD *)this + 7);
  v47 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
  v12 = *(unsigned int *)(*((_QWORD *)this + 7) + 176LL);
  if ( (_DWORD)v12 == 1 )
  {
    hAsyncEvent = a4->hAsyncEvent;
    if ( hAsyncEvent )
    {
      v16 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      p_Event = (struct _KEVENT *)Object;
      v14 = v16;
      if ( v16 < 0 )
      {
        v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v21 + 24) = a4->hAsyncEvent;
        *(_QWORD *)(v21 + 32) = v14;
        WdLogEvent5_WdWarning(v21);
        goto LABEL_36;
      }
    }
    else
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      p_Event = &Event;
    }
    v50 = 12 * a4->ObjectCount + 56;
    v22 = operator new(v50, 0x4B677844u, 1, (POOL_TYPE)512);
    v27 = v22;
    if ( !v22 )
    {
      v28 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
      *(_QWORD *)(v28 + 24) = 6016LL;
      WdLogEvent5_WdLowResource(v28);
      LODWORD(v14) = -1073741801;
      goto LABEL_32;
    }
    v22[1] = 0LL;
    *v22 = 0LL;
    *((_DWORD *)v22 + 4) = 22;
    *((_DWORD *)v22 + 2) = DXGPROCESS::GetHostProcess(a2);
    *((_DWORD *)v27 + 8) = a4->Flags.0;
    *((_DWORD *)v27 + 6) = v5;
    *((_DWORD *)v27 + 7) = a4->ObjectCount;
    v27[5] = p_Event;
    *((_BYTE *)v27 + 48) = p_Event != &Event;
    v29 = (char *)v27 + 4 * a4->ObjectCount;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v48, (struct _KTHREAD **)a2);
    v31 = 0LL;
    while ( (unsigned int)v31 < a4->ObjectCount )
    {
      v32 = (unsigned int)v31;
      v33 = a4->ObjectHandleArray[(unsigned int)v31];
      if ( (_DWORD)v33 )
      {
        v34 = ((unsigned int)v33 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v34 >= *((_DWORD *)a2 + 56) )
          goto LABEL_27;
        v35 = *((_QWORD *)a2 + 26);
        v33 = ((unsigned int)v33 >> 25) & 0x60;
        v30 = *(unsigned int *)(v35 + 16 * v34 + 8);
        if ( (_BYTE)v33 != (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60) || (v30 & 0x2000) != 0 || (v30 & 0x1F) == 0 )
          goto LABEL_27;
        v30 &= 0x1Fu;
        if ( (_BYTE)v30 != 11 )
        {
          v40 = WdLogNewEntry5_WdError(v30, v31, v33);
          *(_QWORD *)(v40 + 24) = 267LL;
          WdLogEvent5_WdError(v40);
LABEL_27:
          v41 = WdLogNewEntry5_WdWarning(v30, v31, v33);
          v42 = a4->ObjectHandleArray[v32];
          goto LABEL_28;
        }
        v36 = *(_QWORD *)(v35 + 16LL * (unsigned int)v34);
        if ( !v36 )
          goto LABEL_27;
        *((_DWORD *)v27 + (unsigned int)v31 + 14) = *(_DWORD *)(v36 + 44);
      }
      else if ( (_DWORD)v31 )
      {
        v41 = WdLogNewEntry5_WdWarning(v30, v31, v33);
        v42 = a4->ObjectHandleArray[v32];
        *(_QWORD *)(v41 + 32) = 6053LL;
LABEL_28:
        *(_QWORD *)(v41 + 24) = v42;
        WdLogEvent5_WdWarning(v41);
        LODWORD(v14) = -1073741811;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
LABEL_32:
        if ( p_Event && p_Event != &Event )
          ObfDereferenceObject(p_Event);
        goto LABEL_35;
      }
      v31 = (unsigned int)(v31 + 1);
      v30 = a4->FenceValueArray[v32];
      *(_QWORD *)&v29[8 * v32 + 56] = v30;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
    LODWORD(v14) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                     (struct _KTHREAD **)this,
                     (struct DXGKVMB_COMMAND_BASE *)v27,
                     (const GUID *)v50,
                     v37);
    if ( (int)v14 < 0 )
      goto LABEL_32;
    if ( !a4->hAsyncEvent )
    {
      v44[0] = (PVOID)(*((_QWORD *)this + 7) + 2528LL);
      v44[1] = p_Event;
      if ( !KeWaitForMultipleObjects(2u, v44, WaitAny, Executive, 0, 0, 0LL, 0LL) )
      {
        v39 = WdLogNewEntry5_WdEvent(v38);
        *(_QWORD *)(v39 + 24) = this;
        WdLogEvent5_WdEvent(v39);
        LODWORD(v14) = -1073741130;
        goto LABEL_32;
      }
      LODWORD(v14) = 0;
    }
LABEL_35:
    operator delete[](v27);
    goto LABEL_36;
  }
  v13 = WdLogNewEntry5_WdWarning(v12, v10, v11);
  *(_QWORD *)(v13 + 24) = 5978LL;
  WdLogEvent5_WdWarning(v13);
  LODWORD(v14) = -1073741130;
LABEL_36:
  if ( v47 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
  return (unsigned int)v14;
}
