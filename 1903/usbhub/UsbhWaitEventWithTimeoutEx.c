/*
 * XREFs of UsbhWaitEventWithTimeoutEx @ 0x1C001A060
 * Callers:
 *     UsbhSshResumePort @ 0x1C0007180 (UsbhSshResumePort.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0008C2C (UsbhSyncResetDeviceInternal.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000A9A0 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000BA00 (Usbh_PCE_Suspend_Action.c)
 *     UsbhWaitForResetTimeout @ 0x1C000F9DC (UsbhWaitForResetTimeout.c)
 *     Usbh_PCE_Close_Action @ 0x1C00472DC (Usbh_PCE_Close_Action.c)
 *     UsbhNotifyPnpOfFailure_Action @ 0x1C0049788 (UsbhNotifyPnpOfFailure_Action.c)
 *     UsbhWaitForPortResume @ 0x1C004A3AC (UsbhWaitForPortResume.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C004C370 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhAsyncStop @ 0x1C0051120 (UsbhAsyncStop.c)
 * Callees:
 *     UsbhPCE_wRun @ 0x1C000CAD8 (UsbhPCE_wRun.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhIncHubBusy @ 0x1C0019CD0 (UsbhIncHubBusy.c)
 *     UsbhTrapFatalTimeout_x9f @ 0x1C0041364 (UsbhTrapFatalTimeout_x9f.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhWaitEventWithTimeoutEx(__int64 a1, void *a2, int a3, int a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r13
  _QWORD *v18; // r13
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  struct _KEVENT *v21; // r15
  unsigned __int8 Signalling; // r8
  unsigned __int8 v23; // cl
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  NTSTATUS v29; // r9d
  void *v30; // r15
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rdx
  union _LARGE_INTEGER *v38; // rax
  NTSTATUS v39; // eax
  NTSTATUS v40; // eax
  volatile int Lock; // eax
  BOOLEAN v42; // r9
  union _LARGE_INTEGER Timeout; // [rsp+48h] [rbp-38h] BYREF
  union _LARGE_INTEGER v44; // [rsp+50h] [rbp-30h] BYREF
  __int64 v45; // [rsp+58h] [rbp-28h]
  PVOID Object; // [rsp+60h] [rbp-20h] BYREF
  __int64 v47; // [rsp+68h] [rbp-18h]
  PVOID v48; // [rsp+70h] [rbp-10h] BYREF
  __int64 v49; // [rsp+78h] [rbp-8h]
  int v51; // [rsp+D0h] [rbp+50h]
  NTSTATUS v52; // [rsp+D0h] [rbp+50h]

  v6 = a3;
  v44.QuadPart = 0LL;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        HIBYTE(v51) = a4;
        LOBYTE(v51) = HIBYTE(a4);
        BYTE1(v51) = BYTE2(a4);
        BYTE2(v51) = BYTE1(a4);
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = v51;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = v6;
        *(_QWORD *)(v10 + 24) = a2;
      }
    }
  }
  v11 = 10000 * v6 + (int)(KeQueryTimeIncrement() - 1);
  v45 = v11;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 826627159;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = v6;
      }
    }
  }
  Timeout.QuadPart = -v11;
  v14 = MEMORY[0xFFFFF78000000008];
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 827618423;
        *(_QWORD *)(v16 + 16) = (unsigned int)v14;
        *(_QWORD *)(v16 + 24) = SHIDWORD(v14);
        *(_QWORD *)(v16 + 8) = 0LL;
      }
    }
  }
  if ( (_DWORD)v6 )
  {
    if ( !a5 )
    {
      v29 = KeWaitForSingleObject(a2, Executive, 0, 0, &Timeout);
      v52 = v29;
LABEL_33:
      v17 = a6;
      goto LABEL_34;
    }
    v17 = a6;
    if ( a6 )
    {
      v18 = (_QWORD *)UsbhIncHubBusy(a1, a6 + 24, a6, 1465152371, 0);
      Object = a2;
      v47 = a6 + 496;
      v19 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
      v52 = v19;
      if ( v19 )
      {
        while ( 1 )
        {
          if ( v19 == 1 )
          {
            v52 = KeWaitForSingleObject(a2, Executive, 0, 0, &v44);
            if ( !v52 )
              goto LABEL_20;
            Timeout.QuadPart = MEMORY[0xFFFFF78000000008] - v11 - v14;
            v47 = a6 + 2464;
            v20 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
            v52 = v20;
            switch ( v20 )
            {
              case 0:
                goto LABEL_20;
              case 1:
                Log(a1, 512, 1465143918, a6, *(unsigned __int16 *)(a6 + 4));
                *(_DWORD *)(a6 + 2844) = a5;
                FdoExt(a1);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    57,
                    (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
                    *(_WORD *)(a6 + 4));
                }
                UsbhDispatch_PortChangeQueueEventEx(a1, a6, 5, a6 + 24, 0LL, 0, 0LL, 0LL);
                KeSetEvent((PRKEVENT)(a6 + 2464), 0, 0);
                break;
              case 258:
                goto LABEL_20;
            }
            v47 = a6 + 496;
          }
          else if ( v19 == 258 )
          {
            goto LABEL_20;
          }
          if ( MEMORY[0xFFFFF78000000008] - v14 >= v11 )
            break;
          Timeout.QuadPart = MEMORY[0xFFFFF78000000008] - v14 - v11;
          v19 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
          v52 = v19;
          if ( !v19 )
            goto LABEL_20;
        }
        v52 = 258;
      }
LABEL_20:
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v21 = *(struct _KEVENT **)(a1 + 64);
      if ( !v21 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( v21->Header.LockNV != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v21[142].Header.Type = 1;
      KeWaitForSingleObject(&v21[139], Executive, 0, 0, 0LL);
      Signalling = v21[142].Header.Signalling;
      v23 = Signalling;
      if ( (UsbhLogMask & 0x10000) != 0 )
      {
        v24 = *(_QWORD *)(a1 + 64);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
          *(_DWORD *)v25 = 1667581000;
          *(_QWORD *)(v25 + 24) = Signalling;
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)(v25 + 16) = v18;
          v23 = v21[142].Header.Signalling;
        }
      }
      if ( v23 )
      {
        if ( v18 == (_QWORD *)1936941672 )
        {
          Lock = v21[130].Header.Lock;
          if ( Lock )
            v21[130].Header.LockNV = Lock - 1;
        }
        else if ( v18 )
        {
          v26 = v18[1];
          v27 = v18 + 1;
          if ( *(_QWORD **)(v26 + 8) != v18 + 1 || (v28 = (_QWORD *)v18[2], (_QWORD *)*v28 != v27) )
            __fastfail(3u);
          *v28 = v26;
          *(_QWORD *)(v26 + 8) = v28;
          v18[2] = v18 + 1;
          *v27 = v27;
          ExFreePoolWithTag(v18, 0);
        }
      }
      KeSetEvent(v21 + 139, 0, 0);
      v29 = v52;
      goto LABEL_33;
    }
  }
  else
  {
    v17 = a6;
  }
  if ( a5 != 11 )
  {
    Log(a1, 8, 2004112472, 0LL, 0LL);
    v30 = a2;
    v29 = KeWaitForSingleObject(a2, Executive, 0, v42, 0LL);
    v52 = v29;
    goto LABEL_35;
  }
  v48 = a2;
LABEL_58:
  v49 = v17 + 496;
  do
  {
    v38 = (_DWORD)v6 ? &Timeout : 0LL;
    v39 = KeWaitForMultipleObjects(2u, &v48, WaitAny, Executive, 0, 0, v38, 0LL);
    v52 = v39;
    v29 = v39;
    if ( !v39 )
      break;
    if ( v39 == 1 )
    {
      v52 = KeWaitForSingleObject(a2, Executive, 0, 0, &v44);
      v29 = v52;
      if ( !v52 )
        break;
      v49 = v17 + 2464;
      v40 = KeWaitForMultipleObjects(2u, &v48, WaitAny, Executive, 0, 0, 0LL, 0LL);
      v52 = v40;
      v29 = v40;
      if ( !v40 )
        break;
      if ( v40 == 1 )
      {
        Log(a1, 512, 1465143918, v17, *(unsigned __int16 *)(v17 + 4));
        UsbhPCE_wRun(a1, v17 + 24, v17);
      }
      goto LABEL_58;
    }
  }
  while ( v39 != 258 );
LABEL_34:
  v30 = a2;
LABEL_35:
  v31 = MEMORY[0xFFFFF78000000008];
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v32 = *(_QWORD *)(a1 + 64);
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
        *(_DWORD *)v33 = 844395639;
        *(_QWORD *)(v33 + 16) = (unsigned int)v31;
        *(_QWORD *)(v33 + 24) = SHIDWORD(v31);
        *(_QWORD *)(v33 + 8) = 0LL;
      }
    }
  }
  v34 = v31 - v14;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v35 = *(_QWORD *)(a1 + 64);
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
        *(_DWORD *)v36 = 2017809495;
        *(_QWORD *)(v36 + 16) = v29;
        *(_QWORD *)(v36 + 24) = (unsigned int)v34;
        *(_QWORD *)(v36 + 8) = 0LL;
      }
    }
  }
  if ( v29 == 258 )
  {
    if ( v34 < v11 )
    {
      Log(a1, 8, 1465135393, SHIDWORD(v34), (unsigned int)v34);
      Log(a1, 8, 1465135649, SHIDWORD(v45), (unsigned int)v11);
      v29 = v52;
    }
    if ( a5 )
    {
      if ( a5 != 11 )
      {
        v29 = KeWaitForSingleObject(v30, Executive, 0, 0, &v44);
        if ( v29 )
          UsbhTrapFatalTimeout_x9f(a1, a5, v17);
      }
    }
  }
  return (unsigned int)v29;
}
