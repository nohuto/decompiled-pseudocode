/*
 * XREFs of DpiGdoDestroyGdiObjects @ 0x1C02B06D4
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0163120 (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C029F410 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     DpiAppendNumberToString @ 0x1C015FAFC (DpiAppendNumberToString.c)
 */

__int64 __fastcall DpiGdoDestroyGdiObjects(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  KeWaitForSingleObject((PVOID)(v1 + 3584), Executive, 0, 0, 0LL);
  v2 = (_QWORD *)(v1 + 3568);
  while ( 1 )
  {
    v3 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    *(_QWORD *)&UnicodeString.Length = 0LL;
    UnicodeString.Buffer = 0LL;
    *(_QWORD *)&SymbolicLinkName.Length = 0LL;
    SymbolicLinkName.Buffer = 0LL;
    v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v3 + 2, v3, File, 1u, 0x20u);
    v7 = v4;
    if ( v4 < 0 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5);
      v10[3] = 275LL;
      v10[4] = 21LL;
      v10[5] = v7;
      WdLogEvent5_WdCriticalError(v10);
      goto LABEL_14;
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)v3 + 10, 0);
    v8 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v9 = (_QWORD *)v3[1], (_QWORD *)*v9 != v3) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    --*(_DWORD *)(v1 + 3640);
    KeReleaseMutex((PRKMUTEX)(v1 + 3584), 0);
    ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
    IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v3 + 2, v3, 0x20u);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 168), 1u);
    KeWaitForSingleObject((PVOID)(v1 + 3584), Executive, 0, 0, 0LL);
    if ( (int)DpiAppendNumberToString(L"\\Device\\Video", *((_DWORD *)v3 + 38), &UnicodeString) >= 0 )
    {
      RtlDeleteRegistryValue(4u, L"VIDEO", UnicodeString.Buffer);
      RtlFreeUnicodeString(&UnicodeString);
    }
    if ( (int)DpiAppendNumberToString(L"\\DosDevices\\DISPLAY", *((_DWORD *)v3 + 38) + 1, &SymbolicLinkName) >= 0 )
    {
      IoDeleteSymbolicLink(&SymbolicLinkName);
      RtlFreeUnicodeString(&SymbolicLinkName);
    }
    DMgrReleaseGdiViewId(*((unsigned int *)v3 + 38), 0LL);
    RtlFreeUnicodeString((PUNICODE_STRING)v3 + 10);
    IoDeleteDevice((PDEVICE_OBJECT)v3[3]);
  }
  LODWORD(v7) = 0;
LABEL_14:
  KeReleaseMutex((PRKMUTEX)(v1 + 3584), 0);
  return (unsigned int)v7;
}
