/*
 * XREFs of LdrGetDllFullName @ 0x18003F4B0
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x18010FE08 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     RtlCopyUnicodeString @ 0x1800411E0 (RtlCopyUnicodeString.c)
 *     LdrpFindLoadedDllByHandle @ 0x180042010 (LdrpFindLoadedDllByHandle.c)
 */

NTSTATUS __cdecl LdrGetDllFullName(PVOID DllHandle, PUNICODE_STRING FullDllName)
{
  NTSTATUS v2; // esi
  NTSTATUS LoadedDllByHandle; // eax
  char *v5; // rbx
  const UNICODE_STRING *v6; // rdi
  void *SubSystemTib; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  BaseAddress = 0LL;
  if ( DllHandle )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(DllHandle, &BaseAddress, &v9);
    v5 = (char *)BaseAddress;
    v2 = LoadedDllByHandle;
    if ( !BaseAddress )
      return v2;
    v6 = (const UNICODE_STRING *)((char *)BaseAddress + 72);
  }
  else
  {
    BaseAddress = (PVOID)LdrpImageEntry;
    v6 = (const UNICODE_STRING *)(LdrpImageEntry + 72);
    v5 = (char *)LdrpImageEntry;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && *((_QWORD *)SubSystemTib + 1) )
      v6 = (const UNICODE_STRING *)*((_QWORD *)SubSystemTib + 1);
  }
  if ( v5 )
  {
    RtlCopyUnicodeString(FullDllName, v6);
    if ( v6->Length > FullDllName->MaximumLength )
      v2 = -1073741789;
    if ( v5 != (char *)LdrpImageEntry )
      LdrpDereferenceModule(v5);
  }
  return v2;
}
