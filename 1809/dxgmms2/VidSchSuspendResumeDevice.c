/*
 * XREFs of VidSchSuspendResumeDevice @ 0x1C0011040
 * Callers:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C0010EA8 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C0076B48 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     VidSchFlushDevice @ 0x1C007AD00 (VidSchFlushDevice.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007BBE8 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007C198 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00B2800 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0002AC0 (VidSchWaitForEvents.c)
 *     VidSchiUpdateContextStatus @ 0x1C0009350 (VidSchiUpdateContextStatus.c)
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0011338 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchiUnwaitContext @ 0x1C0012350 (VidSchiUnwaitContext.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     VidSchSubmitGlobalCommand @ 0x1C007E47C (VidSchSubmitGlobalCommand.c)
 */

void __fastcall VidSchSuspendResumeDevice(struct _VIDSCH_DEVICE *a1, bool a2, char a3, char a4)
{
  __int64 v4; // rsi
  struct _VIDSCH_DEVICE *v6; // rbx
  char v7; // di
  int v8; // eax
  int v9; // eax
  bool v10; // zf
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r13
  _QWORD *v14; // r14
  _QWORD *v15; // rdi
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // [rsp+38h] [rbp-A9h]
  _KEVENT *p_Event; // [rsp+40h] [rbp-A1h] BYREF
  _KEVENT Event; // [rsp+48h] [rbp-99h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-81h] BYREF
  _QWORD v28[24]; // [rsp+78h] [rbp-69h] BYREF
  char v30; // [rsp+150h] [rbp+6Fh]

  v4 = *((_QWORD *)a1 + 4);
  v6 = a1;
  v7 = 0;
  v30 = 0;
  v24 = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 2272), 1u);
  v8 = *((_DWORD *)v6 + 275);
  if ( a2 )
  {
    v9 = v8 + 1;
  }
  else
  {
    if ( !v8 )
    {
      v24 = 1;
      goto LABEL_5;
    }
    v9 = v8 - 1;
  }
  *((_DWORD *)v6 + 275) = v9;
LABEL_5:
  *((_BYTE *)v6 + 8 * *((unsigned int *)v6 + 284) + 1108) = a2;
  *((_DWORD *)v6 + 2 * *((unsigned int *)v6 + 284) + 276) = *((_DWORD *)v6 + 275);
  v10 = *((_DWORD *)v6 + 346) == 0;
  *((_DWORD *)v6 + 284) = ((unsigned __int8)*((_DWORD *)v6 + 284) + 1) & 3;
  if ( !v10 )
    goto LABEL_21;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1648), &LockHandle);
  v13 = 0;
  v14 = (_QWORD *)*((_QWORD *)v6 + 9);
  if ( v14 == (_QWORD *)((char *)v6 + 72) )
    goto LABEL_15;
  do
  {
    v15 = v14 - 3;
    v16 = *((_DWORD *)v14 + 40);
    if ( !a2 )
    {
      if ( (v16 & 0x100) != 0 && (!a3 || (v15[23] & 0x800) != 0) )
      {
        *((_DWORD *)v15 + 46) &= ~0x100u;
        *((_DWORD *)v15 + 46) &= ~0x800u;
        v13 |= VidSchiUnwaitContext(v14 - 3, 3988LL, v11, v12);
      }
LABEL_11:
      v7 = v30;
      goto LABEL_12;
    }
    if ( (v16 & 0x100) != 0 )
      goto LABEL_11;
    v17 = *((_DWORD *)v15 + 28);
    if ( (v17 & 0x10) == 0 || a4 && (v17 & 0x80u) == 0 )
      goto LABEL_11;
    if ( a3 )
      *((_DWORD *)v15 + 46) |= 0x800u;
    v18 = (__int64)(v14 - 3);
    if ( (((unsigned __int8)(*((_DWORD *)v15 + 46) >> 9) | *((_BYTE *)v15 + 184)) & 2) != 0 )
    {
      VidSchiUpdateContextStatus(v18, (_QWORD *)9, 3939LL);
      v21 = WdLogNewEntry5_WdEvent(v23, v22);
      *(_QWORD *)(v21 + 24) = v15;
      *(_QWORD *)(v21 + 32) = *((unsigned int *)v15 + 46);
    }
    else
    {
      VidSchiUpdateContextStatus(v18, (_QWORD *)0xA, 3948LL);
      if ( !*(_BYTE *)(v4 + 52) || v15 != *(_QWORD **)(v15[12] + 224LL) )
        goto LABEL_11;
      v21 = WdLogNewEntry5_WdEvent(v20, v19);
      *(_QWORD *)(v21 + 24) = v15;
    }
    WdLogEvent5_WdEvent(v21);
    v7 = 1;
    v30 = 1;
LABEL_12:
    v14 = (_QWORD *)*v14;
  }
  while ( v14 != (_QWORD *)((char *)v6 + 72) );
  v6 = a1;
  if ( v13 )
  {
    *(_QWORD *)(v4 + 1144) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v4 + 1112), 0, 0);
  }
LABEL_15:
  if ( !a2 )
    *((_BYTE *)v6 + 1092) = 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v28, 0, 0x80uLL);
    LODWORD(v28[0]) = 0;
    v28[3] = VidSchiSwitchFromSuspendedDevices;
    LODWORD(v28[5]) = 7;
    v28[4] = &Event;
    v28[6] = v4;
    VidSchSubmitGlobalCommand(v4, v28);
    p_Event = &Event;
    VidSchWaitForEvents(v4, 1u, (PVOID *)&p_Event, 0LL, 0);
  }
  if ( !v24 )
    VidSchiSuspendResumeHwContexts(v6, a2);
LABEL_21:
  ExReleaseResourceLite((PERESOURCE)(v4 + 2272));
}
