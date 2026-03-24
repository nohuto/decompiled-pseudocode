/*
 * XREFs of NtUnloadKey2 @ 0x14071F1F0
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B2F3C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B2F7C (CmpInitializeThreadInfo.c)
 *     CmUnloadKey @ 0x140691E18 (CmUnloadKey.c)
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
