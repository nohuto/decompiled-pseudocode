/*
 * XREFs of NtOpenKey @ 0x1405E14C0
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x1409D6738 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x1409DF514 (IopProtectSystemPartition.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmOpenKey @ 0x1405E1EA0 (CmOpenKey.c)
 */

NTSTATUS __stdcall NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // ebx
  int v4; // r10d
  int v5; // r11d
  NTSTATUS v6; // r8d
  PVOID v8[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = (int)KeyHandle;
  CmpInitializeThreadInfo(v8);
  CmOpenKey(v3, v5, v4, 0, 0LL);
  CmCleanupThreadInfo(v8);
  return v6;
}
