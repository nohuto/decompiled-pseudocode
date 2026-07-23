/*
 * XREFs of NtUnloadKey2 @ 0x140720490
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmUnloadKey @ 0x140692FD8 (CmUnloadKey.c)
 */

NTSTATUS __stdcall NtUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  unsigned int v2; // r10d
  __int64 v3; // r11
  NTSTATUS v4; // r8d
  PVOID v6[3]; // [rsp+20h] [rbp-18h] BYREF

  CmpInitializeThreadInfo(v6);
  CmUnloadKey(v3, v2, 0, 0LL);
  CmCleanupThreadInfo(v6);
  return v4;
}
