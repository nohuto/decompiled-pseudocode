/*
 * XREFs of RIMCreateHidDesc @ 0x1C004F0B8
 * Callers:
 *     RIMCreateDev @ 0x1C004F7E4 (RIMCreateDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMAllocateHidDesc @ 0x1C004DE5C (RIMAllocateHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004F608 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0051590 (RIMGetDeviceObjectPointer.c)
 *     rimAnyExplicitRimUsagesMatchingUsages @ 0x1C00516EC (rimAnyExplicitRimUsagesMatchingUsages.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C0051790 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     DbgPrintRIM @ 0x1C00517C4 (DbgPrintRIM.c)
 *     RIMHidGetCaps @ 0x1C0051804 (RIMHidGetCaps.c)
 *     RIMFreeHidDesc @ 0x1C0052898 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0052924 (WPP_RECORDER_SF_qDD.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C0052A14 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0090848 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C0090924 (RIMSearchHidTLCInfo.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00F4450 (WPP_RECORDER_SF_qd.c)
 *     RIMAllocateHidConfigDesc @ 0x1C011A4F0 (RIMAllocateHidConfigDesc.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C011C494 (WPP_RECORDER_SF_DDq.c)
 *     RIMIDECreateHIDDesc @ 0x1C011D6F4 (RIMIDECreateHIDDesc.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // r12
  int v7; // edx
  int v8; // r8d
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _FILE_OBJECT *v13; // rbx
  struct _DEVICE_OBJECT *v14; // r14
  int v15; // edx
  PIRP v16; // rax
  NTSTATUS Status; // eax
  int v18; // edx
  void *v19; // r13
  PIRP v20; // rax
  NTSTATUS v21; // eax
  int Caps; // eax
  int v23; // edx
  unsigned __int16 v24; // si
  int v25; // edx
  int v26; // ecx
  unsigned __int16 v27; // r11
  int v28; // r9d
  int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v34; // r9d
  int v35; // r8d
  int v36; // eax
  int v37; // ecx
  __int64 v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // r8d
  __int64 v43; // rsi
  int v44; // edx
  unsigned int v45; // eax
  int v46; // eax
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-A1h]
  ULONG OutputBufferLengtha[2]; // [rsp+28h] [rbp-A1h]
  ULONG OutputBufferLengthb[2]; // [rsp+28h] [rbp-A1h]
  char OutputBufferLengthc; // [rsp+28h] [rbp-A1h]
  char InternalDeviceIoControl; // [rsp+30h] [rbp-99h]
  PVOID v52; // [rsp+50h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-71h] BYREF
  PVOID Object; // [rsp+60h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-61h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-51h] BYREF
  ULONG OutputBuffer; // [rsp+90h] [rbp-39h] BYREF
  _BYTE v58[10]; // [rsp+96h] [rbp-33h] BYREF
  unsigned __int16 v59; // [rsp+A0h] [rbp-29h] BYREF
  unsigned __int16 v60; // [rsp+A2h] [rbp-27h]
  unsigned __int16 v61; // [rsp+A4h] [rbp-25h]
  __int16 v62; // [rsp+A8h] [rbp-21h]

  v3 = 0LL;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 1) > 1u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0xAu, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
  {
    v9 = RIMGetDeviceObjectPointer((int)a2 + 208, v7, v8, (unsigned int)&Handle, (__int64)&v52, (__int64)&Object);
    if ( v9 < 0 )
    {
      OutputBufferLength[0] = v9;
      WPP_RECORDER_SF_d(
        gRimLog,
        3u,
        0x14u,
        0xBu,
        (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids,
        *(_QWORD *)OutputBufferLength);
      return (__int64)v3;
    }
    v13 = (struct _FILE_OBJECT *)v52;
    if ( !v52 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
    v14 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
    ObfReferenceObject(v14);
    LOBYTE(v15) = 3;
    WPP_RECORDER_SF_q(gRimLog, v15, 21, 12, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, a2);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v16 = IoBuildDeviceIoControlRequest(0xB01A8u, v14, 0LL, 0, &OutputBuffer, 0xCu, 0, &Event, &IoStatusBlock);
    if ( !v16 )
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xDu, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
      goto LABEL_28;
    }
    v16->Tail.Overlay.CurrentStackLocation[-1].FileObject = v13;
    Status = IofCallDriver(v14, v16);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status )
    {
      OutputBufferLengtha[0] = Status;
      WPP_RECORDER_SF_d(
        gRimLog,
        3u,
        0x14u,
        0xEu,
        (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids,
        *(_QWORD *)OutputBufferLengtha);
      goto LABEL_28;
    }
    v19 = (void *)Win32AllocPoolNonPaged(OutputBuffer, 0x70707352u);
    if ( !v19 )
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xFu, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
      goto LABEL_28;
    }
    LOBYTE(v18) = 3;
    WPP_RECORDER_SF_q(gRimLog, v18, 21, 16, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, a2);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v20 = IoBuildDeviceIoControlRequest(0xB0193u, v14, 0LL, 0, v19, OutputBuffer, 0, &Event, &IoStatusBlock);
    if ( !v20 )
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x11u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
      goto LABEL_27;
    }
    v20->Tail.Overlay.CurrentStackLocation[-1].FileObject = v13;
    v21 = IofCallDriver(v14, v20);
    if ( v21 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v21 = IoStatusBlock.Status;
    }
    if ( v21 )
    {
      OutputBufferLengthb[0] = v21;
      WPP_RECORDER_SF_d(
        gRimLog,
        3u,
        0x14u,
        0x12u,
        (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids,
        *(_QWORD *)OutputBufferLengthb);
      goto LABEL_27;
    }
    Caps = RIMHidGetCaps(a1, v14, v19, &v59);
    if ( Caps != 1114112 )
    {
      LOBYTE(v23) = 3;
      WPP_RECORDER_SF_qd(
        gRimLog,
        v23,
        20,
        19,
        (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids,
        (char)v14,
        Caps);
      goto LABEL_27;
    }
    WPP_RECORDER_SF_DD(v60, v23, 21, 20, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, v60, v59);
    WPP_RECORDER_SF_DD(v61, 21, 21, 21, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, v61, v62);
    DbgPrintRIM("Found (Usage: %x, UsagePage: %x)\n");
    v24 = v59;
    if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(a1, v60, v59) )
    {
      v45 = *(_DWORD *)(a2 + 184) & 0xFFFF3FFF | 0x4000;
      *(_DWORD *)(a2 + 200) |= 0x40u;
      *(_DWORD *)(a2 + 184) = v45;
    }
    else if ( *(_DWORD *)(a1 + 864) )
    {
      v36 = IsProcessHidRawInputSupported();
      v37 = 0;
      if ( v36 >= 0 )
        v37 = 0x8000;
      v38 = v59;
      v39 = v37 | *(_DWORD *)(a2 + 184) & 0xFFFF7FFF;
      v40 = v60;
      *(_DWORD *)(a2 + 184) = v39;
      if ( (unsigned int)rimAnyExplicitRimUsagesMatchingUsages(v40, v38) )
      {
        v34 = 22;
        v35 = 21;
        goto LABEL_38;
      }
      v27 = v60;
      v24 = v59;
    }
    if ( (*(_DWORD *)(a2 + 184) & 0x4000) == 0 && v27 == 1 )
    {
      if ( v24 && (v24 <= 2u || v24 > 5u && (v24 <= 7u || v24 == 128)) )
      {
        v28 = 23;
        InternalDeviceIoControl = v24;
        OutputBufferLengthc = 1;
        v29 = 21;
LABEL_26:
        WPP_RECORDER_SF_DD(
          v26,
          v25,
          v29,
          v28,
          (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids,
          OutputBufferLengthc,
          InternalDeviceIoControl);
LABEL_27:
        Win32FreePool((__int64)v19);
LABEL_28:
        ObfDereferenceObject(v52);
        ZwClose(Handle);
        if ( !v14 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
        ObfDereferenceObject(v14);
        return (__int64)v3;
      }
LABEL_59:
      v26 = 14;
      if ( v24 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
      {
        InternalDeviceIoControl = 14;
        v28 = 27;
        OutputBufferLengthc = 1;
LABEL_62:
        v29 = 20;
        goto LABEL_26;
      }
      goto LABEL_35;
    }
    v25 = 13;
    if ( v27 == 13 )
    {
      v26 = 14;
      if ( v24 == 14 )
      {
        if ( (*(_DWORD *)(a1 + 84) & 0x18) != 0 )
        {
          v3 = (char *)RIMAllocateHidConfigDesc(a1, a2, v19, &v59, &OutputBuffer);
          if ( v3 )
          {
LABEL_47:
            ObfDereferenceObject(v14);
            ObfDereferenceObject(v52);
            ZwClose(Handle);
            return (__int64)v3;
          }
          v26 = v59;
          v28 = 25;
          v25 = v60;
        }
        else
        {
          v28 = 26;
        }
        InternalDeviceIoControl = v26;
        OutputBufferLengthc = v25;
        goto LABEL_62;
      }
    }
    else if ( v27 == 1 )
    {
      goto LABEL_59;
    }
LABEL_35:
    if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v27, v24, v58) && (*(_DWORD *)(a1 + 84) & 4) == 0 )
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x1Cu, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
      goto LABEL_27;
    }
    v3 = RIMAllocateHidDesc(a1, a2, (__int64)v19, &v59, (__int64)&OutputBuffer, (__int64)v14, (__int64)v52);
    if ( !v3 )
    {
      v34 = 29;
      v35 = 20;
LABEL_38:
      WPP_RECORDER_SF_DD(v60, v25, v35, v34, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, v60, v59);
      goto LABEL_27;
    }
    v41 = RIMSearchHidTLCInfo(v60, v59);
    v43 = v41;
    if ( v41 )
    {
      WPP_RECORDER_SF_DDq(v59, v60, v42, 30, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, v60, v59, v41);
    }
    else
    {
      v43 = RIMAllocateAndLinkHidTLCInfo(v60, v59);
      if ( !v43 )
      {
        LOBYTE(v44) = 3;
        WPP_RECORDER_SF_q(gRimLog, v44, 20, 31, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, a1);
        RIMFreeHidDesc(v3);
        v3 = 0LL;
        goto LABEL_28;
      }
      LOBYTE(v44) = 3;
      WPP_RECORDER_SF_qDD(v60, v44, 21, 32, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, v43, v60, v59);
    }
    ++*(_DWORD *)(v43 + 20);
    *(_QWORD *)(a2 + 472) = v43;
    goto LABEL_47;
  }
  if ( *(_QWORD *)a3
    && (!WPP_MAIN_CB.Queue.ListEntry.Flink
      ? (v46 = -1073741637)
      : (v46 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64))WPP_MAIN_CB.Queue.ListEntry.Flink)(
                 *(_QWORD *)a3,
                 *(unsigned int *)(a3 + 8),
                 1LL,
                 a3 + 16)),
        v46 < 0) )
  {
    return 0LL;
  }
  else
  {
    return RIMIDECreateHIDDesc(a1, a2, a3);
  }
}
