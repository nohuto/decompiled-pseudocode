/*
 * XREFs of DpiAcpiRegisterAcpiCallbacks @ 0x1C015DE50
 * Callers:
 *     DpiAddDevice @ 0x1C0149BF0 (DpiAddDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAcpiRegisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  char v4; // si
  char v5; // r15
  char v6; // bp
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  NTSTATUS v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-48h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v3) = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  AcquireMiniportListMutex();
  if ( !dword_1C008E8D0 )
  {
    if ( g_pDeviceObject )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 80;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
      v3 = v8;
      if ( v8 < 0 )
      {
LABEL_13:
        v18 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v18 + 24) = v3;
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
        v11 = WdLogNewEntry5_WdEvent(v7, v10);
        *(_QWORD *)(v11 + 24) = CallbackRegistration;
        WdLogEvent5_WdEvent(v11);
        v12 = IoRegisterPlugPlayNotification(
                EventCategoryHardwareProfileChange,
                0,
                0LL,
                g_pDriverObject,
                DpiAcpiDockEventCallback,
                g_pDeviceObject,
                &NotificationEntry);
        v3 = v12;
        if ( v12 >= 0 )
          goto LABEL_6;
        goto LABEL_13;
      }
      LODWORD(v3) = -1073741823;
    }
    v18 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v18 + 24) = -1073741823LL;
LABEL_14:
    WdLogEvent5_WdError(v18);
    goto LABEL_9;
  }
LABEL_6:
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v1 + 928))(*(_QWORD *)(v1 + 864), DpiAcpiEventCallback, a1);
  v3 = v13;
  if ( v13 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v19 + 24) = *(_QWORD *)(v1 + 928);
    *(_QWORD *)(v19 + 32) = v3;
    WdLogEvent5_WdError(v19);
  }
  else
  {
    v5 = 1;
    v16 = WdLogNewEntry5_WdEvent(v15, v14);
    *(_QWORD *)(v16 + 24) = v3;
    WdLogEvent5_WdEvent(v16);
    *(_BYTE *)(v1 + 1150) = 1;
    ++dword_1C008E8D0;
  }
  v6 = v4;
LABEL_9:
  _InterlockedExchange64(&qword_1C008E788, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( (int)v3 < 0 )
  {
    *(_BYTE *)(v1 + 1150) = 0;
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
