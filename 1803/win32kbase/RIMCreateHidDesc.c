/*
 * XREFs of RIMCreateHidDesc @ 0x1C00EE898
 * Callers:
 *     RIMCreateDev @ 0x1C00F7534 (RIMCreateDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00BCA68 (WPP_RECORDER_SF_qd.c)
 *     DbgPrintRIM @ 0x1C00DDAEC (DbgPrintRIM.c)
 *     rimAnySecondaryRimUsagesMatchingUsages @ 0x1C00DEA4C (rimAnySecondaryRimUsagesMatchingUsages.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00E5F04 (WPP_RECORDER_SF_DD.c)
 *     RIMAllocateHidConfigDesc @ 0x1C00EE0A4 (RIMAllocateHidConfigDesc.c)
 *     RIMAllocateHidDesc @ 0x1C00EE340 (RIMAllocateHidDesc.c)
 *     RIMFreeHidDesc @ 0x1C00EF8B0 (RIMFreeHidDesc.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00EF940 (RIMGetDeviceObjectPointer.c)
 *     RIMHidGetCaps @ 0x1C00EFC5C (RIMHidGetCaps.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C00F07D8 (WPP_RECORDER_SF_DDq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00F0B24 (WPP_RECORDER_SF_qDD.c)
 *     rimHidP_GetCollectionDescription @ 0x1C00F0D4C (rimHidP_GetCollectionDescription.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00F136C (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00F15C0 (RIMSearchHidTLCInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C00F2D44 (RIMIDECreateHIDDesc.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C0140C60 (ApiSetInkProcessorIsInkDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // r13
  int v7; // edx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _FILE_OBJECT *v12; // r12
  struct _DEVICE_OBJECT *v13; // r15
  PIRP v14; // rax
  NTSTATUS Status; // eax
  void *v16; // rsi
  PIRP v17; // rax
  unsigned __int16 v18; // r9
  NTSTATUS v19; // eax
  int Caps; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rax
  unsigned __int16 v25; // r9
  unsigned __int16 v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rdx
  bool v29; // zf
  int v30; // eax
  int v31; // eax
  unsigned __int16 v32; // r9
  unsigned int v33; // r8d
  int v34; // ecx
  __int64 v35; // rax
  int v36; // r8d
  __int64 v37; // rsi
  int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // rcx
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-D8h]
  ULONG OutputBufferLengtha[2]; // [rsp+28h] [rbp-D8h]
  ULONG OutputBufferLengthb[2]; // [rsp+28h] [rbp-D8h]
  ULONG OutputBufferLengthd[2]; // [rsp+28h] [rbp-D8h]
  ULONG OutputBufferLengthc[2]; // [rsp+28h] [rbp-D8h]
  BOOLEAN InternalDeviceIoControl[8]; // [rsp+30h] [rbp-D0h]
  BOOLEAN InternalDeviceIoControlb[8]; // [rsp+30h] [rbp-D0h]
  BOOLEAN InternalDeviceIoControla[8]; // [rsp+30h] [rbp-D0h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v51; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v55[4]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v56[4]; // [rsp+D0h] [rbp-30h] BYREF
  ULONG OutputBuffer; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v58[10]; // [rsp+116h] [rbp+16h] BYREF

  v3 = 0LL;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 1) > 1u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, a2);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0xAu,
    (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
  if ( (*(_DWORD *)(a2 + 184) & 0x1000) == 0 )
  {
    v9 = RIMGetDeviceObjectPointer((int)a2 + 208, v7, v8, (unsigned int)&Handle, (__int64)&v51, (__int64)&Object);
    if ( v9 < 0 )
    {
      OutputBufferLength[0] = v9;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0xBu,
        (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
        *(_QWORD *)OutputBufferLength);
      return (__int64)v3;
    }
    v12 = (struct _FILE_OBJECT *)v51;
    if ( !v51 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
    v13 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
    ObfReferenceObject(v13);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v14 = IoBuildDeviceIoControlRequest(0xB01A8u, v13, 0LL, 0, &OutputBuffer, 0xCu, 0, &Event, &IoStatusBlock);
    if ( !v14 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0xCu,
        (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
LABEL_77:
      ObfDereferenceObject(v12);
      ZwClose(Handle);
      if ( !v13 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39);
      ObfDereferenceObject(v13);
      return (__int64)v3;
    }
    v14->Tail.Overlay.CurrentStackLocation[-1].FileObject = v12;
    Status = IofCallDriver(v13, v14);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status )
    {
      OutputBufferLengtha[0] = Status;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0xDu,
        (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
        *(_QWORD *)OutputBufferLengtha);
      goto LABEL_77;
    }
    v16 = (void *)Win32AllocPoolNonPaged(OutputBuffer, 0x70707352u);
    if ( !v16 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0xEu,
        (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
      goto LABEL_77;
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v17 = IoBuildDeviceIoControlRequest(0xB0193u, v13, 0LL, 0, v16, OutputBuffer, 0, &Event, &IoStatusBlock);
    if ( !v17 )
    {
      v18 = 15;
LABEL_20:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        v18,
        (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
LABEL_72:
      Win32FreePool((__int64)v16);
      goto LABEL_77;
    }
    v17->Tail.Overlay.CurrentStackLocation[-1].FileObject = v12;
    v19 = IofCallDriver(v13, v17);
    if ( v19 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v19 = IoStatusBlock.Status;
    }
    if ( v19 )
    {
      OutputBufferLengthb[0] = v19;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x10u,
        (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
        *(_QWORD *)OutputBufferLengthb);
      goto LABEL_72;
    }
    Caps = RIMHidGetCaps(a1, v13, v16, v56);
    if ( Caps != 1114112 )
    {
      *(_DWORD *)InternalDeviceIoControl = Caps;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x11u,
        (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
        v13,
        *(_QWORD *)InternalDeviceIoControl);
      goto LABEL_72;
    }
    *(_DWORD *)InternalDeviceIoControl = LOWORD(v56[0]);
    OutputBufferLengthb[0] = WORD1(v56[0]);
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v21,
      0x14u,
      0x12u,
      (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
      *(_QWORD *)OutputBufferLengthb,
      *(_QWORD *)InternalDeviceIoControl);
    *(_DWORD *)InternalDeviceIoControlb = WORD4(v56[0]);
    OutputBufferLengthd[0] = WORD2(v56[0]);
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v22,
      0x14u,
      0x13u,
      (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
      *(_QWORD *)OutputBufferLengthd,
      *(_QWORD *)InternalDeviceIoControlb);
    if ( LODWORD(v56[0]) == 65774
      && (*(_QWORD *)(a1 + 624) || *(_DWORD *)(a1 + 848))
      && !(unsigned __int8)RtlIsMultiSessionSku() )
    {
      *(_DWORD *)(a2 + 184) |= 0x2000u;
    }
    DbgPrintRIM("Found (Usage: %x, UsagePage: %x)\n", LOWORD(v56[0]), WORD1(v56[0]));
    v23 = *(_DWORD *)(a1 + 80);
    if ( v23 )
    {
      v24 = 0LL;
      v25 = WORD1(v56[0]);
      v26 = v56[0];
      while ( *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4 * v24) != LODWORD(v56[0]) )
      {
        v27 = 1LL;
        v24 = (unsigned int)(v24 + 1);
        if ( (unsigned int)v24 >= v23 )
          goto LABEL_45;
      }
      *(_DWORD *)(a2 + 184) |= 0x4000u;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 848) )
      {
        RIMLockExclusive((__int64)&gObListLock);
        v55[0] = v56[0];
        v55[1] = v56[1];
        v55[2] = v56[2];
        v55[3] = v56[3];
        v29 = (unsigned int)rimAnySecondaryRimUsagesMatchingUsages(v55, v28) == 0;
        v30 = *(_DWORD *)(a2 + 184);
        if ( !v29 || (v30 & 0x2000) != 0 )
        {
          *(_DWORD *)(a2 + 200) |= 0x40u;
          *(_DWORD *)(a2 + 184) = v30 | 0xC000;
        }
        qword_1C01A1640 = 0LL;
        ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
        KeLeaveCriticalRegion();
      }
      v26 = v56[0];
      v25 = WORD1(v56[0]);
    }
    v27 = 1LL;
LABEL_45:
    v31 = *(_DWORD *)(a2 + 184);
    if ( (v31 & 0x4000) == 0 && (v31 & 0x2000) == 0 && v25 == 1 )
    {
      if ( v26 && (v26 <= 2u || v26 > 5u && (v26 <= 7u || v26 == 128)) )
      {
        *(_DWORD *)InternalDeviceIoControla = v26;
        v32 = 20;
        OutputBufferLengthc[0] = 1;
        v33 = 20;
LABEL_71:
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v27,
          v33,
          v32,
          (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
          *(_QWORD *)OutputBufferLengthc,
          *(_QWORD *)InternalDeviceIoControla);
        goto LABEL_72;
      }
LABEL_62:
      v34 = 14;
      if ( v26 == 14 && (*(_DWORD *)(a1 + 76) & 0x10) == 0 )
      {
        v32 = 24;
        goto LABEL_58;
      }
      goto LABEL_65;
    }
    v27 = 13LL;
    if ( v25 == 13 )
    {
      v34 = 14;
      if ( v26 == 14 )
      {
        if ( (*(_DWORD *)(a1 + 76) & 0x18) != 0 )
        {
          v3 = RIMAllocateHidConfigDesc(a1, a2, (__int64)v16, (unsigned __int16 *)v56, (__int64)&OutputBuffer);
          if ( v3 )
            goto LABEL_82;
          v34 = LOWORD(v56[0]);
          v32 = 22;
          v27 = WORD1(v56[0]);
        }
        else
        {
          v32 = 23;
        }
LABEL_58:
        *(_DWORD *)InternalDeviceIoControla = v34;
        OutputBufferLengthc[0] = v27;
LABEL_70:
        v33 = 19;
        goto LABEL_71;
      }
    }
    else
    {
      v27 = 1LL;
      if ( v25 == 1 )
        goto LABEL_62;
    }
LABEL_65:
    if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v25, v26, v58) && (*(_DWORD *)(a1 + 76) & 4) == 0 )
    {
      v18 = 25;
      goto LABEL_20;
    }
    v3 = RIMAllocateHidDesc(
           a1,
           a2,
           (struct _HIDP_PREPARSED_DATA *)v16,
           (unsigned __int16 *)v56,
           (__int64)&OutputBuffer,
           (__int64)v13,
           (__int64)v12);
    if ( !v3 )
    {
      v32 = 26;
      *(_DWORD *)InternalDeviceIoControla = LOWORD(v56[0]);
      OutputBufferLengthc[0] = WORD1(v56[0]);
      goto LABEL_70;
    }
    v35 = RIMSearchHidTLCInfo(WORD1(v56[0]), LOWORD(v56[0]));
    v37 = v35;
    if ( v35 )
    {
      WPP_RECORDER_SF_DDq(
        WPP_GLOBAL_Control->DeviceExtension,
        WORD1(v56[0]),
        v36,
        27,
        (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
        SBYTE2(v56[0]),
        v56[0],
        v35);
    }
    else
    {
      v37 = RIMAllocateAndLinkHidTLCInfo(WORD1(v56[0]), LOWORD(v56[0]));
      if ( !v37 )
      {
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0x1Cu,
          (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
          a1);
        RIMFreeHidDesc(v3);
        v3 = 0LL;
        goto LABEL_77;
      }
      LOBYTE(v38) = 3;
      WPP_RECORDER_SF_qDD(
        WPP_GLOBAL_Control->DeviceExtension,
        v38,
        20,
        29,
        (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
        v37,
        SBYTE2(v56[0]),
        v56[0]);
    }
    ++*(_DWORD *)(v37 + 20);
    *(_QWORD *)(a2 + 472) = v37;
LABEL_82:
    ObfDereferenceObject(v13);
    ObfDereferenceObject(v12);
    ZwClose(Handle);
    return (__int64)v3;
  }
  if ( *(_QWORD *)a3 && (int)rimHidP_GetCollectionDescription(*(_QWORD *)a3, *(unsigned int *)(a3 + 8), v8, a3 + 16) < 0 )
    return 0LL;
  else
    return RIMIDECreateHIDDesc(a1, a2, a3);
}
