/*
 * XREFs of NtUnloadKey @ 0x140702870
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B2F1C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B2F5C (CmpInitializeThreadInfo.c)
 *     CmUnloadKey @ 0x140691E38 (CmUnloadKey.c)
 */

NTSTATUS __stdcall NtUnloadKey(POBJECT_ATTRIBUTES KeyObjectAttributes)
{
  __int64 v1; // r10
  NTSTATUS v2; // r8d
  PVOID v4[3]; // [rsp+20h] [rbp-18h] BYREF

  CmpInitializeThreadInfo(v4);
  CmUnloadKey(v1, 0, 0, 0LL);
  CmCleanupThreadInfo(v4);
  return v2;
}
