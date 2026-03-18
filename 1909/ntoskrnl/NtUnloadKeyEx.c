/*
 * XREFs of NtUnloadKeyEx @ 0x1406B8BA0
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x1406B8CA4 (CmUnloadKey.c)
 */

NTSTATUS __stdcall NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  char v2; // r8

  v2 = 1;
  return CmUnloadKey(TargetKey, 0LL, v2, Event);
}
