/*
 * XREFs of UsbhEnableTimerObject @ 0x1C000CE80
 * Callers:
 *     UsbhSshSuspendHub @ 0x1C0003CD4 (UsbhSshSuspendHub.c)
 *     UsbhSshExitSx @ 0x1C0004A80 (UsbhSshExitSx.c)
 *     UsbhSshResumeDownstream @ 0x1C00067F0 (UsbhSshResumeDownstream.c)
 *     Usbh_SSH_Event @ 0x1C000FEE0 (Usbh_SSH_Event.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0010320 (UsbhSshSetPortsBusyState.c)
 *     UsbhHubIsr @ 0x1C001A670 (UsbhHubIsr.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C001C7E4 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhHubSSH_PnpStart @ 0x1C001E4E0 (UsbhHubSSH_PnpStart.c)
 *     UsbhSshEnabled @ 0x1C001E868 (UsbhSshEnabled.c)
 *     UsbhHubStart @ 0x1C001EC28 (UsbhHubStart.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0028BD0 (UsbhPdoPnp_DeviceEnumerated.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C00411A8 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C0041290 (Usbh_PIND_Timeout_Action.c)
 *     UsbhDriverNotFoundWorker @ 0x1C004F710 (UsbhDriverNotFoundWorker.c)
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C000E0A0 (UsbhReferenceListRemove.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhEnableTimerObject(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r15
  __int64 v8; // r12
  __int64 v10; // r14
  KIRQL v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rbx
  __int64 v24; // r8
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  KIRQL v30; // r12
  __int64 v31; // rsi
  char *PoolWithTag; // rax
  char *v33; // rbx
  _QWORD *v34; // rbx
  _QWORD *v35; // rcx
  ULONG TimeIncrement; // eax
  KIRQL v37; // dl
  unsigned int *p_SortKey; // rcx
  int v39; // r11d
  KIRQL v40; // [rsp+6Ch] [rbp-4Dh]

  v6 = a4;
  v8 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    goto LABEL_51;
  if ( *(_DWORD *)v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 )
  {
    v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 3728));
    v11 = v40;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 827616869;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = a2;
        *(_QWORD *)(v13 + 24) = v8;
      }
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 64);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
          *(_DWORD *)v15 = 829451877;
          *(_QWORD *)(v15 + 24) = a5;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = v6;
        }
      }
    }
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 846229093;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = a6;
        *(_QWORD *)(v17 + 24) = 0LL;
      }
    }
    if ( dword_1C006E650 )
    {
      v18 = *(_DWORD **)(a1 + 64);
      if ( !v18 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *v18 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_ENABLE_TIMER, 0LL);
      v11 = v40;
    }
    *(_QWORD *)(a2 + 40) = a5;
    v19 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 28) = a6;
    *(_DWORD *)(a2 + 32) = 0;
    *(_DWORD *)(a2 + 24) = v6;
    *(_DWORD *)(a2 + 16) = v8;
    *(_DWORD *)(a2 + 12) = v8;
    if ( v19 )
    {
      if ( v19 == 2 )
      {
        Log(a1, 0x2000, 1701729331, a2, v10 + 3744);
        *(_DWORD *)(a2 + 4) = v39;
      }
    }
    else
    {
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v20 = *(_QWORD *)(a1 + 64);
        if ( v20 )
        {
          v21 = *(_QWORD *)(v20 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
          *(_DWORD *)v21 = 844394085;
          *(_QWORD *)(v21 + 24) = v10 + 3744;
          *(_QWORD *)(v21 + 8) = 0LL;
          *(_QWORD *)(v21 + 16) = a2;
        }
      }
      *(_DWORD *)(a2 + 4) = 1;
      v22 = *(_QWORD **)(v10 + 3752);
      v23 = (_QWORD *)(a2 + 56);
      if ( *v22 != v10 + 3744 )
        goto LABEL_50;
      v23[1] = v22;
      *v23 = v10 + 3744;
      *v22 = v23;
      *(_QWORD *)(v10 + 3752) = v23;
      v24 = *(int *)(v10 + 3736);
      v25 = *(_DWORD *)(v10 + 3736);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v26 = *(_QWORD *)(a1 + 64);
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
          *(_DWORD *)v27 = 1414819172;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 16) = a1;
          *(_QWORD *)(v27 + 24) = v24;
          v25 = *(_DWORD *)(v10 + 3736);
        }
      }
      if ( v25 == 2 )
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v28 = *(_QWORD *)(a1 + 64);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v28 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
            *(_DWORD *)v29 = 809382500;
            *(_QWORD *)(v29 + 8) = 0LL;
            *(_QWORD *)(v29 + 16) = a1;
            *(_QWORD *)(v29 + 24) = 2LL;
          }
        }
        *(_DWORD *)(v10 + 3736) = 1;
        KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 3728), v11);
        v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        v31 = *(_QWORD *)(a1 + 64);
        if ( v31 )
        {
          if ( *(_DWORD *)v31 != 541218120 )
            UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
          if ( *(_BYTE *)(v31 + 2480) )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
            v33 = PoolWithTag;
            if ( !PoolWithTag )
            {
              ++*(_DWORD *)(v31 + 2528);
LABEL_36:
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v30);
              TimeIncrement = KeQueryTimeIncrement();
              if ( KeSetTimer((PKTIMER)(v10 + 3848), (LARGE_INTEGER)(int)(-149999 - TimeIncrement), (PKDPC)(v10 + 3784)) )
                UsbhReferenceListRemove(a1, v10 + 3848);
              return;
            }
            memset(PoolWithTag, 0, 0x30uLL);
            *(_DWORD *)v33 = 1397515890;
            *((_DWORD *)v33 + 10) = 1380799588;
            *((_QWORD *)v33 + 2) = v10 + 3848;
            *((_QWORD *)v33 + 1) = a1;
            v34 = v33 + 24;
            v35 = *(_QWORD **)(v31 + 2520);
            if ( *v35 == v31 + 2512 )
            {
              *v34 = v31 + 2512;
              v34[1] = v35;
              *v35 = v34;
              *(_QWORD *)(v31 + 2520) = v34;
              goto LABEL_36;
            }
LABEL_50:
            __fastfail(3u);
          }
          WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          p_SortKey = &WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
          v37 = v30;
LABEL_42:
          KeReleaseSpinLock((PKSPIN_LOCK)p_SortKey, v37);
          return;
        }
LABEL_51:
        UsbhTrapFatal_Dbg(a1, 0LL);
      }
    }
    v37 = v11;
    p_SortKey = (unsigned int *)(v10 + 3728);
    goto LABEL_42;
  }
}
