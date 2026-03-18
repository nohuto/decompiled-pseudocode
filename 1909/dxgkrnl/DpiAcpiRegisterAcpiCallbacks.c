/*
 * XREFs of DpiAcpiRegisterAcpiCallbacks @ 0x1C0182588
 * Callers:
 *     DpiAddDevice @ 0x1C0165580 (DpiAddDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00194A0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DpiAcpiRegisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  char v4; // si
  char v5; // r12
  char v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  NTSTATUS v15; // eax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+B0h] [rbp+30h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v3) = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  AcquireMiniportListMutex();
  if ( !dword_1C00A28D0 )
  {
    memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    if ( g_pDeviceObject )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 80;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v10 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
      v3 = v10;
      if ( v10 < 0 )
      {
LABEL_13:
        v22 = WdLogNewEntry5_WdError(v12, v11, v13);
        *(_QWORD *)(v22 + 24) = v3;
        goto LABEL_14;
      }
      CallbackRegistration = ExRegisterCallback(
                               CallbackObject,
                               (PCALLBACK_FUNCTION)DpiAcpiPowerStateCallback,
                               g_pDeviceObject);
      ObfDereferenceObject(CallbackObject);
      if ( CallbackRegistration )
      {
        v4 = 1;
        v14 = WdLogNewEntry5_WdEvent(v8);
        *(_QWORD *)(v14 + 24) = CallbackRegistration;
        WdLogEvent5_WdEvent(v14);
        v15 = IoRegisterPlugPlayNotification(
                EventCategoryHardwareProfileChange,
                0,
                0LL,
                g_pDriverObject,
                DpiAcpiDockEventCallback,
                g_pDeviceObject,
                &NotificationEntry);
        v3 = v15;
        if ( v15 >= 0 )
          goto LABEL_6;
        goto LABEL_13;
      }
      LODWORD(v3) = -1073741823;
    }
    v22 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v22 + 24) = -1073741823LL;
LABEL_14:
    WdLogEvent5_WdError(v22);
    goto LABEL_9;
  }
LABEL_6:
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v1 + 928))(*(_QWORD *)(v1 + 864), DpiAcpiEventCallback, a1);
  v3 = v16;
  if ( v16 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v18, v17, v19);
    *(_QWORD *)(v23 + 24) = *(_QWORD *)(v1 + 928);
    *(_QWORD *)(v23 + 32) = v3;
    WdLogEvent5_WdError(v23);
  }
  else
  {
    v5 = 1;
    v20 = WdLogNewEntry5_WdEvent(v18);
    *(_QWORD *)(v20 + 24) = v3;
    WdLogEvent5_WdEvent(v20);
    *(_BYTE *)(v1 + 1158) = 1;
    ++dword_1C00A28D0;
  }
  v6 = v4;
LABEL_9:
  _InterlockedExchange64(&qword_1C00A2788, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( (int)v3 < 0 )
  {
    *(_BYTE *)(v1 + 1158) = 0;
    if ( v6 == 1 )
    {
      IoUnregisterPlugPlayNotification(NotificationEntry);
      NotificationEntry = 0LL;
    }
    if ( v4 == 1 )
    {
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
    if ( v5 == 1 )
      (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PVOID, unsigned int, const GUID *)))(v1 + 936))(
        *(_QWORD *)(v1 + 864),
        DpiAcpiEventCallback);
  }
  return (unsigned int)v3;
}
