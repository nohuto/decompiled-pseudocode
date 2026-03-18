/*
 * XREFs of ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C01F7F9C
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C0127550 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C023E4EC (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a4)
{
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
  __int64 v23; // rcx
  _QWORD *v24; // rsi
  __int64 v25; // rax
  char *v26; // r12
  UINT64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r10
  __int64 v33; // rax
  struct _MDL *v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  PVOID Object; // [rsp+48h] [rbp-29h] BYREF
  PVOID v42[2]; // [rsp+50h] [rbp-21h] BYREF
  char v43[8]; // [rsp+60h] [rbp-11h] BYREF
  __int64 v44; // [rsp+68h] [rbp-9h]
  char v45; // [rsp+70h] [rbp-1h]
  _BYTE v46[24]; // [rsp+78h] [rbp+7h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp+1Fh] BYREF
  unsigned int v48; // [rsp+F0h] [rbp+7Fh]

  if ( a4->ObjectCount >= 0x2AAA )
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = 6041LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  v44 = *((_QWORD *)this + 7);
  v45 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
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
    v48 = 12 * a4->ObjectCount + 56;
    v22 = operator new(v48, 0x4B677844u, 1, (POOL_TYPE)512);
    v24 = v22;
    if ( !v22 )
    {
      v25 = WdLogNewEntry5_WdLowResource(v23);
      *(_QWORD *)(v25 + 24) = 6086LL;
      WdLogEvent5_WdLowResource(v25);
      LODWORD(v14) = -1073741801;
      goto LABEL_32;
    }
    v22[1] = 0LL;
    *v22 = 0LL;
    *((_DWORD *)v22 + 4) = 22;
    *((_DWORD *)v22 + 2) = DXGPROCESS::GetHostProcess(a2);
    *((_DWORD *)v24 + 8) = a4->Flags.0;
    *((_DWORD *)v24 + 6) = a3;
    *((_DWORD *)v24 + 7) = a4->ObjectCount;
    v24[5] = p_Event;
    *((_BYTE *)v24 + 48) = p_Event != &Event;
    v26 = (char *)v24 + 4 * a4->ObjectCount;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v46, (struct _KTHREAD **)a2);
    v28 = 0LL;
    while ( (unsigned int)v28 < a4->ObjectCount )
    {
      v29 = (unsigned int)v28;
      v30 = a4->ObjectHandleArray[(unsigned int)v28];
      if ( (_DWORD)v30 )
      {
        v31 = ((unsigned int)v30 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v31 >= *((_DWORD *)a2 + 62) )
          goto LABEL_27;
        v32 = *((_QWORD *)a2 + 29);
        v30 = ((unsigned int)v30 >> 25) & 0x60;
        v27 = *(unsigned int *)(v32 + 16 * v31 + 8);
        if ( (_BYTE)v30 != (*(_BYTE *)(v32 + 16 * v31 + 8) & 0x60) || (v27 & 0x2000) != 0 || (v27 & 0x1F) == 0 )
          goto LABEL_27;
        v27 &= 0x1Fu;
        if ( (_BYTE)v27 != 11 )
        {
          v38 = WdLogNewEntry5_WdError(v27);
          *(_QWORD *)(v38 + 24) = 316LL;
          WdLogEvent5_WdError(v38);
LABEL_27:
          v39 = WdLogNewEntry5_WdWarning(v27, v28, v30);
          v40 = a4->ObjectHandleArray[v29];
          goto LABEL_28;
        }
        v33 = *(_QWORD *)(v32 + 16LL * (unsigned int)v31);
        if ( !v33 )
          goto LABEL_27;
        *((_DWORD *)v24 + (unsigned int)v28 + 14) = *(_DWORD *)(v33 + 44);
      }
      else if ( (_DWORD)v28 )
      {
        v39 = WdLogNewEntry5_WdWarning(v27, v28, v30);
        v40 = a4->ObjectHandleArray[v29];
        *(_QWORD *)(v39 + 32) = 6123LL;
LABEL_28:
        *(_QWORD *)(v39 + 24) = v40;
        WdLogEvent5_WdWarning(v39);
        LODWORD(v14) = -1073741811;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
LABEL_32:
        if ( p_Event && p_Event != &Event )
          ObfDereferenceObject(p_Event);
        goto LABEL_35;
      }
      v28 = (unsigned int)(v28 + 1);
      v27 = a4->FenceValueArray[v29];
      *(_QWORD *)&v26[8 * v29 + 56] = v27;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
    LODWORD(v14) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                     this,
                     (struct DXGKVMB_COMMAND_BASE *)v24,
                     (const GUID *)v48,
                     v34);
    if ( (int)v14 < 0 )
      goto LABEL_32;
    if ( !a4->hAsyncEvent )
    {
      v42[0] = (PVOID)(*((_QWORD *)this + 7) + 2496LL);
      v42[1] = p_Event;
      if ( !KeWaitForMultipleObjects(2u, v42, WaitAny, Executive, 0, 0, 0LL, 0LL) )
      {
        v37 = WdLogNewEntry5_WdEvent(v36, v35);
        *(_QWORD *)(v37 + 24) = this;
        WdLogEvent5_WdEvent(v37);
        LODWORD(v14) = -1073741130;
        goto LABEL_32;
      }
      LODWORD(v14) = 0;
    }
LABEL_35:
    operator delete[](v24);
    goto LABEL_36;
  }
  v13 = WdLogNewEntry5_WdWarning(v12, v10, v11);
  *(_QWORD *)(v13 + 24) = 6048LL;
  WdLogEvent5_WdWarning(v13);
  LODWORD(v14) = -1073741130;
LABEL_36:
  if ( v45 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v43);
  return (unsigned int)v14;
}
