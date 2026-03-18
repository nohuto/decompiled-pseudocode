/*
 * XREFs of UsbhEnableTimerObject @ 0x1C000D520
 * Callers:
 *     UsbhSshSuspendHub @ 0x1C0003E60 (UsbhSshSuspendHub.c)
 *     UsbhSshExitSx @ 0x1C0004DD0 (UsbhSshExitSx.c)
 *     UsbhSshResumeDownstream @ 0x1C0006D00 (UsbhSshResumeDownstream.c)
 *     Usbh_SSH_Event @ 0x1C0010580 (Usbh_SSH_Event.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0011840 (UsbhSshSetPortsBusyState.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C001BB80 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhHubSSH_PnpStart @ 0x1C001EF30 (UsbhHubSSH_PnpStart.c)
 *     UsbhSshEnabled @ 0x1C001F2D8 (UsbhSshEnabled.c)
 *     UsbhHubStart @ 0x1C001F8E8 (UsbhHubStart.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0029B80 (UsbhPdoPnp_DeviceEnumerated.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C00427DC (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C00428C4 (Usbh_PIND_Timeout_Action.c)
 *     UsbhDriverNotFoundWorker @ 0x1C0051440 (UsbhDriverNotFoundWorker.c)
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C000E930 (UsbhReferenceListRemove.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEnableTimerObject(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r12
  __int64 v8; // r15
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int16 v18; // ax
  int v19; // edx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rbx
  __int64 v25; // r8
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  KIRQL v31; // r15
  __int64 v32; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  ULONG TimeIncrement; // eax
  KIRQL v37; // dl
  unsigned int *p_SortKey; // rcx
  int v39; // r10d
  KIRQL v40; // [rsp+6Ch] [rbp-4Dh]
  _DWORD v41[9]; // [rsp+90h] [rbp-29h] BYREF

  v6 = a4;
  v8 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    goto LABEL_61;
  if ( *(_DWORD *)v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v10);
  if ( a2 )
  {
    v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 3728));
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 827616869;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a2;
        *(_QWORD *)(v12 + 24) = v8;
      }
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v13 = *(_QWORD *)(a1 + 64);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
          *(_DWORD *)v14 = 829451877;
          *(_QWORD *)(v14 + 24) = a5;
          *(_QWORD *)(v14 + 8) = 0LL;
          *(_QWORD *)(v14 + 16) = v6;
        }
      }
    }
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 846229093;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = a6;
        *(_QWORD *)(v16 + 24) = 0LL;
      }
    }
    memset(v41, 0, sizeof(v41));
    if ( dword_1C006F650 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( !v17 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v17 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      LOWORD(v41[0]) = *(_WORD *)(v17 + 2548);
      v18 = *(_WORD *)(v17 + 2550);
      v41[1] = 0;
      HIWORD(v41[0]) = v18;
      v41[2] = *(unsigned __int16 *)(v17 + 5208);
      v19 = *(_WORD *)(v17 + 5208) != 0;
      v41[1] = v19;
      v41[3] = *(unsigned __int16 *)(v17 + 5210);
      if ( v41[3] )
        v41[1] = ++v19;
      v41[4] = *(unsigned __int16 *)(v17 + 5212);
      if ( v41[4] )
        v41[1] = ++v19;
      v41[5] = *(unsigned __int16 *)(v17 + 5214);
      if ( v41[5] )
        v41[1] = ++v19;
      v41[6] = *(unsigned __int16 *)(v17 + 5216);
      if ( v41[6] )
        v41[1] = ++v19;
      v41[7] = *(unsigned __int16 *)(v17 + 5218);
      if ( v41[7] )
        v41[1] = v19 + 1;
      v41[8] = *(_DWORD *)(v17 + 2536);
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_ENABLE_TIMER, 0LL);
    }
    *(_DWORD *)(a2 + 28) = a6;
    *(_QWORD *)(a2 + 40) = a5;
    v20 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 32) = 0;
    *(_DWORD *)(a2 + 24) = v6;
    *(_DWORD *)(a2 + 16) = v8;
    *(_DWORD *)(a2 + 12) = v8;
    if ( v20 )
    {
      if ( v20 == 2 )
      {
        Log(a1, 0x2000, 1701729331, a2, v10 + 3744);
        *(_DWORD *)(a2 + 4) = v39;
      }
    }
    else
    {
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v21 = *(_QWORD *)(a1 + 64);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
          *(_DWORD *)v22 = 844394085;
          *(_QWORD *)(v22 + 24) = v10 + 3744;
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_QWORD *)(v22 + 16) = a2;
        }
      }
      *(_DWORD *)(a2 + 4) = 1;
      v23 = *(_QWORD **)(v10 + 3752);
      v24 = (_QWORD *)(a2 + 56);
      if ( *v23 != v10 + 3744 )
        goto LABEL_60;
      v24[1] = v23;
      *v24 = v10 + 3744;
      *v23 = v24;
      *(_QWORD *)(v10 + 3752) = v24;
      v25 = *(int *)(v10 + 3736);
      v26 = *(_DWORD *)(v10 + 3736);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v27 = *(_QWORD *)(a1 + 64);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
          *(_DWORD *)v28 = 1414819172;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 16) = a1;
          *(_QWORD *)(v28 + 24) = v25;
          v26 = *(_DWORD *)(v10 + 3736);
        }
      }
      if ( v26 == 2 )
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v29 = *(_QWORD *)(a1 + 64);
          if ( v29 )
          {
            v30 = *(_QWORD *)(v29 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
            *(_DWORD *)v30 = 809382500;
            *(_QWORD *)(v30 + 8) = 0LL;
            *(_QWORD *)(v30 + 16) = a1;
            *(_QWORD *)(v30 + 24) = 2LL;
          }
        }
        *(_DWORD *)(v10 + 3736) = 1;
        KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 3728), v40);
        v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        v32 = *(_QWORD *)(a1 + 64);
        if ( v32 )
        {
          if ( *(_DWORD *)v32 != 541218120 )
            UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
          if ( *(_BYTE *)(v32 + 2480) )
          {
            PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
            if ( !PoolWithTag )
            {
              ++*(_DWORD *)(v32 + 2528);
LABEL_46:
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v31);
              TimeIncrement = KeQueryTimeIncrement();
              if ( KeSetTimer((PKTIMER)(v10 + 3848), (LARGE_INTEGER)(int)(-149999 - TimeIncrement), (PKDPC)(v10 + 3784)) )
                UsbhReferenceListRemove(a1, v10 + 3848);
              return;
            }
            *PoolWithTag = 1397515890LL;
            PoolWithTag[3] = 0LL;
            PoolWithTag[4] = 0LL;
            PoolWithTag[5] = 1380799588LL;
            PoolWithTag[2] = v10 + 3848;
            PoolWithTag[1] = a1;
            v34 = PoolWithTag + 3;
            v35 = *(_QWORD **)(v32 + 2520);
            if ( *v35 == v32 + 2512 )
            {
              *v34 = v32 + 2512;
              v34[1] = v35;
              *v35 = v34;
              *(_QWORD *)(v32 + 2520) = v34;
              goto LABEL_46;
            }
LABEL_60:
            __fastfail(3u);
          }
          WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          p_SortKey = &WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
          v37 = v31;
LABEL_52:
          KeReleaseSpinLock((PKSPIN_LOCK)p_SortKey, v37);
          return;
        }
LABEL_61:
        UsbhTrapFatal_Dbg(a1, 0LL);
      }
    }
    v37 = v40;
    p_SortKey = (unsigned int *)(v10 + 3728);
    goto LABEL_52;
  }
}
