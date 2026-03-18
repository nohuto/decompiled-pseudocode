/*
 * XREFs of VidSchSuspendResumeDevice @ 0x1C0010910
 * Callers:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C001077C (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     VidSchFlushDevice @ 0x1C007C1F0 (VidSchFlushDevice.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007D3A4 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007D954 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C0080390 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00B5900 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000A6F0 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitContext @ 0x1C000E554 (VidSchiUnwaitContext.c)
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0010C38 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchWaitForEvents @ 0x1C0010DE8 (VidSchWaitForEvents.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchSubmitGlobalCommand @ 0x1C007D2AC (VidSchSubmitGlobalCommand.c)
 */

void __fastcall VidSchSuspendResumeDevice(struct _VIDSCH_DEVICE *a1, bool a2, char a3, char a4)
{
  __int64 v4; // rsi
  struct _VIDSCH_DEVICE *v6; // rbx
  char v8; // di
  int v9; // eax
  char v10; // cl
  _QWORD *v11; // r14
  _QWORD *v12; // rdi
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // [rsp+38h] [rbp-A9h]
  char v22; // [rsp+39h] [rbp-A8h]
  _KEVENT *p_Event; // [rsp+40h] [rbp-A1h] BYREF
  _KEVENT Event; // [rsp+48h] [rbp-99h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-81h] BYREF
  _QWORD v26[24]; // [rsp+78h] [rbp-69h] BYREF
  char v28; // [rsp+150h] [rbp+6Fh]

  v4 = *((_QWORD *)a1 + 4);
  v28 = 0;
  v6 = a1;
  v22 = 0;
  v8 = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 2272), 1u);
  if ( a2 )
  {
    ++*((_DWORD *)v6 + 275);
    if ( a3 )
      *((_BYTE *)v6 + 1104) = 1;
    goto LABEL_8;
  }
  if ( !a3 )
    goto LABEL_6;
  if ( *((_BYTE *)v6 + 1104) )
  {
    *((_BYTE *)v6 + 1104) = 0;
LABEL_6:
    v9 = *((_DWORD *)v6 + 275);
    if ( v9 )
      *((_DWORD *)v6 + 275) = v9 - 1;
    goto LABEL_8;
  }
  v22 = 1;
LABEL_8:
  *((_BYTE *)v6 + 8 * *((unsigned int *)v6 + 285) + 1112) = a2;
  *((_DWORD *)v6 + 2 * *((unsigned int *)v6 + 285) + 277) = *((_DWORD *)v6 + 275);
  *((_DWORD *)v6 + 285) = ((unsigned __int8)*((_DWORD *)v6 + 285) + 1) & 3;
  if ( *((_DWORD *)v6 + 348) )
    goto LABEL_25;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1648), &LockHandle);
  v10 = 0;
  v11 = (_QWORD *)*((_QWORD *)v6 + 9);
  v21 = 0;
  if ( v11 == (_QWORD *)((char *)v6 + 72) )
    goto LABEL_19;
  do
  {
    v12 = v11 - 3;
    v13 = *((_DWORD *)v11 + 40);
    if ( !a2 )
    {
      if ( (v13 & 0x100) != 0 && (!a3 || (v12[23] & 0x800) != 0) )
      {
        *((_DWORD *)v12 + 46) &= ~0x100u;
        *((_DWORD *)v12 + 46) &= ~0x800u;
        v10 = VidSchiUnwaitContext((__int64)(v11 - 3), 0xFA8u) | v21;
        v21 = v10;
      }
      goto LABEL_15;
    }
    if ( (v13 & 0x100) != 0 )
      goto LABEL_15;
    v14 = *((_DWORD *)v12 + 28);
    if ( (v14 & 0x10) == 0 || a4 && (v14 & 0x80u) == 0 )
      goto LABEL_15;
    if ( a3 )
      *((_DWORD *)v12 + 46) |= 0x800u;
    v15 = (__int64)(v11 - 3);
    if ( (((unsigned __int8)(*((_DWORD *)v12 + 46) >> 9) | *((_BYTE *)v12 + 184)) & 2) != 0 )
    {
      VidSchiUpdateContextStatus(v15, (_QWORD *)9, 3959LL);
      v18 = WdLogNewEntry5_WdEvent(v20, v19);
      *(_QWORD *)(v18 + 24) = v12;
      *(_QWORD *)(v18 + 32) = *((unsigned int *)v12 + 46);
    }
    else
    {
      VidSchiUpdateContextStatus(v15, (_QWORD *)0xA, 3968LL);
      if ( !*(_BYTE *)(v4 + 52) || v12 != *(_QWORD **)(v12[12] + 224LL) )
      {
        v10 = v21;
LABEL_15:
        v8 = v28;
        goto LABEL_16;
      }
      v18 = WdLogNewEntry5_WdEvent(v17, v16);
      *(_QWORD *)(v18 + 24) = v12;
    }
    WdLogEvent5_WdEvent(v18);
    v10 = v21;
    v8 = 1;
    v28 = 1;
LABEL_16:
    v11 = (_QWORD *)*v11;
  }
  while ( v11 != (_QWORD *)((char *)v6 + 72) );
  v6 = a1;
  if ( v10 )
  {
    *(_QWORD *)(v4 + 1144) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v4 + 1112), 0, 0);
  }
LABEL_19:
  if ( !a2 )
    *((_BYTE *)v6 + 1092) = 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v8 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v26, 0, 0x88uLL);
    LODWORD(v26[0]) = 0;
    v26[3] = VidSchiSwitchFromSuspendedDevices;
    LODWORD(v26[5]) = 7;
    v26[4] = &Event;
    v26[6] = v4;
    VidSchSubmitGlobalCommand(v4, v26);
    p_Event = &Event;
    VidSchWaitForEvents(v4, 1LL, &p_Event, 0LL, 0);
  }
  if ( !v22 )
    VidSchiSuspendResumeHwContexts(v6, a2);
LABEL_25:
  ExReleaseResourceLite((PERESOURCE)(v4 + 2272));
}
