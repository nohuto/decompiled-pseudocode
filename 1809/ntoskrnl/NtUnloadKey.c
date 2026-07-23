/*
 * XREFs of NtUnloadKey @ 0x140703AF0
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmUnloadKey @ 0x140692FD8 (CmUnloadKey.c)
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
