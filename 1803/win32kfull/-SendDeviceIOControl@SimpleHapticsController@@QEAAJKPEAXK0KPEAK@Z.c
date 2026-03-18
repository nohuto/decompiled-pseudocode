/*
 * XREFs of ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C02150F4
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02117DC (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C02121F8 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C02147DC (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 *     ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1C0214C6C (-IntializePreparssedData@SimpleHapticsController@@IEAAJXZ.c)
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1C0215688 (-SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z.c)
 *     ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAVInteractiveControlDevice@@@Z @ 0x1C0215DC0 (-BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAVInteracti.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  char v13; // si
  char v14; // di
  unsigned int Status; // ebx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v17; // rbx
  PIRP v18; // rax
  ULONG InputBufferLength; // [rsp+50h] [rbp-91h] BYREF
  ULONG v21; // [rsp+54h] [rbp-8Dh] BYREF
  ULONG OutputBufferLength; // [rsp+58h] [rbp-89h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-81h] BYREF
  PVOID InputBuffer; // [rsp+70h] [rbp-71h]
  struct _KEVENT Event; // [rsp+78h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-51h] BYREF
  const char *v27; // [rsp+B0h] [rbp-31h]
  __int64 v28; // [rsp+B8h] [rbp-29h]
  ULONG *p_InputBufferLength; // [rsp+C0h] [rbp-21h]
  __int64 v30; // [rsp+C8h] [rbp-19h]

  OutputBufferLength = a6;
  InputBufferLength = a4;
  InputBuffer = a3;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) )
  {
    v13 = 1;
LABEL_3:
    v14 = 1;
    UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
    goto LABEL_4;
  }
  v13 = 0;
  if ( ExIsResourceAcquiredSharedLite(gpresUser) )
    goto LABEL_3;
  v14 = 0;
LABEL_4:
  if ( !*((_QWORD *)this + 7) )
  {
    Status = -1073741436;
LABEL_18:
    if ( (unsigned int)dword_1C031C790 > 2 )
    {
      p_InputBufferLength = &InputBufferLength;
      v27 = "SimpleHapticsController::SendDeviceIOControl failed.";
      v28 = 53LL;
      InputBufferLength = Status;
      v30 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E4170, v11, v12, 4u, &pData);
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::SendDeviceIOControl",
      "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      424,
      Status,
      "SimpleHapticsController::SendDeviceIOControl failed.");
    goto LABEL_21;
  }
  if ( (unsigned int)dword_1C031C790 > 4 )
  {
    v28 = 51LL;
    v27 = "SimpleHapticsController::SendDeviceIOControl entry";
    p_InputBufferLength = &v21;
    v21 = a2;
    v30 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C790, &unk_1C02E41A7, v11, v12, 4u, &pData);
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(*((PFILE_OBJECT *)this + 7));
  v17 = RelatedDeviceObject;
  if ( !RelatedDeviceObject
    || (v18 = IoBuildDeviceIoControlRequest(
                a2,
                RelatedDeviceObject,
                InputBuffer,
                InputBufferLength,
                OutputBuffer,
                OutputBufferLength,
                0,
                &Event,
                &IoStatusBlock)) == 0LL )
  {
    Status = -1073741823;
    goto LABEL_18;
  }
  v18->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*((_QWORD *)this + 7);
  if ( IofCallDriver(v17, v18) == 259 )
  {
    if ( OutputBuffer )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( a7 )
        *a7 = IoStatusBlock.Information;
    }
  }
  Status = IoStatusBlock.Status;
  if ( IoStatusBlock.Status < 0 )
    goto LABEL_18;
LABEL_21:
  if ( v14 )
  {
    if ( v13 )
      EnterCrit(0LL, 1LL);
    else
      EnterSharedCrit(0LL, 1LL);
  }
  return Status;
}
