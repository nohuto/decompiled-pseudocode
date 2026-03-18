/*
 * XREFs of NtUnloadKeyEx @ 0x14069A5C0
 * Callers:
 *     <none>
 * Callees:
 *     CmUnloadKey @ 0x14069A6C4 (CmUnloadKey.c)
 */

NTSTATUS __stdcall NtUnloadKeyEx(POBJECT_ATTRIBUTES TargetKey, HANDLE Event)
{
  char v2; // r8

  v2 = 1;
  return CmUnloadKey(TargetKey, 0LL, v2, Event);
}
