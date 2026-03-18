/*
 * XREFs of UsbhWaitEventWithTimeoutEx @ 0x1C0019870
 * Callers:
 *     UsbhSshResumePort @ 0x1C0006C70 (UsbhSshResumePort.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C000873C (UsbhSyncResetDeviceInternal.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000A410 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000B3E8 (Usbh_PCE_Suspend_Action.c)
 *     UsbhWaitForResetTimeout @ 0x1C000F380 (UsbhWaitForResetTimeout.c)
 *     Usbh_PCE_Close_Action @ 0x1C0045AA4 (Usbh_PCE_Close_Action.c)
 *     UsbhNotifyPnpOfFailure_Action @ 0x1C0047E58 (UsbhNotifyPnpOfFailure_Action.c)
 *     UsbhWaitForPortResume @ 0x1C0048A04 (UsbhWaitForPortResume.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C004AA00 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhAsyncStop @ 0x1C004F3F0 (UsbhAsyncStop.c)
 * Callees:
 *     UsbhPCE_wRun @ 0x1C000BF34 (UsbhPCE_wRun.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhIncHubBusy @ 0x1C0019500 (UsbhIncHubBusy.c)
 *     UsbhTrapFatalTimeout_x9f @ 0x1C003FCF4 (UsbhTrapFatalTimeout_x9f.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhWaitEventWithTimeoutEx(__int64 a1, void *a2, int a3, int a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r13
  _QWORD *v18; // r13
  NTSTATUS v19; // r12d
  NTSTATUS v20; // eax
  struct _KEVENT *v21; // r14
  unsigned __int8 Signalling; // r8
  unsigned __int8 v23; // cl
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r9
  unsigned int v33; // ecx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  _DWORD *v40; // rdx
  union _LARGE_INTEGER *v41; // rax
  NTSTATUS v42; // eax
  NTSTATUS v43; // eax
  volatile int Lock; // eax
  BOOLEAN v45; // r9
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  union _LARGE_INTEGER v47; // [rsp+48h] [rbp-38h] BYREF
  __int64 v48; // [rsp+50h] [rbp-30h]
  __int64 v49; // [rsp+58h] [rbp-28h]
  PVOID Object; // [rsp+60h] [rbp-20h] BYREF
  __int64 v51; // [rsp+68h] [rbp-18h]
  PVOID v52; // [rsp+70h] [rbp-10h] BYREF
  __int64 v53; // [rsp+78h] [rbp-8h]
  int v55; // [rsp+D0h] [rbp+50h]

  v6 = a3;
  v47.QuadPart = 0LL;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        HIBYTE(v55) = a4;
        LOBYTE(v55) = HIBYTE(a4);
        BYTE1(v55) = BYTE2(a4);
        BYTE2(v55) = BYTE1(a4);
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = v55;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a3;
        *(_QWORD *)(v10 + 24) = a2;
      }
    }
  }
  v11 = 10000LL * a3 + (int)(KeQueryTimeIncrement() - 1);
  v49 = v11;
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
      v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &Timeout);
LABEL_33:
      v17 = a6;
      goto LABEL_34;
    }
    v17 = a6;
    if ( a6 )
    {
      v18 = (_QWORD *)UsbhIncHubBusy(a1, a6 + 24, a6, 1465152371, 0);
      Object = a2;
      v51 = a6 + 496;
      v19 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
      if ( v19 )
      {
        while ( 1 )
        {
          if ( v19 == 1 )
          {
            v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &v47);
            if ( !v19 )
              goto LABEL_20;
            Timeout.QuadPart = MEMORY[0xFFFFF78000000008] - v14 - v11;
            v51 = a6 + 2464;
            v20 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
            v19 = v20;
            switch ( v20 )
            {
              case 0:
                goto LABEL_20;
              case 1:
                v37 = *(unsigned __int16 *)(a6 + 4);
                if ( (UsbhLogMask & 0x200) != 0 )
                {
                  if ( a1 )
                  {
                    v38 = *(_QWORD *)(a1 + 64);
                    if ( v38 )
                    {
                      v39 = *(_QWORD *)(v38 + 888)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
                      *(_DWORD *)v39 = 1850889303;
                      *(_QWORD *)(v39 + 8) = 0LL;
                      *(_QWORD *)(v39 + 16) = a6;
                      *(_QWORD *)(v39 + 24) = v37;
                    }
                  }
                }
                *(_DWORD *)(a6 + 2844) = a5;
                if ( !a1 )
                  goto LABEL_79;
                v40 = *(_DWORD **)(a1 + 64);
                if ( !v40 )
                  goto LABEL_80;
                if ( *v40 != 541218120 )
                  UsbhTrapFatal_Dbg(a1, v40);
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    57,
                    (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
                    *(_WORD *)(a6 + 4));
                LODWORD(v48) = 0;
                UsbhDispatch_PortChangeQueueEventEx(a1, a6, 5, a6 + 24, v48, 0, 0LL, 0LL);
                KeSetEvent((PRKEVENT)(a6 + 2464), 0, 0);
                break;
              case 258:
                goto LABEL_20;
            }
            v51 = a6 + 496;
          }
          else if ( v19 == 258 )
          {
            goto LABEL_20;
          }
          if ( MEMORY[0xFFFFF78000000008] - v14 >= v11 )
            break;
          Timeout.QuadPart = MEMORY[0xFFFFF78000000008] - v14 - v11;
          v19 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
          if ( !v19 )
            goto LABEL_20;
        }
        v19 = 258;
      }
LABEL_20:
      if ( !a1 )
LABEL_79:
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v21 = *(struct _KEVENT **)(a1 + 64);
      if ( !v21 )
LABEL_80:
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
      goto LABEL_33;
    }
  }
  else
  {
    v17 = a6;
  }
  if ( a5 == 11 )
  {
    v52 = a2;
LABEL_63:
    v53 = v17 + 496;
    do
    {
      v41 = (_DWORD)v6 ? &Timeout : 0LL;
      v42 = KeWaitForMultipleObjects(2u, &v52, WaitAny, Executive, 0, 0, v41, 0LL);
      v19 = v42;
      if ( !v42 )
        break;
      if ( v42 == 1 )
      {
        v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &v47);
        if ( !v19 )
          break;
        v53 = v17 + 2464;
        v43 = KeWaitForMultipleObjects(2u, &v52, WaitAny, Executive, 0, 0, 0LL, 0LL);
        v19 = v43;
        if ( !v43 )
          break;
        if ( v43 == 1 )
        {
          Log(a1, 512, 1465143918, v17, *(unsigned __int16 *)(v17 + 4));
          UsbhPCE_wRun(a1, v17 + 24, v17);
        }
        goto LABEL_63;
      }
    }
    while ( v42 != 258 );
  }
  else
  {
    Log(a1, 8, 2004112472, 0LL, 0LL);
    v19 = KeWaitForSingleObject(a2, Executive, 0, v45, 0LL);
  }
LABEL_34:
  v29 = MEMORY[0xFFFFF78000000008];
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v30 = *(_QWORD *)(a1 + 64);
      if ( v30 )
      {
        v31 = *(_QWORD *)(v30 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
        *(_DWORD *)v31 = 844395639;
        *(_QWORD *)(v31 + 16) = (unsigned int)v29;
        *(_QWORD *)(v31 + 24) = SHIDWORD(v29);
        *(_QWORD *)(v31 + 8) = 0LL;
      }
    }
  }
  v32 = v29 - v14;
  v33 = v32;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v34 = *(_QWORD *)(a1 + 64);
      if ( v34 )
      {
        v35 = *(_QWORD *)(v34 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
        *(_DWORD *)v35 = 2017809495;
        *(_QWORD *)(v35 + 16) = v19;
        *(_QWORD *)(v35 + 24) = (unsigned int)v32;
        *(_QWORD *)(v35 + 8) = 0LL;
        v33 = v32;
      }
    }
  }
  if ( v19 == 258 )
  {
    if ( v32 < v11 )
    {
      Log(a1, 8, 1465135393, v32 >> 32, v33);
      Log(a1, 8, 1465135649, SHIDWORD(v49), (unsigned int)v11);
    }
    if ( a5 )
    {
      if ( a5 != 11 )
      {
        v19 = KeWaitForSingleObject(a2, Executive, 0, 0, &v47);
        if ( v19 )
          UsbhTrapFatalTimeout_x9f(a1, a5, v17);
      }
    }
  }
  return (unsigned int)v19;
}
