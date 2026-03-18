/*
 * XREFs of NtUnloadKeyEx @ 0x140691CF0
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B2F1C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B2F5C (CmpInitializeThreadInfo.c)
 *     CmUnloadKey @ 0x140691E38 (CmUnloadKey.c)
 */

NTSTATUS __stdcall NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  __int64 v2; // r8
  __int64 v3; // r10
  NTSTATUS v4; // r8d
  PVOID v6[3]; // [rsp+20h] [rbp-18h] BYREF

  CmpInitializeThreadInfo(v6);
  LOBYTE(v2) = 1;
  CmUnloadKey(v3, 0LL, v2);
  CmCleanupThreadInfo(v6);
  return v4;
}
