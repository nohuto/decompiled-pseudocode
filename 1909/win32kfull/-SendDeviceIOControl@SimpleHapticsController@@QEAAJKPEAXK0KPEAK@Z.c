/*
 * XREFs of ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C0257148
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0253484 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0253F50 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C025679C (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 *     ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1C0256C74 (-IntializePreparssedData@SimpleHapticsController@@IEAAJXZ.c)
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1C0257720 (-SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z.c)
 *     ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAVInteractiveControlDevice@@@Z @ 0x1C0257ECC (-BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAVInteracti.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1C0255C44 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall SimpleHapticsController::SendDeviceIOControl(
        SimpleHapticsController *this,
        ULONG a2,
        void *a3,
        ULONG a4,
        PVOID OutputBuffer,
        ULONG a6,
        unsigned int *a7)
{
  struct _FILE_OBJECT *v8; // rdi
  NTSTATUS Status; // ebx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v13; // rbx
  PIRP v14; // rax
  IRP *v15; // rsi
  NTSTATUS v16; // ebx
  ULONG v18; // [rsp+50h] [rbp-81h] BYREF
  ULONG OutputBufferLength; // [rsp+54h] [rbp-7Dh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-79h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-51h] BYREF
  const char *v23; // [rsp+A0h] [rbp-31h]
  int v24; // [rsp+A8h] [rbp-29h]
  int v25; // [rsp+ACh] [rbp-25h]
  ULONG *p_OutputBufferLength; // [rsp+B0h] [rbp-21h]
  int v27; // [rsp+B8h] [rbp-19h]
  int v28; // [rsp+BCh] [rbp-15h]

  v8 = (struct _FILE_OBJECT *)*((_QWORD *)this + 7);
  OutputBufferLength = a6;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( !v8 )
  {
    Status = -1073741436;
LABEL_17:
    if ( (unsigned int)dword_1C031F2D0 > 2 )
    {
      v25 = 0;
      v28 = 0;
      p_OutputBufferLength = &OutputBufferLength;
      v27 = 4;
      v23 = "SimpleHapticsController::SendDeviceIOControl failed.";
      v24 = 53;
      OutputBufferLength = Status;
      TlgWrite((TraceLoggingHProvider)&dword_1C031F2D0, &unk_1C02E8D9E, 0LL, 0LL, 4u, &pData);
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::SendDeviceIOControl",
      "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      446,
      Status,
      "SimpleHapticsController::SendDeviceIOControl failed.");
    return (unsigned int)Status;
  }
  ObfReferenceObject(v8);
  if ( (unsigned int)dword_1C031F2D0 > 4 )
  {
    v25 = 0;
    v28 = 0;
    v23 = "SimpleHapticsController::SendDeviceIOControl entry";
    p_OutputBufferLength = &v18;
    v24 = 51;
    v18 = a2;
    v27 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F2D0, &unk_1C02E8E7E, 0LL, 0LL, 4u, &pData);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v8);
  v13 = RelatedDeviceObject;
  if ( !RelatedDeviceObject
    || (v14 = IoBuildDeviceIoControlRequest(
                a2,
                RelatedDeviceObject,
                a3,
                a4,
                OutputBuffer,
                OutputBufferLength,
                0,
                &Event,
                &IoStatusBlock),
        (v15 = v14) == 0LL) )
  {
    Status = -1073741823;
    goto LABEL_17;
  }
  v14->Tail.Overlay.CurrentStackLocation[-1].FileObject = v8;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v18);
  v16 = IofCallDriver(v13, v15);
  if ( BYTE1(v18) )
  {
    if ( (_BYTE)v18 )
      EnterCrit(0LL, 1LL);
    else
      EnterSharedCrit(0LL, 1LL);
  }
  if ( v16 == 259 )
  {
    if ( OutputBuffer )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( a7 )
        *a7 = IoStatusBlock.Information;
    }
  }
  Status = IoStatusBlock.Status;
  ObfDereferenceObject(v8);
  if ( Status < 0 )
    goto LABEL_17;
  return (unsigned int)Status;
}
