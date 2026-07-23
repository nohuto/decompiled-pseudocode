/*
 * XREFs of NtOpenKeyEx @ 0x1405E1E50
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmOpenKey @ 0x1405E1EA0 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  int v4; // ebx
  int v5; // r9d
  int v6; // r10d
  int v7; // r11d
  NTSTATUS v8; // r8d
  PVOID v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (int)KeyHandle;
  CmpInitializeThreadInfo(v10);
  CmOpenKey(v4, v7, v6, v5, 0LL);
  CmCleanupThreadInfo(v10);
  return v8;
}
