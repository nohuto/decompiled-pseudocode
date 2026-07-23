/*
 * XREFs of NtCreateKey @ 0x1405B69F0
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmCreateKey @ 0x1405B6A60 (CmCreateKey.c)
 */

NTSTATUS __stdcall NtCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  unsigned int v7; // r10d
  __int64 v8; // r9
  __int64 v9; // r11
  NTSTATUS v10; // r8d
  PVOID v12[3]; // [rsp+40h] [rbp-18h] BYREF

  CmpInitializeThreadInfo(v12);
  CmCreateKey(v9, v7, v8);
  CmCleanupThreadInfo(v12);
  return v10;
}
