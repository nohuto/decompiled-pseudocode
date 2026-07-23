/*
 * XREFs of LdrGetDllFullName @ 0x180013620
 * Callers:
 *     sub_18010E004 @ 0x18010E004 (sub_18010E004.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1800150A0 (RtlCopyUnicodeString.c)
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 */

NTSTATUS __cdecl LdrGetDllFullName(PVOID DllHandle, PUNICODE_STRING FullDllName)
{
  NTSTATUS v2; // esi
  NTSTATUS v4; // eax
  PVOID v5; // rbx
  const UNICODE_STRING *v6; // rdi
  PVOID SubSystemTib; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  BaseAddress = 0LL;
  if ( DllHandle )
  {
    v4 = sub_18001869C(DllHandle, &BaseAddress, &v9);
    v5 = BaseAddress;
    v2 = v4;
    if ( !BaseAddress )
      return v2;
    v6 = (const UNICODE_STRING *)((char *)BaseAddress + 72);
  }
  else
  {
    BaseAddress = (PVOID)qword_180164FC8;
    v6 = (const UNICODE_STRING *)(qword_180164FC8 + 72);
    v5 = (PVOID)qword_180164FC8;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && *((_QWORD *)SubSystemTib + 1) )
      v6 = (const UNICODE_STRING *)*((_QWORD *)SubSystemTib + 1);
  }
  if ( v5 )
  {
    RtlCopyUnicodeString(FullDllName, v6);
    if ( v6->Length > FullDllName->MaximumLength )
      v2 = -1073741789;
    if ( v5 != (PVOID)qword_180164FC8 )
      sub_18001B678(v5);
  }
  return v2;
}
