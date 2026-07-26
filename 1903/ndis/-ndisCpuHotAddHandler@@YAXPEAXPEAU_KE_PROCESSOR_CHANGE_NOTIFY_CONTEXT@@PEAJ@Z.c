/*
 * XREFs of ?ndisCpuHotAddHandler@@YAXPEAXPEAU_KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT@@PEAJ@Z @ 0x1C007BCB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00693E4 (WPP_RECORDER_SF_DD_ea_1C00693E4.c)
 *     ndisDmaAddCpuNotify @ 0x1C0078F80 (ndisDmaAddCpuNotify.c)
 *     ?ndisPeriodicReceivesAddCpu@@YAXK@Z @ 0x1C007C8EC (-ndisPeriodicReceivesAddCpu@@YAXK@Z.c)
 */

void __fastcall ndisCpuHotAddHandler(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        unsigned int *OperationStatus)
{
  PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT v4; // rdi
  unsigned int v5; // r8d
  int v6; // eax
  int v7; // edx
  NTSTATUS v8; // edi

  v4 = ChangeContext;
  if ( ChangeContext->State )
  {
    if ( ChangeContext->State == KeProcessorAddCompleteNotify )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(ChangeContext) = 4;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)ChangeContext,
          1,
          19,
          (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
          *OperationStatus);
      }
      ndisPeriodicReceivesAddCpu((void *)v4->NtNumber);
      v5 = 0;
    }
    else
    {
      if ( ChangeContext->State != KeProcessorAddFailureNotify )
        return;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(ChangeContext) = 4;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)ChangeContext,
          1,
          20,
          (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
          *OperationStatus);
      }
      v5 = -1073741823;
    }
    ndisDmaAddCpuNotify(0, v4->NtNumber, v5);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x11u,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
        *OperationStatus,
        ChangeContext->NtNumber);
    v6 = ndisDmaAddCpuNotify(1, v4->NtNumber, *OperationStatus);
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          1,
          18,
          (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
          v6);
      }
      *OperationStatus = v8;
    }
  }
}
