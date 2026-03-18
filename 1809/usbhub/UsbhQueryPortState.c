/*
 * XREFs of UsbhQueryPortState @ 0x1C0017430
 * Callers:
 *     UsbhSyncSuspendPdoPort @ 0x1C0001FAC (UsbhSyncSuspendPdoPort.c)
 *     UsbhSshResumeDownstream @ 0x1C00067F0 (UsbhSshResumeDownstream.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C0007DA0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhFdoColdStartPdo @ 0x1C0008D5C (UsbhFdoColdStartPdo.c)
 *     UsbhBusSuspend_Action @ 0x1C000C954 (UsbhBusSuspend_Action.c)
 *     UsbhHubProcessIsr @ 0x1C0011670 (UsbhHubProcessIsr.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0013DA0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0016D40 (UsbhFdoReturnPortStatus.c)
 *     UsbhFinishStart @ 0x1C001CBF0 (UsbhFinishStart.c)
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003E9A0 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhOvercurrentResetWorker @ 0x1C00415C0 (UsbhOvercurrentResetWorker.c)
 *     UsbhBusPnpStop_Action @ 0x1C0042850 (UsbhBusPnpStop_Action.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C00444B8 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0045370 (UsbhQueueSoftConnectChange.c)
 *     UsbhPortResumeTimeout @ 0x1C0047F10 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C004A2EC (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C004AA00 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0017B10 (UsbhSyncSendCommand.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001BF30 (UsbhDispatch_HardResetEvent.c)
 *     UsbhFlushPortChange @ 0x1C003EB68 (UsbhFlushPortChange.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_q @ 0x1C004051C (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhQueryPortState(__int64 a1, unsigned __int16 a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rbp
  _DWORD *v9; // rax
  int v10; // ecx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v12; // r12
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  KIRQL v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rsi
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rcx
  KIRQL v31; // bp
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  _QWORD *v35; // rdi
  _QWORD *v36; // r9
  _QWORD *v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rdx
  _QWORD *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int16 v44; // cx
  unsigned __int16 v45; // r8
  unsigned __int16 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int16 v50; // si
  unsigned __int16 v51; // bp
  _DWORD *v52; // rax
  _DWORD *v53; // rax
  int v54; // eax
  int v55; // [rsp+48h] [rbp-60h]
  char v56[4]; // [rsp+54h] [rbp-54h] BYREF
  _BYTE v57[2]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v58; // [rsp+5Ah] [rbp-4Eh]
  unsigned __int16 v59; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int16 v60; // [rsp+5Eh] [rbp-4Ah]

  v8 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v9 = *(_DWORD **)(a1 + 64);
  if ( !v9 )
    goto LABEL_107;
  if ( *v9 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v9);
  v10 = v9[640];
  if ( (v10 & 0x4000) != 0 )
  {
    Log(a1, 4, 1937076805, 0LL, 0LL);
    if ( a4 )
      *a4 = -1073713152;
    return 3221225486LL;
  }
  else if ( (v10 & 0x10) != 0 )
  {
    Log(a1, 4, 1752319312, 0LL, 0LL);
    if ( a4 )
      *a4 = -1073704960;
    return 3221225666LL;
  }
  else
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xAuLL, 0x42554855u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = 0LL;
      PoolWithTag[4] = 0;
      PoolWithTag[2] = 4;
      *(_DWORD *)a3 = 0;
      PoolWithTag[3] = a2;
      *(_DWORD *)PoolWithTag = 0;
      v57[0] = -93;
      *((_BYTE *)PoolWithTag + 8) = 0;
      v57[1] = 0;
      v58 = 0;
      v59 = a2;
      v60 = PoolWithTag[2];
      v13 = (int)UsbhSyncSendCommand(a1, (unsigned int)v57, (_DWORD)PoolWithTag, (int)PoolWithTag + 4);
      v14 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v15 = *(_QWORD *)(a1 + 64);
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
          *(_DWORD *)v16 = 1329877100;
          *(_QWORD *)(v16 + 16) = a2;
          *(_QWORD *)(v16 + 8) = 0LL;
          *(_QWORD *)(v16 + 24) = 1383420738LL;
        }
      }
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v18 = *(_QWORD *)(a1 + 64);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
          *(_DWORD *)v19 = 1413771367;
          *(_QWORD *)(v19 + 16) = a2;
          *(_QWORD *)(v19 + 8) = 0LL;
          *(_QWORD *)(v19 + 24) = 0LL;
        }
      }
      if ( !a2 )
        goto LABEL_27;
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        if ( *(_DWORD *)v20 != 541218120 )
          UsbhTrapFatal_Dbg(a1, v20);
        if ( a2 <= *(unsigned __int8 *)(v20 + 2938) )
        {
          v21 = *(_QWORD *)(v20 + 3056);
          if ( v21 )
          {
            v22 = 2928LL * a2 + v21 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v23 = *(_QWORD *)(v20 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
              *(_DWORD *)v23 = 1044672615;
              *(_QWORD *)(v23 + 8) = 0LL;
              *(_QWORD *)(v23 + 16) = a2;
              *(_QWORD *)(v23 + 24) = v22;
            }
            if ( v22 )
            {
              v14 = *(_QWORD *)(v22 + 392);
              if ( v14 )
              {
                v24 = *(_QWORD *)(v14 + 64);
                if ( !v24 )
                  UsbhTrapFatal_Dbg(*(_QWORD *)(v22 + 392), 0LL);
                if ( *(_DWORD *)v24 != 1329877064 )
                  UsbhTrapFatal_Dbg(*(_QWORD *)(v22 + 392), *(_QWORD *)(v14 + 64));
                v25 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
                if ( v25 )
                {
                  *v25 = 0LL;
                  v25[1] = 0LL;
                  v25[2] = 0LL;
                  v25[3] = 0LL;
                  v25[5] = 0LL;
                  *(_DWORD *)v25 = 1668571500;
                  v25[4] = v14;
                  *((_DWORD *)v25 + 6) = 1383420738;
                  v26 = v25 + 1;
                  v27 = *(_QWORD **)(v24 + 1280);
                  if ( *v27 != v24 + 1272 )
                    goto LABEL_68;
                  *v26 = v24 + 1272;
                  v26[1] = v27;
                  *v27 = v26;
                  *(_QWORD *)(v24 + 1280) = v26;
                }
                else
                {
                  ++*(_DWORD *)(v24 + 1288);
                }
              }
            }
          }
        }
LABEL_27:
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v17);
        if ( v14 )
        {
          v8 = *(_QWORD *)(v14 + 64);
          if ( !v8 )
            goto LABEL_92;
          if ( *(_DWORD *)v8 != 1329877064 )
            UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64));
        }
        if ( (int)v13 >= 0 && v8 && *(_BYTE *)(v8 + 2740) )
        {
          v50 = *v12;
          v51 = v12[1];
          if ( ((v51 | *v12) & 8) != 0 )
          {
            v52 = FdoExt(a1);
            UsbhDispatch_HardResetEvent(a1, v52 + 566, 3LL);
          }
          if ( (v50 & 1) == 0 && (v51 & 1) != 0 )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_q(
                WPP_GLOBAL_Control->DeviceExtension,
                v28,
                3,
                21,
                (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
                a1);
            byte_1C006E688 = 1;
            UsbhFlushPortChange(a1, a2, v56);
            v53 = FdoExt(a1);
            UsbhDispatch_HardResetEvent(a1, v53 + 566, 3LL);
          }
        }
        if ( !v14 )
          goto LABEL_55;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v29 = *(_QWORD *)(a1 + 64);
          if ( v29 )
          {
            v30 = *(_QWORD *)(v29 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
            *(_DWORD *)v30 = 1329877109;
            *(_QWORD *)(v30 + 8) = 0LL;
            *(_QWORD *)(v30 + 16) = v14;
            *(_QWORD *)(v30 + 24) = 1383420738LL;
          }
        }
        v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v32 = *(_QWORD *)(a1 + 64);
          if ( v32 )
          {
            v33 = *(_QWORD *)(v32 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
            *(_DWORD *)v33 = 1348891236;
            *(_QWORD *)(v33 + 8) = 0LL;
            *(_QWORD *)(v33 + 16) = v14;
            *(_QWORD *)(v33 + 24) = 1383420738LL;
          }
        }
        v34 = *(_QWORD *)(v14 + 64);
        if ( v34 )
        {
          if ( *(_DWORD *)v34 != 1329877064 )
            UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64));
          v35 = (_QWORD *)(v34 + 1272);
          v36 = *(_QWORD **)(v34 + 1272);
          if ( v36 == (_QWORD *)(v34 + 1272) )
          {
LABEL_94:
            v54 = *(_DWORD *)(v34 + 1288);
            if ( v54 )
              *(_DWORD *)(v34 + 1288) = v54 - 1;
            goto LABEL_53;
          }
          while ( 1 )
          {
            v37 = v36 - 1;
            if ( (UsbhLogMask & 0x100) != 0 )
            {
              v38 = *(_QWORD *)(a1 + 64);
              if ( v38 )
              {
                v39 = *(_QWORD *)(v38 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
                *(_DWORD *)v39 = 1064591724;
                *(_QWORD *)(v39 + 8) = 0LL;
                *(_QWORD *)(v39 + 16) = v34;
                *(_QWORD *)(v39 + 24) = 1383420738LL;
              }
            }
            if ( *((_DWORD *)v37 + 6) == 1383420738 && !v37[5] )
              break;
            v36 = (_QWORD *)*v36;
            if ( v36 == v35 )
              goto LABEL_94;
          }
          v40 = (_QWORD *)*v36;
          if ( *(_QWORD **)(*v36 + 8LL) == v36 )
          {
            v41 = (_QWORD *)v37[2];
            if ( (_QWORD *)*v41 == v36 )
            {
              *v41 = v40;
              v40[1] = v41;
              ExFreePoolWithTag(v36 - 1, 0);
LABEL_53:
              if ( (_QWORD *)*v35 == v35 && !*(_DWORD *)(v34 + 1288) )
                KeSetEvent((PRKEVENT)(v34 + 1296), 0, 0);
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v31);
LABEL_55:
              if ( (UsbhLogMask & 4) != 0 )
              {
                v42 = *(_QWORD *)(a1 + 64);
                if ( v42 )
                {
                  v43 = *(_QWORD *)(v42 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
                  *(_DWORD *)v43 = 1953722449;
                  *(_QWORD *)(v43 + 8) = 0LL;
                  *(_QWORD *)(v43 + 16) = v13;
                  *(_QWORD *)(v43 + 24) = 0LL;
                }
              }
              if ( (int)v13 < 0 || (v44 = v12[2], v44 == 4) )
              {
                if ( (v13 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v13) )
                {
                  Log(a1, 4, 1366324018, v12[2], 0LL);
                  LOBYTE(v55) = 0;
                  UsbhException(a1, a2, 8, (int)v12, 10, v13, 0, usbfile_bus_c, 1649, v55);
                }
                if ( (int)v13 >= 0 )
                {
                  v45 = v12[1];
                  *(_WORD *)(a3 + 2) = v45;
                  v46 = *v12;
                  *(_WORD *)a3 = *v12;
                  if ( (UsbhLogMask & 4) != 0 )
                  {
                    v47 = *(_QWORD *)(a1 + 64);
                    if ( v47 )
                    {
                      v48 = *(_QWORD *)(v47 + 888)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
                      *(_DWORD *)v48 = 1953722448;
                      *(_QWORD *)(v48 + 16) = v45;
                      *(_QWORD *)(v48 + 24) = v46;
                      *(_QWORD *)(v48 + 8) = 0LL;
                    }
                  }
                }
                if ( a4 )
                  *a4 = 0;
                ExFreePoolWithTag(v12, 0);
                return (unsigned int)v13;
              }
              else
              {
                Log(a1, 4, 1366324017, v44, 0LL);
                LOBYTE(v55) = 0;
                UsbhException(a1, a2, 9, (int)v12, 10, v13, 0, usbfile_bus_c, 1635, v55);
                if ( a4 )
                  *a4 = 0;
                ExFreePoolWithTag(v12, 0);
                return 3221225473LL;
              }
            }
          }
LABEL_68:
          __fastfail(3u);
        }
LABEL_92:
        UsbhTrapFatal_Dbg(v14, 0LL);
      }
LABEL_107:
      UsbhTrapFatal_Dbg(a1, 0LL);
    }
    Log(a1, 4, 1366319468, 0LL, 0LL);
    if ( a4 )
      *a4 = -1073737728;
    return 3221225626LL;
  }
}
