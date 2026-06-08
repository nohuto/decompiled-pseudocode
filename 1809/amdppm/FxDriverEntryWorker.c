/*
 * XREFs of FxDriverEntryWorker @ 0x1C00014A4
 * Callers:
 *     FxDriverEntry @ 0x1C0001470 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0001384 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C00015EC (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     DriverEntry @ 0x1C0032168 (DriverEntry.c)
 */

NTSTATUS __fastcall FxDriverEntryWorker(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  struct _WDF_BIND_INFO *v5; // rcx
  NTSTATUS v6; // ebx
  char *i; // rbx
  __int64 (*v8)(void); // rax
  __int64 (*DriverUnload)(void); // rax

  if ( !DriverObject )
    return DriverEntry(0LL, RegistryPath);
  *(_DWORD *)&DestinationString.Length = 34078720;
  DestinationString.Buffer = (wchar_t *)&unk_1C00111B0;
  RtlCopyUnicodeString(&DestinationString, RegistryPath);
  result = WdfVersionBind(DriverObject, &DestinationString, &WdfBindInfo, &WdfDriverGlobals);
  if ( result >= 0 )
  {
    v6 = FxStubBindClasses(v5);
    if ( v6 < 0 )
    {
LABEL_7:
      FxStubDriverUnloadCommon();
      return v6;
    }
    if ( &__KMDF_TYPE_INIT_START > (_UNKNOWN *)__KMDF_TYPE_INIT_END )
    {
      v6 = -1073741701;
      goto LABEL_7;
    }
    for ( i = __KMDF_TYPE_INIT_END; i < __KMDF_TYPE_INIT_END; i += 40 )
    {
      if ( *(_DWORD *)i != 40 )
      {
        v6 = -1073741820;
        goto LABEL_7;
      }
      v8 = (__int64 (*)(void))*((_QWORD *)i + 4);
      if ( v8 )
        *((_QWORD *)i + 3) = v8();
    }
    v6 = DriverEntry(DriverObject, RegistryPath);
    if ( v6 < 0 )
      goto LABEL_7;
    if ( WdfDriverGlobals->DisplaceDriverUnload )
    {
      DriverUnload = qword_1C00113B8;
      if ( DriverObject->DriverUnload )
        DriverUnload = (__int64 (*)(void))DriverObject->DriverUnload;
      qword_1C00113B8 = DriverUnload;
      DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
    }
    return 0;
  }
  return result;
}
