/*
 * XREFs of UsbhSshResumeDownstream @ 0x1C0006D00
 * Callers:
 *     Usbh_SSH_HubSuspended @ 0x1C0006A48 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingResume @ 0x1C0006B28 (Usbh_SSH_HubPendingResume.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C005DD30 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 * Callees:
 *     UsbhSyncSuspendPdoPort @ 0x1C000207C (UsbhSyncSuspendPdoPort.c)
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     UsbhSshResumePort @ 0x1C0007180 (UsbhSshResumePort.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C00075D8 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhSyncBusResume @ 0x1C00083A4 (UsbhSyncBusResume.c)
 *     UsbhEnableTimerObject @ 0x1C000D520 (UsbhEnableTimerObject.c)
 *     Usbh_SSH_Event @ 0x1C0010580 (Usbh_SSH_Event.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhQueryPortState @ 0x1C0017BE0 (UsbhQueryPortState.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhSshResumeDownstream(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r15
  struct _KEVENT *v7; // r13
  unsigned __int16 v8; // bp
  unsigned __int16 i; // bx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdi
  int v25; // edx
  int PortState; // eax
  char v27; // r10
  int v28; // r11d
  struct _KEVENT *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  int v32; // edx
  int v33; // [rsp+48h] [rbp-50h]
  int v34; // [rsp+54h] [rbp-44h]

  v4 = 0LL;
  v34 = 0;
  v7 = (struct _KEVENT *)FdoExt(a1);
  Log(a1, 0x10000, 1383285870, a2, 0LL);
  v8 = 1;
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v10 = *(_QWORD *)(a1 + 64);
    if ( !v10 )
LABEL_61:
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v10 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v10);
    if ( i > *(unsigned __int8 *)(v10 + 2938) )
      break;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v11 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v11 = 1413771367;
      *(_QWORD *)(v11 + 16) = i;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 24) = 0LL;
    }
    if ( i )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( !v12 )
        goto LABEL_61;
      if ( *(_DWORD *)v12 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v12);
      if ( i <= *(unsigned __int8 *)(v12 + 2938) )
      {
        v13 = *(_QWORD *)(v12 + 3056);
        if ( v13 )
        {
          v14 = 2928LL * i + v13 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v15 = *(_QWORD *)(v12 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
            *(_DWORD *)v15 = 1044672615;
            *(_QWORD *)(v15 + 8) = 0LL;
            *(_QWORD *)(v15 + 16) = i;
            *(_QWORD *)(v15 + 24) = v14;
          }
          if ( v14 )
          {
            v16 = *(_QWORD *)(v14 + 392);
            if ( v16 )
            {
              v4 = PdoExt(v16);
              KeWaitForSingleObject((PVOID)(v4 + 2944), Executive, 0, 0, 0LL);
              if ( (*(_DWORD *)(v4 + 1420) & 0x4000000) != 0 )
              {
                PortState = UsbhQueryPortState(a1);
                Log(a1, 0x10000, 1397965875, PortState, 0LL);
                if ( v28 >= 0 && (v27 & 2) == 0 )
                {
                  *(_DWORD *)(v4 + 1420) |= 0x3000000u;
                  v29 = (struct _KEVENT *)(v4 + 2920);
                  if ( (v27 & 1) != 0 )
                    KeSetEvent(v29, 0, 0);
                  else
                    KeResetEvent(v29);
                }
              }
              KeSetEvent((PRKEVENT)(v4 + 2944), 0, 0);
            }
          }
        }
      }
    }
  }
  if ( a3 == 1 )
    UsbhSyncBusResume(a1, a2);
  UsbhDisarmHubWakeOnConnect(a1);
  while ( 1 )
  {
    v17 = *(_QWORD *)(a1 + 64);
    if ( !v17 )
      goto LABEL_61;
    if ( *(_DWORD *)v17 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v17);
    result = *(unsigned __int8 *)(v17 + 2938);
    if ( v8 > (unsigned __int16)result )
      break;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v19 = *(_QWORD *)(v17 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
      *(_DWORD *)v19 = 1413771367;
      *(_QWORD *)(v19 + 16) = v8;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 24) = 0LL;
    }
    if ( v8 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( !v20 )
        goto LABEL_61;
      if ( *(_DWORD *)v20 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v20);
      if ( v8 <= *(unsigned __int8 *)(v20 + 2938) )
      {
        v21 = *(_QWORD *)(v20 + 3056);
        if ( v21 )
        {
          v22 = 2928LL * v8 + v21 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v23 = *(_QWORD *)(v20 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
            *(_DWORD *)v23 = 1044672615;
            *(_QWORD *)(v23 + 8) = 0LL;
            *(_QWORD *)(v23 + 16) = v8;
            *(_QWORD *)(v23 + 24) = v22;
          }
          if ( v22 )
          {
            v24 = *(_QWORD *)(v22 + 392);
            if ( !v24
              || (v4 = PdoExt(*(_QWORD *)(v22 + 392)),
                  v34 = *(_DWORD *)(PdoExt(v24) + 1128),
                  (*(_DWORD *)(v4 + 1420) & 0x1000000) == 0) )
            {
              v25 = UsbhSshResumePort(a1, a2, v22);
              if ( v25 >= 0 && v24 && (*(_DWORD *)(v4 + 1420) & 0x8004) == 0 && v34 == 4 )
              {
                *(_DWORD *)(v22 + 2408) |= 2u;
                v30 = PdoExt(v24);
                v31 = UsbhSyncSuspendPdoPort(v30 + 944, v24, 0);
                *(_DWORD *)(v22 + 2408) &= ~2u;
                v25 = v31;
              }
              if ( (v25 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v25) )
              {
                LOBYTE(v33) = 0;
                UsbhException(a1, v8, 128, 0, 0, v32, 0, usbfile_sshub_c, 2436, v33);
              }
            }
          }
        }
      }
    }
    ++v8;
  }
  if ( a3 == 1 )
  {
    Usbh_SSH_Event(a1, 7LL, a2);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_COMPLETE, 0, 0);
    KeSetEvent(v7 + 141, 0, 0);
    return UsbhEnableTimerObject(a1, (int)v7 + 3200, v7[219].Header.LockNV, 0, a2, 2001228627);
  }
  return result;
}
