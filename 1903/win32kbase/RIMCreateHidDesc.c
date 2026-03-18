/*
 * XREFs of RIMCreateHidDesc @ 0x1C00513AC
 * Callers:
 *     RIMCreateDev @ 0x1C006BB70 (RIMCreateDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0051278 (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00519C0 (WPP_RECORDER_SF_DD.c)
 *     rimAnyExplicitRimUsagesMatchingUsages @ 0x1C0051A94 (rimAnyExplicitRimUsagesMatchingUsages.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C0051B38 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0051B6C (-DbgPrintWarning@@YAXPEADZZ.c)
 *     RIMHidGetCaps @ 0x1C005497C (RIMHidGetCaps.c)
 *     Win32AllocPoolNonPaged @ 0x1C0056D40 (Win32AllocPoolNonPaged.c)
 *     RIMSearchHidTLCInfo @ 0x1C006EC1C (RIMSearchHidTLCInfo.c)
 *     RIMFreeHidDesc @ 0x1C007189C (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C007193C (WPP_RECORDER_SF_qDD.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0071AD0 (RIMAllocateAndLinkHidTLCInfo.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C00A17C4 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMAllocateHidDesc @ 0x1C00AE4FC (RIMAllocateHidDesc.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C011EFA0 (WPP_RECORDER_SF_qd.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0142CE0 (RIMAllocateHidConfigDesc.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0144F88 (WPP_RECORDER_SF_DDq.c)
 *     RIMIDECreateHIDDesc @ 0x1C0148AD8 (RIMIDECreateHIDDesc.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _FILE_OBJECT *v14; // r13
  struct _DEVICE_OBJECT *v15; // rsi
  int v16; // edx
  PIRP v17; // rax
  int v18; // edx
  NTSTATUS Status; // eax
  int v20; // edx
  void *v21; // r15
  PIRP v22; // rax
  int v23; // edx
  NTSTATUS v24; // eax
  int v25; // edx
  int Caps; // eax
  int v27; // edx
  int v28; // edx
  unsigned __int16 v29; // bx
  int v30; // edx
  unsigned __int16 v31; // r11
  int v32; // r9d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v37; // r9d
  int v38; // eax
  int v39; // ecx
  __int64 v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rbx
  int v45; // edx
  int v46; // r9d
  int v47; // r9d
  unsigned int v48; // eax
  int v49; // edx
  int CollectionDescription; // eax
  char OutputBufferLength; // [rsp+28h] [rbp-A1h]
  char InternalDeviceIoControl; // [rsp+30h] [rbp-99h]
  HANDLE Handle; // [rsp+50h] [rbp-79h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-71h] BYREF
  PVOID v55; // [rsp+68h] [rbp-61h] BYREF
  PVOID Object; // [rsp+70h] [rbp-59h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-51h] BYREF
  ULONG OutputBuffer[2]; // [rsp+90h] [rbp-39h] BYREF
  int v59; // [rsp+98h] [rbp-31h]
  _WORD v60[32]; // [rsp+A0h] [rbp-29h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v6 = 0LL;
  memset(v60, 0, sizeof(v60));
  *(_QWORD *)OutputBuffer = 0LL;
  v59 = 0;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 1) > 1u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 10, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
  {
    v10 = RIMGetDeviceObjectPointer(
            (struct _UNICODE_STRING *)(a2 + 208),
            v7,
            v9,
            &Handle,
            &v55,
            (PDEVICE_OBJECT *)&Object);
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_D((_DWORD)gRimLog, v11, 1, 11, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, v10);
      }
      return v6;
    }
    v14 = (struct _FILE_OBJECT *)v55;
    if ( !v55 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    v15 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    ObfReferenceObject(v15);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v16, 1, 12, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, a2);
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v17 = IoBuildDeviceIoControlRequest(0xB01A8u, v15, 0LL, 0, OutputBuffer, 0xCu, 0, &Event, &IoStatusBlock);
    v18 = (int)v17;
    if ( v17 )
    {
      v17->Tail.Overlay.CurrentStackLocation[-1].FileObject = v14;
      Status = IofCallDriver(v15, v17);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 3;
          WPP_RECORDER_SF_D(
            (_DWORD)gRimLog,
            v20,
            1,
            14,
            (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
            Status);
        }
        goto LABEL_38;
      }
      v21 = (void *)Win32AllocPoolNonPaged(OutputBuffer[0], 1886417746LL);
      if ( v21 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = 4;
          WPP_RECORDER_SF_q((_DWORD)gRimLog, v18, 1, 16, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, a2);
        }
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v22 = IoBuildDeviceIoControlRequest(0xB0193u, v15, 0LL, 0, v21, OutputBuffer[0], 0, &Event, &IoStatusBlock);
        v23 = (int)v22;
        if ( !v22 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_37;
          v47 = 17;
LABEL_73:
          LOBYTE(v23) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v23, 1, v47, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
          goto LABEL_37;
        }
        v22->Tail.Overlay.CurrentStackLocation[-1].FileObject = v14;
        v24 = IofCallDriver(v15, v22);
        if ( v24 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v24 = IoStatusBlock.Status;
        }
        if ( v24 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v25) = 3;
            WPP_RECORDER_SF_D(
              (_DWORD)gRimLog,
              v25,
              1,
              18,
              (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
              v24);
          }
          goto LABEL_37;
        }
        Caps = RIMHidGetCaps(a1, v15, v21, v60);
        if ( Caps != 1114112 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v27) = 3;
            WPP_RECORDER_SF_qd(
              (_DWORD)gRimLog,
              v27,
              1,
              19,
              (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
              (char)v15,
              Caps);
          }
          goto LABEL_37;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v27) = 4;
          WPP_RECORDER_SF_DD(
            (_DWORD)gRimLog,
            v27,
            1,
            20,
            (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
            v60[1],
            v60[0]);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v28) = 4;
            WPP_RECORDER_SF_DD(
              (_DWORD)gRimLog,
              v28,
              1,
              21,
              (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
              v60[2],
              v60[4]);
          }
        }
        DbgPrintWarning("Found (Usage: %x, UsagePage: %x)\n", v60[0], v60[1]);
        v29 = v60[0];
        if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(a1, v60[1], v60[0]) )
        {
          v48 = *(_DWORD *)(a2 + 184) & 0xFFFF3FFF | 0x4000;
          *(_DWORD *)(a2 + 200) |= 0x40u;
          *(_DWORD *)(a2 + 184) = v48;
        }
        else if ( *(_DWORD *)(a1 + 864) )
        {
          v38 = IsProcessHidRawInputSupported();
          v39 = 0;
          if ( v38 >= 0 )
            v39 = 0x8000;
          v40 = v60[0];
          v41 = v39 | *(_DWORD *)(a2 + 184) & 0xFFFF7FFF;
          v42 = v60[1];
          *(_DWORD *)(a2 + 184) = v41;
          if ( (unsigned int)rimAnyExplicitRimUsagesMatchingUsages(v42, v40) )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_37;
            v37 = 22;
            LOBYTE(v30) = 4;
            goto LABEL_51;
          }
          v31 = v60[1];
          v29 = v60[0];
        }
        if ( (*(_DWORD *)(a2 + 184) & 0x4000) == 0 && v31 == 1 )
        {
          if ( v29 && (v29 <= 2u || v29 > 5u && (v29 <= 7u || v29 == 128)) )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
LABEL_37:
              Win32FreePool((__int64)v21);
LABEL_38:
              ObfDereferenceObject(v14);
              ZwClose(Handle);
              if ( !v15 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35);
              ObfDereferenceObject(v15);
              return v6;
            }
            InternalDeviceIoControl = v29;
            v32 = 23;
            OutputBufferLength = 1;
            LOBYTE(v30) = 4;
LABEL_36:
            WPP_RECORDER_SF_DD(
              (_DWORD)gRimLog,
              v30,
              1,
              v32,
              (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
              OutputBufferLength,
              InternalDeviceIoControl);
            goto LABEL_37;
          }
LABEL_82:
          if ( v29 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_37;
            InternalDeviceIoControl = 14;
            v32 = 27;
            OutputBufferLength = 1;
            goto LABEL_86;
          }
          goto LABEL_47;
        }
        v30 = 13;
        if ( v31 == 13 )
        {
          if ( v29 == 14 )
          {
            if ( (*(_DWORD *)(a1 + 84) & 0x18) == 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_37;
              InternalDeviceIoControl = 14;
              v32 = 26;
              OutputBufferLength = 13;
LABEL_86:
              LOBYTE(v30) = 3;
              goto LABEL_36;
            }
            v6 = RIMAllocateHidConfigDesc(a1, a2, v15, v21, v60, OutputBuffer);
            if ( !v6 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v49 = v60[1];
                LOBYTE(v49) = 3;
                WPP_RECORDER_SF_DD(
                  (_DWORD)gRimLog,
                  v49,
                  1,
                  25,
                  (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
                  v60[1],
                  v60[0]);
              }
              goto LABEL_37;
            }
            goto LABEL_61;
          }
        }
        else if ( v31 == 1 )
        {
          goto LABEL_82;
        }
LABEL_47:
        if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v31, v29, (char *)&OutputBuffer[1] + 2)
          && (*(_DWORD *)(a1 + 84) & 4) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_37;
          v47 = 28;
          goto LABEL_73;
        }
        v6 = RIMAllocateHidDesc(
               a1,
               a2,
               (_DWORD)v21,
               (unsigned int)v60,
               (__int64)OutputBuffer,
               (__int64)v15,
               (__int64)v14);
        if ( !v6 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_37;
          v37 = 29;
          LOBYTE(v30) = 3;
LABEL_51:
          WPP_RECORDER_SF_DD(
            (_DWORD)gRimLog,
            v30,
            1,
            v37,
            (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
            v60[1],
            v60[0]);
          goto LABEL_37;
        }
        v43 = RIMSearchHidTLCInfo(v60[1], v60[0]);
        v44 = v43;
        if ( v43 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DDq(
              v60[0],
              v60[1],
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              30,
              (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
              v60[1],
              v60[0],
              v43);
        }
        else
        {
          v44 = RIMAllocateAndLinkHidTLCInfo(v60[1], v60[0]);
          if ( !v44 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v45) = 3;
              WPP_RECORDER_SF_q(
                (_DWORD)gRimLog,
                v45,
                1,
                31,
                (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
                a1);
            }
            RIMFreeHidDesc(v6);
            v6 = 0LL;
            goto LABEL_38;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v45) = 4;
            WPP_RECORDER_SF_qDD(
              (_DWORD)gRimLog,
              v45,
              1,
              32,
              (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
              v44,
              v60[1],
              v60[0]);
          }
        }
        ++*(_DWORD *)(v44 + 20);
        *(_QWORD *)(a2 + 472) = v44;
LABEL_61:
        ObfDereferenceObject(v15);
        ObfDereferenceObject(v14);
        ZwClose(Handle);
        return v6;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v46 = 15;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v46 = 13;
    }
    LOBYTE(v18) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v18, 1, v46, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
    goto LABEL_38;
  }
  if ( *(_QWORD *)a3
    && (!gpfnHidP_GetCollectionDescription
      ? (CollectionDescription = -1073741637)
      : (CollectionDescription = gpfnHidP_GetCollectionDescription(
                                   *(unsigned __int8 **)a3,
                                   *(_DWORD *)(a3 + 8),
                                   PagedPool,
                                   (struct _HIDP_DEVICE_DESC *)(a3 + 16))),
        CollectionDescription < 0) )
  {
    return 0LL;
  }
  else
  {
    return RIMIDECreateHIDDesc(a1, a2, a3);
  }
}
